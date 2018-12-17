#include <cstdlib>
#include <iostream>

/*
TDP_WWW_PROJECT_DIR
This should be set by the build system in restart_dynamic.pro


TDP_WWW_BUILD_DIR
This should be set by the build system in restart_dynamic.pro
*/

//##################################################################################################
int main()
{
  std::cout << TDP_WWW_PROJECT_DIR << std::endl;
  std::cout << TDP_WWW_BUILD_DIR << std::endl;

  std::system("pwd");
  std::system("cp -u " TDP_WWW_PROJECT_DIR "/tdp_build_www/nginx_local/* " TDP_WWW_BUILD_DIR);
  std::system("rm -f " TDP_WWW_BUILD_DIR "/log/http.error.log");
  std::system("cd "  TDP_WWW_BUILD_DIR  "; ./run_server.sh");
  std::system("tail -f " TDP_WWW_BUILD_DIR "/log/http.error.log");
}
