#include <iostream>
#include <string>

int main(){
	   std::cout << "Enter your name:" ;
	   std::string sName; //String is part of the standard library, it is NOT part of C++ core langauge
	   std::cin >> sName;

	   std::string sMessage = "Hello, " + sName + ". Nice to meet you.";
	   std::string sBlank( sMessage.size(), ' ' );
	   std::string sLine2( "|| " + sBlank + " ||");
	   std::string sLine1( sLine2.size(), '=' );

	   std::cout << std::endl;
	   std::cout << sLine1 << std::endl;
	   std::cout << sLine2 << std::endl;
	   std::cout << "|| " << sMessage << " ||" <<std::endl;
	   std::cout << sLine2 << std::endl;
	   std::cout << sLine1 << std::endl;
	   std::cout << std::endl;

	   return 0;
	   }
