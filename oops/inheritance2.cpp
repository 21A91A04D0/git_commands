#include<bits/stdc++.h>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        Rectangle();
        Rectangle(int l, int b);
        Rectangle(Rectangle &r);
        int get_length(){return length;};
        int get_breadth(){return breadth;};
        void set_length(int l);
        void set_breadth(int b);
        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();
};

class Cuboid:public Rectangle{
    private:
        int height;
    public:
        Cuboid(int h) {
            height = h;
        }
        int get_height() {return height;}
        void set_height(int h) {height = h;}
        int volume() {return get_length() * get_breadth() * height;}
};

int main() {
    Cuboid c(5);
    c.set_length(2);
    c.set_breadth(3);
    cout << c.volume();
}

Rectangle::Rectangle() {
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}

Rectangle::Rectangle(Rectangle &r) {
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::set_length(int l) {
    length = l;
}

void Rectangle::set_breadth(int b) {
    breadth = b;
}

int Rectangle::area() {
    return length * breadth;
}

int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

bool Rectangle::isSquare() {
    return length == breadth;
}

Rectangle::~Rectangle() {
    cout << "Rectangle Destroyed";
}