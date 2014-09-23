#include "Test.h"
#include "Greeting.h"

#include <iostream>

void run() {
  std::cout << getGreeting() << "\n";
}

int main(int argc, char *argv[]) {
  if (argc > 1 && strcmp(argv[1], "-t") == 0)
    test();
  else
    run();
}
