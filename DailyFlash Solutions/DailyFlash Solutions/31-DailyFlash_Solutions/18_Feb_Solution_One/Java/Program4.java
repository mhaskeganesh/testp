

class Program4{
	

	public static void  main(String args[]){

		
		for(int itr = 0 ;itr<5 ; itr++){

			for(int jtr = 0; jtr<5 ; jtr++){

				System.out.print(jtr<itr?"\t":(itr+jtr)*jtr+"\t");
			}
			System.out.printf("\n");
		}
	}	

}	
