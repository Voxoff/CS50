#include <cs50.h>
#include <stdio.h>

// typedef node{
//   int number;
//   node *next;
// }
// node;

int main(void) {
  int capacity;
  do {
    capacity = get_int("capacity ples");
  }
  while(capacity < 1);

  char array[capacity];
  int size = 0;

  while (true) {
    int num = get_int("num");
    if (num == "") {
      break;
    }

    if (size >= capacity){
      realloc(array, sizeof(int) * (size + 1));
    }
    
    array[size] = num;
    size++;
  }
}
