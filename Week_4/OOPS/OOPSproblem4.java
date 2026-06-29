interface Test {
    int square(int n);
}

class Arithmetic implements Test {
    public int square(int n) {
        return n * n;
    }
}

class Outer {

    void display() {
        System.out.println("Display of Outer Class");
    }

    class Inner {

        void display() {
            System.out.println("Display of Inner Class");
        }
    }
}

class Point {

    private int x;
    private int y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void display() {
        System.out.println("Point = (" + x + ", " + y + ")");
    }
}

class Box {

    double length;
    double breadth;

    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    double area() {
        return length * breadth;
    }
}

class Box3D extends Box {

    double height;

    Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    double volume() {
        return length * breadth * height;
    }
}

public class Main {

    public static void main(String[] args) {

        System.out.println("===== Problem 1 =====");
        Arithmetic a = new Arithmetic();
        System.out.println("Square of 5 = " + a.square(5));

        System.out.println("\n===== Problem 2 =====");
        Outer o = new Outer();
        o.display();

        Outer.Inner in = o.new Inner();
        in.display();

        System.out.println("\n===== Problem 3 =====");
        Point p1 = new Point();
        p1.display();

        Point p2 = new Point(10, 20);
        p2.display();

        p2.setXY(30, 40);
        p2.display();

        System.out.println("\n===== Problem 4 =====");
        Box3D b = new Box3D(10, 5, 4);
        System.out.println("Area = " + b.area());
        System.out.println("Volume = " + b.volume());
    }
}
