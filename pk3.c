#include <stdio.h>
#include <time.h>

int main() {
    int i;
    clock_t start, end;
    double cpu_time_used;

    // Start the timer
    start = clock();

    // Loop from 0 to 999
    for (i = 0; i < 100000000; i++) {
        printf("%d\n", i);
    }

    // End the timer
    end = clock();
    
    // Calculate the time taken
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    // Print the time taken
    printf("Time taken: %f seconds\n", cpu_time_used);

    return 0;
}
