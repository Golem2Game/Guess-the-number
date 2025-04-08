#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));  // Use current time as seed

    // Generate random number between 1 and 200
    int num = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int gussed_number;

    
    do{

        printf("Guess the number: ");
        scanf("%d", &gussed_number);
        if(gussed_number>num){
            printf("Lower number please!\n");
        }
        
        else if(gussed_number<num){
            printf("Higher number please!\n");
        }
        else("Congrats!!\n");
        no_of_guesses++;
    }while(gussed_number!=num);

    printf("You gussed the number in %d guesses\n", no_of_guesses);

    return 0;
}
