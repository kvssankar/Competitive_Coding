#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n=12345;
    vector <int >v;
	while(n!=0){
		v.push_back(n%10);
		n=n/10;
	}
	for(int i=0;i<(int)v.size();i++){
		cout<<v[i]<<endl;
	}
}
