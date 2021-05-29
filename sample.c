// Sample.c
#include <stdio.h>
#include <cs50.h>

int main(void){
    int a = get_int("First number ");
    int b = get_int("Second number ");
    float average = ((float)a + (float)b)/2;
    printf("Average is %f\n", average);
}
