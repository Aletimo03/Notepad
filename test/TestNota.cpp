//
// Created by Alessio Timofte on 30/08/23.
//

#include <gtest/gtest.h>
#include "../Nota.h"

// Tests for Nota class
class NotaTest : public ::testing::Test {
protected:
    NotaTest() {
        // Initialize any common variables if needed
    }
};

// Test constructor and getters
TEST_F(NotaTest, ConstructorAndGetters) {
    Nota nota("Titolo", "txt");

    EXPECT_EQ(nota.getTitle(), "Titolo");
    EXPECT_EQ(nota.getBody(), "txt");
    EXPECT_FALSE(nota.isLocked());
}

// Test setters when the Nota is not locked
TEST_F(NotaTest, SettersWhenNotLocked) {
    Nota nota("New Title", "New Body");

    nota.setTitle("New Title");
    EXPECT_EQ(nota.getTitle(), "New Title");

    nota.setBody("New Body");
    EXPECT_EQ(nota.getBody(), "New Body");

    nota.setLock(true);
    EXPECT_TRUE(nota.isLocked());

    nota.setLock(false);
    EXPECT_FALSE(nota.isLocked());
}

// Test setters when the Nota is locked
TEST_F(NotaTest, SettersWhenLocked) {
    Nota nota("Title", "Body");
    nota.setLock(true);

    nota.setTitle("New Title");
    EXPECT_EQ(nota.getTitle(), "Title");  // Title should not change when locked

    nota.setBody("New Body");
    EXPECT_EQ(nota.getBody(), "Body");  // Body should not change when locked

    nota.setLock(false);
    EXPECT_FALSE(nota.isLocked());
}

