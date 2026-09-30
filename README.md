# Student Record Management System using C

## 📌 Project Overview

The **Student Record Management System** is a menu-driven C programming mini project designed to manage student records efficiently using a **singly linked list**, **dynamic memory allocation**, **searching**, **sorting**, **file handling**, and **modular programming**.

The application allows users to add, display, modify, delete, sort, reverse, and save student records. Student data can be stored in a file named `student.dat` and loaded again when the application starts.

The project demonstrates important C programming concepts including structures, pointers, linked lists, dynamic memory allocation, functions, file handling, string handling, searching, sorting, and memory management.

---

## 🎯 Objectives

The main objectives of this project are:

* To implement a student record management system using C.
* To understand and implement a **singly linked list**.
* To use **dynamic memory allocation** with `malloc()`.
* To properly release allocated memory using `free()`.
* To implement searching using different student attributes.
* To implement sorting of linked-list records.
* To implement linked-list reversal using pointers.
* To store and retrieve records using file handling.
* To divide the program into multiple source modules.
* To handle invalid input and empty-list conditions.
* To practice modular and structured C programming.

---

## ✨ Features

The system provides the following features:

* ➕ Add a new student record
* 🗑️ Delete a record by roll number
* 🔎 Delete a record by name
* 👁️ Display all student records
* ✏️ Modify a record by roll number
* 🔎 Modify a record by name
* 📊 Modify a record by percentage
* 💾 Save records to `student.dat`
* 📂 Load saved records when the program starts
* 🔤 Sort records alphabetically by name
* 📈 Sort records by percentage in descending order
* 🔄 Reverse the singly linked list
* 🧹 Delete all records from memory
* 🚪 Save and exit
* 🚪 Exit without saving
* ✅ Input validation
* 🧠 Dynamic memory management

---

## 🛠️ Technologies Used

| Technology / Concept      | Usage                                            |
| ------------------------- | ------------------------------------------------ |
| C Programming             | Main programming language                        |
| Structures                | Store student information                        |
| Pointers                  | Manage linked-list nodes                         |
| Singly Linked List        | Store student records dynamically                |
| Dynamic Memory Allocation | Create nodes using `malloc()`                    |
| `free()`                  | Release dynamically allocated memory             |
| File Handling             | Save and load student records                    |
| Searching                 | Find records by roll number, name, or percentage |
| Sorting                   | Sort by name or percentage                       |
| Modular Programming       | Divide functionality into multiple source files  |
| String Handling           | Manage student names                             |
| Input Validation          | Handle invalid input and edge cases              |

---

## 📂 Project Structure

The project can be organized into the following files:

```text
Student_Record_Management_System/
│
├── stud_main.c
├── stud_add.c
├── stud_del.c
├── stud_show.c
├── stud_mod.c
├── stud_save.c
├── student.h
├── student.dat
├── student
└── README.md
```

### File Description

| File          | Responsibility                                              |
| ------------- | ----------------------------------------------------------- |
| `stud_main.c` | Main function, menu and overall program flow                |
| `stud_add.c`  | Adding new student records                                  |
| `stud_del.c`  | Deleting student records                                    |
| `stud_show.c` | Displaying student records                                  |
| `stud_mod.c`  | Modifying existing student records                          |
| `stud_save.c` | Saving and loading records using file handling              |
| `student.h`   | Structure definitions, declarations and function prototypes |
| `student.dat` | File used to store saved student records                    |
| `student`     | Final executable                                            |
| `README.md`   | Project documentation                                       |

> The module names above represent the intended responsibilities of the project. If the actual source files use different names, the same functional responsibilities should be maintained.

---

## 🧩 Data Structure

Each student record is represented using the following structure:

```c
struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
};
```

### Structure Members

| Member       | Data Type          | Description                |
| ------------ | ------------------ | -------------------------- |
| `rollno`     | `int`              | Unique student roll number |
| `name`       | `char[50]`         | Student name               |
| `percentage` | `float`            | Student percentage         |
| `next`       | `struct student *` | Pointer to the next node   |

The `next` pointer connects one student node to another and forms the **singly linked list**.

Conceptually:

```text
+---------+---------+------------+------+
| Roll No |  Name   | Percentage | Next |
+---------+---------+------------+------+
                                      |
                                      v
                              Next Student Node
```

---

## 📋 Menu Options

The application provides the following main menu:

```text
******** STUDENT RECORD MENU ********

a/A : Add new record
d/D : Delete a record
s/S : Show the list
m/M : Modify a record
v/V : Save records
e/E : Exit
t/T : Sort the list
l/L : Delete all the records
r/R : Reverse the list
```

### Menu Description

