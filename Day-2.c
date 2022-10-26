/**This seemed complicated at first but read the                                                                                        
 * instructions to help you understand better                                                                                           
 * STEP 1: Tip = Mealcost * tip percent / 100                                                                                           
 * Tip = 12 * 20 / 100 = 2.4                                                                                                            
 * Step 2 : Tax = mealcost * tax percent / 100                                                                                          
 * Tax = 12 * 8 / 100 = 0.96                                                                                                            
 * Step 3: Total = Mealcost + Tip +Tax.                                                                                                 
 * Total = 12 + 2.4 +0.96 = 15.36                                                                                                       
 * Total = round(Total) = 15.36 So final Bill is 15 Dollar paid by customers                                                            
 */
#include <assert.h>

#include <limits.h>

#include <math.h>

#include <stdbool.h>

#include <stddef.h>

#include <stdint.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>



char* readline();



// Complete the solve function below.

void solve(double meal_cost, int tip_percent, int tax_percent) 

{

    double tip=meal_cost*tip_percent/100;

    double tax=meal_cost*tax_percent/100;

    int totalCost=(int)round(meal_cost+tip+tax);    

    printf("%d",totalCost);

}



int main()

{

    char* meal_cost_endptr;

    char* meal_cost_str = readline();

    double meal_cost = strtod(meal_cost_str, &meal_cost_endptr);



    if (meal_cost_endptr == meal_cost_str || *meal_cost_endptr != '\0') 

    { 

        exit(EXIT_FAILURE); 

    }



    char* tip_percent_endptr;

    char* tip_percent_str = readline();

    int tip_percent = strtol(tip_percent_str, &tip_percent_endptr, 10);



    if (tip_percent_endptr == tip_percent_str || *tip_percent_endptr != '\0') 

    { 

        exit(EXIT_FAILURE); 

    }



    char* tax_percent_endptr;

    char* tax_percent_str = readline();

    int tax_percent = strtol(tax_percent_str, &tax_percent_endptr, 10);



    if (tax_percent_endptr == tax_percent_str || *tax_percent_endptr != '\0') 

    { 

        exit(EXIT_FAILURE); 

    }



    solve(meal_cost, tip_percent, tax_percent);



    return 0;

}



char* readline() {

    size_t alloc_length = 1024;

    size_t data_length = 0;

    char* data = malloc(alloc_length);



    while (true) {

        char* cursor = data + data_length;

        char* line = fgets(cursor, alloc_length - data_length, stdin);



        if (!line) { break; }



        data_length += strlen(cursor);



        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') 

        { 

            break; 

        }



        size_t new_length = alloc_length << 1;

        data = realloc(data, new_length);



        if (!data) { break; }



        alloc_length = new_length;

    }



    if (data[data_length - 1] == '\n') 

    {

        data[data_length - 1] = '\0';

    }



    data = realloc(data, data_length);



    return data;

}


