#include<iostream>
using namespace std;
//Homework lesson 36
int x=800;
int testlocalvariablefunction(){
	int x=900;
	cout<<x<<"\n";
}
int main(){
	int x=200;
      cout<<x<<"\n";
	cout<<::x<<"\n";	
	testlocalvariablefunction();
	::x++;
	cout<<::x++<<endl;
	::x=2;
	cout<<::x++<<endl;
	::x=::x+1000;
	cout<<::x++<<endl;
}