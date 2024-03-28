#include <stdio.h>
#define STAFF_NAME_MAX 20
#define NUMBER_STAFF_MAX 10
struct STAFF
{
    char fullName[STAFF_NAME_MAX];
    int ID;
    char SectionID [10];
    int PHONE;
    int salary;
    int DayOff;
};
struct DOB{
	int day;
	int month;
	int year;
};
void inputStaff(struct STAFF &staff, struct DOB &dob)
{
    printf("Input full name: ");
    fflush(stdin);
    gets(staff.fullName);
    fflush(stdin);
    printf("Input DOB:\n");
    printf(" Input Day : ");
    scanf("%d", &dob.day);
    printf(" Input Month: ");
    scanf("%d",&dob.month);
    printf(" Input Year: ");
    scanf("%d", &dob.year);
    printf("Input ID: ");
    scanf("%d", &staff.ID);
    printf("Input Section ID: ");
    fflush(stdin);
    gets(staff.SectionID);
    fflush(stdin);
    printf("Input phone number: ");
    scanf("%d", &staff.PHONE);
    printf("Input salary: ");
    scanf("%d", &staff.salary);
    printf("Input days off: ");
    scanf("%d", &staff.DayOff);
    
}
void outputStaff(struct STAFF &staff, struct DOB &dob)
{
    printf("  Full name staff: %s\n", staff.fullName);
    printf("  DOB staff: %d-%d-%d\n", dob.day, dob.month, dob.year);
    printf("  ID staff: %d\n", staff.ID);
    printf("  Section ID: %s\n", staff.SectionID);
	printf("  Phone number: %d\n", staff.PHONE);
    printf("  Salary: %d\n", staff.salary);
	printf("  days off: %d\n", staff.DayOff);
    
}

int main()
{
    struct STAFF staff[NUMBER_STAFF_MAX];
    struct DOB dob;
    int N;
    int i;
    do
    {
        printf("Input number  of staff: ");
        scanf("%d", &N);
    } while (N < 0 || N > NUMBER_STAFF_MAX);
    
//    Input Student
    for (i = 0; i < N; i++)
    {
        printf("\nInput staff %d:\n", i + 1);
        inputStaff(staff[i],dob);
    }
    
//    Output Student
    printf("\n____________________________________\n");
    printf("the information of staff:\n");
    for (i = 0; i < N; i++)
    {
        outputStaff(staff[i],dob);
    }
 
    return 0;
}
