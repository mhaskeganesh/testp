import java.io.*;

class {

	public static void main(String ... nk)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));


		while(true){

			try{

				System.out.println("Enter the number : ");
				int a = Integer.parseInt(br.readLine());
				break;

			}catch(NumberFormatException nfe){

				System.out.println("NFE : Enter valid number !!!");
			}
		}


		//Logic


		}

}
