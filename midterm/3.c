#include<stdio.h>

int main()

{

    unsigned long long  int bit;

    int b;

    unsigned long long int max;

    unsigned long long int min;

     bit=1;

    b=0;


 while(bit!=0)

        {

      bit=bit<<1;

      b=b+1;

      }

     min=0;

     max=~min;

          printf("unsigned long long int is size of  :%d\n",b);

          printf("the max is: %llu\n",max);

          printf("the min is: %llu\n",min);

}