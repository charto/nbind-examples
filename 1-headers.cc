#include <string>
#include <iostream>

// For nbind::cbFunction type.
#include "nbind/api.h"

class HeaderExample {

public:

  static void callJS(nbind::cbFunction &callback) {
    std::cout << "JS says: " << callback.call<std::string>(1, 2, 3);
  }

};

// For NBIND_CLASS() and method() macros.
#include "nbind/nbind.h"

#ifdef NBIND_CLASS

NBIND_CLASS(HeaderExample) {
  method(callJS);
}

#endif
