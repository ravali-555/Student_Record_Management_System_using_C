#include"student.h"

void modify_rec(SRM *ptr){
    printf("\033[35m R/r : Search by roll number\n");
    printf(" N/n : Search by name\n");
    printf(" P/p : Search by percentage\033[0m\n");
    int roll;
    char name[30];
    float percentage;
    SRM *temp;
    int c=0;
    char ch;
    scanf(" %c",&ch);
    if(ch=='R'||ch=='r'){
        printf("Enter roll number:");
        scanf("%d",&roll);
        temp=ptr;
        while(temp){
            if(temp->rollno==roll){
                printf("%d\t%s\t%f\n",temp->rollno,temp->name,temp->percentage);
                printf("Enter Updated name and percentage\n");
                scanf(" %[^\n]", temp->name);
                scanf("%f",&temp->percentage);
                printf("Record modified successfully\n");
                return;
            }
            temp=temp->next;
        }
        printf("Record not found\n");
    }
    else if(ch=='N'||ch=='n'){
        printf("Enter name ");
        scanf(" %[^\n]", name);
        temp=ptr;
        while(temp){
            if(strcmp(temp->name,name)==0){
                printf("%d\t%s\t%f\n",temp->rollno,temp->name,temp->percentage);
                c++;
            }
            temp=temp->next;
        }
        if(c==0){
            printf("Record not found\n");
            return;
        }
        printf("enter roll number of the record to modify:\n");
        scanf("%d",&roll);
        temp=ptr;
        while(temp){
            if(temp->rollno==roll && strcmp(temp->name, name)==0){
                printf("%d\t%s\t%f\n",temp->rollno,temp->name,temp->percentage);
                printf("Enter Updated name and percentage\n");
                scanf(" %[^\n]", temp->name);
                scanf("%f",&temp->percentage);
                printf("Record modified successfully\n");
                return;
            }
            temp=temp->next;
        }
        printf("Invalid roll number.\n");
    }
    else if(ch=='P'||ch=='p'){
        printf("Enter percentage ");
        scanf("%f", &percentage);
        temp=ptr;
        while(temp){
            if(temp->percentage ==percentage){
                printf("%d\t%s\t%f\n",temp->rollno,temp->name,temp->percentage);
                c++;
            }
            temp=temp->next;
        }
        if(c==0){
            printf("Record not found\n");
            return;
        }
        printf("enter roll number of the record to modify:\n");
        scanf("%d",&roll);
        temp=ptr;
        while(temp){
            if(temp->rollno==roll && temp->percentage==percentage){
                printf("currecnt Details:\n");
                printf("%d\t%s\t%f\n",temp->rollno,temp->name,temp->percentage);
                printf("Enter Updated name and percentage\n");
                scanf(" %[^\n]", temp->name);
                scanf("%f",&temp->percentage);
                printf("Record modified successfully\n");
                return;
            }
            temp=temp->next;
        }
        printf("Invalid roll number.\n");
    }
    else
        printf("Invalid choice\n");
}
