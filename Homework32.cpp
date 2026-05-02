#include<iostream>
using namespace std;
//Homework lesson 52
int main(){
int arr[10]={10,44,55,33,22,99,88,99,20,100};
int searchfor=20;
for(int i=0;i<=10;i++){
	if(searchfor==arr[i]){
		cout<<searchfor<<" found at position "<<i<<"\n";
	break;
	}
}
	
	return 0;
}
