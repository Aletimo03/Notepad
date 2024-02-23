//
// Created by Alessio Timofte on 29/08/23.
//

#include "Nota.h"


Nota::Nota() { locked = false; }

Nota::Nota(const string &title, const string &body) {
    this->title = title;
    this->body = body;
    locked = false;
}

string Nota::getTitle() const {
    return this->title;
}

string Nota::getBody() const {
    return this->body;
}

bool Nota::isLocked() const {
    return this->locked;
}

void Nota::setTitle(const string &title) {
    if (!this->locked)
        this->title = title;
}

void Nota::setBody(const string &body) {
    if (!this->locked)
        this->body = body;
}

void Nota::setLock(const bool &locked) {
    this->locked = locked;
}