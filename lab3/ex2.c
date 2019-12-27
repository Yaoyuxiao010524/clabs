#include<stdio.h>

#include<math.h>

int power(int base, int n){

    int i,p;

    p=1;

    for (i=1;i<=n;++i)

    p = p*base;

    return p;

}

int main()

{

    char s[18] = {0};

    int i = 0;

    char number;

    int sum = 0;

    int a =-1;

    

    printf("please input a positive hexadecimal number(start with 0X/0x)\n");

    while((number = getchar()) != '\n'){

        s[i]=number;

        i++;

        a++;

    }

        if(s[0]!='0'){

        printf("input error\n");

        return 0;}

        if(s[1]!='x'&&s[1]!='X'){

            printf("input error\n");

            return 0;

        }

    i--;

    while(i > 1&&i<8)

    {

            if(s[i]<='9'&&s[i]>='0')

                sum+=(s[i]-'0')*power(16,a-i);

            else if(s[i]>='A'&&s[i]<='F')

                sum+=(s[i]-'A'+10)*power(16,a-i);

            else if(s[i]>='a'&&s[i]<='f')

            sum+=(s[i]+'A'-'a'-'A'+10)*power(16,a-i);

            else{

                printf("input error\n");

                return 0;

                }

            i--;

    }



    if(sum>4294967295){

    printf("the max is 4294967295,your input number  is too big\n");

    }

    else printf("%d\n",sum);

    return 0;

}