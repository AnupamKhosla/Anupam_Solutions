#include<iostream>
using namespace std;
 
struct distance
{
	int feet;
	float inches;
}; 
 struct volume
{
	struct distance length;
	struct distance breadth;
	struct distance height;
};		
int main()
{
	volume box;
	box.length.feet = 5; box.length.inches = 7;
	box.breadth.feet = 3; box.breadth.inches = 5;
	box.height.feet = 7; box.height.inches = 12;
	
	float l = box.length.feet + box.length.inches/12;
	float b = box.breadth.feet + box.breadth.inches/12;
	float h = box.height.feet + box.height.inches/12;
	float v = l*b*h;
	cout << "\nVolume is: " << v;
}
