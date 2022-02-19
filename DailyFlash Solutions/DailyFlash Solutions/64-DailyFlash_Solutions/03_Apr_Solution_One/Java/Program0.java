import java.io.*;

class Series{


	static int calculateFactorial(int num){

		int fact =1;

		while(num>0){
			fact *=num;
			num -= 1;
		}

		return fact;
	}



	public static void main(String ... nk)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int a,x,y;
		float res=0;

		while(true){

			try{

				System.out.println("Enter the length of Series : ");
				a = Integer.parseInt(br.readLine());
				System.out.println("Enter X : ");
				x = Integer.parseInt(br.readLine());
				System.out.println("Enter Y : ");
				y = Integer.parseInt(br.readLine());
				break;

			}catch(NumberFormatException nfe){

				System.out.println("NFE : Enter valid number !!!");
			}
		}



		for(int i=1; i<=a; i++)
		res+=1/(Math.pow((x+y),i)*(calculateFactorial(i)));



		System.out.printf("Addition of series is : %.2f\n",res);


	}

}
