#include <iostream>
#include "helloworld.h"

int helloworld::sayHelloWorld(void) {
  std::cout << "Hello World!" << std::endl;
  return 0;
}

int helloworld::sayWelcome(char* name) {
  std::cout << "Welcome, " << name << "!" << std::endl;
  return 0;
}
