//
// Created by Alessio Timofte on 29/08/23.
//

#include "Nota.h"


Nota::Nota() { locked = false; }

Nota::Nota(const string &title, const string &body): title(title), body(body) {
    locked = false;
}

// rimossi this superflui

string Nota::getTitle() const {
    return title;
}

string Nota::getBody() const {
    return body;
}

bool Nota::isLocked() const {
    return locked;
}

void Nota::setTitle(const string &title) {
    if (!locked)
        this->title = title;
}

void Nota::setBody(const string &body) {
    if (!locked)
        this->body = body;
}

void Nota::setLock(const bool &locked) {
    this->locked = locked;
}