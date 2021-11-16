#include <iostream>
#include "helloworld.h"

int sayHelloWorld(void) {
  std::cout << "Hello World!" << std::endl;
  return 0;
}

int sayWelcome(char* name) {
  std::cout << "Welcome, " << name << "!" << std::endl;
  return 0;
}
