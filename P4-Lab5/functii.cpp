#include "functii.h"

string random_string(int t) {
    string s;
    static const char alphanum[] = "abcdefghijklmnopqrstuvwxyz";

    srand(t);

    int len = rand() % 10;

    for (int i = 0; i < len; ++i) {
        s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return s;
}

int random_zi(int t) {
    srand(t);
    int zi;
    zi = rand() % 31 + 1;
    return zi;
}

int random_luna(int t) {
    srand(t);
    int luna;
    luna = rand() % 12 + 1;
    return luna;
}

int random_an(int t) {
    srand(t);
    int an;
    an = rand() % (2021 - 1999 + 1);
    return an;
}

float random_greutate(int t) {
    srand(t);
    float g;
    g = float(rand()) / float(5.0);
    return g;
}

int random_nr_int(int t) {
    srand(t);
    int nr;
    nr = rand() % 1000;
    return nr;
}

float random_nr_float(int t) {
    srand(t);
    float nr;
    nr = float(rand()) / float(5.0);
    return nr;
}

string random_tip_vulpe(int t) {
    string tip[] = { "Polara","Indigena" };
    string c;
    srand(t);
    for (int i = 0;i < 2;i++) {
        int nr = rand() % 2;
        c = tip[nr];
    }
    return c;
}
