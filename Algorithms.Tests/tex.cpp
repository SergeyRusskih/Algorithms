#include "pch.h"
#include "..\Algorithms\tex.h"

TEST(Tex, Shakespeare) {
    EXPECT_EQ(Tex::run("\"To be or not to be,\" quoth the Bard, \"that is the question\""),
                       "``To be or not to be,'' quoth the Bard, ``that is the question''");
}

TEST(Tex, Programmer) {
    EXPECT_EQ(Tex::run("The programming contestant replied : \"I must disagree. To `C' or not to `C', that is The Question!\""),
                       "The programming contestant replied : ``I must disagree. To `C' or not to `C', that is The Question!''");
}