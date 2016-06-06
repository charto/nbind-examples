#include <iostream>

#include "nbind/api.h"

class Coord {

public:

  Coord(signed int x = 0, signed int y = 0) : x(x), y(y) {}
  explicit Coord(const Coord *other) : x(other->x), y(other->y) {}

  void toJS(nbind::cbOutput output) {
    output(x, y);
  }

  signed int getX() { std::cout << "Get X\n"; return(x); }
  signed int getY() { std::cout << "Get Y\n"; return(y); }

  void setX(signed int x) { this->x = x; }
  void setY(signed int y) { this->y = y; }

  signed int x, y;

};

class ObjectExample {

public:

  static void showByValue(Coord coord) {
    std::cout << "C++ value " << coord.x << ", " << coord.y << "\n";
  }

  static void showByRef(Coord *coord) {
    std::cout << "C++ ref " << coord->x << ", " << coord->y << "\n";
  }

  static Coord getValue() {
    return(Coord(12, 34));
  }

  static Coord *getRef() {
    static Coord coord(56, 78);
    return(&coord);
  }

};

#include "nbind/nbind.h"

NBIND_CLASS(Coord) {
  construct<>();
  construct<const Coord *>();
  construct<signed int, signed int>();

  getset(getX, setX);
  getset(getY, setY);
}

NBIND_CLASS(ObjectExample) {
  method(showByValue);
  method(showByRef);
  method(getValue);
  method(getRef);
}
