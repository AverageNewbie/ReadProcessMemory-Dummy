#include <iostream>
#include <string>
#include <Windows.h>



void press_enter()
{
	std::cout << "Press Enter to print again ";
	std::string temp;
	std::getline(std::cin, temp);
}

int main() {

	int varInt = 123456;
	std::string varString = "DefaultString";
	char arrChar[128] = "'Long char array right there ->'";
	int *ptr2int;
	ptr2int = &varInt;

	int **ptr2ptr;
	ptr2ptr = &ptr2int;
		
	int ***ptr2ptr2;
	ptr2ptr2 = &ptr2ptr;

	bool toPrint = true;
	while (toPrint) {
		std::cout << "Process ID: " << GetCurrentProcessId() << " " << '\n';
		std::cout << '\n';
		std::cout << "varInt" << "				(0x" << &varInt << ") = " << varInt << '\n';
		std::cout << "varString" << "			(0x" << &varString << ") = " << varString << '\n';
		std::cout << "arrChar[128]" << "			(0x" << &arrChar << ") = " << arrChar << '\n';
		std::cout << '\n';
		std::cout << "ptr2int" << "				(0x" << &ptr2int << ") = " << ptr2int << '\n';
		std::cout << "ptr2ptr" << "				(0x" << &ptr2ptr << ") = " << ptr2ptr << '\n';
		std::cout << "ptr2ptr2" << "			(0x" << &ptr2ptr2 << ") = " << ptr2ptr2 << '\n';
		std::cout << '\n';
		press_enter();
		
		std::cout << "--------------------------------------------" << '\n';
		
	}

	return 0;


}