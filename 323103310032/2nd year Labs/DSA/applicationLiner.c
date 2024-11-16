//Application for liner search(sequential search) in an array of structures of employees.
#include <stdio.h>

struct emp{
    int id;
    char *name;
    float salary;
};

int search(struct emp *e, int n, int id)
{
    for(int i=0; i<n; i++)
    {
        if(e[i].id == id)
        {
            printf("Name: %s", e[i].name);
            printf("Salary: %f", e[i].salary);
            return i;
        }
    }
    printf("EmployeeID not found");
}

void main(){
    int n, id;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct emp e[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter the Employee%d ID: ", i+1);
        scanf("%d", &e[i].id);
        printf("Enter the Employee%d Name: ",i+1);
        scanf("%s", e[i].name);
        printf("Enter the Employee%d Salary: ",i+1);
        scanf("%f", &e[i].salary);
    }
    printf("Enter the EmployeeID to search: ");
    scanf("%d", &id);
    search(e, n, id);
}