#include<stdio.h>

int main() {
	int t,i;
    long unsigned d;
    scanf("%lu", &t);
    for(i=0;i<t;i++)
    {
    	scanf("%lu",&d);
    	printf("%lu\n",~d);
    } 
    return 0;
}

