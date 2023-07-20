#include<stdio.h>
void minutes(int *v);
int main() {
    int x=100;
    minutes(&x);

    printf("Value of x : %d",x);
    return 0;
}

void minutes(int *v) {
    *v-=10;
    /*this pointer used only this function*/
}