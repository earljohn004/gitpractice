#include "logic.h"
#include "common_debug.h"
#include <iostream>
#include <vector>
#include <algorithm>

# if 0
std::vector<int> logic::display_even ( std::vector<int> list ){

	std::vector<int> output {};

	//MESSAGE_LOG("display_even");

	for(auto &num : list){
	  if(num%2 == 0)
	    output.push_back(num);
	} 

	return output;
}
#endif

std::vector<int> logic::display_even ( std::vector<int> list ){

	std::vector<int> output {};

	//MESSAGE_LOG("display_even");

	for(auto &num : list){
	  if(num%2 == 0)
	    output.push_back(num);
	} 

	return output;
}

std::vector<int> logic::display_odd( std::vector<int> list ){
	std::vector<int> output {};

	//MESSAGE_LOG("display_odd");

	for(auto &num : list){
	  if(num%2 != 0)
	    output.push_back(num);
	}

	return output;  
}

// Function for implementing Palindrome Checking  
bool logic::isPalindrome(std::string text){

  bool flag = true;
  int len = text.length();
  
  for(int i = 0; i < len/2; i++){
    if(text.at(i) != text.at(len-1-i)){
	flag = false;
	break;
      }       
   }  

#if 0
  std::string newstring(text);
  std::reverse(newstring.begin(), newstring.end());

  if( newstring != text ) return false;
  else return true;
#endif

	return flag;
}
