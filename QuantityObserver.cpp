//
// Created by Alessio Timofte on 29/08/23.
//

#include "QuantityObserver.h"


QuantityObserver::QuantityObserver(Collection *collezione) : collezione(collezione) {
    collezione->registerObserver(this);
}

void QuantityObserver::update() {
    std::cout << "Numero totale note dentro la collezione " << collezione->getName() << ": " << collezione->getSize()
              << std::endl;
}


QuantityObserver::~QuantityObserver() {
    collezione->unregisterObserver(this);
}