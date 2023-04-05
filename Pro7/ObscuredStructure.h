#pragma once
#include <vector>
using namespace std;

class ObscuredStructure {
public:
    //Virtual method declarations
    virtual void add(int data) = 0;
    virtual void remove() = 0;
    virtual int peek() = 0;
    virtual int size() = 0;
};

//Stack class wrapped around a vector
class Child1 : public ObscuredStructure {
private:
    vector<int> internalVec;
public:
    Child1() {}

    //Pushes data to the back of the vector
    void add(int data) {
        internalVec.push_back(data);
    }

    //Removes data from the back of the vector
    void remove() {
        if (internalVec.size() > 0) {
            internalVec.pop_back();
        }
    }

    //Returns the last item of the vector if the vector isn't empty
    int peek() {
        if (internalVec.size() > 0) {
            return internalVec[internalVec.size() -1];
        }
        else {
            throw "Structure is empty";
        }
    }

    //Returns size
    int size() {
        return internalVec.size();
    }
};

//Queue class wrapped around a vector
class Child2 : public ObscuredStructure {
private:
    vector<int> internalVec;
public:
    Child2() {}

    //Pushes data to the back of the vector
    void add(int data) {
        internalVec.push_back(data);
    }

    //Removes data from the front of the vector
    void remove() {
        if (internalVec.size() > 0) {
            internalVec.erase(internalVec.begin());
        }
    }

    //Returns the first item of the vector if the vector isn't empty
    int peek() {
        if (internalVec.size() > 0) {
            return internalVec[0];
        }
        else {
            throw "Structure is empty";
        }
    }

    //Returns size
    int size() {
        return internalVec.size();
    }
};