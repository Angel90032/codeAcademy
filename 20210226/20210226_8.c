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

struct node *newNode(int size){
    struct node *the_node = (struct node*)malloc(size);
    the_node->data = -1;
    the_node->next = NULL;
    printf("%d\n", the_node->data);
    return the_node;
}

void push();    // Function used to insert the element into the stack
void pop();     // Function used to delete the elememt from the stack
void display(); // Function used to display all the elements in the stack according to LIFO rule
int top();
int isFull();
int isEmpty(void);
//void destroy(stack *s);

int main(){
    int choice;
    newNode(100);


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

void pop(){
    int item;

    struct node *pointer;
    if(NULL == temp){
        printf("Stack Underflow\n");
    }else{
        item = temp->data;
        pointer = temp;
        temp = temp->next;
        free(pointer);
        printf("The deleted item is %d\n", item);
    }
}
void display(){
    int i;

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

    if(NULL == pointer){
        printf("Stack underflow\n");
    }else{
        printf("\nThe top element of the stack is:\n");
        printf("\n%d\n", pointer->data);
    }
    return 0;
}

int isFull(){

}

int isEmpty(void){
    struct node *pointer;
    pointer = temp;
    //printf("%d\n", pointer->data);
    
    if(NULL == pointer){
        printf("Stack underflow\n");
    }else if(pointer->data == -1){
        printf("The stack is empty\n");
    }else{
        printf("the stack is not empt\n");
    }
    return -1;
}