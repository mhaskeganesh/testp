import java.io.*;

class Program4{

	
	public static void  main(String ... args)throws IOException{
		
		int num=1;
		for(int itr =0 ;itr<4; itr++){

			for(int jtr = 0;jtr<4-itr;jtr++){

				System.out.printf("%d\t",num*7);
				num++;
			}
			System.out.printf("\n");
		}

	}	
}	
