//
//  main.cpp
//  Tests
//
//  Created by Brian Zhan on 2/17/15.
//  Copyright (c) 2015 Brian Zhan. All rights reserved.
//

#include <iostream>
using namespace std;

void addTwoPointers(int* p, int* q) {
    *p = *p + *q;
}

void swap (int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main() {
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
}

