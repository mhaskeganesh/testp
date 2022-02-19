import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int l, sum, mul = 1;
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		StringBuilder sb = new StringBuilder();
		for(int i = 0; i < str.length(); i++) {
			char ch = str.charAt(i);
			if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u')
				sb.append((char)(ch+1));
			else
				sb.append(ch);
		}
		System.out.println(sb);
	}
}
