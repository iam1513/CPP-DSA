/*
Types of pointers:
1. Null pointer
2. Wild pointer
3. Dangling pointer
4. Void pointer
*/
/*
WILD POINTER
 int *ptr;  --->Only a declared pointer but value of it is not not defined. 
                Due to this, it ends up pointing to some random memory location.
                Due to this we might get some undefined behaviour and crashes.In some cases we might get segmentation fault.

NULL POINTER
 If we want to have a pointer variable, which is just declared but will gwt address later to store.
 In such a case we can use Null Pointer.

 int *ptr = NULL;

 We might get a Runtime Error while derefrencing Null ptr.
 0 is mostly special reserved memory address.

DANGLING POINTER
 It is a type of a Pointer that points to a memory location that is not valid now but it was valid before.
 
 int main(){
 int *ptr = NULL;
 {
    int x = 10;
    ptr = &x;
 }
 }

 Out side the {} we cant access x it is intialised locally.

VOID POINTER
 This are special pointers that can point to any data type value.

 float f = 10.2;
 int x = 10;
 void *ptr = &f;
 ptr = &x;

 Void pointers cant be derefrenced.
 We can do type casting here.

*/