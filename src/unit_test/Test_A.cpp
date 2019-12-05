// Copyright (c) 2017-2019 Florian Wende (flwende@gmail.com)
//
// Distributed under the BSD 2-clause Software License
// (See accompanying file LICENSE)

#include <A.hpp>
#include <gtest/gtest.h>

TEST(A, Returns_5)
{
    A a;

    EXPECT_EQ(5, a.Get());
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}