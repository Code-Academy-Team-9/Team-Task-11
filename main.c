/*Направете С програма, която да пита за ръста на човек и в зависимост от въведеното число 
да ги квалифицира по следния начин:
До 145 см включително - нисък ръст
От 146 до 180 - среден ръст;
Над 181 см до 205 см. – висок ръст
Извън тези граници – изключително висок ръст*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void heightAnalyze(unsigned int height);
bool inputValidations(unsigned int height);

int main(void) {
    int height;
        
        printf("Enter your height in cm: ");
        scanf("%d", &height);
        while (inputValidations(height) == false){
            scanf("%d", &height); 
        }
        heightAnalyze(height);

    return 0;
}

bool inputValidations(unsigned int height) {
    if(!isdigit(height)) {
        printf("Invalid input!\n You can use only numbers for your height!\n");
        return false;
    } 
    if(height <= 0) {
        printf("Nobody is born 0 cm?!\n");
        printf("Enter your real height: \n");
        return false;
    }
}

void heightAnalyze(unsigned int height) {
    if (height <= 145) {
        printf("You are a person of short stature.\n");
    } else if(height >= 146 && height <= 180) {
        printf("You are an average person in height.\n");
    } else if(height >= 181 && height <= 205) {
        printf("You are a tall person!\n");
    } else {
        printf("You are extremely tall!\n");
    }
}