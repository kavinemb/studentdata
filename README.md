# Student Record Management System

A modular, menu-driven CLI application written in C to manage student academic records using singly linked lists, dynamic memory allocation, and file persistence.

---

## Features

- **Dynamic Memory Management:** Uses dynamic memory allocation (`malloc`/`free`) for node creation and deallocation with no memory leaks.
- **Auto Roll Number Generation:** Automatically assigns the smallest unused positive integer to ensure unique IDs[cite: 2].
- **Record Operations (CRUD):**
  - **Add:** Insert records with name and percentage[cite: 2].
  - **Display:** View all records in a formatted tabular layout[cite: 2].
  - **Search & Modify:** Search by roll number, name, or percentage to update details.
  - **Delete:** Remove records by roll number or name[cite: 2].
  - **Delete All:** Clear the entire list from memory at once.
- **Duplicate Handling:** Displays matching candidates when multiple records share the same name or percentage, allowing exact selection by roll number.
- **Sorting & Reversal:**
  - Sort alphabetically by name.
  - Sort in descending order by percentage[cite: 3].
  - Reverse the singly linked list via pointer manipulation[cite: 3].
- **Data Persistence:**
  - Loads saved records from `student.dat` on startup[cite: 3].
  - Manually save or choose to "Save & Exit" / "Exit without Saving"[cite: 3].

---

## File Structure

```text
.
├── student.h       # Structure definitions and function prototypes
├── stud_main.c     # Program entry point and menu flow[cite: 1]
├── stud_add.c      # Dynamic node allocation and insertion logic[cite: 1, 2]
├── stud_del.c      # Deletion by roll number or name[cite: 1, 2]
├── stud_show.c     # Tabular display logic[cite: 1, 2]
├── stud_mod.c      # Search and record modification logic[cite: 1, 2]
├── stud_save.c     # File I/O operations (student.dat)[cite: 1, 3]
└── student.dat     # Data persistence file[cite: 1, 5]
