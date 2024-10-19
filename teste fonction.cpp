#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

void testefunction(const vector<int>& params){
    cout << "function called with "<< params.size() << " parameters" <<endl;
}

int main() {  
    try {
        for(size_t i=1; ; i*=3) {
            vector<int> params(i, 1);
            testefunction(params);
        }
    } catch (const bad_alloc & e) {
        cout << "memory allocation error: " << e.what() << endl;  // Fixed the error here
    }
    return 0;
}

