import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		int sum = 0, d = 0;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter num : ");
		int num = sc.nextInt();
		for(int i = 0; i < num; i++) {
			for(int j = 0; j < num; j++) {
				if(j >= i) {
					System.out.print((j * j + (i * j) + "\t"));
				} else {
					System.out.print("\t");
				}
			}
			System.out.println();
		}
	}
}
