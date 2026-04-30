#include<iostream>
using namespace std;
//Homework Lesson 45
int main(){
	//problem 36
	int num1,num2;
      char operation;
      cout<<"Enter two numbers and one Operation \n";
	cin>>num1>>num2>>operation;
      switch(operation){
      	case '+':
      	cout<<num1<<"+"<<num2<<"="<<num1+num2;
      	break;
      	case '-':
      	cout<<num1<<"-"<<num2<<"="<<num1-num2;
      	break;
      	case '*':
      	cout<<num1<<"*"<<num2<<"="<<num1*num2;
      	case '/':
      	cout<<num1<<"/"<<num2<<"="<<num1/num2;
      	break;
      	case '%':
      	cout<<num1<<"%"<<num2<<"="<<num1%num2;
     		break;
     		default:
     		cout<<"invalid choise\n";
      }
      
	//problem 44
	 signed short int day;
	cout<<"\nEnter number from 1 to 7";
	cin>>day;
	switch(day){
	case 1:
		cout<<"it is Sunday\n";
	      break;
	case 2:
	
		cout<<"it is Monday\n";
	       break;
	case 3:
		cout<<"it is Tuesday\n";
		break;
	
	case 4:
		cout<<"it is Wednesday\n";
		break;
	case 5:
	
		cout<<"it is Thursday\n";
		break;
	case 6:
		
		cout<<"it is Friday\n";
		break;
	case 7:
		
		cout<<"it is Saturday\n";
		break;
	default:
		cout<<"invalid choise\n";
	}
		//problem 45
		signed short int month;
	cout<<"\nEnter number from 1 to 12 ";
	cin>>month;
	switch(month){
		case 1:
		cout<<"it is January\n";
		break;
	
	case 2:
		cout<<"it is February\n";
		break;
		case 3:
		cout<<"it is March\n";
		break;
            case 4:
		cout<<"it is April\n";
		break;
		case 5:
		cout<<"it is May\n";
		break;
		case 6:
		cout<<"it is June\n";
		break;
		case 7:
		cout<<"it is July\n";
		break;
		case 8:
		cout<<"it is August\n";
		break;
	case 9:
		cout<<"it is September\n";
		break;
	case 10:
		cout<<"it is October\n";
		break;
	case 11:
		cout<<"it is November\n";
		break;
	case 12:
		cout<<"it is December\n";
		break;
		default:
		cout<<"invalid choise\n";
	}
	
    
	return 0;
}