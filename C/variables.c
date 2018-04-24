int main()
{
    //variable declaration: <type> <identifier> = <value>;
    
    //Numeric data types
    /*
    char - 1 byte whole number/character
    short - 2 byte whole number
    int - 4 byte whole number
    long - 8 byte whole number

    unsigned char - 1 byte positive whole number
    unsigned short - 2 byte positive whole number
    unsigned int - 4 byte positive whole number
    unsigned long - 8 byte positive whole number

    float - 4 byte decimal value
    double - 8 byte decimal value
    */

    //Examples
    char sampleCharacter = 'b'-1;
    int sampleInteger = 5;
    float sampleFloat = 5.5;

    //Outputting variables
    printf("Sample character: %c", sampleCharacter); //outputs "Sample character: a"
    printf("Sample integer: %i"); //outputs "Sample integer: 5"
    printf("Sample decimal: %f"); //outputs "Sample decimal: 5.500000"

    //Constant variables
    const int anotherInteger = 5; //Can't change this value

    return 0;
}