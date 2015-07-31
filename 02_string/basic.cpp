#include <iostream>
#include <string>

int main(){
	   std::cout << "Enter your name:" ;
	   std::string sName; //String is part of the standard library, it is NOT part of C++ core langauge
	   std::cin >> sName;
	   std::cout << "Hello, " << sName << ". Nice to meet you." << std::endl;
	   return 0;
	   }