| Option | Operation  | Description                             |
| ------ | ---------- | --------------------------------------- |
| `a/A`  | Add        | Add a new student record                |
| `d/D`  | Delete     | Delete a student by roll number or name |
| `s/S`  | Show       | Display all student records             |
| `m/M`  | Modify     | Modify a student record                 |
| `v/V`  | Save       | Save records into `student.dat`         |
| `e/E`  | Exit       | Save and exit or exit without saving    |
| `t/T`  | Sort       | Sort records by name or percentage      |
| `l/L`  | Delete All | Delete all nodes from memory            |
| `r/R`  | Reverse    | Reverse the linked list                 |

The menu continues to appear until the user chooses the exit option.

---

## ➕ Add Student

When the user selects `a/A`, a new student record is created.

### Process

1. Dynamically allocate memory for a new node using `malloc()`.
2. Find the smallest positive integer that is not currently used as a roll number.
3. Assign the roll number to the new student.
4. Read the student's name.
5. Read the student's percentage.
6. Validate the input.
7. Insert the new node into the singly linked list.

### Roll Number Allocation

Roll numbers must be unique.

For example, if the existing roll numbers are:

```text
1  2  4  5
```

The next available roll number is:

```text
3
```

The system should assign the smallest positive integer that is not already being used.

---

## 🗑️ Delete Student

The system supports deletion using:

```text
R/r : Delete using roll number
N/n : Delete using name
```

### Delete by Roll Number

The program:

1. Reads the roll number.
2. Searches the linked list.
3. Identifies the corresponding node.
4. Unlinks the node from the list.
5. Releases its memory using `free()`.
6. Displays an appropriate confirmation message.

If the roll number does not exist, an appropriate message is displayed.

### Delete by Name

The program searches for matching names.

If multiple students have the same name, the matching records and their roll numbers are displayed.

The user can then select the required roll number for deletion.

This avoids accidentally deleting the wrong record when duplicate names exist.

---

## 👁️ Display Students

When `s/S` is selected, the complete student list is displayed in a tabular format.

Example:

```text
------------------------------------------------------------
Roll No.        Name              Percentage
------------------------------------------------------------
1               Rahul             78.50
2               Priya             85.25
3               Anjali            91.00
------------------------------------------------------------
```

If the linked list is empty, the program displays an appropriate message such as:

```text
No student records available.
```

---

## ✏️ Modify Student

The modification operation supports three search methods:

```text
R/r : Search by roll number
N/n : Search by name
P/p : Search by percentage
```

### Modify by Roll Number

The program:

1. Reads the roll number.
2. Searches for the student.
3. Displays the existing information.
4. Allows the user to enter a new name.
5. Allows the user to enter a new percentage.
6. Keeps the existing roll number unchanged.

### Modify by Name

If more than one student has the same name:

1. Display all matching records.
2. Display their roll numbers.
3. Ask the user to select the required roll number.
4. Modify the selected record.

### Modify by Percentage

If multiple records have the same percentage:

1. Display all matching records.
2. Display their roll numbers.
3. Ask the user to select the required roll number.
4. Modify the selected record.

If no matching record is found, an appropriate message is displayed.

---

## 💾 File Handling

Student records are stored in:

```text
student.dat
```

The file allows records to be preserved after the program terminates.

### Saving Records

When the user selects:

```text
v/V
```

the current student records are saved into `student.dat`.

### Loading Records

When the application starts:

* If `student.dat` exists, the saved records are loaded into the linked list.
* If `student.dat` does not exist, the program starts with an empty list.

This allows student records to be restored when the application is started again.

---

## 🚪 Exit Options

When the user selects:

```text
e/E
```

the program provides two choices:

```text
S/s : Save and exit
E/e : Exit without saving
```

### Save and Exit

The program:

1. Saves the current records to `student.dat`.
2. Releases all dynamically allocated nodes.
3. Terminates.

### Exit Without Saving

The program:

1. Does not save the current changes.
2. Releases all dynamically allocated nodes.
3. Terminates.

---

## 🔃 Sorting

The project supports sorting the linked list using:

```text
N/n : Sort with name
P/p : Sort with percentage
```

### Sort by Name

Student records are sorted alphabetically according to the student name.

Example:

```text
Before:

Rahul
Anjali
Priya

After:

Anjali
Priya
Rahul
```

### Sort by Percentage

Student records are sorted by percentage in **descending order**.

Example:

```text
Before:

Rahul     78.50
Priya     85.25
Anjali    91.00

After:

Anjali    91.00
Priya     85.25
Rahul     78.50
```

The displayed linked-list order should reflect the selected sorting operation.

---

## 🔁 Reverse Linked List

The application can reverse the singly linked list using pointer manipulation.

### Before Reversal

```text
1 -> 2 -> 3 -> 4 -> NULL
```

