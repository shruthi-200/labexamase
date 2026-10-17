#include <stdio.h>

int main() {
    int id;
    char name[50];
    printf("College Library Management System\n");
    printf("Enter Book ID: ");
    scanf("%d", &id);

    printf("Enter Book Name: ");
    scanf("%49s", name);

    printf("\nBook Details\n");
    printf("Book ID: %d\n", id);
    printf("Book Name: %s\n", name);

    return 0;
}