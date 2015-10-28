/* 
 * File:   Helloer.h
 * Author: dmitry
 *
 * Created on October 28, 2015, 3:28 PM
 */

#ifndef HELLOER_H
#define	HELLOER_H

#include <iostream>

using namespace std;

class Helloer {
public:
    Helloer();
    Helloer(const string& aWho);
    Helloer(const Helloer& orig);
    virtual ~Helloer();
    string message() const;
private:
    string who;

};

#endif	/* HELLOER_H */

