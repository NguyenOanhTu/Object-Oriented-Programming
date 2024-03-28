#include <stdio.h>

struct PET
{
    char name[20];
    float weight;
    char species[20];
    char color[10];
};
struct DOB{
	int day;
	int month;
	int year;
};
void inputPet(struct PET &pet, struct DOB &dob)
{
    printf("Input name pet: ");
    fflush(stdin);
    gets(pet.name);
    fflush(stdin);
    printf("Input DOB:\n");
    printf(" Input Day : ");
    scanf("%d", &dob.day);
    printf(" Input Month: ");
    scanf("%d",&dob.month);
    printf(" Input Year: ");
    scanf("%d", &dob.year);
    printf(" Input Weight: ");
    scanf("%f", &pet.weight);
    printf("Input Species: ");
    fflush(stdin);
    gets(pet.species);
    fflush(stdin);
    printf("Input Color: ");
    gets(pet.color);
}

void outputPet(struct PET &pet,struct DOB &dob)
{
    printf("Name Pet: %s\n", pet.name);
    printf("DOB Pet: %d-%d-%d\n", dob.day, dob.month, dob.year);
    printf("Weight: %f\n",pet.weight);
    printf("Species: %s\n",pet.species);
    printf("Color: %s\n",pet.color);
}

int main()
{
    struct PET pet[20];
    struct DOB dob;
    int N;
    int i;

    printf("Input number  of Pet: ");
    scanf("%d", &N);

    
//    Input Student
    for (i = 0; i < N; i++)
    {
        printf("\nInput Pet %d:\n", i + 1);
        inputPet(pet[i],dob);
    }
    
//    Output Student
    printf("\n____________________________________\n");
    printf("the information of Pet:\n");
    for (i = 0; i < N; i++)
    {
        outputPet(pet[i],dob);
    }
 
    return 0;
}
