#include<iostream>
#include<cmath>
using namespace std;
//Homework lesson 35
//function problem 1
void namefunction1(){
	cout<<"Maram\n";
}
//function problem 2
void namefunction2(){
	string name;
cout<<"Enter your name\n";
	cin>>name;
	cout<<"The entered name is : "<<name<<endl;
}
//function problem 14
void swapfunction(int &num1,int &num2){
	int temp=num1;
      num1=num2;
     	num2=temp;
}
//function problem 15
int rectangleAreafunction1(int A,int B){
	  A*B;
}
//function problem 16
int Areafunctin2(int c,int d) {
	int Area1=c* sqrt(d*d-c*c);
	return Area1;
}
//function problem 18
int circleAreafunctin3(int r){
	int pi=3.14;
	int Areacirical=pi* (r*r);
	return Areacirical;
	
}
//function problem 19
int Areafunctin4(int D){
	double pi=3.14;
	int Area3= (pi*D*D)/4;
	return Area3;
	
	
}
//function problem 20
int Areafunctin5(int f){
	double pi=3.14;
	int Area4= (pi*f*f)/4; 
	return Area4;
}
//function problem 21
int Areafunctin6(int i){
		double pi=3.14;
	int Area5= (i*i)/pi*4;
	return Area5;
	
}
//function problem 22
int Areafunctin7(int a,int b ){
	double pi=3.14;
	int Area=pi*b*b/4*((2*a-b)/(2*a+b));
	return Area;
	
}
//function problem 23
int Areafunctin8(int k,int s,int m){
	double pi=3.14;
	int p=(k+s+m)/2;
	int area0= pi*((k*s*m)/(p*(p-k)*(p-s)*(p-m)));
	int Area6=area0*area0;
	return Area6;
}
//function problem 31
void powfunctionofnumbers(int number){
	//int number;
	int powof2=number*number;
	int powof3=number*powof2;
	int powof4=powof3*number;
	cout<<"number^2 = "<<powof2<<endl;
	cout<<"number^3 = "<<powof3<<endl;
	cout<<"number^4 = "<<powof4<<endl;
	
}
int main(){
     namefunction1();
     namefunction2();
	int num1,num2;
	cout<<"Enter two numbers "<<"\n";
	cin>>num1>>num2;
	cout<<"The first number is :"<<num1<<endl;
	cout<<"The scond number is :"<<num2<<endl;
	swapfunction(num1,num2);
	cout<<"After swaping the first number is :"<<num1<<endl;
	cout<<"After swaping the scond number is :"<<num2<<endl;
	 int A,B;
       cout<<"Enter a,b to calculate the rectangle area \n";
	  cin>>A>>B;
	  cout<<"The Area is "<<rectangleAreafunction1(A, B)<<"\n";
	  int c,d;
	cout<<"Enter c,d to calculate the rectangle area \n";
	cin>>c>>d;
	cout<<"The Area is "<<Areafunctin2<<endl;
	int r;
	cout<<"Enter r to calculate the cirical area \n";
	cin>>r;
	cout<<"The Area is "<<circleAreafunctin3(r)<<"\n";
	int D;
	cout<<"Enter D";
	cin>>D;
	cout<<"The Area is " <<Areafunctin4(D)<<endl;
	int f;
	cout<<"Enter f";
	cin>>f;
	cout<<"The Area is " <<Areafunctin5(f)<<endl;
	int i;
	cout<<"Enter i";
	cin>>i;
	cout<<"The Area is " <<Areafunctin6(i)<<endl;
	int a,b;
	cout<<"enter a,b\n";
	cin>>a>>b;
	cout<<"The Area is " <<Areafunctin7(a,b)<<endl;
	int k,s,m;
	cout<<"Enter k,s,m";
	cin>>k>>s>>m;
	cout<<"The Area is " <<Areafunctin8(k,s,m)<<endl;
	int N1;
	cout<<"enter number";
	cin>>N1;
	powfunctionofnumbers(N1);
	return 0;
}


	
	
	
	
	

	