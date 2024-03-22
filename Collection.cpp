//
// Created by Alessio Timofte on 29/08/23.
//

#include "Collection.h"


Collection::Collection(const string &name): name(name) {}

string Collection::getName() const {
    return name;
}

int Collection::getSize() const {
    return collection.size();
}

void Collection::addNote(Nota &nota) {
    collection.push_back(&nota); // this non necessario
    notifyObservers();
}

void Collection::deleteNote(Nota &nota) {
    auto it = collection.begin();
    for (auto itr = collection.begin(); itr != collection.end(); ++itr) {
        if ((*itr)->getTitle() == nota.getTitle())
            it = itr;  // finds the note
    }
    if (!(*it)->isLocked())
        collection.erase(std::find(collection.begin(), collection.end(), (*it)));
    notifyObservers();
}

void Collection::editNote(Nota &nota) {
    auto it = collection.begin();
    for (auto itr = collection.begin(); itr != collection.end(); ++itr) {
        if ((*itr)->getTitle() == nota.getTitle())
            it = itr;  // finds the note
    }
    if (!(*it)->isLocked())
        (*it)->setBody(nota.getBody());
}


Nota Collection::getNota(string const &title) {

    for (auto itr: collection) {
        if ((*itr).getTitle() == title)
            return (*itr); // finds the note
    }
    Nota A;
    return A;
}


void Collection::registerObserver(Observer *observer) {
    observers.push_back(observer);
}

void Collection::unregisterObserver(Observer *observer) {
    observers.remove(observer);
}

void Collection::notifyObservers() {
    for (auto &observer: observers) {
        observer->update();
    }
}
