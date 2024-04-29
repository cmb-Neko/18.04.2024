#include <iostream>
#include <Windows.h>

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int main() {
	SetConsoleTextAttribute(hConsole, 4);
	cout << "Every ";
	SetConsoleTextAttribute(hConsole, 12);
	cout << "hunter ";
	SetConsoleTextAttribute(hConsole, 14);
	cout << "wants to ";
	SetConsoleTextAttribute(hConsole, 10);
	cout << "know ";
	SetConsoleTextAttribute(hConsole, 11);
	cout << "where ";
	SetConsoleTextAttribute(hConsole, 9);
	cout << "the pheasant ";
	SetConsoleTextAttribute(hConsole, 13);
	cout << "is" << endl;
}