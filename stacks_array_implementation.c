#include <stdio.h>
#include <stdlib.h>
#define max 10
int stack_arr[max];
int top = -1;

// Function isFull for checking stack full or not
void isFull()
{
    if (top == max - 1)
        printf("Stack Overflow\n");
    else
        printf("No. %d elements can be pushed into Stack", (max - 1) - top);
}

// Function isEmpty for checking stack full or not
void isEmpty()
{
    if (top == -1)
        printf("Stack is Empty\n");
    else
        printf("No. %d elements are present in Stack", top + 1);
}

// Function isEmpty for checking stack full or not
int peek()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack_arr[top];
}

// Function Push for inserting an element
void push(int data)
{
    if (top == max - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}

// Function Pop for inserting an element
int pop()
{
    int value;
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}

// Function Pop for inserting an element
void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    for (i = 0; i <= top; i++)
    {
        printf("| %d |\t", stack_arr[i]);
    }
    printf("\n");
}

// Function main
int main()
{
    int ch, data;
    while (1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Is stack Empty\n");
        printf("4. Is stack Full\n");
        printf("5. Print the Top element\n");
        printf("6. Display stack\n");
        printf("7. quit\n");
        printf("\n");
        printf("Please enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element to Push\n");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop(data);
            printf("Deleted data: %d\n", data);
            break;
        case 3:
            isEmpty();
            break;
        case 4:
            isFull();
            break;
        case 5:
            printf("Top element is: %d\n", peek());
            break;
        case 6:
            printf("Displaying stack:\n");
            display();
            break;
        case 7:
            exit(1);
            break;

        default:
            printf("Wrong Choice!");
            break;
        }
    }

    return 0;
}
