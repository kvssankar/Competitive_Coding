#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

//input
// 4
// 5 1
// frauD
// 5 1
// FRAUD
// 4 4
// Life
// 10 4
// sTRAWBerry

int main(){
	int t;
	int i,j;
	int n;
	int k;
	cin>>t;
	for(i=0;i<t;i++){
		int h=0;
		int l=0;
		string s;
		cin>>n>>k>>s;
		for(j=0;j<n;j++){
			if(isupper(s[j]))
				h++;
			if(islower(s[j]))
				l++;
		}
		if(k>=l && k>=h)
			cout<<"both"<<endl;
		else if(l>k && h<=k)
			cout<<"chef"<<endl;
		else if(h>k && l<=k)
			cout<<"brother"<<endl;
		else
			cout<<"none"<<endl;

	}
}
