import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		String s = "";
		System.out.println("Enter decimal num : ");
		Scanner sc = new Scanner(System.in);
		int dec = sc.nextInt();
		int i = 0, quo, rem;
		while(true) {
			quo = dec / 2;
			rem = dec % 2;
			dec = quo;
			if(rem == 1) {
				s = s.concat("1");
			} else if(rem == 0) {
				s = s.concat("0");
			}
			i++;
			if(quo == 0)
				break;
		}
		for(int j = s.length() - 1; j >= 0; j--) {
			System.out.print(s.charAt(j));
		}
	}
}
