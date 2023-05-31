#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* prev;
    int data;
    struct node* next;
} node_t;

int search(int target, node_t* head){
    node_t* temp = head;
    int pos =  1;
    while (temp != NULL){
        if (temp->data == target){
            return pos;
        } else { 
            temp = temp->next;
            pos++;
        }
    }
    return -1;
}

node_t* insertHead(int value, node_t* head){
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->data = value;
    if (head != NULL){
        newNode->next = head;
        head->prev = newNode;
    }
    return newNode;
}

node_t* insertMiddle(int value, int position, node_t* head){
    node_t* temp = head;
    int i;
    for (i = 1; i < (position-1); i++){
        temp = temp->next;
        if (temp->next == NULL){
            printf("Invalid positoin.\n");
        }
    }
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->data = value;
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
    return head;
}

node_t* insertEnd(int value, node_t* head){
    node_t* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->data = value;
    newNode->prev = temp;
    temp->next = newNode;
    return head;
}

node_t* deleteHead(node_t* head){
    if (head == NULL){
        printf("The linked list is empty");
        return NULL;
    }
    if (head->next == NULL){
        return NULL;
    }
    node_t* newHead = head->next;
    newHead->prev = NULL;
    free(head);
    return newHead;
}

node_t* deleteMiddle(int value, node_t* head){
    node_t* temp = head;
    while(temp->next != NULL && temp->next->data != value){
        temp = temp->next;
        if (temp->next == NULL){
            printf("Can't find the value in the middle of linked list\n.");
            return head;
        }
    }
    node_t* del = temp->next;
    del->next->prev = temp;
    temp->next = del->next;
    free(del);
    return head;
}

node_t* deleteEnd(node_t* head){
    if (head == NULL){
        printf("The linked list is empty");
        return NULL;
    }
    if (head->next == NULL){
        return NULL;
    }
    node_t* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
    return head;
}

void printReverseOrder(node_t* head){
    if (head == NULL){
        printf("Linked list is empty.\n");
        return;
    }
    node_t* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    while (temp != NULL){
        if (temp->prev != NULL){
            printf("%d,", temp->data);
        } else {
            printf("%d\n", temp->data);
        }
        temp = temp->prev;
    }
}

int main(){
    printf("Initiated doubly linked list\n");
    node_t* headNode;
    while (1){
        int select;
        printf("Select your action: 1. Search 2. Insert\n");
        printf("3. Delete 4. Print reverse order 5. Exit\n");
        scanf("%d", &select);
        switch(select){
            case 1:{
                int key;
                printf("Which value do you want to search for?\n");
                scanf("%d", &key);
                int position = search(key, headNode);
                if (position == -1){
                    printf("Not found.\n");
                } else{
                    printf("Found a position %d.\n", position);
                }
                break;
            }
            case 2:{
                int location;
                int data;
                printf("Enter the value you want to insert.\n");
                scanf("%d", &data);
                printf("Where do you want to insert?\n");
                printf("1.Head 2.Middle 3. End.\n");
                scanf("%d", &location);
                switch(location){
                    case 1:
                        headNode = insertHead(data, headNode);
                        break;
                    case 2:{
                        int position;
                        printf("Insert at which position?\n");
                        scanf("%d", &position);
                        headNode = insertMiddle(data, position, headNode);
                        break;
                    }
                    case 3:
                        headNode = insertEnd(data, headNode);
                        break;
                    default:
                        printf("Invalid input!\n");
                }
                break;
            }
            case 3:{
                int location;
                printf("Where do you want to delete?\n");
                printf("1.Head 2.Middle 3. End.\n");
                scanf("%d", &location);
                switch(location){
                    case 1:
                        headNode = deleteHead(headNode);
                        break;
                    case 2:{
                        int value;
                        printf("Delete which value?\n");
                        scanf("%d", &value);
                        headNode = deleteMiddle(value, headNode);
                        break;
                    }
                    case 3:
                        headNode = deleteEnd(headNode);
                        break;
                    default:
                        printf("Invalid input!\n");
                }
                break;
            }
            case 4:
                printReverseOrder(headNode);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid input");
        }
    }
}