#include <iostream>

class ClassExample {

public:

  ClassExample() {
    std::cout << "No arguments\n";
  }
  ClassExample(int a, int b) {
    std::cout << "Ints: " << a << " " << b << "\n";
  }
  ClassExample(const char *msg) {
    std::cout << "String: " << msg << "\n";
  }

};

#include "nbind/nbind.h"

NBIND_CLASS(ClassExample) {
  construct<>();
  construct<int, int>();
  construct<const char *>();
}
