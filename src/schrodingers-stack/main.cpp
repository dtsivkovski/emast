#include "Schrodinger.h"

int main(int argc, char** argv) {

    Schrodinger<int> *s = new Schrodinger<int>(2);

    s->push(1);
    s->push(2);
    s->push(3);
    s->push(4);
    s->push(5);

    try {
        cout << "First Pop: " << s->pop() << endl;
    }
    catch(exception &excpt) {
        cout << excpt.what() << endl;
    }

    try {
        cout << "Second Pop: " << s->pop() << endl;
    }
    catch(exception &excpt) {
        cout << excpt.what() << endl;
    }

    try {
        cout << "Third Pop: " << s->pop() << endl;
    }
    catch(exception &excpt) {
        cout << excpt.what() << endl;
    }

    try {
        cout << "Fourth Pop: " << s->pop() << endl;
    }
    catch(exception &excpt) {
        cout << excpt.what() << endl;
    }

    try {
        cout << "Fifth Pop: " << s->pop() << endl;
    }
    catch(exception &excpt) {
        cout << excpt.what() << endl;
    }

    delete s;
}