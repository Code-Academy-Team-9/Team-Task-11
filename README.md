# 2021010122_groupTask_2

Направете С програма, която да пита за ръста на човек и в зависимост от въведеното число да ги квалифицира по следния начин:
До 145 см включително - нисък ръст
От 146 до 180 - среден ръст;
Над 181 см до 205 см. – висок ръст
Извън тези граници – изключително висок ръст

Код на предишния екип:
#include <stdio.h>

int main() {
    float height;
    do {
        printf("Enter your height: ");
        scanf("%f", &height);
    } while (height <= 0);

    if (height <= 145) {
        printf("Small height\n");
    }
    else if(height >= 146 && height <= 180) {
        printf("Average height\n");
    }
    else if(height >= 181 && height <= 205) {
        printf("High height\n");
    }
    else {
        printf("Extremely high height\n");
    }

    return 0;
}

Какви промени направихме:

I. Добавихме две функции:
    
    void heightAnalyze(unsigned int height);
    bool inputValidations(unsigned int height);

II. Инициализирахме и декларирахме променливи от типа unsigned int, вместо float.
III. Добавихме меню.
IV. Добавихме съобщение, което да се извежда на екарана при невалидно въвеждане от потребителя.
V. Добавихме допълнителна логика, за да продължи програмата, докато потребителя има желание да въвежда стойности.
