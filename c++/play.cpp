#include <iostream>

namespace bruno
{
std::string name{"Bruno"};
}

struct Node {
  int data;
  Node* next;
};

typedef std::string str;

int main(void)
{
  std::cout << bruno::name << std::endl;
  std::cout << "hello world" << std::endl;
  std::string name{"Bruno Edoh"};
  std::cout << name[5] << std::endl;
  char my_name[] = "Bruno Edoh";
  // char* words = "sdrow";
  // std::cout << words << std::endl;
  std::cout << my_name << std::endl;

  long long *ptr = new (std::nothrow) long long[144333334411]; 
  if (ptr != nullptr)
  {
    std::cout << "successful" << std::endl;
    delete[] ptr;
  }
  else
    std::cout << "failed" << std::endl;


  Node* latest = new Node{.data = 33};
  std::cout << latest -> data << std::endl;
  str ok{"woww"};
  std::cout << ok << "\n";
}                     
   