#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("Choose the size of the array : ");
    int array_size;
    scanf("%d%*[^\n]", &array_size);
    printf("\nEnter the min random generated number : ");
    int max_random, min_random;
    scanf("%d%*[^\n]", &min_random);
    printf("Enter the max random generated number : ");
    scanf("%d%*[^\n]", &max_random);
    int n[array_size];
    int size_n = sizeof(n)/sizeof(n[3]);
    srand(time(NULL));
    printf("\n\n{ ");
    for(int i = 0; i < size_n; i++){
        n[i] = (rand() % (max_random - min_random + 1)) + min_random;
        if(i+1 < size_n)
            printf("%d, ", n[i]);
        else
            printf("%d ", n[i]);
    }

    int max, min;
    max = min = n[0];
    for(int i = 0; i < size_n; i++){
        if(max > n[i]){
            max = max;
            if(min > n[i])
                min = n[i];
        }
        else if(max < n[i]){
            max = n[i];
            if(min > n[i])
                min = n[i];
        }
    }
    printf("}\n\nmax = %d\nmin = %d\n", max, min);
    return 0;
}
