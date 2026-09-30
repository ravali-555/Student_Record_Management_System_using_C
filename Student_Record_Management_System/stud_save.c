#include"student.h"

void save_rec(SRM **ptr){
    printf("\033[35m p/P : Save the records to the file\n l/L : Load records from the file\033[0m\n");
    char ch;
    scanf(" %c",&ch);
    if(ch=='p'||ch=='P'){
        if(*ptr==0){
            printf("No recods found\n");
            return;
        }
        FILE *fp;
        fp=fopen("student.dat","w");
        SRM *p=*ptr;
        while(p){
            fprintf(fp,"%d\t%s\t%.2f\n",p->rollno, p->name, p->percentage);
            p=p->next;
        }
        printf("data saved in file\n");
        fclose(fp);
    }
    else if(ch=='l'||ch=='L'){
        SRM *new, *last;
        FILE *fp;
        fp=fopen("student.dat","r");
        if(fp==0){
            printf("Student database not found\n");
            return;
        }
        while(1){
            new=malloc(sizeof(SRM));
            if(fscanf(fp,"%d\t%s\t%f",&new->rollno,new->name,&new->percentage) != 3){
                free(new);
                break;
            }
            new->next=0;
            if(*ptr==0)
                *ptr=new;
            else{
                last=*ptr;
                while(last->next)
                    last=last->next;
                last->next=new;
            }
        }
        fclose(fp);
        printf("data loaded from file\n");
    }
}
