#include <stdio.h>
#define COURSES_MAX 6
#define STUDENT_NAME_MAX 20
#define NUMBER_STUDENT_MAX 35
struct STUDENT
{
    char fullName[STUDENT_NAME_MAX];
    int ID;
    float scores[COURSES_MAX];
    float average;
};
void inputStudent(struct STUDENT &student)
{
    printf("Input full name: ");
    fflush(stdin);
    gets(student.fullName);
    fflush(stdin);
    printf("Input ID: ");
    scanf("%d", &student.ID);
    for (int i = 0; i < COURSES_MAX; i++)
    {
        do
        {
            printf("Input course %d: ", i);
            scanf("%f", &student.scores[i]);
        } while (student.scores[i] < 0 || student.scores[i] > 10);
    }
}
void outputStudent(struct STUDENT &student)
{
    printf("Full name student: %s\n", student.fullName);
    printf("  ID student: %d\n", student.ID);
    printf("  Scores of student:\n");
    for (int i = 0; i < COURSES_MAX; i++)
    {
        printf("    Scores %d = %.2f\n", i, student.scores[i]);
    }
}

int main()
{
    struct STUDENT students[NUMBER_STUDENT_MAX];
    int N;
    int i;
    do
    {
        printf("Input number  of student: ");
        scanf("%d", &N);
    } while (N < 0 || N > NUMBER_STUDENT_MAX);
    
//    Input Student
    for (i = 0; i < N; i++)
    {
        printf("\nInput student %d:\n", i + 1);
        inputStudent(students[i]);
    }
    
//    Output Student
    printf("\n____________________________________\n");
    printf("the information of students:\n");
    for (i = 0; i < N; i++)
    {
        outputStudent(students[i]);
    }
 
    return 0;
}
