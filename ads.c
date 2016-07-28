#include<stdio.h>

int printSmiles(int smiles) {   
  int ans=0;
  int i; 
  for( i=smiles-1;i>0;i--){ 
    while(smiles%i==0){ 
      ans=(smiles/i); 
      ans+=i;
	  break; 
    } 
  } 
  return ans; 
}

int main(){
  int s;
  scanf("%d",&s);
  printf("%d\n",printSmiles(s));
  return 0;
}

