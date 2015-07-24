//First thing written in Carlos' C++ tutorial 

#include <iostream> //Include libraries which include standard things like cout, endl (you can see std::endl or std::cout)

int main()
{
  int a=1;
  std::cout << "a=" << a << std::endl;
  if(a==1){
    a=2;
  }else
    {
      //This part never executes
    }
  std::cout << "a=" << a << std::endl;
  return 0;
}
