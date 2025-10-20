#include <iostream>
#include <string>



#include "student.h"

using namespace std;


Student::Student(string _fname, string _lname, string _id){
    while (!check_id(_id))
    {
        cout << "Wrong id. Please enter id again :";
        cin >> _id;
    }
    fname = _fname;
    lname = _lname;
    id = _id;
}

bool Student::check_id(string id) {
    if (id.length() != 8) {
        return false;
    }
    for (char w : id)
    {
        if (w > '9' || w < '0') {
            return false;
        }
    }
    return true;
}


void Student::display () {
    cout << fname << ", " << lname << ", " << id << endl;


}

string Student::get_fn () {
    return fname;
};
string Student::get_ln () { 
    return lname;
};
string Student::get_id () {
    return id;
};