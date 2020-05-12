#include <cstdlib>
#include <iostream>

/*
TP_WWW_PROJECT_DIR
This should be set by the build system in run_server.pro


TP_WWW_BUILD_DIR
This should be set by the build system in run_server.pro
*/

//##################################################################################################
int main()
{
#ifdef TP_LINUX
  std::cout << TP_WWW_PROJECT_DIR << std::endl;
  std::cout << TP_WWW_BUILD_DIR << std::endl;

  auto run = [](const std::string& command)
  {
    if(std::system(command.c_str()))
      std::cerr << "Non zero returned from: " << command << std::endl;
  };

  run("pwd");
  run("cp -u " TP_WWW_PROJECT_DIR "/tp_build_www/nginx_local/* " TP_WWW_BUILD_DIR);
  run("rm -f " TP_WWW_BUILD_DIR "/log/http.error.log");
  run("cd "  TP_WWW_BUILD_DIR  "; ./run_server.sh");
  run("tail -f " TP_WWW_BUILD_DIR "/log/http.error.log");
#else
  std::cerr << "This only works on Linux." << std::endl;
#endif
}
