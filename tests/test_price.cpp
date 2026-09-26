#include <gtest/gtest.h>
#include "bt/price.hpp"

TEST(Spread, OneTickApart) {
    EXPECT_EQ(bt::spread(10025, 10026), 1);
}

TEST(Spread, TenTicksApart) {
    EXPECT_EQ(bt::spread(10000, 10010), 10);
}

