#include "Event.h"

Event::Event() : constantField("Default Event") {
    charVector = new std::vector<char>();
    numericVector = new std::vector<int>();
}

Event::Event(std::vector<char>* charVec, std::vector<int>* numVec, const char* constField)
    : charVector(charVec), numericVector(numVec), constantField(constField) {}

Event::~Event() {
    delete charVector;
    delete numericVector;
}

std::vector<char>* Event::getCharVector() {
    return charVector;
}

std::vector<int>* Event::getNumericVector() {
    return numericVector;
}

const char* Event::getConstantField() {
    return constantField;
}

char* Event::getStaticField() {
    return staticField;
}

void Event::setCharVector(std::vector<char>* charVec) {
    if (charVec != nullptr) {
        charVector = charVec;
    }
}

void Event::setNumericVector(std::vector<int>* numVec) {
    if (numVec != nullptr) {
        numericVector = numVec;
    }
}

void Event::setConstantField(const char* constField) {
    constantField = constField;
}

template <typename T>
void Event::processVector(const std::vector<T>& data) {
}

template <typename U, typename V>
U Event::combineValues(U value1, V value2) {
}

std::ostream& operator<<(std::ostream& out
