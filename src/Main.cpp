#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Object
{
public:
    string name;
    vector<float> translate;
    vector<float> rotate;
    vector<float> scale;
    int visibility;

    void printProperties() {
        cout <<"name: " << name << endl;
        cout << "translateX: " << translate[0] << " translateY: " << translate[1] << " translateZ: " << translate[2] << endl; 
        cout << "rotateX: " << translate[0] << " rotateY: " << translate[1] << " rotateZ: " << translate[2] << endl; 
        cout << "scaleX: " << translate[0] << " scaleY: " << translate[1] << " scaleZ: " << translate[2] << endl;
        cout << "visibility: " << visibility << endl;
    }
};

int main()
{
    Object object;
    object.name = "Cube";
    object.translate = { 1.0f, 20.0f, 3.0f }; //error
    object.rotate = {0.0f, 90.0f, 180.0f };
    object.scale = { 1.0f, 1.0f, 1.0f };
    object.visibility = 1;

    object.printProperties();

    return 0;
}