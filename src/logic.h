#ifndef _SRC_LOGIC_H
#define _SRC_LOGIC_H

#include <iostream>
#include <vector>

class logic{
	public:
		logic() = default;
		~logic() = default;

		void display_even ( std::vector<int> list );
		void display_odd( std::vector<int> list );
};

#endif // _SRC_LOGIC_H
