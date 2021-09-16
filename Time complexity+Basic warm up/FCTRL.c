#include <stdio.h>

int main(void) {
    int t,n,count=0;
    scanf("%d",&t);
    while(t--)
    { 
        scanf("%d",&n);
        int c=5;
        int count=0;
        while(n/c > 0){
            
            count = count + (n/c);
            c=c*5;
        }
        printf("%d\n",count);
    }
	return 0;
}