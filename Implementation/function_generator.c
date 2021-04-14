#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "function_generator.h"

#define VALID   (1)
#define INVALID (0)

int option;

double frequency;
double amplitude;

int zero_crossings;

enum options{ SINE=1, SQUARE, TRIANGLE, SAWTOOTH, EXIT };

void function_generator_menu(void);

int valid_option(int option);

int main(int argc, char *argv[])
{
  printf("\n****Function Generator****\n");
    while(1)
    {
        function_generator_menu();
    }
}
void function_generator_menu(void)
{
    printf("\nAvailable Options\n");
    printf("\n1. Sine\n2. Square\n3. Triangle\n4. Sawtooth\n5. Exit");
    printf("\n\tEnter your choice\n");
   
     // __fpurge(stdin);
    scanf("%d", &option);

    if(EXIT == option)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_option(option))
    {
        printf("\n\tEnter your Frequency in Hz and Amplitude with space between them\n");
        // __fpurge(stdin);
        scanf("%lf %lf", &frequency, &amplitude);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        // __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(option)
    {
        case SINE:
            zero_crossings = generate_sine_wave(frequency, amplitude);
            printf("\n\tNumber of peaks: %d\n",zero_crossings);
            
            // __fpurge(stdin);
            getchar();
            break;
        case SQUARE:
            zero_crossings = generate_square_wave(frequency, amplitude);
            printf("\n\tNumber of peaks: %d\n",zero_crossings);
            
            // __fpurge(stdin);
            getchar();
            break;
        case TRIANGLE:
            zero_crossings = generate_triangular_wave(frequency, amplitude);
            printf("\n\tNumber of peaks: %d\n",zero_crossings);
            
            // __fpurge(stdin);
            getchar();
            break;
        case SAWTOOTH:
            zero_crossings = generate_sawtooth_wave(frequency, amplitude);
            printf("\n\tNumber of peaks: %d\n",zero_crossings);
            
            // __fpurge(stdin);
            getchar();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_option(int option)
{
    /* Check if the operation is a valid operation */
    return ((SINE <= option) && (EXIT >= option)) ? VALID: INVALID;
}
