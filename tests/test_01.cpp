#include <gtest/gtest.h>
#include "Complex.hpp"

#define TEST_SUIT_NAME ArithmeticTests

TEST (TEST_SUIT_NAME, PositiveNos) {
    ASSERT_TRUE((42.924_re + 10.117_im) + (-45.109_re + 9.861_im) == (-2.185_re + 19.978_im));
    ASSERT_TRUE((47.531_re + -10.564_im) + (-9.539_re + 15.533_im) == (37.992_re + 4.969_im));
    ASSERT_TRUE((-47.236_re + -51.646_im) + (57.405_re + -41.153_im) == (10.169_re + -92.799_im));
}

TEST(TEST_SUIT_NAME, Subtitution) {
    ASSERT_TRUE((42.924_re + 10.117_im) - (-45.109_re + 9.861_im) == (88.033_re + 0.256_im));
}

TEST(TEST_SUIT_NAME, Multiplication) {
    ASSERT_TRUE((42.924_re + 10.117_im) * (-45.109_re + 9.861_im) == (-2036.022_re + -33.094_im));
}

TEST(TEST_SUIT_NAME, Division) {
    ASSERT_TRUE((1_re + 5_im) / (5_re + -7_im) == (-0.405_re + 0.432_im));
}
