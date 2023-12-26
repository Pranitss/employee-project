#include <stdio.h>
#include <stdlib.h>

 int i,n,ch,ch2,k,id;
 char name[100],namen[100];
float sal;
void menu()
{

    printf("  MENU\n");

    printf(" 1: ADD EMPLOYEE\n");
    printf(" 2: SHOW\n");
    printf(" 3: UPDATE\n");
    printf(" 4: SEARCH\n");
    printf(" 0: EXIT\n");

      printf("choice : ");
  scanf("%d",&ch);
}
void insert()
{
    printf("Enter Number of Employee :");
  scanf("%d",&n);

  printf("OK...\n");

  for(i=0;i<n;i++)
  {
  printf("Employee %d data \n",i+1);
  printf("Employed ID : ");
  scanf("%d",&id);
  printf("Name : ");
  scanf("%s",&name);
  printf("Salary : ");
  scanf("%f",&sal);
  printf("\n");
  }
printf(" OK... Done data saved\n");
printf("\n");
}
void show ()
{

menu();
    printf(" All employee data record \n");
printf("Employee ID    Name     Salary  \n");

for (i=0;i<n;i++)
{
    printf("\n");

printf("   %d         %s      %f \n",id,name,sal);

}

    printf("\n");

printf("Ok yes this is all i got...\n");

 printf("\n");

}

void update ()
{
    menu();
    printf("Enter employee ID :");
    scanf("%d",&id);
    printf("OK what you want to update\n");
 printf("1:NAME \n");
 printf("2:SALARY\n");
 printf("choice:");
 scanf("%d",&ch2);

 printf("\n");

printf("Your old name is:");
scanf("%s",&name);

printf("What is your correct name ? \n");
scanf("%s",&namen);

printf("Your new name is %s and your old name is %s\n",namen,name);
printf("Do you really want to change?\n");
printf("1: YES\n");
printf("2: NO\n");
printf("Choise :");
scanf("%d",&ch);
printf("\n");
printf("Ok done name uodate \n");
}
void search()
{
    menu();
    printf("\n");
  k:  printf("Search by Name/ID :");
    scanf("%d",&id);
    printf("OK...\n");
    if(i=1)
    {
    printf("Employee ID : %d\n",id);
    printf("Name :%s\n",namen);
    printf("Salary : %f\n",sal);
    }

    else
    {
        printf("this employee ID is not avablie or please check employee ID ");
        goto k;

    }

    void end()
    {
        menu();

        printf("*** Thank you for your business! We look forward to working with you again\n");
    }

}

struct emp
{
    int c,n,i,ne,id;
    char name[100];
    float sal;

}

;
int main()
{
    int i,n,ch,ch1,ch2;
 struct emp e[100],e1[100],e2,e3;

menu();
insert();
show ();
update();
search();
end();
    return 0;
}
