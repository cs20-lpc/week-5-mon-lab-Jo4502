#include "DoublyList.hpp"

using namespace std;

int main() {

    DoublyList<int> list;

    cout << "empty? " << list.isEmpty() << endl;

    //append
    list.append(10);
    list.append(20);
    list.append(30);
    cout << "append 10,20,30: " << list;
    
    //getElemetn
    cout << "getElement: ";
    cout << list.getElement(0) << " ";
    cout << list.getElement(1) << " ";
    cout << list.getElement(2) << endl;

    //insert
    list.insert(1, 15);
    cout << "insert 15 at position 1: " << list;

    // replace
    list.replace(2, 25);
    cout << "replace position 2 with 25: " << list;

    // remove
    list.remove(0);
    cout << "remove position 0: " << list;

    // rearch
    cout << "search" << endl;
    cout << "25 = " << list.search(25) << endl;
    cout << "100 = " << list.search(100) << endl;

    // clear
    list.clear();
    cout << "clear: " << list;



	return 0;
}