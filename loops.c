#include<stdio.h>
int main()
{ 
  int i,j=0;
  for(i=0;i<=6;i++)
  {
    for(j=0;j<2*i;j++)
      printf("%d",j%2);
    printf("\t");
  }
  return 0;
}
  
