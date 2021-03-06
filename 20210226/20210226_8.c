#include <stdio.h>
#include <stdlib.h>

/* Напишете програма, която да създаде стек (LIFO) по подобие на този
от лекция 18, който обаче да бъде реализиран с динамично с динамично
заделяне на памет съобразно желанието на потребителя с функциите
malloc(), и free(). Стека да има следните функции (следното API):
struct Stack{
int *contents;
int top;
};
Stack create(int size); void destroy(Stack s);
int pop(); void push()
int top()
int isFull(); int isEmpty(void) */

struct node{
    int data;
    struct node *next;
};

struct node *temp;

void push();
int pop();
void display();
int top();
int isFull();
int isEmpty(void);

int main(){
    int choice;

    do{
        printf("1. Push\n2. Pop\n3. Display\n4. Top\n5. isFull\n6. isEmpty\n7. Exit\n\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            top();
            break;
        case 5:
            isFull();
            break;
        case 6:
        isEmpty();
        break;
        case 7:
            exit(0);
            break;
        default:
            printf("Sorry, invalid choice! Try again\n");
            break;
        }
    }while(choice != 7);

    return 0;
}

void push(){
    int data;

    struct node *pointer = (struct node *)malloc(sizeof(struct node));
    if (NULL == pointer){
        printf("Stack overflow");
    }else{
        printf("Enter the element to be inserted: ");
        scanf("%d", &data);
        if(NULL == temp){
            pointer->data = data;
            pointer->next = NULL;
            temp = pointer;
        }else{
            pointer->data = data;
            pointer->next = temp;
            temp = pointer;
        }
    }
}

int pop(){
    int item;

    struct node *pointer;

    if(isEmpty()){
        return 0;
    }
    if(NULL == temp){
        printf("Stack Underflow\n");
    }else{
        item = temp->data;
        pointer = temp;
        temp = temp->next;
        free(pointer);
        printf("The deleted item is %d\n", item);
    }
    return 0;
}

void display(){
    struct node *pointer;
    pointer = temp;
    if(NULL == pointer){
        printf("Stack underflow\n");
    }else{
        printf("The elements of the stack are:\n");
        while (pointer != NULL){
            printf("%d\n", pointer->data);
            pointer = pointer->next;
        }
    }
}

int top(){
    struct node *pointer;
    pointer = temp;

    if(isEmpty()){
        return 0;
    }
    if(NULL == pointer){
        printf("Stack underflow\n");
    }else{
        printf("\nThe top element of the stack is:\n");
        printf("%d\n", pointer->data);
    }
    return 0;
}

int isFull(){
    struct node *pointer;
    pointer = temp;

    if(&pointer->data == NULL && &pointer->next == NULL){
        printf("The stack is full.\n");
    }else{
        printf("The stack is not full.\n");
    }
    return 0;
}

int isEmpty(void){
    struct node *pointer;
    pointer = temp;

    if(&pointer->data == NULL){
        printf("The stack is empty\n");
        return 1;
    }else{
        printf("The stack is not empty\n");
        return 0;
    }
}