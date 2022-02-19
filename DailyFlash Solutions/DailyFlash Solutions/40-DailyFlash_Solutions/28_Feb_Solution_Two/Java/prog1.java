import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		System.out.print("Enter num : ");
		Scanner sc = new Scanner(System.in);
		String num = sc.next();
		int temp = 0, sum = 0;
		for(int i = 0; i < num.length(); i++) {
			temp = temp * 10 + num.charAt(i) - 48;
			sum += Math.pow(num.charAt(i) - 48, i + 1);
		}
		if(sum == temp)
			System.out.println("Disarium num");
	}
}
