#include <iostream>
#include "helloworld.h"
#include "ANSI.hpp"

using namespace srilakshmikanthanp; // ANSI escape sequence wrapper namespace

int helloworld::sayHelloWorld(void) {
  std::cout << ansi::bold
            << "Hello World!"
            << ansi::reset << std::endl;
  return 0;
}

int helloworld::sayWelcome(char* name) {
  std::cout << "Welcome, " << name << "!" << std::endl;
  return 0;
}