### After Reversal

```text
4 -> 3 -> 2 -> 1 -> NULL
```

The reversal operation changes the `next` pointers of the existing nodes.

No second set of nodes is created just to reverse the list.

This demonstrates practical pointer manipulation in C.

---

## 🧹 Delete All Records

The `l/L` option deletes every student node from the linked list.

### Process

1. Start from the head node.
2. Store the address of the next node.
3. Free the current node.
4. Move to the next node.
5. Continue until the complete list has been processed.
6. Set the head pointer to `NULL`.
7. Display a confirmation message.

### Important

Deleting all records from memory does **not** automatically delete `student.dat`.

The file is modified only when the user explicitly performs a save operation.

---

## 🔐 Input Validation

The project handles the following validation requirements:

* Percentage must be between `0.00` and `100.00`.
* Roll numbers must be positive.
* Roll numbers must be unique.
* Student name must not be empty.
* Invalid menu choices should be handled properly.
* Attempting to delete a non-existing record should be handled.
* Attempting to modify a non-existing record should be handled.
* Empty linked-list situations should be handled.

Example:

```text
Percentage: 120

Invalid percentage.
Please enter a value between 0 and 100.
```

---

## 🧮 Memory Management

Dynamic memory management is an important part of this project.

### Dynamic Allocation

New student nodes are created dynamically using:

```c
malloc()
```

This allows the linked list to grow according to the number of records.

### Memory Deallocation

When a node is deleted, its memory is released using:

```c
free()
```

### Program Termination

Before the program terminates, all remaining dynamically allocated nodes should be released.

Proper memory management helps avoid:

* Memory leaks
* Invalid pointer access
* Unnecessary memory usage

---

## 🧠 Concepts Demonstrated

This project demonstrates several important C programming concepts.

### 1. Structures

Structures are used to group student-related information.

```c
struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
};
```

### 2. Pointers

Pointers are used to connect nodes and manipulate the linked list.

### 3. Singly Linked Lists

Student records are stored dynamically using a singly linked list.

### 4. Dynamic Memory Allocation

`malloc()` is used to allocate memory for new student nodes.

### 5. Memory Deallocation

`free()` is used to release memory when nodes are deleted.

### 6. Functions

Different operations are separated into functions for better organization.

### 7. Modular Programming

The project is divided into multiple source files based on functionality.

### 8. Searching

Records can be searched using:

* Roll number
* Name
* Percentage

### 9. Sorting

Records can be sorted by:

* Name
* Percentage

### 10. File Handling

`student.dat` is used for persistent storage of student records.

### 11. String Handling

Student names are stored and processed using character arrays and string operations.

### 12. Input Validation

Invalid and unexpected input conditions are handled appropriately.

---

## 🔎 Searching

Searching is used by several operations in the project.

### Search by Roll Number

The program traverses the linked list and compares the roll number of each node with the requested value.

### Search by Name

The program compares student names and can identify multiple records with the same name.

### Search by Percentage

The program can identify records matching the requested percentage.

Searching through a linked list requires traversal from the head node until the required record is found or the end of the list is reached.

---

## ⚙️ Compilation

If all source files are located in the same directory, the project can be compiled using GCC.

```bash
gcc stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c -o student
```

The `student.h` header file is included by the source files using:

```c
#include "student.h"
```

A header file does not need to be compiled separately.

### Compilation Output

The compilation command creates an executable named:

```text
student
```

---

## ▶️ How to Run

### Linux / macOS

After compilation:

```bash
./student
```

### Windows

If compiled using GCC/MinGW:

```bash
student.exe
```

The required executable name for the project is:

```text
student
```

---

## 🖥️ Sample Execution

A typical execution flow can look like this:

```text
******** STUDENT RECORD MENU ********

a/A : Add new record
d/D : Delete a record
s/S : Show the list
m/M : Modify a record
v/V : Save records
e/E : Exit
t/T : Sort the list
l/L : Delete all the records
r/R : Reverse the list

Enter your choice: a

Enter student name: Rahul
Enter percentage: 78.50

Student record added successfully.
```

Displaying records:

```text
Enter your choice: s

------------------------------------------------------------
Roll No.        Name              Percentage
------------------------------------------------------------
1               Rahul             78.50
------------------------------------------------------------
```

Adding another student:

```text
Enter your choice: a

Enter student name: Priya
Enter percentage: 85.25

Student record added successfully.
```

Sorting by percentage:

```text
Enter your choice: t

N/n : Sort with name
P/p : Sort with percentage

Enter your choice: p

Records sorted by percentage.
```

Saving:

```text
Enter your choice: v

Records saved successfully.
```

Exiting:

