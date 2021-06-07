#include <iostream>

using namespace std;

void enter(int*, int*);

int main()
{
	int num1, num2;
	
	enter(&num1, &num2);
	
	return 0;
}

void enter(int *num1, int *num2)
{
	cout << "введите первое число: ";
	cin >> num1;
	
	cout << "введите второе число: ";
	cin >> num2;
}