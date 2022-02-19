import java.io.*;
class Demo{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Input : ");
		int n = Integer.parseInt(br.readLine());
		switch(n){
			case 0:
				System.out.println("Monday");
				break;
			case 1:
				System.out.println("Tuesday");
				break;
			case 2:
				System.out.println("Wednesday");
				break;
			case 3:
				System.out.println("Thursday");
				break;
			case 4:
				System.out.println("Friday");
				break;
			case 5:
				System.out.println("Saturday");
				break;
			case 6:
				System.out.println("Sunday");
				break;
			default:
				System.out.println("Enter valid day");
		}
	}
}
