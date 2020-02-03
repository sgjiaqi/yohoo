//E:\Program Files\Gitck\yohoo
#include<stdio.h>
int main(){
	int i;
	int j;
	i=j=1;
	int c;
	long a,b;
	long n;
	scanf("%ld",&n);
	for(c=0;c<n;c++){
		b=i%10007;
		a=j;
		j=(i+j)%10007;
		i=a;
	}

	printf("%ld",b);
	return 0;
}
