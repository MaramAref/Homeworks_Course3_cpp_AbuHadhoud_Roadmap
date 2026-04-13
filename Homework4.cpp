#include<iostream>
#include<string>
using namespace std;
int main() {
	//Homework lesson 18
	//	Q1
	string name;
      signed short int age;
	string city;
	string countery;
	signed int Monthlysalary;
	char Gender='M';
	bool maried;
	cout<<"**********************************\n";
	cout<<"Enter your name\n";
	cin>>name;
	cout<<"Enter your Age\n";
	cin>>age;
	cout<<"Enter your City\n";
	cin>>city;
	cout<<"Enter your Countery";
	cin>>countery;
	cout<<"ENTER YOUR Month Salary";
	cin>>Monthlysalary;
	cout<<"Enter your Gendar";
	cin>>Gender;
	cout<<"Are you maried , if you are married Enter 1 if you are not enter 0";
	cin>>maried;
	cout<<"**********************************\n";
	cout<<"Name:"<<name<<endl;
	cout<<"Age:"<<age<<" Years\n";
	cout<<"City:"<<city<<endl;
	cout<<"Countery:"<<countery<<endl;
	cout<<"Monthly Salary:"<<Monthlysalary<<endl;
	cout<<"Yearly Salary:"<<Monthlysalary*12<<endl;
	cout<<"Gender:"<<Gender<<endl;
	cout<<"Maried:"<<maried<<endl;
	cout<<"**********************************\n";
	//Q2
	int num1; int num2; int num3;
	cout<<"Enter Three numbers";
	cin>>num1>>num2>>num3;
	int total =num1+num2+num3;
	cout<<num1<<endl<<num2<<endl<<num3<<endl;
	cout<<"total="<<total<<endl;
	//Q3
	signed short int Age;
	cout<<"Enter Your Age\n";
	cin>>Age;
	signed short int after5years=Age+5;
	cout<<"After 5 years old you will be "<<after5years<<" years\n";
	//Homework lesson 20
	//Q1:
	int number1,number2;
	cout<<"Enter the first number:";
	cin>>number1;
	cout<<"Enter the scond numbers:";
	cin>>number2;
	cout<<number1<<"+"<<number2<<"="<<num1+num2<<"\n";
	cout<<number1<<"-"<<number2<<"="<<num1-num2<<"\n";
	cout<<number1<<"*"<<number2<<"="<<num1*num2<<"\n";
	cout<<number1<<"%"<<number2<<"="<<num1%num2<<"\n";
	cout<<number1<<"/"<<number2<<"="<<num1/num2<<"\n";
}