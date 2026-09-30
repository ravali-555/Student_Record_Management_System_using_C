#include"student.h"

void add_rec(SRM **ptr){
    SRM *new,*t;
    int rollno=1;
    new=malloc(sizeof(SRM));
    if(new==NULL){
        printf("\033[31mMemory allocation failled.\n");
        return;
    }
    while(1){
        int found=0;
        t=*ptr;
        while(t != NULL){
            if(t->rollno==rollno){
                found=1;
                break;
            }
            t=t->next;
        }
        if(!found)
            break;
        rollno++;
    }
    new->rollno=rollno;
    printf("Enter student name: ");
    scanf(" %49[^\n]", new->name);
    do{
        printf("Enter percentage: ");
        scanf("%f", &new->percentage);
        if (new->percentage < 0 || new->percentage > 100){
            printf("Percentage must be between 0 and 100.\n");
        }
    } while (new->percentage < 0 || new->percentage > 100);
    new->next = NULL;
    if (*ptr == NULL){
        *ptr = new;
    }
    else{
        t = *ptr;
        while (t->next != NULL){
            t = t->next;
        }
        t->next = new;
    }
    printf("Student added successfully.\n");
    printf("Assigned Roll Number: %d\n", new->rollno);
}