#include<iostream>
#include<string>
//Homework lesson 29
using namespace std;
enum encolor{red,black,pink};
enum engender{M,F};
enum enmaritalstate{single,married};
struct stAdress{
	string streetname;
	string bildingno;
	string pobox;
	string zipbox;
};
struct stcontactinfo{
	string phone;
	string emailadress;
	stAdress Adress;
	
};
struct stperson {
	string firstname;
	string scondname;
	stcontactinfo contactinfo;
	enmaritalstate maritalstate ;
	engender gender;
	encolor favourtecolor;
};
int main(){
 stperson person1;
 person1.firstname="Maram";
 person1.scondname="Aref";
 person1.contactinfo.phone="7890543219953";
 person1.gender=F;
 person1.favourtecolor=pink;
 person1.maritalstate=single;
 cout<<"firstname :"<<person1.firstname<<"\n";
 cout<<"scond name:"<<person1.scondname<<"\n";
 cout<<"contact info:"<<person1.contactinfo.phone<<"\n";
 cout<<person1.maritalstate<<endl;
 cout<<person1.gender<<person1.favourtecolor<<endl;
	return 0;
}