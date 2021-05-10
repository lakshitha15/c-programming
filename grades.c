#include<stdio.h>
int main() {
  int marks;
  printf("Enter marks: ");
  scanf("%d",&marks);
  if(marks<100 && marks>85)
  {
    printf("Grade A");
  }
  else if(marks>70 && marks<84)
  {
    printf("Grade B");
  }
  else if(marks<69 && marks>55)
  {
    printf("Grade C");
  }
  else if(marks<54 && marks>40)
  {
    printf("Grade D");
  }
  else
  {
    printf("Grade E");
  }
  return 0;
}
