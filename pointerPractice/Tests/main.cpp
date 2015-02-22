//
//  main.cpp
//  Tests
//
//  Created by Brian Zhan on 2/17/15.
//  Copyright (c) 2015 Brian Zhan. All rights reserved.
//

#include <iostream>
#include <istream>
using namespace std;

void addTwoPointers(int* p, int* q) {
    *p = *p + *q;
}

void swap (int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void encrypt_file (string* s) {
    for (int i = 0; i < (*s).size(); i++) { // s->size()
        (*s)[i] = (*s)[i]+3;
        // *((*s) + i) = *((*s) + i) + 3;
    }
}

void decrypt_file (string* s) {
    for (int i = 0; i < (*s).size(); i++) {
        (*s)[i] = (*s)[i] - 3;
    }
}

// s[i] = s[i] + 3
// == *(s+i) = *(s+i) + 3;

int main() {
    string s = "hello world";
    string *ptr = &s;
    encrypt_file(ptr);
    cout << *ptr << endl; // or s
    decrypt_file(ptr);
    cout << *ptr << endl;
    /*
    int n = 3;
    int m = 1;
    int *p = &n;
    int *q = &m;
  //  addTwoPointers(p, q);
  //  cout << *p <<endl;
    cout << n << m;
    swap (p, q);
   // cout << *p << *q;
    cout << n << m;
    return 0;
     */
}

