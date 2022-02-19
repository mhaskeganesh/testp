import java.io.*;


class Program5{
	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(br.readLine());
		int flag = 0;


		for(int itr = 2  ;itr<=num/2 ; itr++){

			if(primeOrNot(itr)==1){

				if(primeOrNot(num-itr)==1){

					System.out.printf("%d = %d + %d \n",num,num-itr,itr);
					flag = 1;
				}
			}

		}

		if(flag==0){
			System.out.printf("%d cannot express as the sum of two prime ",num);
		}
	}	

	static int primeOrNot(int num){

		int flag = 0;
		for(int itr =2; itr<=num/2;itr++){
	
			if(num%itr==0)
				return 0;

		}
		return 1;
	
	}

}	
