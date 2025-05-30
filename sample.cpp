#include <iostream>
#include <thread>
using namespace std;

int main() {
    cout << "Hello World, I am new-branch-v2!" << endl;
    cout << "Running on thread ... " << this_thread::get_id() << endl;

    system("pause > 0");
    return 0;
}