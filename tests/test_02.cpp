#include <gtest/gtest.h>
#include "Complex.hpp"

#define TEST_SUIT_NAME ComparsionTests

TEST(TEST_SUIT_NAME, conj) {
    EXPECT_EQ(conj(57.405_re + 41.153_im), 57.405_re + -41.153_im);
    EXPECT_EQ(conj(0_re + 0_im), 0_re + 0_im);
}

TEST(TEST_SUIT_NAME, Equasion) {
    ASSERT_FALSE(57.405_re + 41.153_im == 57.402_re + 41.157_im);
    ASSERT_TRUE(3.14_re + 1.67_im == 3.14_re + 1.67_im);
}

TEST(TEST_SUIT_NAME, cmp) {
    ASSERT_EQ(cmp(-47.236_re + -51.646_im, 57.405_re + -41.153_im), -1);
    ASSERT_EQ(cmp(0_re + 10_im, 6_re + 8_im),    0);
    ASSERT_EQ(cmp(47.531_re + -10.564_im, -9.539_re + 15.533_im),    1);
}
