//
// Created by Alessio Timofte on 29/08/23.
//

#ifndef NOTEPAD_QUANTITYOBSERVER_H
#define NOTEPAD_QUANTITYOBSERVER_H

#include "Observer.h"
#include "Collection.h"


class QuantityObserver : public Observer {
private:
    Collection *collezione;
public:
    explicit QuantityObserver(Collection *collezione);

    void update() override;

    ~QuantityObserver() override;
};


#endif //NOTEPAD_QUANTITYOBSERVER_H
