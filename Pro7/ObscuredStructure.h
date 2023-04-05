#pragma once
#include <vector>

class ObscuredStructure {
public:
    virtual void add(int data) = 0;
    virtual void remove() = 0;
    virtual int peek() = 0;
    virtual int size() = 0;
};

//Stack
class Child1 : public ObscuredStructure {
private:
    //vector<int> internalVec;
    int internal = 0;
public:
    Child1() {}

    void add(int data) {
        //internalVec.push_back(data);
        internal++;
    }

    void remove() {
        //internalVec.pop_back();
        internal--;
    }

    int peek() {
        //return internalVec[internalVec.size() -1];
        return internal;
    }

    int size() {
        //return internalVec.size();
        return internal;
    }
};