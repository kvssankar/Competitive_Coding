#include <stdio.h>
#include <string.h>

struct account{
	char name[50];
	int num[50];
	float balance;
};

struct mall{
	char name[50];
	int num;
	char items[50][50];
	float cost[50];
};

int main(){
	int n,m,i,j;
    struct account a[50];
    struct mall b[50];
    float total=0;
    float bankbalance;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%s",a[i].name);
    	scanf("%d",&a[i].num);
    	scanf("%f",&a[i].balance);
    	if(!strcmp(a[i].name,"Sherley")){
    		bankbalance=a[i].balance;
    	}
    }
    scanf("%d",&m);

    for(i=0;i<m;i++){
    	scanf("%s",b[i].name);
    	scanf("%d",&b[i].num);
    	for(j=0;j<b[i].num;j++){
    		scanf("%s",b[i].items[j]);
    		scanf("%s",b[i].cost[j]);
    	}
    	
    }
    for(i=0;i<m;i++){
    	if(!strcmp(b[i].name,"Sherley")){
    		for(j=0;j<b[i].num;j++){
    			printf("%s\n",b[i].items[j]);
    			total=total+b[i].cost[j];
    		}
    	}
    }
    total=bankbalance-total;
    printf("%.2f",bankbalance);
    return 0;

}