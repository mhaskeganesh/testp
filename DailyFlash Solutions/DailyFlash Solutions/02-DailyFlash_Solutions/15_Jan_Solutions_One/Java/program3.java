import java.io.*;

class Program {

	public static void main(String ... kbd) throws IOException {
		int c;

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Month : \n");
		c = Integer.valueOf(br.readLine());
		
		
		if((c >= 1 && c <= 7 && c % 2 == 1) || (c >= 8 && c <= 12 && c % 2 == 0)){
			System.out.printf("Number of days 31\n");
		}
		else if (c == 2){
			System.out.printf("Number of days 28\n");
		}
		else if(c <= 12  && c >= 1){
			System.out.printf("Number of days 30\n");
		}
		else {
			System.out.printf("Invalid Entry\n");	
		}
	}
}
