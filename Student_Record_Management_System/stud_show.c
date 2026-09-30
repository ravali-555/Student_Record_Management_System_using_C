#include"student.h"

void show_rec(SRM *ptr){
    if(ptr==0){
        printf("No records found\n");
        printf("****************************\033[0m\n");
        return ;
    }
    printf("\033[31mRollno\tName\tPercentage\n");
    printf("\033[34m------------------------------------\n");

    while(ptr){
        printf("%d\t%s\t%.2f\n",ptr->rollno, ptr->name,ptr->percentage);
        ptr=ptr->next;
    }
}