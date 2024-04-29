#include <iostream>
#include <Windows.h>

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int main() {
	cout << "Selling puppies.\n" << "Breed: Rottweiler\n" << "......" << endl;
	cout << "Phone: 222-22-22" << endl;
	cout << "222      |   ";
	SetConsoleTextAttribute(hConsole, 14);
	cout << "222";
	SetConsoleTextAttribute(hConsole, 15);
	cout << "   |" << endl;
	cout << "22       |   ";
	SetConsoleTextAttribute(hConsole, 14);
	cout << "22";
	SetConsoleTextAttribute(hConsole, 15);
	cout << "    |" << endl;
	cout << "22       |   ";
	SetConsoleTextAttribute(hConsole, 14);
	cout << "22";
	SetConsoleTextAttribute(hConsole, 15);
	cout << "    |" << endl;
	cout << "etc." << endl;
}