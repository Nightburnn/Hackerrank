#include <stdio.h>

#include <stdlib.h>

#include <string.h>





char* readline();



int main()

{

    char* N_endptr;

    char* N_str = readline();

    int N = strtol(N_str, &N_endptr, 10);

    // Complete the solve function below.

    //code solution

    

    /**

  * One of the easy project

  *step 1: if n is odd, print werid

  *

  *step 2: if n is even and in the inclusive range 2 to 5.

  *print Not weird

  *

  *step 3: if n is even and in the inclusive range of 6 to 20.

  *print weird

  *

  *step 4: if n is even and greater than 20.

  *print not weird

  */

    

    if(N%2==0)

    {

        if(N>=2 && N<=5)

        {

            printf("Not Weird");    

        }

        else if(N>=6 && N<=20)

        {

            printf("Weird");

        }

        else

        {

            printf("Not Weird");

        }    

    }

    else

    {

        printf("Weird");    

    }

        

    if (N_endptr == N_str || *N_endptr != '\0') { exit(EXIT_FAILURE); }



    return 0;

}

//solution end





char* readline() {

    size_t alloc_length = 1024;

    size_t data_length = 0;

    char* data = malloc(alloc_length);



    while (true) {

        char* cursor = data + data_length;

        char* line = fgets(cursor, alloc_length - data_length, stdin);



        if (!line) { break; }



        data_length += strlen(cursor);



        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }



        size_t new_length = alloc_length << 1;

        data = realloc(data, new_length);



        if (!data) { break; }



        alloc_length = new_length;

    }



    if (data[data_length - 1] == '\n') {

        data[data_length - 1] = '\0';

    }



    data = realloc(data, data_length);



    return data;

}


