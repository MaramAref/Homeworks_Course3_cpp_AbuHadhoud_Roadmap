#include<iostream>
#include<cmath>
using namespace std;
int main(){
	//Homework lesson 26
	//problem 16
	int c,d;
	cout<<"Enter c,d to calculate the rectangle area \n";
	cin>>c>>d;
	int Area1=c* sqrt(d*d-c*c);
	cout<<Area1<<endl;
	//problem 18
	int r;
	cout<<"Enter r to calculate the cirical area \n";
	cin>>r;
	double pi=3.14;
	int Areacirical=pi* (r*r);
	cout<<Areacirical<<endl;
	//problem 22
	int a,b;
	cout<<"enter a,b\n";
	cin>>a>>b;
	int Area=pi*b*b/4*((2*a-b)/(2*a+b));
	cout<<Area<<endl;
	//problem 32
	double num,p;
	cout<<"enter num and pow\n";
	cin>>num>>p;
	cout<<pow( num, p)<<"\n";
}
