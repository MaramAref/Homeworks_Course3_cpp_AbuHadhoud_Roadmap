#include<iostream>
using namespace std;
//Home work lesson 51
int ReadIntNumber(int &from,int &to){
	int number;
	cout<<"Enter a number please between the range\n";
	cin>>number;
	while(number<from||number>to){
		cout<<"Wrong number , enter number between"<<from<<"and"<<to<<endl;
		cin>>number;	
	}
	return number;
}
int ReadIntNumberUsingDo(int &from,int &to){
	int number;
	do{
	cout<<" enter number between "<<from<<" and "<<to<<endl;
		cin>>number;
	}
	while(number<from||number>to)	;
	
	return number;
}
int main(){
	int from,to;
	cout<<"enter from the range and to \n";
	cin>>from>>to;
	ReadIntNumber(from,to);
	cout<<"---------------------------------------------------------\n";
	ReadIntNumberUsingDo(from,to);
	return 0;
}