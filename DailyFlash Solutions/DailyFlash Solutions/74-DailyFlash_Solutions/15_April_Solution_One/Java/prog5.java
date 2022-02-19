import java.util.*;

class Demo {
	public static void main(String[] args) {
		int m;
		System.out.println("m: ");
		Scanner sc = new Scanner(System.in);
		m = sc.nextInt();
		int arr1[][] = new int[m][m];
		int arr2[][] = new int[m][m];
		int arr[][] = new int[m][m];
		System.out.println("Enter arr1: ");
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < m; j++) {
				arr1[i][j] = sc.nextInt();;
			}
		}
		System.out.println("Enter arr2: ");
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < m; j++) {
				arr2[i][j] = sc.nextInt();
				arr[i][j] = arr1[i][j] + arr2[i][j];
			}
		}	
		
		System.out.println("arr: ");
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < m; j++) {
				System.out.println(arr[i][j]);
			}
			System.out.print("\n");
		}	

		
		
	}
}
