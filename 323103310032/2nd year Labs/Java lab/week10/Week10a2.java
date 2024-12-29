class Runnable1 implements Runnable {
    Thread t;

    Runnable1() {
        t = new Thread(this);
    }

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

class Runnable2 implements Runnable {
    Thread t;

    Runnable2() {
        t = new Thread(this);
    }

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

class Runnable3 implements Runnable {
    Thread t;

    Runnable3() {
        t = new Thread(this);
    }

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

class Week10a2 {
    public static void main(String arg[]) {
        new Runnable1().t.start();
        new Runnable2().t.start();
        new Runnable3().t.start();
    }
}
