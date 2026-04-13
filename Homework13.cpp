#include<iostream>
#include<string>
//Homework lesson 31
using namespace std;
int main(){
	string string1;
	cout<<"please enter string1 \n";
	getline(cin,string1);
	string string2;
	cout<<"please Enter string2 \n";
	cin>>string2;
	string string3;
	cout<<"please Enter string3 \n";
	cin>>string3;
	cout<<"*********************************************\n";
	cout<<"the length of string1 is : "<<string1.length()<<endl;
	cout<<"CharACTERS AT 0,2,4,7 are:"<<string1[0]<<"\n"<<string1[2]<<"\n"<<string1[4]<<"\n"<<string1[7]<<endl;
	cout<<"Concatenating string2 andstring3="<<string2+string3<<"\n";
	 
}