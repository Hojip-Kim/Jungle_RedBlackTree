#include "rbtree.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {\
    int n = 20;
    key_t* arr = malloc(n*sizeof(key_t));

    rbtree* t = new_rbtree();
    key_t input[10] = {10, 3, 199, 55, 9, 0, 1, 6777, 90, 102};

    for (int i = 0; i < 10; i++) {
        rbtree_insert(t, input[i]);
        rbtree_to_array(t, arr, n);
        for(int j = 0; j < n; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    
}