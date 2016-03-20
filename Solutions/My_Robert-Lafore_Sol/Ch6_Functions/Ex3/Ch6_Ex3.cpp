#include<iostream>
#include<conio.h>
using namespace std;

void zerosmaller(int& one, int& two);
int main()
{
	int x, y;
	cout << "Enter values of x and y respectively: ";
	cin >> x >> y;
	zerosmaller(x,y);
	cout << "\n x & y: " << x << " and " << y;
	getch();
}
void zerosmaller (int& one, int& two)
{
	if(one<two) one=0;
	else if(one>two) two=0;
	else cout << "\nBoth are equal\n";
}
