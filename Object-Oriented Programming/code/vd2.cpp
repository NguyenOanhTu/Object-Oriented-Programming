#include <stdio.h>
#define COURSES_MAX 30 
#define STUDENT_NAME_MAX 20
#define NUMBER_STUDENT_MAX 10
struct STUDENT
{
    char fullName[STUDENT_NAME_MAX];
    int ID;
    char IDClass[10];
    int PHONE;
    float scores[COURSES_MAX];
};

struct DOB{
	int day;
	int month;
	int year;
};

void inputStudent(struct STUDENT &student, struct DOB &dob)
{
    printf("Input full name: ");
    fflush(stdin);
    gets(student.fullName);
    fflush(stdin);
    printf("Input DOB:\n");
    printf(" Input Day : ");
    scanf("%d", &dob.day);
    printf(" Input Month: ");
    scanf("%d",&dob.month);
    printf(" Input Year: ");
    scanf("%d", &dob.year);
    printf("Input ID: ");
    scanf("%d", &student.ID);
    printf("Input ID Class: ");
    fflush(stdin);
    gets(student.IDClass);
    fflush(stdin);
    printf("Input phone number: ");
    scanf("%d", &student.PHONE);
    for (int i = 0; i < COURSES_MAX; i++)
    {
        do
        {
            printf("Input course %d: ", i);
            scanf("%f", &student.scores[i]);
        } while (student.scores[i] < 0 || student.scores[i] > 10);
    }
}
void outputStudent(struct STUDENT &student, struct DOB &dob)
{
    printf("  Full name student: %s\n", student.fullName);
    printf("  DOB Student: %d-%d-%d\n", dob.day, dob.month, dob.year);
    printf("  ID student: %d\n", student.ID);
    printf("  ID class: %s\n", student.IDClass);
    printf("  Phone number: %d\n", student.PHONE);
	printf("  Scores of student:\n");
    for (int i = 0; i < COURSES_MAX; i++)
    {
        printf("    Scores %d = %.2f\n", i, student.scores[i]);
    }
}

int main()
{
    struct STUDENT students[NUMBER_STUDENT_MAX];
    struct DOB dob;
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
        inputStudent(students[i],dob);
    }
    
//    Output Student
    printf("\n____________________________________\n");
    printf("the information of students:\n");
    for (i = 0; i < N; i++)
    {
        outputStudent(students[i],dob);
    }
 
    return 0;
}
