#include<stdio.h>
#include<string.h>
char *longer(char *s1, char *s2);
int main () {
    char str1[]="Geroge";
    char str2[]="Alaninacolthin BEOP";
    char *result ;
    longer(str1,str2);
    result=longer(str1,str2);
    printf("%s longer than !!",result);
    return 0;
}

char *longer(char *s1,char *s2) {
    int count1,count2;
    count1=strlen(s1);
    count2=strlen(s2);
    if(count1 > count2 ) {
        return s1;
    }
    else {
        return s2;
    }

}