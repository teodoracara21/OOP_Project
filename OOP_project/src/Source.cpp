#include <iostream>
#include <string>
using namespace std;

class Location {
private:
    int NoOfRows;
    char NameOfLocation;
    const int MaxSeats;
    const int MaxRows;

public:

};

class Event {
private:
    char Date;
    char Time;
    char NameOfEvent;
    float Duration;
    int Number;
    char EventType;
public:

};

enum EventType {
    Movie,
    FootballMatch,
    MusicConcert,
    Theatre,
    Opera
};

class Member {
    bool PremiumAccount;
    int age;
    char name;

};