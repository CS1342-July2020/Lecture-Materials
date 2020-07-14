#include <iostream>
#include "threeints.h"
#include <cassert>

using namespace std;

int main() {
   bool result = (ThreeIntsSum(5, 10, 20) == 35);
   assert(result);
   assert(ThreeIntsSum(5, -10, 20) == 15);
   assert(ThreeIntsSum(0, 0, 0) == 1);

   return 0;
}