#include <stdio.h>

int main()
{
  int usern;
  int i, Number, count;
  printf("enter an integer : ");
  scanf("%d",&usern);
  printf(" Prime Number from 1 to 100 are: \n");
  for(Number = 1; Number <= usern; Number++)
  {
    count = 0;
    for (i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && Number != 1 )
    {
	printf(" %d ", Number);
    }
  }
  return 0;
}