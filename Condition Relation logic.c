#include<stdio.h>
int main()
{
   // this is from print tutorial
   /*
    printf("Bangladesh");
    */

    // Variables
    /*
     1. Integer 1, 2 , -122 , 123 4 byte
    2. Float 4.6 , 8.5 ,4.0, -2.2 4 byte ( 6 )
    3. Character A,B,a,? 1 byte
    4. String

    */




    /* variables
    int a=2;
    float b=4.5;
    char c='A';

    printf("%d %f %c",a,b,c);
    */

    // arithmetic operator +,-,*,/,%
    // 5%2=1

    // how to take input

    /*
    int a,b,c;
    printf("Enter first numbers\n");
    scanf("%d",&a);
    printf("Enter second numbers\n");
    scanf("%d",&b);
    c=a+b;
    printf("The sum of %d & %d is %d ",a,b,c);
    */



    /* long long int & char & double

    long long int a,b;
    double c;

scanf("%lld %lld %lf",&a,&b,&c);

printf("%lld %lld %lf\n",b,a,c);

    char ch;


    scanf("%c",&ch);
    scanf("%c",&ch);

    printf("%c",ch);
     */

     // Relational Operator

    // <= , >= ,== , !=

    // Logical Operator

    // && , || ,! , & , |

    int a=2;

    if((a==3))
    {
        printf("This is true\n");
    }
    else
    {
        printf("This is false\n");
    }

    int b=4,c=5;
    if(b==3||c==6)
    {
        printf("this is also true\n");
    }
    else
    {
        printf("This is also false\n");
    }


    // e= 011,f = 101  111

    int e=3,f=5;
    printf("%d",e|f);
   return 0;
}
