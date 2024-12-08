#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exit_on_input ();


int main(void) {
    int a = 6;
    int b = 3;

    int result;
    char input;


    int (*operations[])(int, int) = { add, subtract, multiply, divide, exit_on_input };

    while (1) {
         printf("Operand 'a' : %d | Operand 'b' : %d\n", a, b);
        printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : multiply | 3 : divide | 4 : exit): ");
        
        input = getchar();
        getchar();  

        if (input >= '0' && input <= '4') {
            int operation_index = input - '0';  
            result = operations[operation_index](a, b);
            if (operation_index != 4) {  
                printf("x = %d\n", result);
            }
        } else {
            printf("Error. Please input a number between 0 to 4 as specified!\n");
        }
    }
    return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'b' from 'a'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' by 'b'\n"); return a / b; }
int exit_on_input () { printf("Exiting program ...\n"); exit(0); }