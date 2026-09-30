# Student Record Management System

## 📌 Project Overview

The Student Record Management System is a menu-driven application developed using **C programming**.

The project uses a **singly linked list, dynamic memory allocation, modular programming, searching, sorting, and file handling** to manage student records.

Student records can be added, deleted, modified, displayed, searched, sorted, saved, and loaded from a file.

## 🎯 Objectives

- Manage student records using a singly linked list
- Use dynamic memory allocation
- Add new student records
- Delete student records
- Display student records
- Modify existing records
- Search records by roll number, name, or percentage
- Sort records by name or percentage
- Reverse the linked list
- Save and load records using file handling
- Properly release dynamically allocated memory

## 🛠️ Technologies Used

- C Programming
- Structures
- Pointers
- Singly Linked List
- Dynamic Memory Allocation
- File Handling
- Searching
- Sorting
- Modular Programming
- GCC Compiler

## 📂 Project Structure

```text
Student_Record_Management_System/
│
├── stud_main.c
├── stud_add.c
├── stud_del.c
├── stud_mod.c
├── stud_save.c
├── stud_show.c
├── student.h
├── student
├── student.dat
└── README.md

```markdown
## 📄 Modules

### `stud_main.c`

Contains the main function, menu, and overall program flow.

### `stud_add.c`

Used to add new student records to the linked list.

### `stud_del.c`

Used to delete student records by roll number or name.

### `stud_mod.c`

Used to modify an existing student record.

### `stud_show.c`

Used to display all student records.

### `stud_save.c`

Used for saving and loading student records using `student.dat`.

### `student.h`

Contains the structure definition, function declarations, and function prototypes.

## 👨‍🎓 Student Structure

```c
struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
};
### Structure Members

- `rollno` - Student roll number
- `name` - Student name
- `percentage` - Student percentage
- `next` - Pointer to the next student node

## ⚙️ Features

### 1. Add New Record

A new student node is dynamically created using `malloc()`.

The program:

- Assigns a unique positive roll number
- Accepts student name
- Accepts percentage
- Adds the student to the linked list

### 2. Delete Record

Students can be deleted using:

- Roll number
- Name

If multiple students have the same name, the matching records are displayed so that the required student can be selected.

### 3. Display Records

All student records are displayed in tabular format.

Example:

```text
------------------------------------------------
Roll No.       Name              Percentage
------------------------------------------------
1              Rahul             78.50
2              Priya             85.25
3              Kiran             91.50
------------------------------------------------
