#pragma once

#include <vector>
#include <iostream>

class Event {
private:
    std::vector<char>* charVector;
    std::vector<int>* numericVector;
    const char* constantField;
    static char* staticField;

public:
    Event();
    Event(std::vector<char>* charVec, std::vector<int>* numVec, const char* constField);

    ~Event();

    std::vector<char>* getCharVector();
    std::vector<int>* getNumericVector();
    const char* getConstantField();
    static char* getStaticField();

    void setCharVector(std::vector<char>* charVec);
    void setNumericVector(std::vector<int>* numVec);
    void setConstantField(const char* constField);

    template <typename T>
    void processVector(const std::vector<T>& data);

    template <typename U, typename V>
    U combineValues(U value1, V value2);

    friend std::ostream& operator<<(std::ostream& out, const Event& obj);
    friend std::istream& operator>>(std::istream& in, Event& obj);

    char operator[](int index);
    Event operator*(int multiplier);
    Event& operator++();  
    Event operator++(int);  
    explicit operator std::string() const; 
    bool operator<=(const Event& other) const;  
};


