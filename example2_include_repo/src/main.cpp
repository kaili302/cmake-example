#include <person.h>
#include <iostream>

int main()
{
    Person person{28, "Kai"};
    std::cout << person.age() << std::endl    ;
}
