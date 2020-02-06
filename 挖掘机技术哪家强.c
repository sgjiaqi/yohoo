#include<stdio.h>


int main(){
	int n,schID,sum;
	int school[100000] = {0}; 
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d %d",&schID,&sum);
		school[schID] +=sum; 
	}
	int k=0,max=-1;
	for(i=0;i<n;i++){
		if(school[i]>max){
			max = school[i];
			k=i;
		}
	}
	printf("%d %d",k, max);
	
	return 0;
} 
