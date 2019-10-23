#include <gtest/gtest.h>

#include "libiop/algebra/fields/gf128.hpp"

namespace libiop {

gf128 gf128_mul(const uint64_t &a_val_high, const uint64_t &a_val_low, const uint64_t &b_val_high, const uint64_t &b_val_low)
{
    return gf128(a_val_high, a_val_low) * gf128(b_val_high, b_val_low);
}

/* test cases generated by sage/gf128.sage script */

TEST(MultiplicationTest, SageTests) {
    EXPECT_EQ(gf128_mul(0xb1d2219b0266de02LL, 0x4556f8aac66f427fLL, 0xfc9de0af7ec40b3fLL, 0x3dddbcee3039f5fcLL), gf128(0xf0b63cd2d8d9acb7LL, 0x14c9965cbb45f242LL));
    EXPECT_EQ(gf128_mul(0x7218e0e28cba2badLL, 0xc63a3ae27b186b00LL, 0x6cbf9a222a7f80a7LL, 0xbfe1ca4a7ccb135fLL), gf128(0x9a68dc276e08964aLL, 0x94cf56a81986e62fLL));
    EXPECT_EQ(gf128_mul(0xfa309c33b717dd13LL, 0x38567cdad827aacfLL, 0x8418b817f5caf84cLL, 0x3590e0c94d76b16aLL), gf128(0x0d4af0a0c7778f42LL, 0xa52cdf9b42326edcLL));
    EXPECT_EQ(gf128_mul(0xf7903a9c58e4223cLL, 0x0cdc30af062ba589LL, 0x4193e34b8241b8b6LL, 0x8d73a6d58a9833adLL), gf128(0x1aebbb2a40e6bdc5LL, 0x40b58b1663f1e7baLL));
    EXPECT_EQ(gf128_mul(0x81f59dadf3516810LL, 0x657e286088c96142LL, 0x12356e70b09e27a6LL, 0x56aa86373c498fddLL), gf128(0x6f1931b5b32adfd6LL, 0x3d0721c2dd988b1dLL));
    EXPECT_EQ(gf128_mul(0x0fe9a9f10ea6b3beLL, 0x614becf0f6981970LL, 0xf764a67447957a65LL, 0x897bb93561e04d72LL), gf128(0x7082df4ae39182f8LL, 0x29ead6ff7a231a76LL));
    EXPECT_EQ(gf128_mul(0xb6f0e7fe834a305fLL, 0x5d1bce4867374275LL, 0xf507be43450e596cLL, 0x7625671a07a1b127LL), gf128(0x7d87898bb86b9700LL, 0x288b33919644a559LL));
    EXPECT_EQ(gf128_mul(0x00a7fced16ffa59bLL, 0x7009d6ea6cbc3723LL, 0xb4dab96b1454919dLL, 0x23fad70584b9ff24LL), gf128(0x6f67249586163ab9LL, 0xbb823abc98939faeLL));
    EXPECT_EQ(gf128_mul(0x5756b56a1d208f91LL, 0xac2c97ebcf121998LL, 0x633c9cefc089eb74LL, 0x0fd73239d93bd077LL), gf128(0xb2658b016f98c47fLL, 0x9dfa616729b5e040LL));
    EXPECT_EQ(gf128_mul(0xf55ab02f9dae69b8LL, 0xc1c42adfa999b078LL, 0xfae308c406eb08feLL, 0x49bfcd0bd4d96b01LL), gf128(0xdf0f7f62ecc610e1LL, 0x9bcec94d9f08f412LL));
}

TEST(InverseTest, SimpleTest) {
    const gf128 a = gf128::random_element();
    const gf128 a_inv = a.inverse();

    EXPECT_EQ(a*a_inv, gf128(1));
}

}
