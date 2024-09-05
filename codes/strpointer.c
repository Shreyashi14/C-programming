#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[20]="GeeksForGeeks";
    char* ptr=str;
    while(*ptr != '\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}




