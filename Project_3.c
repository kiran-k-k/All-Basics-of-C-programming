/*A simple console-based Library Management System using C. It allows users to add, search, delete, 
display, and issue books using structures, arrays, and dynamic memory allocation. 
This project is ideal for beginners to practice C programming with real-world logic.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold book details
struct Book {
    int id;
    char title[100];
    char author[100];
    int isIssued; // 0 = available, 1 = issued
};

int bookCount = 0;               // Total number of books
struct Book *library = NULL;     // Dynamic array to store books

// Function to add a new book
void addBook() {
    bookCount++;
    // Reallocate memory for new book
    library = realloc(library, bookCount * sizeof(struct Book));

    printf("Enter Book ID: ");
    scanf("%d", &library[bookCount - 1].id);
    getchar(); // Clear newline from input buffer

    printf("Enter Book Title: ");
    fgets(library[bookCount - 1].title, 100, stdin);
    library[bookCount - 1].title[strcspn(library[bookCount - 1].title, "\n")] = 0; // Remove newline

    printf("Enter Author Name: ");
    fgets(library[bookCount - 1].author, 100, stdin);
    library[bookCount - 1].author[strcspn(library[bookCount - 1].author, "\n")] = 0;

    library[bookCount - 1].isIssued = 0; // Set book as available

    printf("✅ Book Added Successfully!\n");
}

// Function to display all books
void displayBooks() {
    if (bookCount == 0) {
        printf("📭 No books in the library.\n");
        return;
    }

    printf("\n📚 List of Books:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("\nBook ID: %d\n", library[i].id);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Status: %s\n", library[i].isIssued ? "Issued" : "Available");
    }
}

// Function to search for a book by ID
void searchBook() {
    int searchId;
    printf("Enter Book ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == searchId) {
            printf("\n📖 Book Found:\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Status: %s\n", library[i].isIssued ? "Issued" : "Available");
            return;
        }
    }
    printf("❌ Book with ID %d not found.\n", searchId);
}

// Function to delete a book by ID
void deleteBook() {
    int delId;
    printf("Enter Book ID to delete: ");
    scanf("%d", &delId);

    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == delId) {
            found = 1;
            // Shift all books after the deleted one to the left
            for (int j = i; j < bookCount - 1; j++) {
                library[j] = library[j + 1];
            }
            bookCount--;
            // Reallocate memory to shrink the array
            library = realloc(library, bookCount * sizeof(struct Book));
            printf("🗑️ Book deleted successfully!\n");
            break;
        }
    }

    if (!found)
        printf("❌ Book with ID %d not found.\n", delId);
}

// Function to issue a book by ID
void issueBook() {
    int issueId;
    printf("Enter Book ID to issue: ");
    scanf("%d", &issueId);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == issueId) {
            if (library[i].isIssued) {
                printf("⚠️ Book already issued.\n");
            } else {
                library[i].isIssued = 1; // Mark as issued
                printf("📕 Book issued successfully!\n");
            }
            return;
        }
    }
    printf("❌ Book with ID %d not found.\n", issueId);
}

int main() {
    int choice;

    while (1) {
        // Menu interface
        printf("\n====== Library Menu ======\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Issue Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform action based on user's choice
        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 5: issueBook(); break;
            case 6: 
                free(library); // Free allocated memory before exiting
                printf("👋 Exiting... Goodbye!\n");
                exit(0);
            default: printf("❗ Invalid choice. Try again.\n");
        }
    }

    return 0;
}
