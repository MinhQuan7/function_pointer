#include<stdio.h>
#include<string.h>
void isUp(char *input);
int main () {
    char type[64];
    printf("Write your name: ");
    fgets(type,64,stdin);
    puts(type);
    isUp(type);
    printf("Your name is : ");
    puts(type);
    return 0;
}
void isUp(char *input) {
    int x;
    for(x=0;x<*input;x++) { /*must has '*' */
        *input=toupper(*input);    /*toupper characters*/
        input++;/*each loop : input will upper 1 character to end*/
        
    }
}
