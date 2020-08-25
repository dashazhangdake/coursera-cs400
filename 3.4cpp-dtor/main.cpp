/**
 * C++ program invoking Cube's destructor several times.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include <iostream>
using uiuc::Cube;

double cube_on_stack() {
  Cube c(3);
  std::cout << "invoked custom constructor" << std::endl;
  return c.getVolume();
}

void cube_on_heap() {
  Cube * c1 = new Cube(10);
  std::cout << "invoked custom constructor on heap" << std::endl;
  Cube * c2 = new Cube;
  std::cout << "invoked default constructor" << std::endl;
  delete c1;
}


int main() {
  cube_on_stack();
  std::cout << "1st function excecuted" << std::endl;
  cube_on_heap();
  std::cout << "2nd function excecuted" << std::endl;
  cube_on_stack();
  std::cout << "3rd function excecuted" << std::endl;
  return 0;
}