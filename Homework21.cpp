#include<iostream>
using namespace std;
//Homework lesson 40
void readgardsfunction(float x[3]){
	cout<<"enter your first Gard";
	cin>>x[0];
	cout<<"enter your scond Gard";
	cin>>x[1];
	cout<<"enter your last Gard";
	cin>>x[2];
	
}


int averagefunction(float x[3] ){
	float average=(x[0]+x[1]+x[2])/3;
	return average;
}
int main(){
	float x[3];
	readgardsfunction(x);
	cout<<"Your Average is : "<<averagefunction(x)<<endl;
	return 0;
}
