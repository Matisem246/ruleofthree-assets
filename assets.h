//
// Created by liul5 on 5/12/2023.
//

#ifndef ASSETSCLASS_RULEOFTHREE_ASSETS_H
#define ASSETSCLASS_RULEOFTHREE_ASSETS_H

#include <string>
using namespace std;

class assets {
public:
    assets(); // take no parameter constructor
    assets(const string& name); //  take name constructor
    /// the following is rule of three///
    assets(const assets& other); // copy constructor
    const assets& operator=(const assets& rhs); // copy assignment
    ~assets(); // destructor

    void AddTag(const string& tag);
    string ToString() const;
    //    ostream WriteTag(ostream& output) const;

private:
    string _name;
    size_t _numberOfTags;
    string* _tags;

};


#endif //ASSETSCLASS_RULEOFTHREE_ASSETS_H
