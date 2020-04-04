#include <iostream>
#include <conio.h>
using namespace std;

class student{
	int id;
	char name[50];
	public:
		friend void operator >>(istream &in,student &s){
			cout<<"enter id,name";
			in>>s.id>>s.name;
		}
		friend void operator <<(ostream &out,student s){
			out<<s.id<<endl<<s.name;
		}
		
	
};

int main(){
	student s;
	cin>>s;
	cout<<s;
}
