#include <iostream>
#include <string>
#include <vector>
#include <glm/vec4.hpp> 


//using namespace std;

// World Properties: translate rotate scale visibility
// 
// Cube Construction properties: Width, Height, Depth, Subdivisions Width, Subdivisions Height, Subdivisions Depth
// Sphere Construction properties: Radius, Subdivisions Axis, Subdivions Height
// Cylinder Construction properties: Radius, Height, Subdivisions Axis, Subdivions Height, Subdivions Cap
// Plane Construction properties: Width, Height, Subdivisions Width, Subdivisions Height
// Cone Construction properties: Radius, Height, Subdivisions Axis, Subdivions Height, Subdivions Cap
// Torus Construction properties: Radius, Section Radius, Height, Subdivisions Axis, Subdivions Height, Twist


struct Vector {
    float m_x, m_y, m_z;
    glm::vec4 translate;

    Vector(float x, float y, float z)
        :m_x(x), m_y(y), m_z(z) 
    {}

    };

struct Transform
{
    Vector m_translate;
    Vector m_rotate;
    Vector m_scale;

    Transform( Vector translate, Vector rotate, Vector scale)
        :m_translate(translate), m_rotate(rotate), m_scale(scale)
    {}
    
};

class Object
{
public:
    std::string m_name;

    Transform m_transform;

    int m_visibility;

    Object(std::string name, Transform transform, int visibility)
        :m_name(name), m_transform(transform), m_visibility(visibility)
    {}


    void printProperties() {
        std::cout <<"name: " << m_name << std::endl;
        std::cout << "translateX: " << Vector m_translate.x; << " translateY: " << m_translateY << " translateZ: " << m_translateZ << std::endl;
        //std::cout << "rotateX: " << m_rotateX << " rotateY: " << m_rotateY << " rotateZ: " << m_rotateZ << std::endl;
        //std::cout << "scaleX: " << m_scaleX << " scaleY: " << m_scaleY << " scaleZ: " << m_scaleZ << std::endl;
        //std::cout << "visibility: " << m_visibility << std::endl;
    }
};



class Cube : public Object
{
public:

    float m_width;
    float m_height;
    float m_depth;
    float m_subdivisionsWidth;
    float m_subdivisionsHeight;
    float m_subdivisionsDepth;

    Cube(std::string name, Transform transform, int visibility, float width, float height, float depth, float subdivisionsWidth, float subdivisionsHeight, float subdivisionsDepth)
        : Object(name, transform, visibility), m_width(width), m_height(height), m_depth(depth), m_subdivisionsWidth(subdivisionsWidth), m_subdivisionsHeight(subdivisionsHeight), m_subdivisionsDepth(subdivisionsDepth)
    {}

    
    void printCube() 
    {
        std::cout << "width: " << m_width << std::endl;
        std::cout << "height: " << m_height << std::endl;
        std::cout << "depth: " << m_depth << std::endl;
    }
};



int main()
{
    Cube object("Cube1", 0.0f, 1.0f, 0.0f, 90.0f, 90.0f, 0.0f, 1.0f, 1);
    object.printProperties();


    return 0;
}