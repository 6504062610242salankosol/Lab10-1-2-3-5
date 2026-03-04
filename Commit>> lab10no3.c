#include <stdio.h>

struct studentRecord 
{
    char name[64];
    int age;
};

void displayRecord(struct studentRecord student[],int n);
void addAge(struct studentRecord *student, int newage);

int main () 
{
    struct studentRecord cs[5];
    int n = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%s %d", cs[i].name, &cs[i].age);
        addAge(&cs[i], cs[i].age);         
    }
    
    displayRecord(cs, n);
    return 0;
}

void addAge(struct studentRecord *student, int newage)
{
    student->age += newage;  
}

void displayRecord(struct studentRecord student[],int n)
{
	 for(int i = 0; i < n; i++)
    {
          printf("Name : %s Age : %d\n", student[i].name, student[i].age);      
    }
     
}
