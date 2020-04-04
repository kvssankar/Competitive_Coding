#include <iostream>
// important
#include <sstream>

using namespace std;

int main(){
    int n=1234;
    //int to string
    ostringstream str1;
    str1<<n;
    string s=str1.str();
    cout<<s[2];
}
