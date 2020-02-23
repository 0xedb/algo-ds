#include <iostream> 

namespace bruno
{
  std::string name{"Bruno"};
}

int main(void)
{
  std::cout << bruno::name << std::endl;
  std::cout << "hello world" << std::endl;
  std::string name{"Bruno Edoh"};
  std::cout << name[5] << std::endl;
  char my_name[] = "Bruno Edoh";
  char* words = "sdrow";
  std::cout << words << std::endl;
  std::cout << my_name << std::endl;
}