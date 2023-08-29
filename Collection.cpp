//
// Created by Alessio Timofte on 29/08/23.
//

#include "Collection.h"



Collection::Collection( const string &name) {
    this->name=name;
}

void Collection::addNote( Nota &nota) {
    this->collection.push_back(&nota);
}
void Collection::deleteNote( Nota &nota) {
    auto it=collection.begin();
    for( auto itr=collection.begin();itr!=collection.end();++itr){
        if((*itr)->getTitle()==nota.getTitle())
            it=itr;  // finds the note
    }
    if(!(*it)->isLocked())
    collection.erase(std::find(collection.begin(),collection.end(),(*it)));
}

void Collection::editNote(Nota &nota) {
    auto it=collection.begin();
    for( auto itr=collection.begin();itr!=collection.end();++itr){
        if((*itr)->getTitle()==nota.getTitle())
            it=itr;  // finds the note
    }
    if(!(*it)->isLocked())
        (*it)->setBody(nota.getBody());
}

