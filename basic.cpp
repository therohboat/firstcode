//First thing written in Carlos' C++ tutorial 

#include <iostream> //Include libraries which include standard things like cout, endl (you can see std::endl or std::cout)

int main()
{
  int a=1;
  std::cout << "Please pick a number from: [0-10]" << std::endl;
  std::cin >> a;
  if(a>10||a<0){
    std::cout << "Follow instructions, yo" << std::endl;
  }else
    {
      std::cout << "thanks, yo" <<std::endl;
    }
  std::cout << "a=" << a << std::endl;
  return 0;
}
