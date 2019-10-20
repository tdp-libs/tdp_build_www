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
  std::cout << TP_WWW_PROJECT_DIR << std::endl;
  std::cout << TP_WWW_BUILD_DIR << std::endl;

  std::system("pwd");
  std::system("cp -u " TP_WWW_PROJECT_DIR "/tp_build_www/nginx_local/* " TP_WWW_BUILD_DIR);
  std::system("rm -f " TP_WWW_BUILD_DIR "/log/http.error.log");
  std::system("cd "  TP_WWW_BUILD_DIR  "; ./run_server.sh");
  std::system("tail -f " TP_WWW_BUILD_DIR "/log/http.error.log");
}
