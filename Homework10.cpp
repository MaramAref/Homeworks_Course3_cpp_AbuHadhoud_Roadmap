#include<iostream>
using namespace std;
//Homework lesson 28
enum color{red=100 ,yellow=10000,black,white,pink,grey,blue,browen,green,orange};
enum name {Maram=100,Manar,Eyad,Jaad};
//enum age{20,50,80};
enum city{Amman ,Yemen ,Egept=44};
enum gender{M=1,F};

int main(){
	color Mycolor;
	Mycolor = yellow;
	name myname;
	myname =Maram;
	cout<<Mycolor<<endl;
	cout<<myname<<endl;
	city mycity=Yemen;
	cout<<mycity<<endl;
	gender mygender=F;
	cout<<mygender<<endl;
	name sistername=Manar;
	cout<<sistername<<endl;
	color color3=black;
	cout<<color3<<endl;
	return 0;
}