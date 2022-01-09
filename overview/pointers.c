#include <stdio.h>


void addresses() {
   int  var1;
   char var2[10];

   printf("Address of var1 variable: %x\n", &var1);
   printf("Address of var2 variable: %x\n", &var2);
}


void addresses2() {
   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var);

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip);

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip);
}


void nullPointers() {
    /*
    It is always a good practice to assign a NULL value to a pointer variable
    in case you do not have an exact address to be assigned.
    This is done at the time of variable declaration.
    A pointer that is assigned NULL is called a null pointer.
    The NULL pointer is a constant with a value of zero defined in several standard libraries.
    By convention, if a pointer contains the null (zero) value, it is assumed to point to nothing.
    */
   int *ptr = NULL;
   printf("The value of null ptr is : %x\n", ptr);
   if (ptr) {  /* succeeds if p is not null */
       puts("pointer is not null\n");
   }
   if(!ptr) {  /* succeeds if p is null */
       puts("pointer is null");
   }
}


void pointerArithmetic() {
   int  arr[] = {10, 100, 200};
   int  i, *ptr;

   // let us have array address in pointer 
   ptr = arr;

   // get the array size
   int size = (int)( sizeof(arr) / sizeof(arr[0]) );
	
   for ( i = 0; i < size; i++) {

      printf("Address of var[%d] = %x\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      // move to the next location
      ptr++;
   }

   /*
    Address of var[0] = ffffcbb0
    Value of var[0] = 10
    Address of var[1] = ffffcbb4
    Value of var[1] = 100
    Address of var[2] = ffffcbb8
    Value of var[2] = 200
   */
}


void pointers() {
    puts("___POINTERS___");
    addresses();
    addresses2();
    nullPointers();
    pointerArithmetic();
    puts("\n");
}
