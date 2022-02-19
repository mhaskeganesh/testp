import java.io.*;

class Program4 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int sum = 0,l = 0,choice = 0;
		float avg = 0,var = 0;
		System.out.printf("Enter Valu of N\n");

		l = Integer.parseInt(br.readLine());
		int arr[] = new int[l];

		System.out.printf("Enter Elements\n");
		for(int i = 0; i < l; i++){
			arr[i] = Integer.parseInt(br.readLine());
			sum+=arr[i];
		}

		avg = (float)sum/l;
		for(int i = 0; i < l; i++){
			var = var + ((arr[i]-avg)*(arr[i]-avg)) / l; 

		}

		do {

			System.out.printf("Enter your Choice\n");
			System.out.printf("1 : Calculate Average\n2 : Calculate Variance\n3 : Calculate Standard deviation\n");
			choice = Integer.parseInt(br.readLine());

			switch(choice) {

				case 1 : System.out.printf("Average (a) of Numbers : %.2f\n",avg);
					 break;

				case 2 : System.out.printf("Variance of Numbers : %.2f\n",var);
					 break;
				case 3 : System.out.printf("Standard Deviation of Numbers: %.2f\n",Math.sqrt(var));
					 break;
				default : System.exit(0);
			}
		}while(true);
	}
}



