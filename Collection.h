//
// Created by Alessio Timofte on 29/08/23.
//

#ifndef NOTEPAD_COLLECTION_H
#define NOTEPAD_COLLECTION_H
#include "Nota.h"
#include <list>

using namespace std;

class Collection {
public:
    explicit Collection(const string &name);
    void addNote(Nota &nota);
    void deleteNote(Nota &nota);
    void editNote(Nota &nota);


private:
    string name;
list<Nota*> collection;
};


#endif //NOTEPAD_COLLECTION_H
