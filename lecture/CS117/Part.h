#ifndef PART_H
#define PART_H
#include <string>

using namespace std;

class Part {
private:
    string m_id;
    string m_drawing;
    int m_quantity;
public:
    Part(string id, string dwg, int qty);
    string getId();
    void setId(string id);
    string getDrawing();
    void setDrawing(string drawing);
    int getQuantity();
    void setQuantity(int qty);
    string toString();
};
#endif
