#include<iostream>
using namespace std;
//HomeWork Lesson 47
int main(){
	//problem 26
	int N;
	cout<<"Enter number: ";
	cin>>N;
	for(int i=1;i<=N;i++){
		cout<<i<<endl;
			
	}
	//problem 27
	int number;
	cout<<"Enter number\n";
	cin>>number;
	for(int i=number-1;i>=1;i--){
		cout<<i<<endl;
			
	}
	//problem 28
       int num;
       cout<<"Enter number: ";
       cin>>num;
       int sum=0;
       for(int i=1;i<=num;i++){
       	if(i%2!=0){
       		sum+=i;
	       }
      	
       }
       cout<<"The sum of odd numbers is: "<<sum<<"\n";
	//problem 29
	int numb;
       cout<<"Enter number: ";
       cin>>numb;
       int sum2=0;
       for(int i=1;i<=numb;i++){
       	if(i%2==0){
       		sum2+=i;
	       }
      	
       }
       cout<<"The sum of even numbers is: "<<sum2<<"\n";
       //problem 30
       int num2;
       cout<<"Enter number: ";
       cin>>num2;
       int factorial=1;
       for(int i=1;i<=num2;i++){
       		factorial*=i;
	       }
       cout<<"the factorial is :"<<factorial<<endl;
       //problem 32
       int number1,m;
       int x=1;
       cout<<"Enter the base number:";
	 cin>>number1;
       cout<<"Enter the power : ";
       cin>>m;
       if(number1==0){
       	cout<<x<<"\n";
       }
       else{
       	
       
       for(int y=1;y<=m;y++){
       	x=x*number1;
       }
       cout<<x<<endl;
       }
       cout<<"------------------------------------------------------------\n";
       //problem 46
       cout<<"The character are: \n";
       for(int i=65;i<=90;i++){
       	cout<<char(i)<<endl;
       }
		return 0;
	}