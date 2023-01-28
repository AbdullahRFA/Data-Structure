#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

struct linked_list
{
    int number;
    struct linked_list *next;
};

typedef struct linked_list node;
node *head=NULL, *last=NULL;

void create_linked_list();
void print_linked_list();
void insert_at_last(int value);
void insert_at_first(int value);
void insert_after(int key, int value);
void delete_item(int value);
void search_item(int value);
int  searchRecursive(int key, node *curNode, int index);

int main()
{
    int key, value;
    int k;
    printf("\n1.Create List\n2.Insert\n3.Delete\n4.Search\n5.Display\n6.Exit\nEnter your choice: ");
    scanf("%d",&k);
    switch(k)
    {
    case 1:
        printf("\nCreate list:\n");
        create_linked_list();
        print_linked_list();
        main();
    //break;
    case 2:
        printf("\nInsert :-\n1.first\n2.last\n3.after any node\nEnter your choice: ");
        int g;
        scanf("%d",&g);
        switch(g)
        {
        case 1:
            printf("\nInsert new item at first\n");
            scanf("%d", &value);
            insert_at_first(value);
            print_linked_list();
            main();
        // break;
        case 2:
            printf("\nInsert new item at last\n");
            scanf("%d", &value);
            insert_at_last(value);
            print_linked_list();
            main();
        //break;
        case 3:
            printf("\nEnter a KEY (existing item of List), after that you want to insert a value\n");
            scanf("%d", &key);
            printf("\nInsert new item after %d KEY\n", key);
            scanf("%d", &value);
            insert_after(key, value);
            print_linked_list();
            main();
        //break;
        default:
            printf("You are pressing the wrong key");
            main();
        }
    case 3:
        printf("\nEnter a value, which you want to delete from list\n");
        scanf("%d", &value);
        delete_item(value);
        print_linked_list();
        main();
    case 4:
        int n, keyToSearch, index;
        printf("\nEnter element to search: ");
        scanf("%d", &keyToSearch);
        index = searchRecursive(keyToSearch, head, 0);
        if (index >= 0)
            printf("%d found in the list at position %d\n", keyToSearch, index + 1);
        else
            printf("%d not found in the list.\n", keyToSearch);


        main();

    case 5:
        print_linked_list();
        main();
    case 6:
        exit(0);
    default:
        printf("You are pressing the wrong key");
        main();
    }

    return 0;
}

void create_linked_list()
{
    int val;
    int n;
    printf("Enter how many data do you want to input: ");
    scanf("%d",&n);
    printf("Enter the data item in the linked list\n");

    while(n--)
    {
        scanf("%d", &val);
        insert_at_last(val);
    }

}

void insert_at_last(int value)
{
    node *temp_node;
    temp_node = (node *) malloc(sizeof(node));

    temp_node->number=value;
    temp_node->next=NULL;

    if(head==NULL)
    {
        head=temp_node;
        last=temp_node;
    }
    else
    {
        last->next=temp_node;
        last=temp_node;
    }

}

void insert_at_first(int value)
{
    node *temp_node = (node *) malloc(sizeof(node));

    temp_node->number=value;
    temp_node->next = head;

    head = temp_node;
}

void insert_after(int key, int value)
{
    node *myNode = head;
    int flag = 0;

    while(myNode!=NULL)
    {
        if(myNode->number==key)
        {
            node *newNode = (node *) malloc(sizeof(node));
            newNode->number = value;
            newNode->next = myNode->next;
            myNode->next = newNode;

            printf("%d is inserted after %d\n", value, key);

            flag = 1;
            break;
        }
        else
            myNode = myNode->next;
    }

    if(flag==0)
        printf("Key not found!\n");
}

void delete_item(int value)
{
    node *myNode = head, *previous=NULL;
    int flag = 0;

    while(myNode!=NULL)
    {
        if(myNode->number==value)
        {
            if(previous==NULL)
                head = myNode->next;
            else
                previous->next = myNode->next;

            printf("%d is deleted from list\n", value);

            flag = 1;
            free(myNode);
            break;
        }
        previous = myNode;
        myNode = myNode->next;
    }

    if(flag==0)
        printf("Key not found!\n");
}

void search_item(int value)
{
    node *searchNode = head;
    int flag = 0;

    while(searchNode!=NULL)
    {
        if(searchNode->number==value)
        {
            printf("%d is present in this list at %d position\n", value, *searchNode);
            flag = 1;
            break;
        }
        else
            searchNode = searchNode->next;
    }

    if(flag==0)
        printf("Item not found\n");

}

void print_linked_list()
{
    printf("\nYour full linked list is\n");

    node *myList;
    myList = head;

    while(myList!=NULL)
    {
        printf("%d ", myList->number);

        myList = myList->next;
    }
    puts("");
}
int searchRecursive(int key,node *curNode, int index)
{
    if (curNode == NULL)
        return -1;
    else if (curNode->number == key)
        return index;
    else
        return searchRecursive(key, curNode->next, index + 1);
}


