//Include your class to test here.
#define BOOST_TEST_DYN_LINK         //For dynamic linking against the prebuilt library
#define BOOST_TEST_MODULE MyTest    //Definition of own test module
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(name_of_test)
{
    BOOST_CHECK_EQUAL(2+2, 4); //simple equal check test
}
