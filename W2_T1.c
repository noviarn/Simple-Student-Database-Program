#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[35];
    float gpa;
};

void clrscr()
{
    system("@cls||clear");
}

int main()
{
    struct Student waldo[20];

    int choose, nmb, number=0, no;
    char temp;

    do
    {
        clrscr();
        printf("Welcome to simple student database (%d/20)\n", number);
        printf("1. Show all students\n");
        printf("2. Input new student\n");
        printf("3. Exit\n");
        printf("Choose: ");
        scanf("%d", &choose);

        switch(choose)
        {
            case 1:
                    clrscr();
                    printf("                List of Student Information                \n");
                    printf("-----------------------------------------------------------------\n");
                    printf("|No. |Name\t\t\t|Major\t\t\t|GPA    |\n");
                    printf("-----------------------------------------------------------------\n");
                    for(nmb=0;nmb<number;nmb++)
                    {
                        printf("|%2d  |%-16s\t\t|%-14s\t\t|%.2f   |\n", nmb+1, waldo[nmb].name, waldo[nmb].major, waldo[nmb].gpa);
                    }
                    printf("\nPress any key to continue");
                    getch();
                    break;
            case 2:
                    if(number>=20)
                    {
                        printf("Database is full");
                        printf("\nPress any key to continue");
                        getch();
                    }
                        else
                        {
                            clrscr();
                            printf("      Insert Student Information      \n");
                            printf("----------------------------------------");
                            printf("\nName   : ");
                            scanf("%c", &temp);
                            scanf("%[^\n]s", waldo[number].name);
                            printf("Major  : ");
                            scanf("%c", &temp);
                            scanf("%[^\n]s", waldo[number].major);
                            printf("GPA    : ");
                            scanf("%f", &waldo[number].gpa);
                            number++;
                            printf("Inserting data");
                            printf("\nNew student added");
                            printf("\nPress any key to continue");
                            getch();
                        }
                    break;
        }
    }while(choose!=3);
    printf("Exist success\n");

    return 0;
}
