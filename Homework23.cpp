#include<iostream>
//Homework Lesson 42
using namespace std;
int main(){
	//problem 4
	 short int age;
	 string hasDriverlicense;
	 cout<<"Enter your age \n";
	 cin>>age;
	 cout<<"Do you have Driver license,enter yes or no \n";
	 cin>>hasDriverlicense;
	 if(age>=21&&hasDriverlicense=="yes"){
 	cout<<"Hired\n";	
 	}
	 else{
 		cout<<"Rejected\n";
 	}
 	//problem 8
 	float mark;
 	cout<<"Enter Your mark\n";
 	cin>>mark;
 	if(mark>=50.0){
	 	cout<<"pass\n";

	 }
	 else{
 		cout<<"fail\n";
 	}
 	//problem 11
 	float mark1,mark2,mark3;
 	cout<<"Enter your three marks\n";
 	cin>>mark1>>mark2>>mark3;
 	float Average=(mark1+mark2+mark3)/3;
 	if(Average>=50.0){
	 	cout<<"Pass\n";
	 }
 	else{
	 	cout<<"fail\n";
	 }
	 //problem 24
	 short int age2;
	 cout<<"Enter your Age \n";
	 cin>>age2;
	 if(age2>=18&&age2<=45){
 		cout<<"valid Age \n";
 	}
 	else{
	 	cout<<"invalid Age \n";
	 }
	 //problem 49
	 int PIN=1234567;
	 cout<<"Welcome ,enter PIN \n";
	 cin>>PIN;
	 if(PIN==1234567){
	 	int Balance =7500; 
 		cout<<"Your Balance is: "<<Balance<<endl;
 		
 	}
 	else{
	 	cout<<"Wrong PIN \n";
	 }
	return 0;
}