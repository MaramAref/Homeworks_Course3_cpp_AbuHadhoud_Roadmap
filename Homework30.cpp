 #include<iostream>
using namespace std;
//Home work lesson 50
int main(){
	//problem 26
	int N;
	cout<<"Enter number: ";
	cin>>N;
	int i=1;
	while(i<=N){
	cout<<i<<endl;
	i++;
	}
	//problem 27
	int number;
	cout<<"Enter number\n";
	cin>>number;
	i=number-1;
	while( i>=1){
		cout<<i<<endl;
		i--;
	}
	//problem 28
	 int num;
       cout<<"Enter number: ";
       cin>>num;
       int sum=0;
       int c=1;
       while(c<=num){
       	if(c%2!=0){
       		sum+=c;
      		
	       }
      	c++;
       }
       cout<<"The sum of odd numbers is: "<<sum<<"\n";
	//problem 29
	int numb;
       cout<<"Enter number: ";
       cin>>numb;
       int sum2=0;
       int co=1;
       while(co<=numb){
       	if(co%2==0){
       		sum2+=co;
	       }
      	co++;
       }
       cout<<"The sum of even numbers is: "<<sum2<<"\n";
	//problem 30
	 int num2;
       cout<<"Enter number: ";
       cin>>num2;
       int factorial=1;
       int counter=1;
       while(counter<=num2){
       		factorial*=counter;
       		counter++;
	       }
       cout<<"the factorial is :"<<factorial<<endl;
	//problem 32
	int number1,m;
       int x=1;
       int y=1;
       cout<<"Enter the base number:";
	 cin>>number1;
       cout<<"Enter the power : ";
       cin>>m;
       if(number1==0){
       	cout<<x<<"\n";
       }
       else{
       	
       
       while(y<=m){
       	x=x*number1;
       	y++;
       }
       cout<<x<<endl;
       }
	//problem 37
	int sum3=0;
	int number2;
	while(true){
	cout<<"Enter number(-99 to stop) :";
	cin>>number2;
	if(number2==-99){
	break;
	}
	else{
		sum3+=number2;
	}
	}
	cout<<"The sum :"<<sum3<<"\n";
	//problem 46
	cout<<"The character are: \n";
	int ch=65;
       while(ch<=90){
       	cout<<char(ch)<<endl;
       	ch++;
       }
	//problem 50
	int faildcount=0;
	int PIN;
	int balance=7500;
	while(faildcount<3){
		cout<<"Enter PIN\n";
		cin>>PIN;
			if(PIN==1234){
		cout<<"The Balance is: "<<balance<<endl;
	}
	else{
	cout<<"Wrong PIN\n";
	faildcount++;
	}
	
	}
	cout<<"Card Locked \n";

	return 0;
	
}