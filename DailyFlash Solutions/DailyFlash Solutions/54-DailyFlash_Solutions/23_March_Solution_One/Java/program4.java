

class Program4{

	
	public static void main(String args[]){
	
		for(int itr = 0; itr<4 ; itr++){

			for(int jtr = 0 ; jtr<7-itr ; jtr++){

				System.out.print(jtr<itr?"\t":5+(itr*jtr)+"\t");
			}
			System.out.printf("\n");
		}

	}	
}	
