#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class test{
	char st[100];
	public:
		void read(){
			cout<<"enter string";
			cin>>st;
		}
		void show(){
			cout<<st<<endl;
		}
		test operator +(test tb){
			test tc;
			strcpy(tc.st,strcat(st,tb.st));
			return tc;
		}
};

int main(){
	test t1,t2,t3;
	t1.read();
	t2.read();
	t3=t1+t2;
	t3.show();
}
