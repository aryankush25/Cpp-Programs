#include<iostream>

using namespace std;

int area (int);
int area (int,int);
double area(double);

int main()
{
	cout<<"Area of square "<<area(5)<<endl;
	cout<<"Area of rectangle "<<area(5,10)<<endl;
	cout<<"Area of circle "<<area(5.5)<<endl;
	
	return 0;
	
}

int area (int side)
{
	return side*side;
}

int area (int length, int breath)
{
	return length*breath;
}

double area (double radius)
{
	return 3.14*radius*radius;
}
