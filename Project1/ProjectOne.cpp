#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <Monitor.h>

using namespace std;

int main()
{
	Welcome();
	Goodbye();

	return 0;
}

void Welcome()
{
	cout << "\n\n\t\t\Welcome to Visual C++";
}

void Goodbye()
{
	cout << "\n\n\t\t\Goodbye, see you later.";
}

void Clear()
{
	system("cls");
}

void SetTextPosition(int Row, int Col)
{
	COORD XY = (Col, Row);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),XY);
}

void SetTextColor(int Color)
{
	SetConsoleTextAttribute(GetStdHandke(STD_OUTPUT_HANDLE),Color);
}
