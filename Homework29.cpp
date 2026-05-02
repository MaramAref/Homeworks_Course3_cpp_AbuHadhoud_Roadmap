#include<iostream>
using namespace std;
//Home work lesson 49
int main(){
	//Q1
	for(int i =65;i<=90;i++){
			cout<<"Letter:"<<char(i)<<endl;
		for(int j=65;j<=90;j++){
			cout<<char(i)<<char(j)<<"\n";
		}
		cout<<"_________________________________________\n";
	}
	
		//Q2
		for(int i=10;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<< "*";
		}
		cout<<endl;
	}
	cout<<"_________________________________________\n";
            //Q3
            for(int i=1;i<=10;i++){
		for(int j=1;j<=i;j++){
			cout<< j<<" ";
		}
		cout<<endl;
            }
		cout<<"_________________________________________\n";
      	//Q4
      	for(int i=10;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<< j<<" ";
		}
		cout<<endl;
	}
	cout<<"_________________________________________\n";
		//Q5
		for(int i =65;i<=70;i++){
		for(int j=65;j<=i;j++){
		cout<<char(j)<<" ";
		}
		cout<<"\n";
	}
	cout<<"_________________________________________\n";
	//Q6
	for(int i=1;i<=10;i++){
		for(int j=i;j<=10;j++){
			cout<<j<<"  ";
		}
	cout<<"\n";
	}
	cout<<"_________________________________________\n";
	return 0;
}