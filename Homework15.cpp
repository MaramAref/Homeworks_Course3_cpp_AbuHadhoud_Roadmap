#include<iostream>
using namespace std;
//Homework lesson 34
void mysumprocedures(){
	int num1,num2;
	cout<<"please enter a Number 1 ";
	cin>>num1;
	cout<<"please enter a Number 2 ";
	cin>>num2;
	int sum= num1+num2;
	cout<<"*****************************************\n";
	cout<<"the sum is: "<<sum<<endl;
	}
	int mysumfunction(){
	int num1,num2;
	cout<<"please enter a Number 1 ";
	cin>>num1;
	cout<<"please enter a Number 2 ";
	cin>>num2;
	int sum= num1+num2;
	cout<<"*****************************************\n";
	return num1+num2;
	}
int main(){
	 mysumprocedures();
	 cout<<mysumfunction()<<"\n";
	return 0;
}