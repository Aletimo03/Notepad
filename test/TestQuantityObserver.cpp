//
// Created by Alessio Timofte on 31/08/23.
//

#include <gtest/gtest.h>
#include "../QuantityObserver.h"


// Define a test fixture for the QuantityObserver class
class QuantityObserverTest : public ::testing::Test {
protected:
    // Create instances of the Collection and Nota classes for testing
    Collection collection;
    Nota nota1;
    Nota nota2;
    Nota nota3;
    Nota nota4;
    Nota nota5;

    // Create an instance of QuantityObserver
    QuantityObserver observer{&collection};

    // This function runs before each test case
    void SetUp() override {
        // Add a Note to the Collection
        collection.addNote(nota1);
        collection.addNote(nota2);
        collection.addNote(nota3);
        collection.addNote(nota4);
        collection.addNote(nota5);
    }
};

// Test the update method of QuantityObserver
TEST_F(QuantityObserverTest, UpdateMethod) {
    // Create a mock output stream to capture the printed message
    std::stringstream output;
    std::streambuf* oldOutput = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf());

    // Notify the observer (should print the message)
    observer.update();

    // Restore the original output stream
    std::cout.rdbuf(oldOutput);

    // Check if the printed message matches the expected output
    EXPECT_EQ(output.str(), "Numero totale note dentro la collezione : 5\n");
}
