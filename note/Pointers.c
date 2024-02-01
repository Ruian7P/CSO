#include <stdio.h>
void main() {
  int age = 21;  // create a data space to store age value, with the address ad;
  int *pAge = &age; // create a data space to store pAge value, which is the address of age ad, with another address;

  printf("address of age: %p\n", pAge);
  printf("value at stored address: %d\n", *pAge); //dereferencing, get the value stored in the address pAge
  return 0;
}



Example:
#include <stdio.h>

void swap (int *a, int *b);

int main(){
  int x = 1;
  int y = 2;
  printf("x=%d, y=%d\n", x,y);
  swap(&x,&y);  //swap the value stored in address &x and &y
  printf("x=%d, y=%d\n",x,y);
  return 0;

void swap (int *a, int *b)   //int *a = &x, int *b = &y
{
  int tmp;
  tmp = *a;
  *a = *b;
  *y = tmp;
}
