#include< stdio.h>
#include< math.h>
#define MAX 100
#define MUMBER '0'
int getop ( char s[] );  
void push (double f);   
double pop (void);       
void clear( void);

int main (){
	int type;
	double  op1,op2;
	char s[MAXOP];

	while ( ( type = getop( s )) != EOF ){
		switch (type)
		{
			case NUMBER:
				push( atof (s) ); 
				break;
			
			case '+':
				push ( pop () + pop ());
				break;

			case '*':
				push (pop() * pop() );
				break;

			case '-':
				op2 = pop();
				push ( pop() - op2);
				break ;
			
			case '/':
				op2 = pop();
				if( op2 != 0.0)
					push (pop() / op2 );
				else printf("error : zero divisor\n");
				break;
			
			case '%':
				op2 = pop();
				if( op2 != 0)
					push (fmod (pop(),op2));
				else printf("error : zero divisor\n");
				break;

                                                case '?':
				op2 = pop();
				 printf("\t%.8g\n",op2);
                                                                 push (op2);
				break;
                                                case 'c':
				clear();
				break;
                                                 case 'd':
				op2 = pop();
				 push (op2);
			                 push (op2);
				break;
                                                  case 's':
				op1 = pop();
				op2 = pop();
				 push (op1);
			                 push (op2);	
				 break;
		
			case '\n':
				printf("\t%.8g\n",pop());
				break;
			default:
				printf("error : unknown commond %s\n",s);
				break;
		}
	}
	return 0;
}
void clear( void)
	{	
	sp=0;
	}                