#ifndef PATHNODE_H
#define PATHNODE_H

#include <string>

struct PathNode {
    std::string name;
    double f, g, h;
    PathNode* next;
    PathNode() : name(""), f(0), g(0), h(0), next(nullptr){}
    PathNode(std::string n, double _f, double _g, double _h) 
        : name(n), f(_f), g(_g), h(_h), next(nullptr){}
};

#endif