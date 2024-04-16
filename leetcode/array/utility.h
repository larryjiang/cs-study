#include <vector>
#include <iostream>

using namespace std;

class Utility{

public:

template<typename T>
static void print_vector(const vector<T>& vec){
    int last = vec.size() - 1;
    for(int i = 0; i <= last; i++){
        cout << vec[i];
        if(i != last){
            cout << ",";
        }else{
            cout << endl;
        };
    };
    return;
};



};




