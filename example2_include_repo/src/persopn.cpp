#include <person.h>

#include <string>

Person::Person(const int age, const std::string& name)
: d_age{age}
, d_name{name}
{
}

int Person::age() const noexcept
{
    return d_age;
}
