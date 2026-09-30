#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
} SRM;

void main_Menu(void);

void add_rec(SRM **);
void delete_rec(SRM **);
void show_rec(SRM *);
void modify_rec(SRM *);
void save_rec(SRM **
);
void load_rec(SRM **);
void sort_rec(SRM *);
void delete_all(SRM **);
void reverse_list(SRM **);

#endif