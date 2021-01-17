#include <iostream>
#include <gtest/gtest.h>
#include "myfunctions.h"
using namespace std;

TEST(myfunctions, add)
{
    GTEST_ASSERT_EQ(add(10, 22), 32);
}

int main(int argc, char* argv[])
{
    //skeleton code for gtest
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}