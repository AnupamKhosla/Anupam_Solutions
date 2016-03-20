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
	int step = maxrows*number;
	int stride = number*( ((maxcols-1)*maxrows) - 1) ;


    for(int row=1, n=number; row <= maxrows; row++ )
    {       
        
        for(int col=0; col < maxcols; col++)
        {
            cout << setw(6)<< n << "  ";
            n = n+step;
        }   
		cout << "\n";
		n = n - (stride+step);

    }
    getch();    
}
