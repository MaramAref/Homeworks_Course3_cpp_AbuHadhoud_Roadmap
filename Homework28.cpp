#include<iostream>
#include<string>
//Homework lesson 48
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
void readpersonsinfo(stinfo persons[100],int &Numberofperson){ 
	cout<<"How many pepole do you want to enter their inforamtion and print it , the range is from 1 to 100\n ";
	cin>>Numberofperson;
	for(int i=0;i<=Numberofperson-1;i++){
		cout<<"Enter the information of Person" <<i+1<<endl;
	Readinfo(persons[i]);
	
	}

	
	
}
void printpersonsinfo(stinfo persons[100],int &Numberofperson){
for(int i=0;i<=Numberofperson-1;i++){                        
           cout<<"The information of Person " <<i+1<<endl;        
		printinfo(persons[i]);                               
		                                                            
	
}
}
int main(){
	stinfo persons[100];
	int Numberofperson;
	readpersonsinfo(persons,Numberofperson);
	printpersonsinfo(persons,Numberofperson);
	return 0;
}