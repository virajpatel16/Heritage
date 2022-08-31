
/*3. WAP to read and print employee information using multiple inheritance.*/

#include<iostream>
using namespace std;

class  emp{
	public:
		int id ;
		char name[20];
		int age;
		int salary;
		
		void info(){
			cout<<"enter the id:"<<endl;
			cin>>id;
			cout<<"enter the name:"<<endl;
			cin>>name[20];
			cout<<"enter the salary:"<<endl;
			cin>>salary;
			
		}
};

class emp1{
	public:
		
		char location;
		char office_name[10];
		
		void fun(){
			
			cout<<"enter the location :"<<endl;
			cin>>location;
			cout<<"enter the office name:"<<endl;
			cin>>office_name[10];
			
			
			
		}
};

class emp2 : public emp ,public emp1{
	public:
		char education;
		char instutute_name[10];
		
	void user(){
		cout<<"enter the education:"<<endl;
		cin>>education;
		cout<<"enter the instutute_name"<<endl;
		cin>>instutute_name[10];
		
		
	}
};

main(){
	
	emp2 e;
	e.fun();
	e.info();
	e.user();
}
