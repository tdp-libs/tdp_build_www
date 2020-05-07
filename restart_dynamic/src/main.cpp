#include <cstdlib>
#include <iostream>

/*
TP_WWW_APP_BINARY
This should be defined in project.inc as follows:
DEFINES += TP_WWW_APP_BINARY=\\\"your_binary_name\\\"


TP_WWW_PROJECT_DIR
This should be set by the build system in restart_dynamic.pro


TP_WWW_BUILD_DIR
This should be set by the build system in restart_dynamic.pro
*/

//#################################################################################################
int main(int argc, char* argv[])
{
  std::cout << TP_WWW_APP_BINARY << std::endl;
  std::cout << TP_WWW_PROJECT_DIR << std::endl;
  std::cout << TP_WWW_BUILD_DIR << std::endl;

  auto run = [](const std::string& command)
  {
    if(std::system(command.c_str()))
      std::cerr << "Non zero returned from: " << command << std::endl;
  };

  std::string programArgs;
  for(int i=1; i<argc; i++)
    programArgs += " " + std::string(argv[i]);

  run("cp -u " TP_WWW_PROJECT_DIR "/tp_build_www/nginx_local/* " TP_WWW_BUILD_DIR);
  run("pwd");
  run(TP_WWW_BUILD_DIR "/run_app.sh " TP_WWW_BUILD_DIR " " TP_WWW_APP_BINARY + programArgs);
}
