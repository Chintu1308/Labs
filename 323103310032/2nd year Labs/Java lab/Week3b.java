class Week3b {
    public static int powerInt(int num1, int num2) {
        return (int) Math.pow(num1, num2);
    }

    public static double powerDouble(double num1, double num2) {
        return Math.pow(num1, num2);
    }

    public static void main(String[] args) {
        System.out.println("Output using powerInt method: " + powerInt(25, 3));
        System.out.println("Output using powerDouble method: " + powerDouble(2.4, 3));
    }
}
