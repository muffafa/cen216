#include <iostream>
#include <climits>
using namespace std;

class area_cl{
    public:
    double height,width;
};

class rectangle: public area_cl{
    public:
    double rectangle_area(double h, double w);
};

class cylinder: public area_cl{
    double pi=3.14;
    public:
    double cylinder_area(double h, double w);
};

double rectangle::rectangle_area(double h, double w) {
    height = h;
    width = w;
    return width * height;
};

double cylinder::cylinder_area(double h, double w) {
    height = h;
	width = w;
	//2*pi*r*h + 2*pi*r*r
	// 2 pi r (h+r)
	double pi = 3.14;
	return 2*pi*width*(height+width);
};

void clear (){
    cin.clear();
    cin.ignore(INT_MAX, '\n');
}

int main()
{
    rectangle r;
    cylinder c;
    bool control = true;
    
    do{
        double h,w;
        cout<<"What is the dimensions?"<< endl;
        cout <<"Height: ";
        cin >> h;

        if( (double)h ){
            cout <<"Width: ";
            cin >> w;
            if( (double)w ){
                double r_area,c_area;
                r_area = r.rectangle_area(h,w);
                c_area = c.cylinder_area(h,w);
                
                cout << "Rectangle's area is: "<< r_area<<endl;
                cout << "Cylinder's area is: "<< c_area<<endl<<endl;
            }else{
                cout << "You entered characters, please enter number!"<<endl<<endl;
                clear ();
            }
        
        }else{
            cout << "You entered characters, please enter number!"<<endl<<endl;
            clear ();
        }
        
        
    }while(control);
        
    return 0;
}