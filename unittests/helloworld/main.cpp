/* 
 * File:   main.cpp
 * Author: dmitry
 *
 * Created on October 28, 2015, 2:45 PM
 */

#include <cstdlib>
#include <iostream>

#include "Helloer.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Helloer helloer("World");
    cout << helloer.message() << endl;
    return 0;
}

