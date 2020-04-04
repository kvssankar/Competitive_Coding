#include <iostream>
#include <conio.h>
using namespace std;

class test{
    int a;
    public:
    void get(){
        cin>>a;
    }
    void operator ==(test t){
        if(a==t.a){
            cout<<"equal";
        }
    }
};

int main(){
    test t1,t2;
    t1.get();
    t2.get();
    t1==t2;cout<<"working";
    return 0;
}
