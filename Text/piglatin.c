/*Pig Latin - Pig Latin is a game of alterations played on the English language game. 
To create the Pig Latin form of an English word the initial consonant sound is transposed 
to the end of the word and an ay is affixed (Ex.: "banana" would yield anana-bay). 
Read Wikipedia for more information on rules.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

int main(){
    char *str;
    str = (char*)malloc(sizeof(char)*MAX);
    printf("Enter English, Get Pig-Latin! : ");
    fgets(str, MAX, stdin);
    printf("Your Pig-Latin : ");
    char c, f;
    int i;
    for(i = 0 ; c != '\n'; i++){
        c = str[i++];
        f = c;
        while(((c = str[i++]) != ' ') && c != '\n'){
            fputc(c, stdout);
        }
        i--;
        fputc('-', stdout);
        fputc(f, stdout);
        fputc('a', stdout);
        fputc('y', stdout);
        fputc(c, stdout);
    }
    return 0;
}