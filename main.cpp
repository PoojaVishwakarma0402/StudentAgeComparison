#include <iostream>
using namespace std;

class Student {
public:
    char stdname[20];
    int age;

    void scan() {
        cout << "Enter name: ";
        cin.getline(stdname, 20);

        cout << "Enter age: ";
        cin >> age;

        cin.ignore(1);
    }

    void show() {
        cout << stdname << " " << age;
    }
};

int main() {
    Student *p, *q, *r;
    p = new Student();
    q = new Student();
    r = new Student();

    p->scan();
    q->scan();
    r->scan();

    int max;
    max = p->age > q->age ? p->age : q->age;

    if (max > r->age) {
        cout << "Max age is " << max << endl;
    } else {
        cout << "Max age is " << r->age << endl;
    }

    return 0;
}
