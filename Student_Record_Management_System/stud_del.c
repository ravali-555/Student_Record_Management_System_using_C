#include"student.h"

void delete_rec(SRM **ptr){
    printf("\033[35m R/r : Enter roll number delete\n N/n : Enter name to delete\033[0m\n");
    char ch;
    scanf(" %c",&ch);
    if(ch=='R'||ch=='r'){
        int rollno;
        printf("enter roll number to delete\n");
        scanf("%d", &rollno);
        SRM *del=*ptr, *prev;
        if(*ptr==0){
                printf("No records found\n");
        return ;
        }
        while(del){
            if(rollno == del->rollno){
                if(del==*ptr)
                    *ptr=del->next;
                else
                    prev->next=del->next;
                free(del);
                return ;
            }
            prev=del;
            del=del->next;
        }
        printf("Roll number not found\n");
    }
    else if(ch=='N'||ch=='n'){
        int f=0;
        char name[50];
        printf("Enter name to search\n");
        scanf("%s",name);
        SRM *t=*ptr;
        while(t){
            if(strcmp(name,t->name)==0){
                f=1;
                printf("%d\t%s\t%f\n",t->rollno,t->name,t->percentage);
            }
            t=t->next;
        }
        if(f==0){
            printf("%s : not found\n", name);
            return;
        }
        
        int rollno;
        printf("enter roll number to delete\n");
        scanf("%d", &rollno);
        SRM *delname=*ptr, *prev;
        while(delname){
            if(rollno == delname->rollno){
                if(delname==*ptr)
                    *ptr=delname->next;
                else
                    prev->next=delname->next;
                free(delname);
                printf("Successfully deleted\n");
                return ;
            }
            prev=delname;
            delname=delname->next;
        }
        printf("Roll number not found\n");
    }
    
}

void delete_all(SRM **ptr)
{
    SRM *temp;
    while (*ptr != NULL){
        temp = *ptr;
        *ptr = (*ptr)->next;
        free(temp);
    }
    printf("All records deleted successfully\n");
}