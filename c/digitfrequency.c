#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char **argv){
    char s[1024];
    scanf("%[^\n]%*c",s);
    for(char *c=s; *c!=NULL; *c++){
        if(*c == ' ')
            *c = '\n';
    }
    printf("%s", s);
     return 0;
}