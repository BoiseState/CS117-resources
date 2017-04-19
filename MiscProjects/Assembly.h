//Assembly.h
#ifndef ASSEMBLY_H
#define ASSEMBLY_H
#include <vector>
#include "Part.h"

using namespace std;

class Assembly : public Part{
private:
    vector<Part> m_parts;
public:
    //Assembly constructor
    Assembly(string id, string dwg, int qty);
    //Add a part to this assembly
    void addPart(Part p);
    //Print out the BOM
    string toString();
};
#endif

