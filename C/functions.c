#include <stdio.h>

//Declare empty function (used in headers)
//So its declaration can be called form anywhere
int add(int x, int y);

//void type can be used for a function that doesn't return a value
void outputSomething()
{
    printf("Something\n");
}

//Multiple return statements
int max(int x, int y)
{
    //return (x > y) ? x : y; <- simpler
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

void recursion(int x)
{
    if(x > 0)
        recurstion(x-1);
}

int main()
{

    //Call a function returning void
    outputSomething();

    //Assign "sum" to the sum of numbers 5 and 6
    int sum = add(5,6);


    return 0;
}

//Function initialization
//<type> <name>(<parameters of expected type>){..}
int add(int x, int y)
{
    return x + y; //Return to function it's called from
}