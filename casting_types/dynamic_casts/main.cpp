#include <iostream>

class Parent {
public:
  Parent() {}
  virtual void some_func() {}
};

class Child : public Parent {
public:
  Child() {}
  void SomeMethod() {}
};

int main() {
  // dynamic casts are used when casting a parent class instance to a child
  // class - down casting or casting a child class instance to parent class - up
  // casting

  Parent *child = new Child();
  Child *casted_child = dynamic_cast<Child *>(child);

  if (casted_child) {
    std::cout << "Casting successfull!\n";
  } else {
    std::cout << "Casting failed!\n";
  }
}
