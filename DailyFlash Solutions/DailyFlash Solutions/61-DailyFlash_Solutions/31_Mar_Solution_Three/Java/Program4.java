import java.io.*;

class Program4{


	public static void main(String[] args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		float len;
		float g=9.81f;

		while(true){

			try{

				System.out.println("Enter the length : ");
				len = Float.parseFloat(br.readLine());
				break;

			}catch(NumberFormatException nfe){

				System.out.println("NFE : Enter valid number !!!");
			}
		}


		float t = (float)((2*3.14)/Math.sqrt(len/g));

		System.out.printf("Time period is : %.2f\n",t);

		float freq = 1/t;

		System.out.printf("Frequency is : %.2f\n",freq);



	}

}
