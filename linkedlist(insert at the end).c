#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* getnewnode(int n)
{
    struct Node* temp =(struct Node*)malloc(sizeof(struct Node));
    temp -> data = n;
    temp -> next = NULL;
    return temp;
}

void insert(int n)
{
    struct Node* new = getnewnode(n);
    if(head == NULL)
    {
        head = new;
        return;
    }
    struct Node* temp = head;
    while(temp -> next != NULL)
    temp = temp -> next;
    temp -> next = new;
    
}

void print()
{
    struct Node* temp = head;
    printf("the double list is\n");
    while(temp != NULL)
    {
        printf("%d\t", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

void dele(int n)
{
    struct Node* temp1 = head;
    if(n == 1)
    {
        head = temp1 -> next;
        free(temp1);
        return;
    }
    int i;
    for(i = 0; i < n-2; i++)
    {
        temp1 = temp1 -> next;
    }
    struct Node* temp2 = temp1 -> next;
    //struct Node* temp3 = temp2 -> next;
    temp1 -> next = temp2 -> next;
    free(temp2);
}

int main()
{
    int n;
    insert(1);
    insert(5);
    insert(7);
    insert(9);
    print();
    printf("enter the postion to be deleted\n");
    scanf("%d", &n);
    dele(n);
    print();
    insert(6);
    insert(11);
    print();
}

