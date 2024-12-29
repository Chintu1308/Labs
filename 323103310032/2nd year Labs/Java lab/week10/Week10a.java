class Thread1 extends Thread {
    public void run() {
        try {
            for (int i = 0; i < 5; i++) {
                Thread.sleep(1000);
                System.out.println("Good Morning");
            }
            System.out.println("Thread 1 Exited");
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

class Thread2 extends Thread {
    public void run() {
        try {
            for (int i = 0; i < 5; i++) {
                Thread.sleep(2000);
                System.out.println("Hello");
            }
            System.out.println("Thread 2 Exited");
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

class Thread3 extends Thread {
    public void run() {
        try {
            for (int i = 0; i < 5; i++) {
                Thread.sleep(3000);
                System.out.println("Welcome");
            }
            System.out.println("Thread 3 Exited");
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

public class Week10a {
    public static void main(String[] args) {
        new Thread1().start();
        new Thread2().start();
        new Thread3().start();
    }
}
