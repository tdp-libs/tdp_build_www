#include <cstdlib>
#include <iostream>

//##################################################################################################
int main()
{
  std::cout << PROJECT_DIR << std::endl;
  std::cout << BUILD_DIR << std::endl;

  std::system("pwd");
  std::system("cp -u " PROJECT_DIR "/tdp_build_www/nginx_local/* " BUILD_DIR);
  std::system("rm -f " BUILD_DIR "/log/http.error.log");
  std::system("cd "  BUILD_DIR  "; ./run_server.sh");
  std::system("tail -f " BUILD_DIR "/log/http.error.log");
}
