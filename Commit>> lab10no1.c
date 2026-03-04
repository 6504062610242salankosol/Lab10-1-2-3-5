#include<stdio.h>
#include<string.h>

typedef struct
{
    char loginname[64];
    char password[64];
} account;

typedef struct
{
    char stdID[20];
    char namesurname[25];
    account stdacc;
} hoststd;

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64], int size);


int main()
{
    hoststd cs[5];
    
    int num=0,n=0;
    
    scanf("%d",&n);
    getchar();
    
    char logindb[5][64] = {"user1","user2","user3","user4","user5"};
    char passdb[5][64]  = {"pass1","pass2","pass3","pass4","pass5"};
    
    for(int i=0;i<n;i++)
    {
        printf("Enter stdID : ");
        fgets(cs[i].stdID, sizeof(cs[i].stdID), stdin);
        cs[i].stdID[strcspn(cs[i].stdID, "\n")] = '\0';
        
        
        printf("Enter surname : ");
        fgets(cs[i].namesurname, sizeof(cs[i].namesurname), stdin);
        cs[i].namesurname[strcspn(cs[i].namesurname, "\n" )] = '\0';
       

        printf("Enter username : ");
        fgets(cs[i].stdacc.loginname, sizeof(cs[i].stdacc.loginname), stdin);
        cs[i].stdacc.loginname[strcspn(cs[i].stdacc.loginname, "\n")] = '\0';
        
        
        
        printf("Enter password : ");
        fgets(cs[i].stdacc.password, sizeof(cs[i].stdacc.password), stdin);
        cs[i].stdacc.password[strcspn(cs[i].stdacc.password, "\n")] = '\0';
        
    }
    
   
   for(int j=0;j<n;j++)
   {
   	    if(checkLogin(cs[j].stdacc.loginname, cs[j].stdacc.password, logindb, passdb, 5))
        {
            num = 1;
            break;
        }
   }
    
	if(num)
	{
		printf("Welcome");
	}
	else
	{
		printf("Incorrect login or password");
	}

    return 0;
}

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64], int size)
{
	for(int i=0;i<size;i++)
	{
		if(strcmp(login, logindb[i]) == 0 && strcmp(passwd, passdb[i]) == 0)
        {
            return 1;   
        }
	
	}
	
	return 0;
}
