/* Ex1 of ch3(loops and decision). Value = number*pos. Simply increment pos
 and when position is multiple of maxcols put a newline.
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
	cout << "\nEnter the number of columns : "; cin >> maxcols;
	int row; int col; //Current row and current col
	
	for(int pos=1; pos<=(maxrows*maxcols); pos++)
	{
		cout << setw(6) <<number*pos << "  ";
		if((pos%maxcols)==0)
		{
		  cout << "\n";	
		}
		
	}
	getch();	
}
