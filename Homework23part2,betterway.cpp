#include<iostream>
//Homework Lesson 42 part two ,better way
using namespace std;
bool agehasDriverlicensefunction(short int age,string hasDriverlicense){
	//problem 4
	 if(age>=21&&hasDriverlicense=="yes"){
 	cout<<"Hired\n";	
 	}
	 else{
 		cout<<"Rejected\n";
 	}
	}
	bool markfunction(float mark){
		//problem 8
 	if(mark>=50.0){
	 	cout<<"pass\n";

	 }
	 else{
 		cout<<"fail\n";
 	}
	}
	bool Averagefunction(float mark1,float mark2,float mark3) {
		//problem 11
	
 	float Average=(mark1+mark2+mark3)/3;
 	if(Average>=50.0){
	 	cout<<"Pass\n";
	 }
 	else{
	 	cout<<"fail\n";
	 }
	}
bool agefunction(short int age2){
		//problem 24
	 if(age2>=18&&age2<=45){
 		cout<<"valid Age \n";
 	}
 	else{
	 	cout<<"invalid Age \n";
	 }
	}
bool PINfunction(int PIN){
		//problem 49
	 
	 if(PIN==1234567){
	 	int Balance =7500; 
 		cout<<"Your Balance is "<<Balance<<endl;
 		
 	}
 	else{
	 	cout<<"Wrong PIN \n";
	 }
	
}
int main(){
	short int age;
	 string hasDriverlicense;
	 cout<<"Enter your age \n";
	 cin>>age;
	 cout<<"Do you have Driver license,enter yes or no \n";
	 cin>>hasDriverlicense;
	 agehasDriverlicensefunction( age,hasDriverlicense);
       float mark;
 	cout<<"Enter Your mark\n";
 	cin>>mark;
 	markfunction( mark);
 	float mark1,mark2,mark3;
 	cout<<"Enter your three marks\n";
 	cin>>mark1>>mark2>>mark3;
 	Averagefunction( mark1, mark2, mark3);
 	short int age2;
	 cout<<"Enter your Age \n";
	 cin>>age2;
	 agefunction( age2);
      int PIN=1234567;
	 cout<<"Welcome ,enter PIN \n";
	 cin>>PIN;
	 PINfunction(PIN);
}