#include <stdio.h>
#define LECTURER_NAME_MAX 20
#define NUMBER_LECTURER_MAX 10
struct LECTURER
{
    char fullName[LECTURER_NAME_MAX];
    int ID;
    int PHONE;
    int salary;
    char major[20];
};
struct DOB{
	int day;
	int month;
	int year;
};
void inputLecturer(struct LECTURER &lecturer, struct DOB &dob)
{
    printf("Input full name: ");
    fflush(stdin);
    gets(lecturer.fullName);
    fflush(stdin);
    printf("Input DOB:\n");
    printf(" Input Day : ");
    scanf("%d", &dob.day);
    printf(" Input Month: ");
    scanf("%d",&dob.month);
    printf(" Input Year: ");
    scanf("%d", &dob.year);
    printf("Input ID: ");
    scanf("%d", &lecturer.ID);
    printf("Input phone number: ");
    scanf("%d", &lecturer.PHONE);
    printf("Input salary: ");
    scanf("%d", &lecturer.salary);
    printf("Input major: ");
    fflush(stdin);
    gets(lecturer.major);
    fflush(stdin);
    
}
void outputLecturer(struct LECTURER &lecturer, struct DOB &dob)
{
    printf("  Full name student: %s\n", lecturer.fullName);
    printf("  DOB lecturer: %d-%d-%d\n", dob.day, dob.month, dob.year);
    printf("  ID lecturer: %d\n", lecturer.ID);
    printf("  Phone number: %d\n", lecturer.PHONE);
    printf("  Salary: %d\n", lecturer.salary);
	printf("  major: %s\n", lecturer.major);
    
}

int main()
{
    struct LECTURER lecturer[NUMBER_LECTURER_MAX];
    struct DOB dob;
    int N;
    int i;
    do
    {
        printf("Input number  of lecturer: ");
        scanf("%d", &N);
    } while (N < 0 || N > NUMBER_LECTURER_MAX);
    
//    Input Student
    for (i = 0; i < N; i++)
    {
        printf("\nInput lecturer %d:\n", i + 1);
        inputLecturer(lecturer[i],dob);
    }
    
//    Output Student
    printf("\n____________________________________\n");
    printf("the information of lecturer:\n");
    for (i = 0; i < N; i++)
    {
        outputLecturer(lecturer[i],dob);
    }
 
    return 0;
}
