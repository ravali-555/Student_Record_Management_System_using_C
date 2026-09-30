#include"student.h"

int main(){
    SRM *headptr=NULL;
    int c;
    char ch;
    while(1){
        main_Menu();
        printf("*********************** enter choice *************************\n");
        scanf(" %c", &ch);
        switch(ch){
            case 'a':
            case 'A':
                add_rec(&headptr);break;
            case 'd':
            case 'D':
                delete_rec(&headptr);break;
            case 's':
            case 'S':
                show_rec(headptr);break;
            case 'm':
            case 'M':
               modify_rec(headptr);break;
            case 'v':
            case 'V':
                save_rec(&headptr);break;
            case 't':
            case 'T':
               sort_rec(headptr);break;
            case 'l':
            case 'L':
               delete_all(&headptr);break;
            case 'r':
            case 'R':
               reverse_list(&headptr);break;
            case 'e':
            case 'E':
                printf("Exit option selected.\n");
                delete_all(&headptr);
                return 0;
            default:
                printf("\033[31mInvalid choice. Please try again.\n");
        }
    }
}
void main_Menu(void){
    printf("\033[31m ===============Main Menu================\n");
    printf("\033[35m a/A : Add new record\n d/D : Delete a record\n s/S : Show the list\n m/M : Modify a record\n v/V : Save records\n e/E : Exit\n t/T : Sort the list\n l/L : Delete all the records\n r/R : Reverse the list \033[0m\n");
}

void reverse_list(SRM **ptr){
    if(*ptr==0){
        printf("No record found\n");
        return;
    }
    int i,c=0;
    SRM *t=*ptr;
    while(t){
        c++;
        t=t->next; 
    }
    SRM **a;
    t=*ptr;
    if(c>1){
        a=malloc(sizeof(SRM *)*c);
        for(i=0;i<c;i++){
            a[i]=t;
            t=t->next;
        }
        for(i=c-1;i>0;i--)
        a[i]->next=a[i-1];
        a[0]->next=0;
        *ptr=a[c-1];
        free(a);
    }
}


void sort_rec(SRM *ptr){
    printf("\033[35m S/s : Sort with name\n");
    printf(" P/p : Sort with percentage\033[0m\n");
    if(ptr==0){
        printf("No records found\n");
        return;
    }
    SRM *p1, *p2,t;
    int i,j,c=0;
    SRM *temp=ptr;
    while(temp){
        c++;
        temp=temp->next; 
    }
    char ch;
    scanf(" %c",&ch);
    if(ch=='S'|| ch=='s'){
       p1=ptr;
        for(i=0;i<c-1;i++){
            p2=p1->next;
            for(j=0;j<c-1-i;j++){
                if(strcmp(p1->name , p2->name)>0){
                    t.rollno=p1->rollno;
                    strcpy(t.name, p1->name);
                    t.percentage=p1->percentage;

                    p1->rollno=p2->rollno;
                    strcpy(p1->name, p2->name);
                    p1->percentage=p2->percentage;

                    p2->rollno=t.rollno;
                    strcpy(p2->name, t.name);
                    p2->percentage=t.percentage;  
                }
                p2=p2->next;
            }
            p1=p1->next;
        }
    }
    else if(ch=='P'|| ch=='p'){
        p1=ptr;
        for(i=0;i<c-1;i++){
            p2=p1->next;
            for(j=0;j<c-1-i;j++){
                if(p1->percentage > p2->percentage){
                    t.rollno=p1->rollno;
                    strcpy(t.name, p1->name);
                    t.percentage=p1->percentage;

                    p1->rollno=p2->rollno;
                    strcpy(p1->name, p2->name);
                    p1->percentage=p2->percentage;

                    p2->rollno=t.rollno;
                    strcpy(p2->name, t.name);
                    p2->percentage=t.percentage;  
                }
                p2=p2->next;
            }
            p1=p1->next;
        }
    }
    else{
        printf("Invalid choice\n");
        return;
    }
    printf("Records sorted successfully\n");
}