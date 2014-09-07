/*This is a program to display all even numbers from one to hundred on one single line*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
            printf("%d\n",i);
    }
    
    return 0;
}
