///Write a C program display a given number in words starting from its rightmost digit
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,i ,c=0;
    printf("Enter any number to print in words : ");
    scanf("%d", &num);

    while(num!=0)
    {

        switch(num%10)
        {

           case 0 :
           {
               printf(" Zero");
               break;
           }

           case 1 :
           {
               printf(" One");
               break;
           }

           case 2 :
           {
               printf(" Two");
               break;
           }

           case 3 :
           {
               printf(" Three");
               break;
           }

           case 4 :
           {
               printf(" Four");
               break;
           }

           case 5 :
           {
               printf(" Five");
               break;
           }

           case 6 :
           {
               printf(" Six");
               break;
           }

            case 7 :
           {
               printf(" Seven");
               break;
           }
           case 8 :
           {
               printf(" Eight");
               break;
           }
             case 9 :
           {
               printf(" Nine");
               break;
           }

      }
 /*
         c++;

      if( c == 5)
        break;


     // break;
*/
          num =num/10;

    }


    return 0;
}
