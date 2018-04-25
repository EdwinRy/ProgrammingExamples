//Same rules apply to enums and structs
typedef enum species
{
    Dog,    //Every defined type is accessible from global scope
    Cat
}species;

//Use typedef and define type name after closing curly bracket to
//define new type so you don't need to use "struct" when declaring a variable
typedef struct Animal
{
    species animalType;
    char* name;
    int age;
}Animal;

int main()
{
    Animal animal1; //Create new struct variable 
    animal1.animalType = Dog; //Assign structure members
    return 0;
}