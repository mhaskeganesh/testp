import java.io.*;

class Memory {

	static public void main(String ... kbd) throws IOException {

		int a = 0;
		System.out.printf("Enter Size : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try {
			a = Integer.parseInt(br.readLine());
		}
		catch (NumberFormatException ne){
			System.out.printf("Not Number\n");
			System.exit(0);
		}
		if(a < 0) 
			System.exit(0);
		
		int s = a * a;
		int k = 2;
		for(int i = 1; i <= s; i++){
			if(i % a == 0) {
				System.out.printf("%d\n", k);
				k = 2;
			}
			else{
				System.out.printf("%d\t", k);
				k+=2;
			}
		}
	}
}

