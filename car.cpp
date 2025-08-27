#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class CTyre
{
private:
    int radius, width;

public:
    CTyre();
    CTyre(int radius, int width);
    int getRadius();
    int getWidth();
    void setRadius(int radius);
    void setWidth(int width);
};
CTyre::CTyre()
{
    this->radius = 0;
    this->width = 0;
}
CTyre::CTyre(int radius, int width)
{
    this->radius = radius;
    this->width = width;
}
int CTyre::getRadius()
{
    return radius;
}
int CTyre::getWidth()
{
    return width;
}
void CTyre::setRadius(int radius)
{
    this->radius = radius;
}
void CTyre::setWidth(int width)
{
    this->width = width;
}
class CCar
{
private:
    int price;
    CTyre ctyre;

public:
    CCar();
    CCar(int price, CTyre ctyre);
    int getPrice();
    CTyre getCTyre();
    int getRadius();
    int getWidth();
    void setPrice(int price);
    void setCTyre(CTyre ctyre);
};
CCar::CCar()
{
    this->price = 0;
    this->ctyre.setRadius(0);
    this->ctyre.setWidth(0);
}
CCar::CCar(int price, CTyre ctyre)
{
    this->price = price;
    this->ctyre = ctyre;
}
int CCar::getPrice()
{
    return price;
}
int CCar::getRadius()
{
    return this->ctyre.getRadius();
}
int CCar::getWidth()
{
    return this->ctyre.getWidth();
}
CTyre CCar::getCTyre()
{
    return this->ctyre;
}
int main()
{
    int price, radius, width;
    cin >> price >> radius >> width;
    CTyre ctyre(radius, width);
    CCar car(price, ctyre);
    cout << "Price=" << car.getPrice() << " " << "Radius=" << car.getCTyre().getRadius() << " " << "width=" << car.getCTyre().getWidth() << endl;

    CCar car1;
    cout << "Price=" << car1.getPrice() << " " << "Radius=" << car1.getCTyre().getRadius() << " " << "width=" << car1.getCTyre().getWidth() << endl;
    return 0;
}
