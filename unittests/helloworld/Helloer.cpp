/* 
 * File:   Helloer.cpp
 * Author: dmitry
 * 
 * Created on October 28, 2015, 3:28 PM
 */

#include "Helloer.h"

Helloer::Helloer() {
}

Helloer:: Helloer(const string& aWho) {
    who = aWho;
}

Helloer::Helloer(const Helloer& orig) {
}

Helloer::~Helloer() {
}

string Helloer::message() const {
    if (who.length() == 0) {
        return "";
    }
    return (string)"Hello " + who;
}
