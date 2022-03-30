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


//class Sphere : Object
//{
//
//};

//class ConstructionMesh : public Object
//{
//public:
//    float m_width;
//    float m_height;
//    float m_depth;
//    float m_subdivisionsWidth;
//    float m_subdivisionsHeight;
//    float m_subdivisionsDepth;
//    float m_subdivisionsAxis;
//    float m_subdivisionsCap;
//    float m_radius;
//    float m_twist;
//
//    ConstructionMesh()
//
//
//    ~ConstructionMesh()
//
//
//
//
//    void ConstructionMeshSphere(float radius, float subdivisionsAxis, float subdivisionsHeight) {
//        m_radius = radius; m_subdivisionsAxis = subdivisionsAxis; m_subdivisionsHeight = subdivisionsHeight;
//    }
//
//    void printConstructionMesh() {
//        cout << "width: " << m_width << endl;
//        cout << "height: " << m_height << endl;
//        cout << "depth: " << m_depth << endl;
//    }
//};

struct Vector {
    float x, y, z;
    glm::vector4 translate;

};



class Transform
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

    //void createObject(string name, float translateX, float translateY, float translateZ, float rotateX, float rotateY, float rotateZ, float scaleX, float scaleY, float scaleZ, int visibility){  
    //    m_name = name; m_translateX = translateX; m_translateY = translateY; m_translateZ = translateZ; m_rotateX = rotateX; m_rotateY = rotateY; m_rotateZ = rotateZ; m_scaleX = scaleX; m_scaleY = scaleY; m_scaleZ = scaleZ; m_visibility = visibility;
    //}

    void printProperties() {
        std::cout <<"name: " << m_name << endl;
        std::cout << "translateX: " << m_translateX << " translateY: " << m_translateY << " translateZ: " << m_translateZ << endl;
        std::cout << "rotateX: " << m_rotateX << " rotateY: " << m_rotateY << " rotateZ: " << m_rotateZ << endl;
        std::cout << "scaleX: " << m_scaleX << " scaleY: " << m_scaleY << " scaleZ: " << m_scaleZ << endl;
        std::cout << "visibility: " << m_visibility << endl;
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

    Cube(std::string name, float translateX, float translateY, float translateZ, float rotateX, float rotateY, float rotateZ, float scaleX, float scaleY, float scaleZ, int visibility, float width, float height, float depth, float subdivisionsWidth, float subdivisionsHeight, float subdivisionsDepth)
        : Object(name, translateX, translateY, translateZ, rotateX, rotateY, rotateZ, scaleX, scaleY, scaleZ, visibility), m_width(width), m_height(height), m_depth(depth), m_subdivisionsWidth(subdivisionsWidth), m_subdivisionsHeight(subdivisionsHeight), m_subdivisionsDepth(subdivisionsDepth)
    {}

    //void createCube(float width, float height, float depth, float subdivisionsWidth, float subdivisionsHeight, float subdivisionsDepth) 
    //{
    //    m_width = width; m_height = height; m_depth = depth; m_subdivisionsWidth = subdivisionsWidth; m_subdivisionsHeight = subdivisionsHeight; m_subdivisionsDepth = subdivisionsDepth;
    //}
    
    void printCube() 
    {
        std::cout << "width: " << m_width << endl;
        std::cout << "height: " << m_height << endl;
        std::cout << "depth: " << m_depth << endl;
    }
};



int main()
{
    Object object("Cube", 0.0f, 0.0f, 0.0f, 90.0f, 90.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1);
    object.printProperties();
    Cube b()

    return 0;
}