```text
Enter your choice: e

S/s : Save and exit
E/e : Exit without saving

Enter your choice: s

Records saved successfully.
Memory released.
Program terminated.
```

> The above is an example of the expected interaction flow and does not represent a recorded test run.

---

## 📁 File Storage

The project uses:

```text
student.dat
```

to store saved student records.

The general data flow is:

```text
             Program Starts
                   |
                   v
          Check student.dat
             /          \
           Yes           No
            |             |
            v             v
      Load records    Empty list
            |
            v
      Linked List
            |
            v
     Perform operations
            |
            v
       Save if needed
            |
            v
      Release memory
            |
            v
           Exit
```

The saved data can be loaded again the next time the application starts.

---

## 📦 Expected Deliverables

The project deliverables include:

* Required C source files
* Header file
* Executable named `student`
* `student.dat` after records are saved
* `README.md`

The source code should be:

* Modular
* Readable
* Properly indented
* Organized according to functionality

---

## 🧪 Testing Checklist

The following operations should be tested:

### Record Creation

* [ ] Add one student
* [ ] Add multiple students
* [ ] Verify automatic roll-number allocation
* [ ] Verify the smallest available roll number is selected
* [ ] Test duplicate student names
* [ ] Test invalid percentage
* [ ] Test empty student name

### Display

* [ ] Display records when the list contains students
* [ ] Display records when the list is empty
* [ ] Verify correct roll number
* [ ] Verify correct name
* [ ] Verify correct percentage

### Deletion

* [ ] Delete by roll number
* [ ] Delete a non-existing roll number
* [ ] Delete by name
* [ ] Delete when duplicate names exist
* [ ] Delete all records
* [ ] Verify memory is released

### Modification

* [ ] Modify by roll number
* [ ] Modify by name
* [ ] Modify by percentage
* [ ] Modify when duplicate names exist
* [ ] Modify a non-existing record
* [ ] Verify roll number remains unchanged

### Sorting

* [ ] Sort by name
* [ ] Sort by percentage
* [ ] Verify percentage is sorted in descending order
* [ ] Sort an empty list
* [ ] Sort a list containing one record

### Reversal

* [ ] Reverse a list containing multiple records
* [ ] Reverse a list containing one record
* [ ] Reverse an empty list
* [ ] Verify links are maintained correctly

### File Handling

* [ ] Save records
* [ ] Load records after restarting the program
* [ ] Start the program when `student.dat` does not exist
* [ ] Verify saved records are restored correctly
* [ ] Test save and exit
* [ ] Test exit without saving

### Memory

* [ ] Free deleted nodes
* [ ] Free all nodes before termination
* [ ] Set the head pointer to `NULL` after deleting all records
* [ ] Avoid memory leaks
* [ ] Avoid invalid pointer access

---

## 📚 Learning Outcomes

After completing this project, a student can gain practical experience with:

* C structures
* Pointers
* Dynamic memory allocation
* Singly linked lists
* Linked-list insertion
* Linked-list deletion
* Linked-list traversal
* Linked-list reversal
* Searching techniques
* Sorting techniques
* File handling
* String processing
* Modular programming
* Function-based programming
* Input validation
* Memory management

The project also provides practical experience in designing a multi-file C application rather than keeping the complete implementation in a single source file.

---

## 🚀 Future Enhancements

The following are possible future improvements and are **not part of the current implementation**:

* Add additional student information such as department or phone number.
* Improve input validation.
* Add more advanced search options.
* Add CSV export functionality.
* Add a graphical user interface.
* Integrate a database instead of file-based storage.
* Add authentication or password protection.
* Provide additional report-generation features.

These are possible extensions that can be implemented later without changing the core linked-list concept.

---

## 👨‍💻 Project Information

**Project Name:** Student Record Management System

**Programming Language:** C

**Project Type:** Mini Project

**Primary Data Structure:** Singly Linked List

**Storage File:** `student.dat`

**Executable:** `student`

The project is designed for educational purposes and demonstrates practical implementation of fundamental C programming concepts.

---

## 📜 License

This project is intended for educational and academic purposes.

The source code may be used for learning and understanding C programming concepts, linked lists, dynamic memory allocation, file handling, searching, sorting, and modular programming.

---

## ⭐ Conclusion

The **Student Record Management System using C** demonstrates how a real-world record management application can be developed using fundamental C programming concepts.

The project combines **structures, pointers, singly linked lists, dynamic memory allocation, searching, sorting, file handling, modular programming, and memory management** into one application.

Through this project, students can gain practical understanding of how dynamically allocated linked-list data can be created, modified, searched, sorted, saved, restored, reversed, and safely removed from memory.

The project provides a strong practical foundation for further learning in **C programming, data structures, pointers, and system-level programming**.

