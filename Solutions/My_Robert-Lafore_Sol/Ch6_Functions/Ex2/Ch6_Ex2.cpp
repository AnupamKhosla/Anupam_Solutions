#include<iostream>
#include<conio.h>
using namespace std;

double power( double, int=2);
int main()
{
	int number;
	int exp;
	cout << "Enter base: "; cin >> number;
	cout << "\nEnter exponent: "; cin >> exp;
	cout << "\n"<<number<<"^"<<exp<<": "<< power(number, exp);
	getch();
}

double power(double number, int exp)
{
	int result = 1;
	for(int count=exp; count>0; --count)
	{
		result = result*number;	
	}
	return result;
}
