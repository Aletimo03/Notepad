//
// Created by Alessio Timofte on 31/08/23.
//

#include <gtest/gtest.h>
#include "../Collection.h"

class CollectionTest : public ::testing::Test {
protected:
    CollectionTest() {
        // Initialize any common variables if needed
    }
};


// Test the constructor and getter method for name
TEST_F(CollectionTest, ConstructorAndGetters) {
    // Create a Collection object with a sample name
    Collection collection("Sample Collection");

    // Check if the getter method returns the correct name
    EXPECT_EQ(collection.getName(), "Sample Collection");
}

// Test adding notes to the collection
TEST_F(CollectionTest, AddNote) {
    // Set up a Collection object
    Collection collection("My Collection");

    // Create a Nota object
    Nota nota("Note Title", "Note Body");

    // Add the Nota object to the collection
    collection.addNote(nota);

    // Check if the size of the collection has increased
    EXPECT_EQ(collection.getSize(), 1);
}

// Test deleting notes from the collection
TEST_F(CollectionTest, DeleteNote) {
    // Set up a Collection object
    Collection collection("My Collection");

    // Create a Nota object
    Nota nota("Note Title", "Note Body");

    // Add the Nota object to the collection
    collection.addNote(nota);

    // Delete the Nota object from the collection
    collection.deleteNote(nota);

    // Check if the size of the collection has decreased
    EXPECT_EQ(collection.getSize(), 0);
}


// Test editing notes in the collection
TEST_F(CollectionTest, EditNote) {
    // Set up a Collection object
    Collection collection("My Collection");

    // Create a Nota object and add it to the collection
    Nota nota("Note Title", "Note Body");
    collection.addNote(nota);

    // Create a modified Nota object
    Nota modifiedNota("Note Title", "Modified Note Body");

    // Edit the Nota object in the collection
    collection.editNote(modifiedNota);

    // Check if the body of the Note has been modified
    EXPECT_EQ(collection.getSize(), 1);
    EXPECT_EQ(collection.getNota("Note Title").getBody(), "Modified Note Body");
}
