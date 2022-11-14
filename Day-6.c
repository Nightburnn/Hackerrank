#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main() 

{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int num; char str[10000];

    scanf("%d",&num);

    

    for(int i=0;i<num;i++)

    {

       scanf("%s",str);

    rickMorty(str);

   }

}



void rickMorty(char str[])/*truly ran out of function name*/

{

    for(int i=0;i<strlen(str);i++)

    {

        if (i%2 == 0)

        {

            printf("%c",str[i]);

        }

    }

    

    printf(" ");



    for(int i=0;i<strlen(str);i++)

    {

        if (i%2 != 0)

        {

            printf("%c",str[i]);

        }

    } 

    

    printf("\n");

}
