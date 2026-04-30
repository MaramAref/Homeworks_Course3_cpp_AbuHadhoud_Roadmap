#include<iostream>
#include<string>
//Homework lesson 41
using namespace std;
struct stinfo{
	string firstname;
	string lastname;
	short int age;
	string phonenumber;
	
};
void Readinfo( stinfo &info){
	cout<<"enter your first name :";
	cin>>info.firstname;
	cout<<"enter your last name :";
	cin>>info.lastname;
	cout<<"enter your age :";
	cin>>info.age;
	cout<<"enter your phone number :";
	cin>>info.phonenumber;
		
}
void printinfo(stinfo info){
	
	cout<<"*****************************************************\n";
	cout<<"First name: "<<info.firstname<<"\n";
	cout<<"Last name: "<<info.lastname<<"\n";
	cout<<"Age: "<<info.age<<"\n";
	cout<<"Phone number: "<<info.phonenumber<<"\n";
	
	cout<<"*****************************************************\n";
}
void readpersonsinfo(stinfo persons[2]){
	Readinfo(persons[0]);
	Readinfo(persons[1]);
	
	
}
void printpersonsinfo(stinfo persons[2]){
	printinfo(persons[0]);
	printinfo(persons[1]);
	
	
}

int main(){
	stinfo persons[2];
	readpersonsinfo(persons);
	printpersonsinfo(persons);
	return 0;
}