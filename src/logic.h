#ifndef _SRC_LOGIC_H
#define _SRC_LOGIC_H

#include <iostream>
#include <vector>

class logic{
	public:
		logic() = default;
		~logic() = default;

		std::vector<int> display_even ( std::vector<int> list );
		std::vector<int> display_odd( std::vector<int> list );
		bool isPalindrome(std::string text);
};

#endif // _SRC_LOGIC_H
