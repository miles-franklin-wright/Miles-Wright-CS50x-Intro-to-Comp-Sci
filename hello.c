#include <stdio.h>
#include <cs50.h>
// updated to include cs50.h to get more inputs

//runs program
int main(void)
{
    //retrieves user's name
    string name = get_string("What is your name: ");
    //greets user
    printf("hello, %s\n", name);
}