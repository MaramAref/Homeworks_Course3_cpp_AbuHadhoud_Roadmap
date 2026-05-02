#include<iostream>
using namespace std;
//Home work lesson 53
int main(){
	int Number=0;
	int sum=0;
	for(int i=1;i<=5;i++){
		cout<<"Enter Number:";
		cin>>Number;
		if(Number>50){
			cout<<"You are not allowed to enter number greater than 50 \n";
			continue;
		}
		sum+=Number;
	}
		cout<<"The sum of numbers is: "<<sum<<endl;
	return 0;
}