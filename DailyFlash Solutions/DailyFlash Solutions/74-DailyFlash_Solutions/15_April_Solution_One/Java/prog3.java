import java.util.*;

class Demo {
	public static void main(String[] args) {
		int m;
		System.out.println("m: ");
		Scanner sc = new Scanner(System.in);
		m = sc.nextInt();
		int [][] arr = new int[m][m];
		System.out.println("Enter arr: ");
		int sumr = 0;
		for(int i = 0; i < m; i++) {
			sumr = 0;
			for(int j = 0; j < m; j++) {
				arr[i][j] = sc.nextInt();
				sumr += arr[i][j];	
			}
			System.out.println(sumr);
		}	
		System.out.println();
		for(int i = 0; i < m; i++) {
			sumr = 0;
			for(int j = 0; j < m; j++) {
				sumr+=arr[j][i];
			
			}
			System.out.println(sumr + " ");
		}	
		
	}
}

