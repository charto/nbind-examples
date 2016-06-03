class GetSetExample {

public:

  void setValue(int value) { this->value = value; }
  int getValue() { return(value); }

private:

  int value = 42;

};

#include "nbind/nbind.h"

NBIND_CLASS(GetSetExample) {
  construct<>();

  getset(getValue, setValue);
}
