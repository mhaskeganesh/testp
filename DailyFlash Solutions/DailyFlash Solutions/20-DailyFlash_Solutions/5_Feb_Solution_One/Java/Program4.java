

class Program4{
	
	public static void main(String args[]){

		
		int ch =97;
		for(int itr = 0; itr<4 ; itr++){


			for(int jtr = 0 ; jtr<4-itr ; jtr++){

				System.out.printf("%c",ch++);
			}
			ch = 97+2*(itr+1);
			System.out.printf("\n");
		}
	}	

}	
