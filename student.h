#pragma once

#include <string>

using namespace std;


class Student {
private:
    string fname;
    string lname;
    string id;

    bool check_id (string id);
public:
    Student(string fname, string lname, string id);
    void display();

};