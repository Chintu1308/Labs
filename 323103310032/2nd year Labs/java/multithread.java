import java.lang.Thread;

class A extends Thread {
    public void run() {
        for (int i = 1; i <= 50; i++) {
            System.out.println("From Thread A: " + i);
        }
        System.out.println("Exit from A");
    }
}

class B extends Thread {
    public void run() {
        for (int i = 1; i <= 50; i++) {
            System.out.println("From Thread B: " + i);
        }
        System.out.println("Exit from B");
    }
}

class C extends Thread {
    public void run() {
        for (int i = 1; i <= 50; i++) {
            System.out.println("From Thread C: " + i);
        }
        System.out.println("Exit from C");
    }
}

public class multithread {
    public static void main(String[] args) {
        A a = new A();
        B b = new B();
        C c = new C();
        a.start();
        b.start();
        c.start();
        System.out.println("Exit from main");
    }
}