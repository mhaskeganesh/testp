import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
		int n, mul = 1;
		System.out.printf("Enter length  of Array : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		int arr[] = new int[n];
		for(int i =  0; i < n ; i++){
			arr[i] = Integer.parseInt(br.readLine());
		}

		for(int i =  0; i < n ; i++){
			if(arr[i] % 2 == 1){
				arr[i] = arr[i] * arr[i] * arr[i];
			}
			else 
				arr[i] = arr[i] * arr[i];
		}
		for(int i =  0; i < n ; i++){
			System.out.print(arr[i] + " ");
		}
		System.out.println();
	}
}
