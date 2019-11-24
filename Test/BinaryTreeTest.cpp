//
// Created by vladead on 31.10.2019.
//

#include <gtest/gtest.h>
#include "../BinaryTree/BinaryTree.h"

class BinaryIntTest : public ::testing::Test {
public:
    ~BinaryIntTest() override {
        treeForTest.~BinaryTree();
    }

protected:
    void SetUp() override {
        treeForTest.insert(54);
        treeForTest.insert(28);
        treeForTest.insert(60);
        treeForTest.insert(16);
        treeForTest.insert(32);
        treeForTest.insert(33);
        treeForTest.insert(31);
        treeForTest.insert(18);
        treeForTest.insert(10);
        treeForTest.insert(70);
        treeForTest.insert(76);
        treeForTest.insert(68);
        treeForTest.insert(56);
        treeForTest.insert(58);
        treeForTest.insert(55);
    }

    BinaryTree treeForTest;
};

TEST_F(BinaryIntTest, containsTest) {
    ASSERT_EQ(true, treeForTest.contains(68));
    ASSERT_EQ(true, treeForTest.contains(54));
    ASSERT_EQ(false, treeForTest.contains(100000000));

    treeForTest.~BinaryTree();
    ASSERT_ANY_THROW(treeForTest.contains(1));
}


TEST_F(BinaryIntTest, insertTest) {
    ASSERT_EQ(true, treeForTest.contains(56));
    treeForTest.~BinaryTree();
    treeForTest.insert(6);
    ASSERT_EQ(true, treeForTest.contains(6));
}

TEST_F(BinaryIntTest, removeTest) {
    treeForTest.remove(76);
    ASSERT_EQ(false, treeForTest.contains(76));

    treeForTest.remove(70);
    ASSERT_EQ(false, treeForTest.contains(70));
    ASSERT_EQ(true, treeForTest.contains(68));

    treeForTest.remove(28);
    ASSERT_EQ(false, treeForTest.contains(28));
}
