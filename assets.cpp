//
// Created by liul5 on 5/12/2023.
//

#include "assets.h"
#include <iostream>
#include <sstream>

assets::assets() {
    _numberOfTags = 0;
    _tags = nullptr;
}

assets::assets(const string& name) {
    _name = name;
    _numberOfTags = 0;
    _tags = nullptr;
}

assets::~assets() {
    delete[] _tags;
}

assets::assets(const assets& other) {
    _name = other._name;
    _numberOfTags = other._numberOfTags;
    if (_numberOfTags > 0) {
        _tags = new string[_numberOfTags];
        for (size_t i = 0; i < _numberOfTags; i ++) {
            _tags[i] = other._tags[i];
        }
    }
    else {
        _tags = nullptr;
    }
}

const assets& assets::operator=(const assets& rhs) {
    if (this != &rhs) {
        // Destruction
        delete[] _tags;
        // Construction
        _name = rhs._name;
        _numberOfTags = rhs._numberOfTags;
        if (_numberOfTags > 0) {
            _tags = new string[_numberOfTags];
            for (size_t i = 0; i < _numberOfTags; i ++) {
                _tags[i] = rhs._tags[i];
            }
        }
        else {
            _tags = nullptr;
        }
    }
       return *this;
}

void assets::AddTag(const string& tag) {

  //write your codes here
  //write your codes here
  //write your codes here

  string* newTags = new string[_numberOfTags + 1];

  for (size_t i = 0; i < _numberOfTags; ++i) {
      newTags[i] = _tags[i];
  }

  newTags[_numberOfTags] = tag;

  delete[] _tags;

  _tags = newTags;

  ++_numberOfTags;
  
}



string assets::ToString() const {
    stringstream ss;
    ss << "{\"name\":\"" << _name << "\", \"numberofTags\":\"" << _numberOfTags << "\",\"Tags\":";
    for(int i=0; i<_numberOfTags;i++)
    ss<< _tags[i]<< ";";
    ss<<"}";
    return ss.str();
}

//ostream assets::WriteTag(ostream& output) const{
//
//    output << _name << endl;
//    output<< _numberOfTags <<endl;
//    for(int i=0; i<_numberOfTags;i++)
//        output<< _tags[i]<< ";";
//
//}