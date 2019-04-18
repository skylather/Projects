/* Reverse a String - Enter a string and the program will reverse it and print it out.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char * str;
    char temp;
    str = (char*)malloc(sizeof(char)*20);
    printf("Enter a String to reverse : ");
    scanf("%s", str);
    int size = strlen(str);
    for(int i = 0; i < size / 2; i++){
        temp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = temp;
    }
    printf("Reversed string : %s\n", str);
    return 0;
}