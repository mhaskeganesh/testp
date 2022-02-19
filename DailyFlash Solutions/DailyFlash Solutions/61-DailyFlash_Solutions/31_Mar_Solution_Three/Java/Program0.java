import java.io.*;

class Program0{


	static int calculateFactorial(int num){

		int fact =1;

		while(num>0){
			fact *=num;
			num -= 1;
		}

		return fact;
	}



	public static void main(String[] args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int a;
		float res=0;

		while(true){

			try{

				System.out.println("Enter the length of Series : ");
				a = Integer.parseInt(br.readLine());
				break;

			}catch(NumberFormatException nfe){

				System.out.println("NFE : Enter valid number !!!");
			}
		}



		for(int i=1; i<=a; i++)
			res+= (float)i/calculateFactorial(i);



		System.out.printf("Addition of series is : %.2f\n",res);


	}

}
