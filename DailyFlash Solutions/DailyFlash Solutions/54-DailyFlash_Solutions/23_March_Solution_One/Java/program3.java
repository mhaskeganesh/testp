import java.io.*;


class Program3{




	public static void main(String args[])throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int len = Integer.parseInt(br.readLine());
		int arr[] = new int[100];
		int max=0;
		

		for(int itr = 0 ; itr<len ; itr++){

			arr[itr] = Integer.parseInt(br.readLine());

			if(max<arr[itr]){

				max = arr[itr];
			}
		}

		System.out.printf("Maximum number : %d ",max);
	}	
	
}	
