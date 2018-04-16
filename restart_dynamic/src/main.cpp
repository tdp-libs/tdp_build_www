#include <cstdlib>
#include <iostream>

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
