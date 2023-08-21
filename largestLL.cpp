#include <iostream>
using namespace std;
struct link
{
    //declare the varibles for the LL
    int data;
    struct link *next; //strcut data type cuz the next element of a ll is struct 
}; //struct ends with ;

//any program can be completed with using only 3 node elements:
struct link *start = NULL;
struct link *current;
struct link *node;

//creating the ll
void create()
{
    int n;
    cout << "Enter the no.of nodes required for u:\n";
    cin >> n;
    cout << "Enter the ll elements:\n";
    for (int i = 0; i < n; i++){
        //before entering the elements 1st we need to give random address to the node

        node = (struct link *) malloc (sizeof(struct link));

        //we are entering the elements in the node of data

        cin >> node -> data;
        node -> next = NULL;
        if (start == NULL)
        {
            start = node;
            current = node;
        }
        else
        {
            current -> next = node;
            current = node;
        }
    }
}

void display()
{
    struct link *ptr = start;
    current = ptr -> next;
    int large = ptr -> data;
    while (current != NULL)
    {
        if (current -> data > large)
        {
            large = current -> data;
        }
        current = current -> next;
    }
    cout << "Largest element is:\n" << large;
}
int main()
{
    create();
    display();
    return 0;
}