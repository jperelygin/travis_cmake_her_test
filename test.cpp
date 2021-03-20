#define BOOST_TEST_MODULE
#include <boost/test/unit_test.hpp>
#include "lib.h"


BOOST_AUTO_TEST_SUITE(TestSuite)
BOOST_AUTO_TEST_CASE(Check)
{
    BOOST_ASSERT(build_number > 0);
}
BOOST_AUTO_TEST_CASE(pi_check)
{
    BOOST_ASSERT(pi == 3.14)
}

BOOST_AUTO_TEST_SUITE_END()