#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int >v;
	
	v.push_back(10);
	v.push_back(2);
	v.push_back(130);
	v.push_back(17);
	v.push_back(98);
	//v.begin() return a pointer pointing first element
	
	//sort
	sort(v.begin(),v.end());
	//size
	int k=(int)v.size();
	//print
	for(int i=0;i<k;i++){
		cout<<v[i]<<endl;
	}
}
