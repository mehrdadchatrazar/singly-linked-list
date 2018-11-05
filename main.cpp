#include "List1.h"

int main(){
    List1 L;
    L.AddNode(20);
    L.AddNode(30);
    L.AddNode(10);
    L.AddNode(50);
    L.Print();
    L.DelNode(10);
    L.Print();
    return 0;
}