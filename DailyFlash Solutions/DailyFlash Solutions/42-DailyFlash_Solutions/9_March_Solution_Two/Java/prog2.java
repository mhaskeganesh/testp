import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num = 0, f = 0;
		Scanner sc = new Scanner(System.in);
		do {
			if(f > 0)
				System.out.println(num);
			num = sc.nextInt();
			f = 1;
		} while(num != 0);
	
	}
}
