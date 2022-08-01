// Multiple Ineritance
#include <iostream>
using namespace std;
class Parent1 // Parent1
{
protected:
    int l, b; // only declaration
public:
    int getArea()
    {
        return l * b;
    }
};

class Parent2 // Parent2
{
protected:
};

class getVolume : public Parent1, Parent2
{
private:
    int h;

public:
    void setData(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void getVolume()
    {
    }
};

int main()
{
    getVolume obj;
    obj.setData(10, 20, 30);
}