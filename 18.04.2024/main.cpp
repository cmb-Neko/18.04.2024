#include <iostream>
#include <Windows.h>

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int main() {
	SetConsoleTextAttribute(hConsole, 14); //Changing console text color to yellow
	cout << "\"Hello, World!\"" << endl; 
	SetConsoleTextAttribute(hConsole, 15); //Changing console text color back to white
	cout << "/Bjarne Stroustrup/" << endl;
}