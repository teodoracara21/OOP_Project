#pragma once

#include <vector>
#include <iostream>

class Location {
private:
    std::vector<char>* charVector;
    std::vector<int>* numericVector;
    const double constantField;
    static double staticField;

public:
    Location();
    Location(std::vector<char>* charVec, std::vector<int>* numVec, double constField);

    ~Location();

    std::vector<char>* getCharVector();
    std::vector<int>* getNumericVector();
    double getConstantField();
    static double getStaticField();

    void setCharVector(std::vector<char>* charVec);
    void setNumericVector(std::vector<int>* numVec);
    void setConstantField(double constField);

    template <typename T>
    void processVector(const std::vector<T>& data);

    template <typename U, typename V>
    U combineValues(U value1, V value2);

    friend std::ostream& operator<<(std::ostream& out, const Location& obj);
    friend std::istream& operator>>(std::istream& in, Location& obj);

    char operator[](int index);
    Location operator-(const Location& other);
    Location& operator--(); 
    Location operator--(int); 
    explicit operator double() const;  
    bool operator<(const Location& other) const;
};

