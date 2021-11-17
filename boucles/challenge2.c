#include <stdio.h>
int main()
{
    int num, count = 1, i;
    printf("Enter number of rows of Pyramid\n");
    scanf("%d", &num);
    // chek if prime
                int z, flag = 0;
            for (z = 2; z <= count / 2; ++z) {
                // condition for non prime number
                if (num % z == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0){
                       while(count <= num)
                    {
                        i = 1;
                        while( i <= (num - count) )
                        {
                            printf(" ");
                            i++;
                        }

                        i = 0;
                        while(i < (2*count-1))
                        {
                            printf("*");
                            i++;
                        }

                        printf("\n");
                        count++;
                    }
                }
                else{
                    num++;
                    count++;
                }


    return 0;
}