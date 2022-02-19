
import java.io.*;

class Program {

	public static void main(String ... kbd) throws IOException {
		
		int n;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Number : \n");
		n = Integer.valueOf(br.readLine());
		
		switch(n){
			case 0:
				System.out.printf("Sunday\n");
				break;
			case 1:
				System.out.printf("Monday\n");
				break;
			case 2:
				System.out.printf("Tuesday\n");
				break;
			case 3:
				System.out.printf("Wednesday\n");
				break;
			case 4:
				System.out.printf("Thursay\n");
				break;
			case 5:
				System.out.printf("Friday\n");
				break;
			case 6:
				System.out.printf("Saturday\n");
				break;
			default:
				System.out.printf("Not Valid Option\n");
				break;
		}
	}
}
