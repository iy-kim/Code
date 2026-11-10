#include <iostream>
#include "PPP_support.h"
#include "ErrorHandler.cpp"

int main()
{
	std::string first_name;
	int age;
	
	std::cout << "Enter the name of the person you want to write to (followed by \"enter\"):\n";
	std::cin >> first_name;
	std::cout << "Dear" << first_name << ",\n";
	
	std::cout << "How are you? I am fine. I miss you."<<"\n";
	std::cin >> first_name;
	std::cout << "Have you seen "<< first_name<<" lately?\n";

	std::cin >> age;
	
	if (age<0 || age>110)
		std::simple_error("you're kidding!");
	if (0<age<12)
		std::cout <<"Next year you will be " <<age+1<<".\n";
	if (age==19)
		std::cout <<"Next year you will be able to vote.";
	if (70<age<=110)
		std::cout <<"Are you retired?";
	if (age <= 0 || 110 <= age )
		simple_error("you're kidding!");
	else
		std::cout << "I hear you just had a birthday and you are "<<age<<" years old";
	std::cout << "\n\n" <<"Yours sincerely";
}

void simple_error(std::string s)
{
	std::cout << s <<"\n";
}
