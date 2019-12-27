#include <stdio.h>

#include <math.h>

#include <stdlib.h>

#include <string.h>

 

void reverse(char s[],int i,int len)

{

   int c,j;

 

   j = len - (i + 1);

 

   if(i < j)

   {

        c = s[i];

        s[i] = s[j];

        s[j] = c;

 

        reverse(s,++i,len);

   }

}

 

int main()

{

    char s[100] = "liuzitao";

 

    reverse(s,0,strlen(s));

 

    printf("%s\n",s);

 

    return 0;

 

}