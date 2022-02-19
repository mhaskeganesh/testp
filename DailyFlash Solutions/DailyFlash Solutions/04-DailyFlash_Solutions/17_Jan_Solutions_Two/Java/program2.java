
import java.io.*;

class Memory {

	static public void main(String ... kbd) throws IOException {
		
		int u = 0;
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter Number of Units : ");
		try {
			u = Integer.parseInt(br.readLine());
		}
		catch (NumberFormatException ne){
			System.out.printf("Not Number\n");
			System.exit(0);
		}


		if(u >= 0 && u <= 50)
			System.out.printf("Electricity Bill : %f\n" , 0.50 * u);
		else if(u > 50 && u <= 150)
			System.out.printf("Electricity Bill : %f\n" , 0.75 * u);
		else if(u > 150 && u <= 250)
			System.out.printf("Electricity Bill : %f\n" , 1.20 * u);
		else if(u > 250)
			System.out.printf("Electricity Bill : %f\n" , 1.50 * u);
		else
			System.out.printf("Units can't be negative\n");
		return;
	}
}
