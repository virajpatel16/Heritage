/*2. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function. 
Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and giving some extra 
information (e.g. place of origin).*/

#include<iostream>
using namespace std;

class animal{
	public:
		int age;
	
	void set(){
		cout<<"enter the age:"<<endl;
		cin>>age;
		
		
	}
};

class Zebra:public animal{
	public:
	int age;
	char name[10];
	void set1(){
	
	cout<<"enter the age :"<<endl;
	cin>>age;
	cout<<"enter the name :"<<endl;
	cin>>name[10];
}
	
};
class Dolphin:public Zebra{
	public:
		
	int age;
	char name[10];
	void set3(){
		
	
	cout<<"enter the age :"<<endl;
	cin>>age;
	cout<<"enter the name :"<<endl;
	cin>>name[10];
}
};

main(){
	
	Dolphin D;
	D.set();
	D.set1();
	D.set3();
}



