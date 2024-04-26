#ifndef ACTIVITY_TRACKER_LP_PLACE_H
#define ACTIVITY_TRACKER_LP_PLACE_H

#include<iostream>
class Place {

private:
    std::string location;
    std::string name;

public:
    explicit Place( std::string name, std::string location="") : name(name), location(location) { }
    Place( const Place& that ) : name(that.name), location(that.location) { }

    inline Place& operator=( const Place &rPlace ) {
        name = rPlace.name;
        location = rPlace.location;
        return *this;
    }

    virtual ~Place();


    const std::string &getLocation() const;
    void setLocation(const std::string &location);
    const std::string &getName() const;
    void setName(const std::string &name);
};


#endif //ACTIVITY_TRACKER_LP_PLACE_H