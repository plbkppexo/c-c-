#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Shape3D
{
public:
    virtual double volumn() = 0;
    virtual double surfaceArea() = 0;
};

class RightRectangularPyramid : public Shape3D
{
    private:
        double width;
        double length;
        double height;
    public :
        RightRectangularPyramid(double width = 0.0, double length = 0.0, double height = 0.0) {
            this->width = width;
            this->length = length;
            this->height = height;
        }

        double volumn() {
            return (1/3.0) * (width * length) * height;
        }

        double surfaceArea() {
            double w = width / 2.0;
            double l = length / 2.0;
            double h_1 = sqrt((height * height) + (w * w));
            double h_2 = sqrt((height * height) + (l * l));
            double tri_1 = (1/2.0) * length * h_1;
            double tri_2 = (1/2.0) * width * h_2;
            double sq = width * length;
            return sq + (tri_1 * 2) + (tri_2 * 2);
        }
};

class Sphere : public Shape3D 
{
    private :
        double radius;
    public :
        Sphere(double radius = 0) {
            this->radius = radius;
        }

        double volumn() {
            return (4/3.0) * M_PI * (radius * radius * radius);
        }

        double surfaceArea() {
            return 4 * M_PI * radius * radius;
        }
};

int main()
{
	int tc;
	cin >> tc;
	if (tc == 1) {
		Shape3D **shapes = new Shape3D*[3];
		shapes[0] = new RightRectangularPyramid(1, 5.2, 7);
		shapes[1] = new Sphere(10.6);
		shapes[2] = new RightRectangularPyramid(3, 3.5, 4.13);
		for (int i = 0; i < 3; i++) {
			cout << "Volumn: " << (*shapes)->volumn() << endl;
			cout << "Surface Area: " << (*shapes)->surfaceArea() << endl;
			cout << "--------------------\n";
			*shapes++;
		}
	} else if (tc == 2) {
		RightRectangularPyramid rectangle;
		Sphere sphere;
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 3) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
	} else if (tc == 4) {
		Sphere sphere(34.25);
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 5) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		Sphere sphere(34.25);
		Shape3D *shape = &rectangle;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
		shape = &sphere;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
	} else if(tc == 6) {
	}

}