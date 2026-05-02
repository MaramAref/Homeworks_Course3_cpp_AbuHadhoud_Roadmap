#include<iostream>
#include<string>
//Homework lesson 38
using namespace std;
struct stinfo{
	string name;
	signed short int age;
	string city;
	string countary;
	 signed int Monthlysalary;
	 signed int yearlysalary;
	string gender;
	bool marrid;
	
	
};
void readinfofunction(stinfo &info){
      cout<<"**********************************\n";
	cout<<"Enter your name\n";
	cin>>info.name;
	cout<<"Enter your Age\n";
	cin>>info.age;
	cout<<"Enter your City\n";
	cin>>info.city;
	cout<<"Enter your Countery\n";
	cin>>info.countary;
	cout<<"ENTER YOUR Month Salary\n";
	cin>>info.Monthlysalary;
	cout<<"Enter your Gendar\n";
	cin>>info.gender;
	cout<<"Are you maried , if you are married Enter 1 if you are not enter 0";
	cin>>info.marrid;
	cout<<"**********************************\n";
	
}
void printinfofunction(stinfo info){
	cout<<"**********************************\n";
	cout<<"Name:"<<info.name<<endl;
	cout<<"Age:"<<info.age<<" Years\n";
	cout<<"City:"<<info.city<<endl;
	cout<<"Countery:"<<info.countary<<endl;
	cout<<"Monthly Salary:"<<info.Monthlysalary<<endl;
	cout<<"Yearly Salary:"<<info.Monthlysalary*12<<endl;
	cout<<"Gender:"<<info.gender<<endl;
	cout<<"Maried:"<<info.marrid<<endl;
	cout<<"**********************************\n";
}
int main(){
	stinfo person1;
	readinfofunction(person1);
	printinfofunction(person1);
	stinfo person2;
	readinfofunction(person2);
	printinfofunction(person2);
	return 0;
}