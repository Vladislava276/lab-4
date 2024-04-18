//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class Triangle {
//private:
//    double x1, y1;  
//    double x2, y2;
//    double x3, y3;
//
//public:
//    Triangle() {
//        x1 = y1 = x2 = y2 = x3 = y3 = 0.0;
//    }
//
//    Triangle(double px1, double py1, double px2, double py2, double px3, double py3) {
//        if (!isValid(px1, py1, px2, py2, px3, py3))
//            throw runtime_error("Невозможно построить треугольник");
//
//        x1 = px1; y1 = py1;
//        x2 = px2; y2 = py2;
//        x3 = px3; y3 = py3;
//    }
//
//    // Метод установки координат вершин треугольника
//    void setVertices(double px1, double py1, double px2, double py2, double px3, double py3) {
//        if (!isValid(px1, py1, px2, py2, px3, py3))
//            throw runtime_error("Невозможно построить треугольник");
//
//        x1 = px1; y1 = py1;
//        x2 = px2; y2 = py2;
//        x3 = px3; y3 = py3;
//    }
//
//    // Метод перемещения треугольника на плоскости
//    void move(double dx, double dy) {
//        x1 += dx; y1 += dy;
//        x2 += dx; y2 += dy;
//        x3 += dx; y3 += dy;
//    }
//
//    // Метод изменения размеров треугольника
//    void resize(double factor) {
//        double centerX = (x1 + x2 + x3) / 3;
//        double centerY = (y1 + y2 + y3) / 3;
//
//        x1 = centerX + (x1 - centerX) * factor;
//        y1 = centerY + (y1 - centerY) * factor;
//
//        x2 = centerX + (x2 - centerX) * factor;
//        y2 = centerY + (y2 - centerY) * factor;
//
//        x3 = centerX + (x3 - centerX) * factor;
//        y3 = centerY + (y3 - centerY) * factor;
//    }
//
//    // Метод вращения треугольника на заданный угол
//    void rotate(double angle) {
//        double centerX = (x1 + x2 + x3) / 3;
//        double centerY = (y1 + y2 + y3) / 3;
//
//        double cosAngle = cos(angle);
//        double sinAngle = sin(angle);
//
//        double newX1 = centerX + (x1 - centerX) * cosAngle - (y1 - centerY) * sinAngle;
//        double newY1 = centerY + (x1 - centerX) * sinAngle + (y1 - centerY) * cosAngle;
//
//        double newX2 = centerX + (x2 - centerX) * cosAngle - (y2 - centerY) * sinAngle;
//        double newY2 = centerY + (x2 - centerX) * sinAngle + (y2 - centerY) * cosAngle;
//
//        double newX3 = centerX + (x3 - centerX) * cosAngle - (y3 - centerY) * sinAngle;
//        double newY3 = centerY + (x3 - centerX) * sinAngle + (y3 - centerY) * cosAngle;
//
//        x1 = newX1; y1 = newY1;
//        x2 = newX2; y2 = newY2;
//        x3 = newX3; y3 = newY3;
//    }
//
//    double getX1() const { return x1; }
//    double getY1() const { return y1; }
//    double getX2() const { return x2; }
//    double getY2() const { return y2; }
//    double getX3() const { return x3; }
//    double getY3() const { return y3; }
//
//private:
//    // Проверка возможности построения треугольника
//    bool isValid(double px1, double py1, double px2, double py2, double px3, double py3) {
//        // Формула для вычисления площади треугольника по координатам вершин:
//        // S = 0.5 * |(x1 - x3)*(y2 - y3) - (x2 - x3)*(y1 - y3)|
//        double area = 0.5 * abs((px1 - px3) * (py2 - py3) - (px2 - px3) * (py1 - py3));
//
//        return area > 0.0;
//    }
//};
//class Rectangle : public Triangle {
//private:
//    double x4, y4; 
//
//public:
//    
//    Rectangle(double px1, double py1, double px2, double py2, double px3, double py3, double px4, double py4)
//        : Triangle(px1, py1, px2, py2, px3, py3), x4(px4), y4(py4) {}
//
//    
//
//    void changeSize(double delta, double minSize, double maxSize) {
//        double currentSize = max(abs(getX1() - getX3()), abs(getY1() - getY3()));
//        double newSize = currentSize + delta;
//
//        if (newSize < minSize || newSize > maxSize)
//            throw runtime_error("Невозможно изменить размер прямоугольника в пределах заданного диапазона");
//
//        double factor = newSize / currentSize;
//
//        double centerX = (getX1() + getX3()) / 2;
//        double centerY = (getY1() + getY3()) / 2;
//
//        double tmpX1 = centerX + (getX1() - centerX) * factor;
//        double tmpY1 = centerY + (getY1() - centerY) * factor;
//
//        double tmpX2 = centerX + (getX2() - centerX) * factor;
//        double tmpY2 = centerY + (getY2() - centerY) * factor;
//
//        double tmpX3 = centerX + (getX3() - centerX) * factor;
//        double tmpY3 = centerY + (getY3() - centerY) * factor;
//
//        x4 = centerX + (x4 - centerX) * factor;
//        y4 = centerY + (y4 - centerY) * factor;
//
//        setVertices(tmpX1, tmpY1, tmpX2, tmpY2, tmpX3, tmpY3);
//    }
//
//    double getX4() const { return x4; }
//    double getY4() const { return y4; }
//
//    void setRectangleVertices(double px1, double py1, double px2, double py2, double px3, double py3, double px4, double py4) {
//        setVertices(px1, py1, px2, py2, px3, py3);
//        x4 = px4;
//        y4 = py4;
//    }
//};
//
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    try {
//        
//        Triangle triangle(0.0, 0.0, 1.0, 0.0, 0.0, 1.0);  // пример координат бля ошибки 0.0, 0.0, 1.0, 1.0, 2.0, 2.0
//
//        cout << "Исходное состояние треугольника:\n";
//        cout << "Вершина A(" << triangle.getX1() << ", " << triangle.getY1() << ")\n";
//        cout << "Вершина B(" << triangle.getX2() << ", " << triangle.getY2() << ")\n";
//        cout << "Вершина C(" << triangle.getX3() << ", " << triangle.getY3() << ")\n\n";
//
//        triangle.move(1.0, 1.0);
//        cout << "Треугольник после перемещения:\n";
//        cout << "Вершина A(" << triangle.getX1() << ", " << triangle.getY1() << ")\n";
//        cout << "Вершина B(" << triangle.getX2() << ", " << triangle.getY2() << ")\n";
//        cout << "Вершина C(" << triangle.getX3() << ", " << triangle.getY3() << ")\n\n";
//
//        triangle.resize(1.5);
//        cout << "Треугольник после изменения размеров:\n";
//        cout << "Вершина A(" << triangle.getX1() << ", " << triangle.getY1() << ")\n";
//        cout << "Вершина B(" << triangle.getX2() << ", " << triangle.getY2() << ")\n";
//        cout << "Вершина C(" << triangle.getX3() << ", " << triangle.getY3() << ")\n\n";
//
//        triangle.rotate(acos(-1) / 4);
//        cout << "Треугольник после вращения:\n";
//        cout << "Вершина A(" << triangle.getX1() << ", " << triangle.getY1() << ")\n";
//        cout << "Вершина B(" << triangle.getX2() << ", " << triangle.getY2() << ")\n";
//        cout << "Вершина C(" << triangle.getX3() << ", " << triangle.getY3() << ")\n\n";
//
//        Rectangle rectangle(0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0);
//
//        cout << "Исходное состояние прямоугольника:\n";
//        cout << "Вершина A(" << rectangle.getX1() << ", " << rectangle.getY1() << ")\n";
//        cout << "Вершина B(" << rectangle.getX2() << ", " << rectangle.getY2() << ")\n";
//        cout << "Вершина C(" << rectangle.getX3() << ", " << rectangle.getY3() << ")\n";
//        cout << "Вершина D(" << rectangle.getX4() << ", " << rectangle.getY4() << ")\n\n";
//
//        rectangle.changeSize(0.5, 0.5, 2.0);
//        cout << "Прямоугольник после изменения размеров:\n";
//        cout << "Вершина A(" << rectangle.getX1() << ", " << rectangle.getY1() << ")\n";
//        cout << "Вершина B(" << rectangle.getX2() << ", " << rectangle.getY2() << ")\n";
//        cout << "Вершина C(" << rectangle.getX3() << ", " << rectangle.getY3() << ")\n";
//        cout << "Вершина D(" << rectangle.getX4() << ", " << rectangle.getY4() << ")\n\n";
//    }
//    catch (const exception& e) {
//        cerr << "Ошибка: " << e.what() << endl;
//    }
//    system("pause");
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
