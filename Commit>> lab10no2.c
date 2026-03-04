#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[64];
    int score;
} Student;
void addStudent(char *name, int score);
int main() 
{
    Student cs[5];
    int n;

    scanf("%d", &n);
    getchar(); 


  for (int i = 0; i < n; i++)
	{
	    scanf("%s %d", cs[i].name, &cs[i].score);
	    addStudent(cs[i].name, cs[i].score);
	}
    
    return 0;
}
void addStudent(char *name, int score)
{
    if(score >= 80)
        printf("%s : very good\n", name);
    else if(score >= 60)
        printf("%s : good\n", name);
    else
        printf("%s : keep trying\n", name);
}*/
