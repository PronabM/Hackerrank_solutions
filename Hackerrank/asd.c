#include <stdio.h>
#include <string.h>


int main()
{
   const char haystack[20] = "11111";
   const char needle[10] = "0000";
   char *ret;

	if(strstr(haystack, needle)!=NULL)
   		printf("The substring is: %s\n",strstr(haystack, needle));
	else
		printf("Fucked");
   
   return(0);
}
