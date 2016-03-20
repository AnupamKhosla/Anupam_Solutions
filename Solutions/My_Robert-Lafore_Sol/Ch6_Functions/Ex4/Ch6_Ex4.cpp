#include<iostream>
using std::cout;
using std::cin;
struct dist
{
	int feet;
	int inches;
};
dist foo(dist, dist);
int main()
{
	dist d1, d2;
	cout << "Input feet of d1: ";     cin >> d1.feet;
	cout << "\nInput inches of d1: "; cin >> d1.inches;
	cout << "\nInput feet of d2: ";   cin >> d2.feet;
	cout << "\nInput inches of d2: "; cin >> d2.inches;
	dist large = foo(d1, d2);
	cout << "The larger distance is: " << large.feet << "\'-" << large.inches << "\"";
}
dist foo(dist d1, dist d2)
{
	float temp1 = d1.feet + d1.inches/12;
	float temp2 = d2.feet + d2.inches/12;
	if(temp1>temp2) return d1;
	else return d2;
}
