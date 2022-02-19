import java.io.*;


class Program2{




	public static void main(String args[])throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String input = br.readLine();

		int len = input.length();

		for(int itr = 0 ;itr<len ; itr++){

				
			switch(input.charAt(itr)){
				case 'A':
				case 'a':
				case 'E':
				case 'e':
				case 'I':
				case 'i':
				case 'O':
				case 'o':
				case 'U':
				case 'u':
					System.out.printf("%c : %d\n",input.charAt(itr),(int)input.charAt(itr));	
			
			}


		}	
			

	}	
	
}	
