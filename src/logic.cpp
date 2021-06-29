#include "logic.h"
#include "common_debug.h"
#include <iostream>
#include <vector>

using namespace std;

std::vector<int> logic::display_even ( std::vector<int> list ){

	std::vector<int> output {};

	//MESSAGE_LOG("display_even");

	for(auto &num : list){
	  if(num%2 == 0)
	    output.push(num);
	} 

	return output;
}

std::vector<int> logic::display_odd( std::vector<int> list ){
	std::vector<int> output {};

	//MESSAGE_LOG("display_odd");

	for(auto &num : list){
	  if(num%2 != 0)
	    output.push(num);
	}

	return output;  
}
