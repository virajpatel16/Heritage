
/*4. WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.*/
//square=A = s × s
#include<iostream>
using namespace std;
class demo{
public:
int number;

void square(){
	cout<<"enter the number:"<<endl;
	cin>>number;
	 


}
};
class data :public demo{
	public:
int A;
int s=10;
int S=10;
	void da(){
		 cout<<"enter the A:"<<A<<s*s<<endl;
		 	}
};
class user :public data{
	public:
		int c;
		int a=60;
	void cube(){
		 
		 cout<<"enter the c:"<<a*a*a<<endl;
		
	}

};

main(){
	user u;
	u.cube();
	u.da();
	u.square();
}

