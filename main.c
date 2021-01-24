/*Направете С програма, която да пита за ръста на човек и в зависимост от въведеното число 
да ги квалифицира по следния начин:
До 145 см включително - нисък ръст
От 146 до 180 - среден ръст;
Над 181 см до 205 см. – висок ръст
Извън тези граници – изключително висок ръст*/
#include <stdio.h>
#include <stdbool.h>

void heightAnalyze(unsigned int height);
bool inputValidations(unsigned int height);

int main(void) {
    unsigned int height = 0;
    unsigned char answer = 'n';
    printf("             Enter your height in cm:\n ");
    printf("========================================================\n");
    do {
        scanf(" %d", &height);
        if(inputValidations(height)){
            heightAnalyze(height);
        }
        printf("If you want to continue, please press y, otherwise press \"any button key\":\n");
        scanf(" %c", &answer); 
    } while (answer== 'y' || answer == 'Y');
    
    printf("Thnx for all the fish. Bye!\n");
    printf("--------------------------------------------------------\n");
        
    return 0;
}

bool inputValidations(unsigned int height) {
    if(height <= 0) {
        printf("Invalid input!\n");
        return false;
    } else
        return true;
}

void heightAnalyze(unsigned int height) {
    if (height <= 145) {
        printf("You are a person of short stature.\n\n");
    } else if(height >= 146 && height <= 180) {
        printf("You are an average person in height.\n\n");
    } else if(height >= 181 && height <= 205) {
        printf("You are a tall person!\n\n");
    } else {
        printf("You are extremely tall!\n\n");
    }
}