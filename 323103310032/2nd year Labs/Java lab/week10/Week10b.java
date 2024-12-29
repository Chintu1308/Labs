class xyz {
    synchronized static void printnum(int n) {
        try {
            for (int i = 1; i <= 5; i++) {
                System.out.println(n * i);
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

class t1 extends Thread {
    public void run() {
        xyz.printnum(10);
    }
}

class t2 extends Thread {
    public void run() {
        xyz.printnum(1);
    }
}

public class Week10b {
    public static void main(String[] args) {
        new t1().start();
        new t2().start();
    }
}
