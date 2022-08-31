
/*5. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)*/


#include<iostream>

using namespace std;

class  A{
	public:

		int id;
		char name[20];
		char role;
	
	
		char comp_name[10];
		char address[20];
	
	
		void setter(){
			cout<<"enter the id:"<<endl;
			cin>>id;
			cout<<"enter the name:"<<endl;
			cin>>name[20];
			cout<<"enter the role:"<<endl;
			cin>>role;
		}
};
class B{
	public:
			int salary;
			int experiance;
			
	void setter1(){
		cout<<"enter the salary :"<<endl;
		cin>>salary;
		cout<<"enter the experiance:"<<endl;
		cin>>experiance;
	} 
};
class C:public A{
	public:
		
		void getter(){
			cout<<"your name : "<<endl;
			cout<<"your role :"<<endl;
			cout<<"your salary :"<<endl;
		}
		void setter2(){
			cout<<"enter the comp_name : "<<endl;
			cin>>comp_name[10];
			cout<<"entert the address :"<<endl;
			cin>>address[20];
		}
	
};
class D :public C,public B{
	public:
		char email[25];
		int contact;
		void setter3(){
			cout<<"enter the email:"<<endl;
			cin>>email[25];
			cout<<"enter the contact:"<<endl;
			cin>>contact;
		}
		void getter1(){
			cout<<"your id:"<<endl;
			cout<<"your name : "<<endl;
			cout<<"your role :"<<endl;
			cout<<"your salary :"<<endl;
			cout<<"your the experiance:"<<endl;
			cout<<"your the comp_name : "<<endl;
			cout<<"your the address :"<<endl;
			cout<<"your the email:"<<endl;
			cout<<"your the contact:"<<endl;
			
		}
};
main(){
	
	D obj;
	obj.getter();
	obj.setter();
	obj.setter2();
	obj.setter3();
	obj.getter1();
	obj.setter1();
}









