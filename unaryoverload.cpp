#include <iostream>
#include <conio.h>
using namespace std;

class test{
	int a;
	public:
		test(){
			a=0;
		}
		void operator ++(){
			a++;
		}
		void show(){
			cout<<a;
		}
};

int main(){
	test t;
	++t;
	t.show();
}
