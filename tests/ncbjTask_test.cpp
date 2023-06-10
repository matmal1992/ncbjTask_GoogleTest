#include <ncbjTask.h>
#include <gtest/gtest.h>

class ncbjFunctionTest : public::testing::Test{
    protected:

    Derived d1;
    isimple *ptr = &d1;
};

TEST_F(ncbjFunctionTest, Throw_runtime_error_when_getValue_equals_10){

    //d1.setValue(10);  //uncomment this setter to pass the test
    int b = 100;
    ASSERT_TRUE(d1.getValue() == 10);

    try{
        ncbj_function(*ptr, b); 
    }
    catch(runtime_error &e){
        EXPECT_EQ(e.what(), string("a.getValue() = 10"));
    }
}

TEST_F(ncbjFunctionTest, Throw_runtime_error_when_b_equals_34){
    int b = 34;
    ASSERT_TRUE(b == 34);

    try{
        ncbj_function(*ptr, b);
    }
    catch(runtime_error &e){
        EXPECT_EQ(e.what(), string("b = 34"));
    }
}

TEST_F(ncbjFunctionTest, Call_setValue_exactly_one_time_when_b_is_smaller_than_10){
    int b = 9;
    ASSERT_TRUE(b < 10);

    ncbj_function(*ptr, b);
    int expectedCounter = 1;
    int actualCounter = d1.getCounter();

    EXPECT_EQ(expectedCounter, actualCounter);
}

TEST_F(ncbjFunctionTest, Call_setValue_at_least_one_time_when_b_is_greater_or_equal_10){
    int b = 11;
    ASSERT_TRUE(b >= 10);

    ncbj_function(*ptr, b);
    int actualCounter = d1.getCounter();

    EXPECT_TRUE(actualCounter > 0);
}

TEST_F(ncbjFunctionTest, Return_10_when_b_equals_10){ 
    int b = 10;
    ASSERT_EQ(b, 10);

    int expected = 10;
    int actual = ncbj_function(*ptr, b);

    EXPECT_EQ(expected, actual);
}

TEST_F(ncbjFunctionTest, Return_getValue_when_b_not_equals_10){
    int b = 11;
    ASSERT_FALSE(b == 10);

    ncbj_function(*ptr, b);
    int expected = d1.getValue();
    int actual = ncbj_function(*ptr, b);

    EXPECT_EQ(expected, actual);
}

int main(int argc, char** argv){

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
