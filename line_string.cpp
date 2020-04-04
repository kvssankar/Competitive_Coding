#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <sstream>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	stringstream str(s);
	string word;
	while(str>>word){
		cout<<word<<endl;
	}
}
