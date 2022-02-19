import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String num = sc.next();	
		if(num.charAt(0) == '0') {
			System.out.println("Not deck");
			return;
		}
		for(int i = 1; i < num.length(); i++) {
			if(num.charAt(i) == '0') {
				System.out.println("Duck num");
				break;
			}
		}
	}
}
