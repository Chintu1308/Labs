import java.util.Scanner;

class Week2d {
	public static void main(String arg[]) {
		int m, n, i, j, fy = 0, pid = 0, max;
		Scanner sc = new Scanner(System.in);
		try {
			System.out.print("Enter the No of Financial Years: ");
			m = sc.nextInt();
			
			System.out.print("Enter the no of Products: ");
			n = sc.nextInt();
			
			int sales[][] = new int[m + 1][n + 1];
			
			System.out.println("Enter Financial Years");
			for (i = 0; i < m; i++) {
				sales[i + 1][0] = sc.nextInt();
			}
			
			System.out.println("Enter product IDs");
			for (j = 0; j < n; j++) {
				sales[0][j + 1] = sc.nextInt();
			}
			
			for (i = 1; i <= m; i++) {
				System.out.println("Enter no.of sales in " + sales[i][0] + " Fin.Year");
				for (j = 1; j <= n; j++) {
					sales[i][j] = sc.nextInt();
				}
			}
			
			System.out.print("*No.of sales in all Years*\n");
			for (i = 0; i <= m; i++) {
				for (j = 0; j <= n; j++) {
					System.out.print(sales[i][j] + " ");
				}
				System.out.println();
			}
			
			max = sales[1][1];
			for (i = 1; i <= m; i++) {
				for (j = 1; j <= n; j++) {
					if (sales[i][j] > max) {
						max = sales[i][j];
						fy = sales[i][0];
						pid = sales[0][j];
					}
				}
			}
			
			System.out.println("The Product ID " + pid + " has the maximum sales in the Financial Year " + fy);
		} finally {
			sc.close();
		}
	}
}