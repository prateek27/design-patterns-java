#pragma once
template <typename T>
class Prototype {
public:
    virtual T* clone() const = 0;
};
