/**
 * C++ program using the std::vector class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <vector>
#include <iostream>

int main() {
  std::vector<int> v;
  v.push_back( 2 );
  std::cout << v.size() << std::endl;
  std::cout << v.capacity() << std::endl;
  v.push_back( 3 );
  std::cout << v.size() << std::endl;
  std::cout << v.capacity() << std::endl;
  v.push_back( 5 );
  std::cout << v.size() << std::endl;
  std::cout << v.capacity() << std::endl;

  std::cout << v[0] << std::endl;
  std::cout << v[1] << std::endl;
  std::cout << v[2] << std::endl;

  return 0;
}
