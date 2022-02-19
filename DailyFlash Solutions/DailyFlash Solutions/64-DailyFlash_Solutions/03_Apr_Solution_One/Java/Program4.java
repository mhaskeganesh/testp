import java.io.*;

class Pendulum{


	public static void main(String ... nk)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		float freq = 0;
		float g=9.81f,length = 0;

		while(true){

			try{

				System.out.println("Enter the Frequency : ");
				freq = Float.parseFloat(br.readLine());
				
				break;

			}catch(NumberFormatException nfe){

				System.out.println("NFE : Enter valid number !!!");
			}
		}


		length = (4*(3.142*3.142)*(freq*freq))/g;
		System.out.printf("Length is : %.2lf\n",length);
	}
}
