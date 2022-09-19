#
1
12
123
1234
12345
#


#include<stdio.h>
void main()
{
    int i,j;
    for(i=5;i>=0;i++)
    {
        for(j=1;j>=i;j++)
        {
            printf("%d",i);
        }
        printf("\n")
    }

}