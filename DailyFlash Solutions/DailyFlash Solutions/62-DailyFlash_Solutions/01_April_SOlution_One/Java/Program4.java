import java.io.*;

class Pendulum{


	public static void main(String ... nk)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		float time;
		float g=9.81f;

		while(true){

			try{

				System.out.println("Enter the time period : ");
				time = Float.parseFloat(br.readLine());
				break;

			}catch(NumberFormatException nfe){

				System.out.println("NFE : Enter valid number !!!");
			}
		}


		float length =(float)((4*(3.14*3.14)*g)/(time*time));
		System.out.printf("Length is : %.2f\n",length);




	}

}
