//First thing written in Carlos' C++ tutorial 

#include <iostream> //Include libraries which include standard things like cout, endl (you can see std::endl or std::cout)

using namespace std;

int main()
{
  int a=1;
  cout << "Please pick a number from: [0-10]" << endl;
  cin >> a;
  if(a>10||a<0){
    cout << "Follow instructions, yo" << endl;
  }else
    {
      cout << "thanks, yo" << endl;
    }
  cout << "a=" << a << endl;
  return 0;
}
