#include<stdio.h>
#include<string.h>

int stringreverse(char strinput[]){
    int l= strlen(strinput);
    for(int i=l-1; i>=0; i--){
        printf("%c",strinput[i]);
    }
    printf("\n");
}
int main(){
    char Originalstr[50];
    printf("Enter string:");
    scanf("%49[^\n]s",Originalstr);
    stringreverse(Originalstr);
}