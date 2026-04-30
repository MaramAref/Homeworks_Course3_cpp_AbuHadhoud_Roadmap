#include<iostream>
//Home Work Lesson 46
using namespace std;
enum enCountrys{Yemen=1,Jordan=2,Egypt=3,sudan=4,somalia=5,ohers};
void ShowCountrysMenue(){
	cout<<"\n***********************************\n";
	cout<<"\n              Countrys                \n";
	cout<<"\n***********************************\n";
	cout<<"1:Yemen \n";
	cout<<"2:Jordan \n";
	cout<<"3:Egypt \n";
      cout<<"4:sudan \n";
      cout<<"5:somalia\n";
      cout<<"6:ohers\n";
      cout<<"*************************************\n";
	
}
enCountrys ReadCountrys(){
	enCountrys CountryNumber;
	int CN;
	cout<<"Please Enter your Country \n";
	cin>>CN;
	return(enCountrys)CN;
	
}
string GitCountrysName(enCountrys Country){
	
	switch(Country)
	case enCountrys::Yemen:  
	return"Yemen";
	break;
	case enCountrys::Jordan: 
	return"Jordan";
	break;
	case enCountrys::Egypt: 
	return"Egypt";
	break;
	case enCountrys::sudan:  
	return"sudan";
	break;
	case enCountrys::somalia: 
	return"somalia";
	break;
	case enCountrys::ohers: 
	return"ohers";
	break;
	default:
	return"Not found";
	
}
int main(){
	ShowCountrysMenue();
	cout<<"Your Country is:"<<GitCountrysName(ReadCountrys());
	return 0;
}