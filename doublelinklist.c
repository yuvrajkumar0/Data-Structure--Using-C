#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *start = NULL;

void create_11();
void display();
void insert_beg();
void insert_end();
void insert_before();
void insert_after();
void delete_beg();
void delete_end();
void delete_node();

int main() {
    int op;

    do {
        printf("\n\n******** MAIN MENU ********");
        printf("\n1. Create List");
        printf("\n2. Display");
        printf("\n3. Add a node at beginning");
        printf("\n4. Add a node at the end");
        printf("\n5. Add a node before given node");
        printf("\n6. Add a node after given node");
        printf("\n7. Delete the node from beginning");
        printf("\n8. Delete the node from the end");
        printf("\n9. Delete the given node");
        printf("\n10. EXIT");

        printf("\n\nEnter your option: ");
        scanf("%d", &op);

        switch (op) {

        case 1:
            create_11();
            break;

        case 2:
            display();
            break;

        case 3:
            insert_beg();
            break;

        case 4:
            insert_end();
            break;

        case 5:
            insert_before();
            break;

        case 6:
            insert_after();
            break;

        case 7:
            delete_beg();
            break;

        case 8:
            delete_end();
            break;

        case 9:
            delete_node();
            break;

        case 10:
            printf("\nProgram Exit...");
            break;

        default:
            printf("\nInvalid option!");
        }

    } while (op != 10);

    return 0;
}


void create_11() {
    struct node *new_node, *ptr;
    int num;

    printf("\nEnter -1 to end");

    printf("\nEnter data: ");
    scanf("%d", &num);

    while (num != -1) {

        new_node = (struct node *)malloc(sizeof(struct node));

        new_node->data = num;
        new_node->prev = NULL;
        new_node->next = NULL;

        if (start == NULL) {
            start = new_node;
        }
        else {
            ptr = start;

            while (ptr->next != NULL) {
                ptr = ptr->next;
            }

            ptr->next = new_node;
            new_node->prev = ptr;
        }

        printf("Enter data: ");
        scanf("%d", &num);
    }
}



void display() {
    struct node *ptr;

    if (start == NULL) {
        printf("\nList is empty!");
        return;
    }

    ptr = start;

    printf("\nDoubly Linked List: ");

    while (ptr != NULL) {
        printf("%d <-> ", ptr->data);
        ptr = ptr->next;
    }

    printf("NULL");
}


void insert_beg() {
    struct node *new_node;
    int num;

    printf("\nEnter data: ");
    scanf("%d", &num);

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = num;
    new_node->prev = NULL;
    new_node->next = start;

    if (start != NULL) {
        start->prev = new_node;
    }

    start = new_node;

    printf("\nNode inserted at beginning.");
}



void insert_end() {
    struct node *new_node, *ptr;
    int num;

    printf("\nEnter data: ");
    scanf("%d", &num);

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = num;
    new_node->next = NULL;

    if (start == NULL) {
        new_node->prev = NULL;
        start = new_node;
    }
    else {
        ptr = start;

        while (ptr->next != NULL) {
            ptr = ptr->next;
        }

        ptr->next = new_node;
        new_node->prev = ptr;
    }

    printf("\nNode inserted at end.");
}


void insert_before() {
    struct node *new_node, *ptr;
    int num, value;

    if (start == NULL) {
        printf("\nList is empty!");
        return;
    }

    printf("\nEnter value before which you want to insert: ");
    scanf("%d", &value);

    printf("Enter new data: ");
    scanf("%d", &num);

    ptr = start;

    while (ptr != NULL && ptr->data != value) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("\nGiven node not found!");
        return;
    }

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = num;
    new_node->next = ptr;
    new_node->prev = ptr->prev;

    if (ptr->prev != NULL) {
        ptr->prev->next = new_node;
    }
    else {
        start = new_node;
    }

    ptr->prev = new_node;

    printf("\nNode inserted before %d.", value);
}


void insert_after() {
    struct node *new_node, *ptr;
    int num, value;

    if (start == NULL) {
        printf("\nList is empty!");
        return;
    }

    printf("\nEnter value after which you want to insert: ");
    scanf("%d", &value);

    printf("Enter new data: ");
    scanf("%d", &num);

    ptr = start;

    while (ptr != NULL && ptr->data != value) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("\nGiven node not found!");
        return;
    }

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = num;
    new_node->prev = ptr;
    new_node->next = ptr->next;

    if (ptr->next != NULL) {
        ptr->next->prev = new_node;
    }

    ptr->next = new_node;

    printf("\nNode inserted after %d.", value);
}



void delete_beg() {
    struct node *ptr;

    if (start == NULL) {
        printf("\nList is empty!");
        return;
    }

    ptr = start;
    start = start->next;

    if (start != NULL) {
        start->prev = NULL;
    }

    free(ptr);

    printf("\nFirst node deleted.");
}


void delete_end() {
    struct node *ptr;

    if (start == NULL) {
        printf("\nList is empty!");
        return;
    }

    ptr = start;

    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    if (ptr->prev != NULL) {
        ptr->prev->next = NULL;
    }
    else {
        start = NULL;
    }

    free(ptr);

    printf("\nLast node deleted.");
}



void delete_node() {
    struct node *ptr;
    int value;

    if (start == NULL) {
        printf("\nList is empty!");
        return;
    }

    printf("\nEnter value to delete: ");
    scanf("%d", &value);

    ptr = start;

    while (ptr != NULL && ptr->data != value) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("\nNode not found!");
        return;
    }

    if (ptr->prev != NULL) {
        ptr->prev->next = ptr->next;
    }
    else {
        start = ptr->next;
    }

    if (ptr->next != NULL) {
        ptr->next->prev = ptr->prev;
    }

    free(ptr);

    printf("\nNode %d deleted.", value);
}
