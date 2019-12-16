特殊回文数
#include<stdio.h> 
int main(){
	int n;
	long i,j1,j2;
	scanf("%d",&n);
	for(i=10000;i<100000;i++)
	{
		int sum1;
		int d1,d2,d3,d4,d5;
		d1=i%10;
		d2=i/10%10;
		d3=i/100%10;
		d4=i/1000%10;
		d5=i/10000%10;
		sum1=d1+d2+d3+d4+d5;
		j1=d1*10000+d2*1000+d3*100+d4*10+d5;
		if(i==j1&&sum1==n){
			printf("%d\n",i);
		}
	}
	for(i=100000;i<1000000;i++){
		int sum2;
		int d1,d2,d3,d4,d5,d6;
		d1=i%10;
		d2=i/10%10;
		d3=i/100%10;
		d4=i/1000%10;
		d5=i/10000%10;
		d6=i/100000%10;
		sum2=d1+d2+d3+d4+d5+d6;
		j2=d1*100000+d2*10000+d3*1000+d4*100+d5*10+d6;
		if(i==j2&&sum2==n){
			printf("%d\n",i);
		}
	}
	return 0;
} 
