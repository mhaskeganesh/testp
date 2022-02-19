import java.io.*;


class Program2{

	
	public static void main(String args[])throws IOException{
		
		BufferedReader br  =new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the number");

		int num = Integer.parseInt(br.readLine());

		char hex[]= new char[100];

		int itr = 0;
		int rem = 0;


		while(num!=0){

			rem = num%16;

			if(rem<10){

				hex[itr]=(char)(rem+48);

			}else{
				hex[itr]=(char)(rem+55);
			}
			itr++;

			num = num/16;



		}

		for(int jtr=itr-1;jtr>=0;jtr--){

			System.out.printf("%c",hex[jtr]);
		}

	}	
}	
