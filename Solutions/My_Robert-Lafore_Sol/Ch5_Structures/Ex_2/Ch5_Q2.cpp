#include<iostream>
using namespace std;

struct point
{
	int x;
	int y;
};

int main()
{
	point p1;
	point p2;
	cout << "Enter coordinates for p1: ";
	cin >> p1.x >> p1.y;
	cout << "\nEnter coordinates for p2: ";
	cin >> p2.x >> p2.y;
	point sum = { p1.x + p2.x, p1.y + p2.y };
	cout << "\nCoordinates of p1+p2 are: " << sum.x << " " << sum.y;
	cin.get();
	
}
