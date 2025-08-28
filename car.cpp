#include <iostream>
#include <string>
using namespace std;

class CTyre
{
private:
    int radius, width;

public:
    CTyre()
    {
        radius = 0;
        width = 0;
    };
    CTyre(int radius, int width)
    {
        this->radius = radius;
        this->width = width;
    };
    int getRadius()
    {
        return radius;
    };
    int getWidth()
    {
        return width;
    };
    void setRadius(int radius)
    {
        this->radius = radius;
    };
    void setWidth(int width)
    {
        this->width = width;
    };
};
class CCar
{
private:
    int price;
    CTyre ctyre;

public:
    CCar()
    {
        price = 0;
    };
    CCar(int price, int radius, int width) : price(price), ctyre(radius, width) {};
    int getPrice()
    {
        return price;
    };
    CTyre getCTyre()
    {
        return ctyre;
    };
    int getRadius()
    {
        return ctyre.getRadius();
    };
    int getWidth()
    {
        return ctyre.getWidth();
    };
    void setPrice(int price)
    {
        this->price = price;
    };
    void setCTyre(CTyre ctyre)
    {
        this->ctyre = ctyre;
    };
};
int main()
{
    int price, radius, width;
    cin >> price >> radius >> width;
    CCar car(price, radius, width);
    cout << "Price=" << car.getPrice() << " " << "CTyre.Radius=" << car.getCTyre().getRadius() << " " << "CTyre.Width=" << car.getCTyre().getWidth() << endl;

    CCar car1;
    cout << "Price=" << car1.getPrice() << " " << "CTyre.Radius=" << car1.getCTyre().getRadius() << " " << "CTyre.Width=" << car1.getCTyre().getWidth() << endl;
    return 0;
}
