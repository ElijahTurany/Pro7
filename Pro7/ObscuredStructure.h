#pragma once
#include <vector>

template <typename T>
class ObscuredStructure {
public:
    virtual void add(T data) = 0;
    virtual void remove() = 0;
    virtual T peek() = 0;
    virtual T size() = 0;
};

//Stack
template <typename T>
class Child1 : public ObscuredStructure {
private:
    vector<T> internalVec;
public:
    Child1() {}

    void add(T data) {
        internalVec.push_back(T);
    }

    void remove() {
        internalVec.pop_back();
    }

    T peek() {
        return internalVec[internalVec.size() -1];
    }
};