//for inside while. Simply use position variable and increment it while keeping col variable in [1,10]

#include<iostream>
#include<iomanip>    // For setw()
#include<conio.h>    // For getch()
using namespace std;
int main()
{
	int number;
	cout << "Enter the number whose table you want: ";
	cin >> number;
	int maxrows; int maxcols;
	cout << "\nEnter the number of rows you want: "; cin >> maxrows;
	cout << "\n Enter the number of columns : "; 
	cin >> maxcols;
	int pos=1; //starting position
	
	while( pos<=maxrows*maxcols )
	{
		for(int col=1; col<=maxcols; col++, pos++)
		{
			cout<< setw(6) << pos*number << "  ";
		}
		cout<<"\n";
	}
	getch();
}
