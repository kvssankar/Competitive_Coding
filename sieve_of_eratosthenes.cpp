//can handle almost 10million
#include <iostream>
#include <cstring>
using namespace std;
void seive(long int n){
    bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(int p=2;p*p<=n;p++)
		if(prime[p]==true)
			for(int i=p*p;i<=n;i=i+p)
				prime[i]=false;
	
	//print
	for(int i=2;i<=n;i++)
		if(prime[i])
			cout<<i<<endl;
	
}
	

int main(){
	int p=2,i;
	long int n;
	cin>>n;
	seive(n);
	
}