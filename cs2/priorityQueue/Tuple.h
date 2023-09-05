//Tuple.h

#ifndef _TUPLE_H
#define _TUPLE_H

#include <string>

class Tuple {
    
    public:
        Tuple();
        Tuple(int priority, std::string name);
        int priority();
        std::string name();
        
    private:
        int priority_;
        std::string name_;
        
};

inline Tuple::Tuple() { 
    priority_ = 0;
    name_ = "";
}

inline Tuple::Tuple(int priority, std::string name) {
    priority_ = priority;
    name_ = name;
}

inline int Tuple::priority() { return priority_; }

inline std::string Tuple::name() { return name_; }

#endif
