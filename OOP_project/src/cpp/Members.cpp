
#include "Members.h"


Members::Members() : constantField(0) {
    charVector = new std::vector<char>();
    numericVector = new std::vector<int>();
}

Members::Members(std::vector<char>* charVec, std::vector<int>* numVec, int constField)
    : charVector(charVec), numericVector(numVec), constantField(constField) {}

Members::~Members() {
    delete charVector;
    delete numericVector;
}

std::vector<char>* Members::getCharVector() {
    return charVector;
}

std::vector<int>* Members::getNumericVector() {
    return numericVector;
}

int Members::getConstantField() {
    return constantField;
}

int Members::getStaticField() {
    return staticField;
}

void Members::setCharVector(std::vector<char>* charVec) {
    if (charVec != nullptr) {
        charVector = charVec;
    }
}

void Members::setNumericVector(std::vector<int>* numVec) {
    if (numVec != nullptr) {
        numericVector = numVec;
    }
}

void Members::setConstantField(int constField) {
