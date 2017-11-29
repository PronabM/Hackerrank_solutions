/*input
5
1 2 3 4 5
*/


#include<stdio.h>

int main() {
	int t,i;
    long unsigned d;
    scanf("%lu", &t);
    for(i=0;i<t;i++)
    {
    	scanf("%lu",&d);
    	printf("%lu\n",d);
    } 
    return 0;
}

