#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
    char arr[1024];
    scanf("%s", arr);
    int a[10] = {0};
    for(char *c = arr; *c!=NULL; *c++){
        if(*c - '0' < 9)
            a[*c-'0']++;
    }
    for(int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}
