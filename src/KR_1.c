#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    const char *group = "Группа 11";
    const char *surname = "Степанов";
    const char *name = "Антон";
    const char *patronymic = "Андреевич";

    printf("Контрольная работа 1\n");
    printf("Группа: %s\n", group);
    printf("Студент: %s %s %s\n", surname, name, patronymic);
    
    return 0;
}