#include <stdio.h>
#include <memory.h> //Needed for "malloc" implementation

typedef struct Animal
{
    char* name;
    int age;
}Animal;

int main()
{

    //& - get pointer to memory region
    //* - refer to memory region based on pointer
    //<type>* in declaration indicates a pointer to the data type
    int x = 5; //Statically allocated bit of memory
    int* y = &x;
    
    //Dynamically allocate space for 2 integers
    int* z = malloc(sizeof(int)*2);
    z[0] = 1; //allocated 2 integer sizes to we can use it like an array
    z[1] = 2;

    //Allocate 4 bytes for any data type (it still has to be casted to use it)
    void* v = malloc(4);
    int* w = (int*)v;

    //z[1] = <value> is also the same as doing this
    *(z + sizeof(int)) = 2; //*(<pointer>) = <value>
    //size of integer is added to increase the pointer by 1 integer

    printf("%i\n",y); //Outputs a memory location
    printf("%i\n",*y); //Outputs value of x

    //Dynamically allocate a structure
    Animal* sampleAnimal = malloc(sizeof(Animal));
    //Accessing struct members via pointer (2 ways)
    sampleAnimal->age = 5;
    (*(sampleAnimal)).name = "sample name";

    //IMPORTANT!!! FREE ANY DYNAMICALLY ALLOCATED MEMORY AFTER USING IT
    //TO AVOID MEMORY LEAKS

    free(z);
    free(v);
    free(sampleAnimal);

    return 0;
}