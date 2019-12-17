#include<stdio.h>

void f(int a)
{
	int i=0,j,b[32],w,k;
	if(a==0){
		printf("0");
	}else if(a==2){
		printf("2");
	}else if(a==1){
		printf("2(0)");
	}else {
		while(a){
			b[i]=a%2;
			a=a/2;
			i++;
		}
		w=i;
		j=0;
		k=0;
		for(i=w-1;i>=0;i--){
			if(b[i])
			k++;
		}
		for(i=w-1;i>=0;i--){
			if(b[i]){
				j++;
				if(j==1){
					printf("2");
				}else {
					printf("2(");
					f(i);
					printf(")");
				}
				if(j!=k){
					printf("+");
				}
				
			}
		}
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	f(a);
	return 0;
}
