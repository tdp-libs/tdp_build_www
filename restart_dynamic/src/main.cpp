#include <cstdlib>
#include <iostream>

/*
TDP_WWW_APP_BINARY
This should be defined in project.inc as follows:
DEFINES += TDP_WWW_APP_BINARY=\\\"your_binary_name\\\"


TDP_WWW_PROJECT_DIR
This should be set by the build system in restart_dynamic.pro


TDP_WWW_BUILD_DIR
This should be set by the build system in restart_dynamic.pro
*/

//##################################################################################################
int main()
{
  std::cout << TDP_WWW_APP_BINARY << std::endl;
  std::cout << TDP_WWW_PROJECT_DIR << std::endl;
  std::cout << TDP_WWW_BUILD_DIR << std::endl;

  std::system("cp -u " TDP_WWW_PROJECT_DIR "/tdp_build_www/nginx_local/* " TDP_WWW_BUILD_DIR);
  std::system("pwd");
  std::system(TDP_WWW_BUILD_DIR "/run_app.sh " TDP_WWW_BUILD_DIR " " TDP_WWW_APP_BINARY);
}
