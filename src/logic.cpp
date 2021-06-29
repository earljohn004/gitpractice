#include "logic.h"
#include "common_debug.h"
#include <iostream>
#include <vector>

using namespace std;

void logic::display_even ( std::vector<int> list ){
  MESSAGE_LOG("LIST OF EVEN NUMBERS\n");

  for(auto &num : list){
    if(num%2 == 0)
      cout << num << " ";
  } 
}

void logic::display_odd( std::vector<int> list ){
  MESSAGE_LOG("LIST OF ODD NUMBERS\n");

   for(auto &num : list){
    if(num%2 != 0)
      cout << num << " ";
  } 
}
