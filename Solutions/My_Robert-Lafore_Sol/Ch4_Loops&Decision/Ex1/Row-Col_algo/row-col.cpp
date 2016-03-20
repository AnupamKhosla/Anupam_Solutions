/* value = number*position, position=(col + row*maxcols) as postion moves vertically down then
goes one column right. variable `row` represents rows above the current position and variable `col`
simply represents current column
*/
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	int number;
	cout << "Enter the number whose table you want: ";
	cin >> number;
	int maxrows; int maxcols;
	cout << "\nEnter the number of rows you want: "; cin >> maxrows;
	cout << "\n Enter the number of columns : "; cin >> maxcols;
	
	for(int row=0; row<=(maxrows-1); row++)
	{
		for(int col=1; col<=maxcols; col++)
		{
			cout << setw(6) << number*(col + row*maxcols); // (col + row*maxcols) represent the current position
		}
		cout << "\n";
	}
	getch();
}
