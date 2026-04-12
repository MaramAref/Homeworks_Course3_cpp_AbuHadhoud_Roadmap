#include<iostream>
#include<string>
using namespace std;
int main() {
	//home work lesson 17
	//	Q1
	string name="Mohammed Abu Hadhoud";
      short signed int age=44;
	string city="Aman";
	string countery="Jordan";
	signed int Monthlysalary=5000;
	char Gender='M';
	bool maried=true;
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
	int num1=10; int num2=20; int num3=30;
	int total =num1+num2+num3;
	cout<<num1<<endl<<num2<<endl<<num3<<endl;
	cout<<"total="<<total<<endl;
	cout<<"**********************************\n";
	//Q3
	signed short int Age=25;
	signed short int after5years=Age+5;
	cout<<"If your age is 25 ,After 5 years old you will be "<<after5years<<" years\n";
}