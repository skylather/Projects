/* Fizz Buzz - Write a program that prints the numbers from 1 to 100. But for multiples of three print “Fizz” 
instead of the number and for the multiples of five print “Buzz”. For numbers which are multiples of both three
and five print “FizzBuzz”.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    for(int i = 0; i < 101; i++){
        if(i % 3 == 0){
            if(i % 5 == 0)
                printf("FizzBuzz\n");
            else
                printf("Fizz\n");
            
        }
        else if(i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return 0;
}
