#include <iostream>
#include <conio.h>
using namespace std;

class teacher{
	protected:
	char subject[50];
};

class student1:virtual public teacher{
	protected:
		int marks;
};

class student2:virtual public teacher{
	protected:
		int marks;
};

class parent:public student1,student2{
	public:
		void get(){
			cin>>subject>>student1::marks>>student2::marks;
		}
		void show(){
			cout<<"the subject is "<<subject;
			cout<<"student1 marks are "<<student1::marks;
			cout<<"student2 marks are "<<student2::marks;
		}
};

int main(){
	parent p;
	p.get();
	p.show();
}
