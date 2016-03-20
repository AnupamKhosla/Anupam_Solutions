#include<iostream>
using namespace std;

struct phone
{
	int ar_code;
	int exch;
	int num;	
};

int main()
{	
	phone my_phone = { 212, 767, 8900 };
	phone your_phone;
	cout << "Enter your area code, exchange, and number: ";
	cin >> your_phone.ar_code >> your_phone.exch >> your_phone.num;
	cout << "\nMy number is: (" << my_phone.ar_code << ") " << my_phone.exch << " " << my_phone.num;
	cout << "\nYour number is: (" << your_phone.ar_code << ") " << your_phone.exch << " " << your_phone.num;
	cin.get();

}   


