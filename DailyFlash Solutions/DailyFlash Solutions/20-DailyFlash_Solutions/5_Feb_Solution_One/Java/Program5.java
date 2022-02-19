class Program5{


	public static void main(String args[]){

		for(int itr = 0 ;itr<4;itr++){

			for(int jtr = 0;jtr<4;jtr++){

				System.out.print(jtr<3-itr?" ":jtr+1);
			}

			System.out.printf("\n");	
		}
	}	
}	
