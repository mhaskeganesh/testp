import java.io.*;

class Program {
	public static void main(String ... kbd) throws IOException{

		int n;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		int rev = 0;
		while(n != 0) {
			rev = rev * 10 + n%10;
			n /= 10;
		}
		n = rev;
		while(n != 0) {
			switch(n%10){
				case 1:
					System.out.printf("One ");
					break;
				case 2:
					System.out.printf("Two ");
					break;
				case 3:
					System.out.printf("Three ");
					break;
				case 4:
					System.out.printf("Four ");
					break;
				case 5:
					System.out.printf("Five ");
					break;
				case 6:
					System.out.printf("Six ");
					break;
				case 7:
					System.out.printf("Seven ");
					break;
				case 8:
					System.out.printf("Eight ");
					break;
				case 9:
					System.out.printf("Nine ");
					break;
				case 0:
					System.out.printf("Zero ");
					break;
				default:
					break;
			}
			n /= 10;
		}
		System.out.printf("\n");
	}
}