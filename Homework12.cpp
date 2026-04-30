#include<iostream>
#include<string>
using namespace std;
//Homework lesson 30
int main(){
	string st1="43.22";
	float num1=stof(st1);
	double num2=stod(st1);
	int num3=stoi(st1);
	int N=20;
	string st=to_string(N);
	double N2=33.5;
	
	string st2=to_string(N2);
       float N3=55.23;
	string st3=to_string(N3);
	int number=int(N3);
	cout<<st1<<"\n";
	cout<<num1<<"\n";
	cout<<num2<<"\n";
	cout<<num3<<"\n";
	cout<<st<<"\n";
	cout<<N2<<"\n";
	cout<<st2<<"\n";
	cout<<st3<<"\n";
	cout<<N3<<"\n";
	
	return 0;
}