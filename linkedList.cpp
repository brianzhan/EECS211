#include <iostream>

/* You have the following struct definition for a node of a linked list */
struct node_def {
    node_def * next;
    int val;
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
    // Write your code here
}

// 2. int val is the value of your new node
node add_to_end(node * head, int val) {
    // Write your code here
}

// 3. same thing here
node add_to_front(node * head, int val) {
    // Write your code here
}

// 4. 
int sum_of_list(node * head) {
    // Write your code here
}

// 5. 
node third_last(node * head) {
    // Write your code here
}

// 6.
void delete_node(int val) {
    // Write your code here 
}
