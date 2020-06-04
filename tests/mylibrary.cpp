#include "gmock/gmock.h"
#include "gtest/gtest.h"

extern "C" {
#include "mylibrary.h"
}

int main(int argc, char **argv) {
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}

class MylibraryTest : public ::testing::Test {
protected:
	void SetUp() {
	}

	void TearDown() {
	}
};

TEST_F(MylibraryTest, initial_state){
	EXPECT_EQ(mylibrary_method(), 0);
}

