#include <iostream>

/* You have the following struct definition for a node of a linked list */
struct node_def {
    Node* next;
    double data;
} node;

/* Define the following functions: 
 * 1. A function that finds the last member of a linked list
 * 2. A function that adds another node at the end of the linked list. This node has the value passed by another parameter
 * 3. A function that adds another node at the front of the linked list. This node has the value passed by another parameter
 * 4. A function that adds all the values of a linked list 
 * 5. A function that finds the third last member of a linked list
 * 6. A function that deletes a node whose value is the value given from the */

// Here's a list of function declarations

// 1. 
node last_node(node * head) {
    while (currNode->next != NULL) {
        currNode= currNode -> next;
    }
}

// 2. double data is the value of your new node
node add_to_end(node * head, double data) {
    // Write your code here
}

// 3. same thing here
node add_to_front(node * head, double data) {
    // Write your code here
}

// 4. 
int sum_of_list(node * head) {
    int x = 0;
    while (*head -> next) {
       x += *node->data;
    }
    return x;
}

// 5. 
node third_last(node * head) {
    while ((*head->next)->next) {
        x = *node->data;
    }
}

// 6.
void delete_node(double data) {
    Node* prevNode = NULL;
    Node* currNode = head;
    int index = 0;
    while (currNode && currNode->data != x) {
        prevNode = currNode;
        currNode = currNode -> next;
        index++;
    }
    if (currNode) {
        if (prevNode) {
            prevNode->next = currNode->next;
            delete currNode;
        }
        else {
            head = currNode->next;
            delete currNode;
        }
        return currNode;
    }
    return -1;
}


