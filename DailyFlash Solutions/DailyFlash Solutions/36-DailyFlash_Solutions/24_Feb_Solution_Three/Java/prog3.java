import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int n1 = 0;
		int rows;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter rows : ");
		rows = sc.nextInt();
		for(int i = 0; i < rows; i++) {
			for(int j = 0; j < 4; j++) {
				if(n1 == 0) {
					System.out.print("white-black ");
					n1 = 1;
				}else if(n1 == 1) {
					System.out.print("black-white ");
					n1 = 0;
				}
			}
			System.out.println();

		}
	}
}
