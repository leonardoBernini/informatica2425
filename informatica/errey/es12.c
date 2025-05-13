#include <stdio.h>
#define dim 3

int main() {
    int v[dim];
    int min;
    int max;

    // Input values into the array
    for (int i = 0; i < dim; i++) {
        scanf("%d", &v[i]);
    }

    // Initialize min and max with the first element of the array
    min = v[0];
    max = v[0];

    // Find the minimum and maximum values
    for (int i = 1; i < dim; i++) { // Start from 1 since we already used v[0]
        if (v[i] < min) {
            min = v[i]; // Use assignment operator
        }
        if (v[i] > max) {
            max = v[i]; // Use assignment operator
        }
    }

    // Print the results
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
