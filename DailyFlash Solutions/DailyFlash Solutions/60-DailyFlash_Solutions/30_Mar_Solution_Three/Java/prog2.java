import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int words = 0;
		Scanner sc = new Scanner(System.in);
		sc.useDelimiter("\n");
		String str = sc.next();
		for(int i = 0; i < str.length(); i++) {
			char ch = str.charAt(i);
			if(ch == ' ')
				words++;
		}
		System.out.println((words+1));
	}
}
