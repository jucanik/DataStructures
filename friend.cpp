#include<iostream>
using namespace std;
class square;
class rectangle{
    private:
    int width,height;
    public:
    int area(){
        return (width*height);
    }
    void convert(square a);
};
class square{
    friend class rectangle;
    private:
    int side;
    public:
    square(int a){
        side=a;
    }
};
void rectangle::convert(square a){
    width=a.side;
    height=a.side;
}
int main(){
    rectangle rec;
    square sqr(4);
    rec.convert(sqr);
    cout<<rec.area();
    return 0;
}