//Bubble Soerting a structure of students based on their roll number

#include<stdio.h>


struct Student {

    int roll;
    char name[100]; 
}temp;

void bubbleSort(struct Student *s, int n) {

    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(s[j].roll > s[j+1].roll) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

int main() {
    FILE *file = fopen("input.txt", "r");
    int n;
    printf("Enter the number of students: ");
    fscanf(file,"%d", &n);

    struct Student s[n];
    for(int i=0; i<n; i++) {
        printf("Enter the roll number of student %d: ", i+1);
        fscanf(file,"%d", &s[i].roll);
        printf("Enter the name of student %d: ", i+1);
        fscanf(file,"%s", s[i].name);
    }fclose(file);
    file = fopen("output.txt", "w");
    bubbleSort(s, n);
    printf("The sorted list of students is: \n");
    for(int i=0; i<n; i++) {
        fprintf(file,"Roll number: %d \tName: %s\n", s[i].roll, s[i].name);
        fprintf(file,"Roll number: %d \tName: %s\n", s[i].roll, s[i].name);
    }

    fclose(file);
    return 0;
}