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
	std::unique_ptr<logic> logic = std::make_unique<logic>();
}

TEST_MAIN()

#endif
