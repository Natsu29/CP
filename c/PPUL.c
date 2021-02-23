#include <stdio.h>
#include <stdlib.h>


int main(int argc, char ** argv){
    int n; scanf("%d", &n);
    int dim = n * 2 - 1;
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            int m = i < j ? i :j;
            m = m < dim - i ? m : dim - i - 1;
            m = m < dim-j-1 ? m : dim -j - 1;
            printf("%d ", n - m);
        }
        printf("\n");
    }
}