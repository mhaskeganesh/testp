import java.io.*;

class Program2{

	public static void main(String[] args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the length of array : ");
		int n = Integer.parseInt(br.readLine());


		int arr[] = new int[n];
		int mul=1;

		System.out.println("Enter the elements of array : ");
		for(int i=0; i<n; i++)
			arr[i]=Integer.parseInt(br.readLine());
			
		for(int i=0; i<n; i++)
			if(i%2==0)
				arr[i]=arr[i]*arr[i]*arr[i];
			else
				arr[i]=arr[i]*arr[i];

		for(int i=0; i<n; i++)
			System.out.print(arr[i]+"\t");
	}


}
