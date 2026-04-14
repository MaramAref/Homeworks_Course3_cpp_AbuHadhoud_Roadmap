#include<iostream>
using namespace std;
//Homework lesson 39
int main(){
    int gards[3];
    cout<<"Enter your Three Gards of this term\n";
    cin>>gards[0]>>gards[1]>>gards[2];
    float Average=(gards[0]+gards[1]+gards[2])/3;
    cout<<"Your Average is: "<<Average<<endl;
}