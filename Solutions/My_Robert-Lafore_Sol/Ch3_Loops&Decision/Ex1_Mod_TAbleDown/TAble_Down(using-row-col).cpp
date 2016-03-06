/* value = number*position, position=(row + maxrows*col) as postion moves hrizontaly then
goes one row down. variable `col` represents cols left to the current position and variable `row`
simply represents current row
*/
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
	
	
	
	for(int row=1; row<=maxrows; row++ )
	{		
		cout << "\n";
		for(int col=0; col<maxcols; col++)
		{
			cout << setw(6)<< number(row + maxrows*col) << "  ";
		}	
		
		
	}
	getch();	
}
