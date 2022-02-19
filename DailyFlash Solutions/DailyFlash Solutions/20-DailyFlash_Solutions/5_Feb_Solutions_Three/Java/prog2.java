import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		String s;
		int i;
		System.out.print("Enter bin : ");
		Scanner sc = new Scanner(System.in);
		s = sc.nextLine();
		int length = s.length();
		if(length % 3 == 0) {
			i = 0;
		} else {
			i = length % 3;
		}
		int d = 0, num = 0;
		if(i != 0) {
			for(int j = 0; j < i; j++) {
				if(s.charAt(j)== '0')
					num = 0;
				else if(s.charAt(j) == '1')
					num = 1;
				d = d * 2 + num;
			}
			System.out.print(d);
		}
		int cnt = 0;
		d = 0;
		for(int j = i; j < length; j++) {
			if(s.charAt(j)== '0')
				num = 0;
			else if(s.charAt(j) == '1')
				num = 1;
			d = d * 2 + num;
			cnt++;
			if(cnt % 3 == 0) {
				System.out.print(d);
				d = 0;
			}
		}
	}
}
