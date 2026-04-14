#include<iostream>
#include<cmath>
using namespace std;
int main(){
	//Homework lesson 20
	//Algorthim and problem solving
	//problem7
	int num;
	cout<<"Enter number please\n";
	cin>>num;
	int halfnumber=num/2;
	cout<<"The half of " << num << " is " <<halfnumber<<" \n";
	//problem 9
	int num1,num2,num3;
	cout<<"Enter three numbers\n";
	cin>>num1>>num2>>num3;
	int sum= num1+num2+num3;
	cout<<"the sum of numbers is: " <<sum <<endl;
	//problem 10
	int mark1,mark2,mark3;
	cout<<"Enter Your gards\n ";
	cin>>mark1>>mark2>>mark3;
	int average= (mark1+mark2+mark3)/3;
	cout<<"Your Average is : "<<average<<"\n";
	//problem 14
	int a,b;
	cout<<"Enter Two numbers\n ";
	cin>>a>>b;
	cout<<"first number is: "<<a<<" scond number is : "<<b<<"\n";
	int temp=a;
	a=b;
	b=temp;
	cout<<"first number is: "<<a<<"scond number is: "<<b<<"\n";
	//problem 15
	int A,B;
	cout<<"Enter a,b to calculate the rectangle area \n";
	cin>>A>>B;
	int rectangleArea=A*B;
	cout<<rectangleArea<<endl;
	//problem 17
	int n1,n2;
	cout<<"Enter n1,n2 to calculate the rectangle area \n";
	cin>>n1>>n2;
	int Area2=n1/2*n2;
	cout<<Area2<<endl;
	//Problem 19
	int D;
	cout<<"Enter D";
	cin>>D;
	double pi=3.14;
	int Area3= (pi*D*D)/4;
	cout<<"The Area is " <<Area3<<endl;
	//Problem 20
	int f;
	cout<<"Enter f";
	cin>>f;
	int Area4= (pi*f*f)/4;
	cout<<"The Area is " <<Area4<<endl;
	//Problem 21
	int l;
	cout<<"Enter l";
	cin>>l;
	int Area5= (l*l)/pi*4;
	cout<<"The Area is " <<Area5<<endl;
	//Problem 23
		int k,s,m;
	cout<<"Enter k,s,m";
	cin>>k>>s>>m;
	int p=(k+s+m)/2;
	int area0= pi*((k*s*m)/(p*(p-k)*(p-s)*(p-m)));
	int Area6=area0*area0;
	cout<<"The Area is " <<Area6<<endl;
	//problem 31
	int N1;
	cout<<"enter number";
	cin>>N1;
	int o=N1*N1;
	int g=N1*o;
	int w=g*n1;
	cout<<"number^2 = "<<o<<endl;
	cout<<"number^3 = "<<g<<endl;
	cout<<"number^4 = "<<w<<endl;
	//problem 35
	int penices,nickels,dines ,quator,dollers;
	cout<<"enter penices,nickels,dines ,quator,dollers";
	cin>>penices>>nickels>>dines>>quator>>dollers;
	int totalpenices=penices *1+nickels*5+dines*10+quator*25+dollers*100;
	int totaldollars=totalpenices/100;
	cout<<"total penices " <<totalpenices<<"\n"<<"total dollars "<<totaldollars<<endl;
	//problem 39
	int totalbaid;
	cout<<"Enter the total paid :\n";
	cin>>totalbaid;
	int cachpaid;
	cout<<"Enter the cach paid :\n";
	cin>>cachpaid;
	int reminder=cachpaid-totalbaid;
	cout<<"the total to paid back is : "<<reminder<<"\n";
	//problem 40
	int billvalue;
	cout<<"enter the bill value \n";
	cin>>billvalue;
	int totalbilll=billvalue*1.1;
	totalbilll=totalbilll*1.16;
	cout<<"The total bill is :\n"<<totalbilll;
	//problem 42
	int day,hour,minutes,scond;
	cout<<"enter the number of  day,hour,minutes,scond\n";
	cin>>day>>hour>>minutes>>scond;
	int totalscond=day*24*60*60+hour*60*60+minutes*60+scond;
	cout<<"the total sconds "<<totalscond<<" sconds \n";
	//problem 43
	/*int totalsconds;
	cout<<"enter totalsconds\n";
	cin>>totalsconds;
	int scondperday=24*60*60;
	int rem=totalsconds/scondperday;
	int numberofday=floor(rem)*/
	//problem 47
	int loanmonth,monthlyinstallment;
	cout <<"enter loanmonth and monthlyinstallment\n ";
	cin>>loanmonth>>monthlyinstallment;
	int totamonth=loanmonth/monthlyinstallment;
	cout<<"you will need "<<totamonth<<" month\n";
	//problem 48
	int loandmount,howmonymonthes;
	cout<<"enter loandmount howmonymonthes\n";
	cin>>loandmount>>howmonymonthes;
	int menthlyinstallment=loandmount/howmonymonthes;
	cout<<menthlyinstallment;
	return 0;
}