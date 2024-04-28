#include <iostream>
#include <Windows.h>

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int main() {
	cout << "To be, ";
	SetConsoleTextAttribute(hConsole, 13);
	cout << "or not ";
	SetConsoleTextAttribute(hConsole, 15);
	cout << "to be: that is the question:" << endl;

	cout << "Whether ";
	SetConsoleTextAttribute(hConsole, 14);
	cout << "'tis nobler in the mind to suffer" << endl << "The slings and arrows of outrageous fortune," << endl;
	cout << "Or to take arms against a sea of troubles," << endl << "And by opposing end them?" << endl;
	
	cout << "William Shakespeare" << endl;
}