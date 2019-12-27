#include<stdio.h>

int main()

{

    char c;

    int a=0;

    int n=0;

    while((c=getchar())!=EOF&&c!='\n')

    {

        if(c=='a'||c=='A')

        {

            a++;

        }

        if(c=='0')

        {

            n++;

        }

    }

    printf("The numbers of a and A are %d\n",a);

    printf("The numbers of 0 are %d\n",n);

    return 0;

}