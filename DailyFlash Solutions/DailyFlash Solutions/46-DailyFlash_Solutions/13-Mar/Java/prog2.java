import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		System.out.print("Enter num : ");
		Scanner sc = new Scanner(System.in);
		String num = sc.next();
		String temp = "";
		for(int i = 0; i < num.length(); i++) {
			if(num.charAt(i) == '1') {
				temp += '2';
				continue;
			}
			temp += num.charAt(i);

		}
		System.out.println(temp);
	}
}
