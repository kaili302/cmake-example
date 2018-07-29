#include <string>

class Person
{
  public:
    Person(const int age, const std::string& name);

    int age() const noexcept;

  private:
    int d_age;
    std::string d_name;
};
