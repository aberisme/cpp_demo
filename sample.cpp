#include <iostream>
#include <thread>
using namespace std;

int main() {
    cout << "Hello World, I am C++!" << endl;
    cout << "Running on thread ... " << this_thread::get_id() << endl;

    return 0;
}