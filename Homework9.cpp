#include<iostream>
#include<string>
using namespace std;
//Homework lesson 27
struct contact{
	string email;
	int phonenumber;
	string facebookacuont;
};
struct information{
	string name;
      short signed int age;
	string city;
	string countery;
	signed int Monthlysalary;
	char Gender;
	bool maried;
	contact howtocontactwith;
}; 
int main(){
	information Mohammed;
	contact Mohammd;
	cout<<"enter your phone number\n";
	cin>>Mohammd.phonenumber;
	cout<<"enter the way to contact with email\n";
	cin>>Mohammed.howtocontactwith.email;
	Mohammed.name="Mohammed Abu Hadhoud";
      Mohammed.age=44;
	Mohammed.city ="Aman";
	Mohammed.countery="Jordan";
	Mohammed.Monthlysalary=5000;
	Mohammed.Gender='M';
	Mohammed.maried=true;
	cout<<"**********************************\n";
	cout<<"Name:"<<Mohammed.name<<endl;
	cout<<"Age:"<<Mohammed.age<<" Years\n";
	cout<<"City:"<<Mohammed.city<<endl;
	cout<<"Countery:"<<Mohammed.countery<<endl;
	cout<<"Monthly Salary:"<<Mohammed.Monthlysalary<<endl;
	cout<<"Gender:"<<Mohammed.Gender<<endl;
	cout<<"Maried:"<<Mohammed.maried<<endl;
	cout<<Mohammd.phonenumber<<endl;
	cout<<"email:"<<Mohammed.howtocontactwith.email<<endl;
	cout<<"**********************************\n";
	
}