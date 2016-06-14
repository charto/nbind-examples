#include <iostream>

void sayHello(std::string name) {
  std::cout << "Hello, " << name << "!\n";
}

#include "nbind/nbind.h"

NBIND_GLOBAL() {
  function(sayHello);
}
