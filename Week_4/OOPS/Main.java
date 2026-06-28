
package Week_4.OOPS;

interface Test {
    public int square(int n);
}

class Arithmetic implements Test {
    public int square(int n) {
        return n * n;
    }
}

class Outer {
    void display() {
        System.out.println("Message from the outer class: Hi! ");
    }

    class Inner {
        void display() {
            System.out.println("Message from the inner class: Hi! ");
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

    void setX(int xval) {
        x = xval;
    }

    void setY(int yval) {
        y = yval;
    }

    void setXY(int xval, int yval) {
        x = xval;
        y = yval;
    }

    void print() {
        System.out.println("X : " + x + ", Y : " + y);
    }
}

class Box {
    int length;
    int breadth;

    Box(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    int area() {
        return (length * breadth);
    }
}

class Box3D extends Box {
    int height;

    Box3D(int length, int breadth, int height) {
        super(length, breadth);
        this.height = height;
    }

    int volume() {
        return (length * breadth * height);
    }
}

public class Main {
    public static void main(String[] args) {
        Arithmetic A1 = new Arithmetic();
        System.out.println("Square of 5 is: " + A1.square(5));

        Outer O1 = new Outer();
        O1.display();

        Outer.Inner I1 = O1.new Inner();
        I1.display();

        Point P1 = new Point(10, 20);
        P1.print();

        Box3D B1 = new Box3D(3, 4, 5);
        System.out.println("The box area is " + B1.area());
        System.out.println("The box volume is " + B1.volume());
    }
}