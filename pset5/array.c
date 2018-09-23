#include <cs50.h>
#include <stdio.h>

int main(void){
  int capacity;
  do
  {
      capacity = get_int("capacity: ");
  }
  while (capacity < 1);

  int size = 0;
  char array[capacity];

  while (size < capacity){
    int input = get_int("%i. number", size);
    array[size] = input;
    size++;
  }
  printf("%s\n", array);
}
