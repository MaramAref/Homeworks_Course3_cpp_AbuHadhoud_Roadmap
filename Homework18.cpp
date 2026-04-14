#include<iostream>
using namespace std;
//Homework lesson 37
	void swapfunction(int &num1,int &num2){
	int temp=num1;
      num1=num2;
     	num2=temp;
}
int main(){
	int num1,num2;
    cout<<"Enter two numbers "<<"\n";
	cin>>num1>>num2;
	cout<<"The first number is :"<<num1<<endl;
	cout<<"The scond number is :"<<num2<<endl;
	swapfunction( num1, num2);
	cout<<"After swaping the first number is :"<<num1<<endl;
	cout<<"After swaping the scond number is :"<<num2<<endl;	
	return 0;
}