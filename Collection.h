//
// Created by Alessio Timofte on 29/08/23.
//

#ifndef NOTEPAD_COLLECTION_H
#define NOTEPAD_COLLECTION_H

#include "Nota.h"
#include "Subject.h"
#include <list>

using namespace std;


class Collection : public Subject {
public:
    explicit Collection(const string &name);

    string getName() const;

    int getSize() const;


    void addNote(Nota &nota);

    void deleteNote(Nota &nota);

    void editNote(Nota &nota);

    Nota getNota(string const &title);

    virtual void registerObserver(Observer *observer) override;

    virtual void unregisterObserver(Observer *observer) override;

    virtual void notifyObservers() override;


private:
    string name;
    list<Nota *> collection;
    list<Observer *> observers;
};


#endif //NOTEPAD_COLLECTION_H
