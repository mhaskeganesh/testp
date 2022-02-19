
import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {
		int n,t, choice;
		float sum = 0,var = 0;
		char ch;
		System.out.printf("Total Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		t = Integer.parseInt(br.readLine());
		int arr[] = new int[t];

		System.out.printf("Enter Numbers : ");
		for(int i = 0; i < t; i++) {
			n = Integer.parseInt(br.readLine());
			arr[i] = n;
			sum = sum + n;
		}
		sum = sum / t;
		for(int i = 0; i< t; i++){
			var = var + (int)Math.pow(arr[i] - (int)(sum),2);	
		}
		
		System.out.printf("1:Average\n");
		System.out.printf("2:Variance\n");
		System.out.printf("3:Standard Deviation\n");
		System.out.printf("Enter choice : \n");
		do {
			choice = Integer.parseInt(br.readLine());
			switch(choice) {
				case 1:
					System.out.printf("Average = %f\n",sum);
					break;
				case 2:
					var = var/t;
					System.out.printf("Variance = %f\n", var);
					break;
				case 3:
					System.out.printf("Standard Deviation = %f\n",Math.sqrt(var));
					break;
				default:
					System.out.printf("Wrong choice\n");
					break;
			}
			System.out.print("To continue y/n");
			ch = (char)br.read();
			
		}while(ch == 'y');
	}
}
