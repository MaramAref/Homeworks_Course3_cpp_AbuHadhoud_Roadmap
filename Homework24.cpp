#include<iostream>
using namespace std;
//Home work lesson 43
int main(){
	//problem 33
	int Average;
	cout<<"Enter your Average \n";
	cin>>Average;
	if(Average<=100 && Average>=90){
		cout<<"A\n";
	}
	else if(Average<=89&&Average>=80){
		cout<<"B\n";
	}
	else if(Average<=79&&Average>=70){
		cout<<"C\n";
	}
	else if(Average<=69&&Average>=60){
		cout<<"D\n";
	}
	else if(Average>=50&&Average<=59){
		cout<<"E \n";
	}
	else{
		cout<<"F\n";
	}
	//problem 34
	float totalsales;
	cout<<"Enter the total sales \n";
	cin>>totalsales;
	if(totalsales>=1000000){
		float percentage=0.01;
		float totalcomition=percentage*totalsales;  
		cout<<totalcomition<<"\n";
	}
	else if(totalsales<=1000000&&totalsales>=500000){
		float percentage=0.02;
		float totalcomition=percentage*totalsales;  
		cout<<totalcomition<<"\n";
	}
	else if(totalsales<=500000&&totalsales>=100000){
		float percentage=0.03;
		float totalcomition=percentage*totalsales; 
		cout<<totalcomition<<"\n"; 
	}
		else if(totalsales>=100000&&totalsales<=50000){
		float percentage=0.05;
		float totalcomition=percentage*totalsales;  
		cout<<totalcomition<<"\n";
	}
	else{
		float percentage=0.00;
		float totalcomition=percentage*totalsales;  
		cout<<totalcomition<<"\n";
	}
	//problem 36
	int num1,num2;
      char operation;
      cout<<"Enter two numbers and one Operation \n";
	cin>>num1>>num2>>operation;
	if(operation=='+'){
		cout<<num1<<"+"<<num2<<"="<<num1+num2;
	}
	else if(operation=='-'){
		cout<<num1<<"-"<<num2<<"="<<num1-num2;
	}
	else if(operation=='*'){
		cout<<num1<<"*"<<num2<<"="<<num1*num2;
	}
		
	else if( operation=='/'){
		cout<<num1<<"/"<<num2<<"="<<num1/num2;
	}
	else if(operation=='%'){
		cout<<num1<<"%"<<num2<<"="<<num1%num2;
	}
	else{
		cout<<"invalid choise\n";
	}
	//problem 44
	 signed short int day;
	cout<<"\nEnter number from 1 to 7";
	cin>>day;
	if(day==1){
		cout<<"it is Sunday\n";
	}
	else if(day==2){
		cout<<"it is Monday\n";
	}
	else if(day==3){
		cout<<"it is Tuesday\n";
	}
		else if(day==4){
		cout<<"it is Wednesday\n";
	}
		else if(day==5){
		cout<<"it is Thursday\n";
	}
		else if(day==6){
		cout<<"it is Friday\n";
	}
		else if(day==7){
		cout<<"it is Saturday\n";
	}
	
	else{
		cout<<"invalid choise\n";
	}
		//problem 45
		signed short int month;
	cout<<"\nEnter number from 1 to 12";
	cin>>month;
	if(month==1){
		cout<<"it is January\n";
	}
	else if(month==2){
		cout<<"it is February\n";
	}
	else if(month==3){
		cout<<"it is March\n";
	}
		else if(month==4){
		cout<<"it is April\n";
	}
		else if(month==5){
		cout<<"it is May\n";
	}
		else if(month==6){
		cout<<"it is June\n";
	}
		else if(month==7){
		cout<<"it is July\n";
	}
	else if(month==8){
		cout<<"it is August\n";
	}
	else if(month==9){
		cout<<"it is September\n";
	}
	else if(month==10){
		cout<<"it is October\n";
	}
	else if(month==11){
		cout<<"it is November\n";
	}
	else if(month==12){
		cout<<"it is December\n";
	}
	
	else{
		cout<<"invalid choise\n";
	}
    return 0;	
    
}