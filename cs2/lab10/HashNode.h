#include <iostream>
using namespace std;


//template for generic type
template<typename K, typename V>
 
//Hashnode class
class HashNode
{
    public:
    V value;
    K key;
     
    //Constructor of hashnode 
    HashNode(K key, V value)
    {
        this->value = value;
        this->key = key;
    }
};
