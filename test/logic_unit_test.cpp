#include "common_debug.h"
#include "logic.h"

#ifdef TEST_MODE
#include "unit_test_framework.h"
#endif

#include <iostream>
#include <string>
#include <memory>
#include <chrono>
#include <cstdio>

#ifdef TEST_MODE


TEST(random_test){
	std::unique_ptr<logic> test = std::make_unique<logic>();
	auto get_even = test->display_even( {1,2,3,4,5,6,7,8,9} );
	std::vector<int> result {2,4,6,8};
	int count = 0;

	for( auto num : result ){
		ASSERT_EQUAL( num, get_even.at(count) );
		VAR_LOG(num);
		++count;
	}
}

TEST( palindrome_test ){
	std::unique_ptr<logic> test = std::make_unique<logic>();

	ASSERT_EQUAL( true , test->isPalindrome("aaa"));
	ASSERT_EQUAL( false , test->isPalindrome("test"));
	ASSERT_EQUAL( true , test->isPalindrome("nasabayabasan"));
	ASSERT_EQUAL( false , test->isPalindrome("earl"));
	ASSERT_EQUAL( true , test->isPalindrome("EARLLRAE"));
	ASSERT_EQUAL( true , test->isPalindrome(""));
}

TEST_MAIN()

#endif
