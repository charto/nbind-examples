#include <string>
#include <iostream>

struct Greeter {
  static void sayHello(
    std::string name
  ) {
    std::cout
      << "Hello, "
      << name << "!\n";
  }
};

#include "nbind/nbind.h"

NBIND_CLASS(Greeter) {
  method(sayHello);
}
