//
// Created by Alessio Timofte on 29/08/23.
//

#include "Collection.h"


Collection::Collection(const string &name) {
    this->name = name;
}

string Collection::getName() const {
    return name;
}

int Collection::getSize() const {
    return collection.size();
}


list<Nota *> Collection::getCollection() const {
    return collection;
}

void Collection::addNote(Nota &nota) {
    this->collection.push_back(&nota);
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
