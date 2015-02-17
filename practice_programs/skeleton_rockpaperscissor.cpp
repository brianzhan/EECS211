#include <iostream>
#include <ctime>
using namespace std;

// This will simply give you a random number between n and m.
int randNum(int n, int m)
{
  srand(time(NULL)); 
  return rand() % m + n;
}

int main()
{
  /* Fill this in however you want */ 
}
