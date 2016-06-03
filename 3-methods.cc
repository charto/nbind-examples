#include <string>
#include <vector>

class MethodExample {

public:

  unsigned int add(std::string part) {
    for(char &c : part) sum += c;

    return(sum);
  }

  static std::vector<unsigned int> check(std::vector<std::string> list) {
    std::vector<unsigned int> result;
    MethodExample example;

    for(auto &&part : list) result.push_back(example.add(part));

    return(result);
  }

  unsigned int sum = 0;

};

#include "nbind/nbind.h"

NBIND_CLASS(MethodExample) {
  construct<>();

  method(add);
  method(check);
}
