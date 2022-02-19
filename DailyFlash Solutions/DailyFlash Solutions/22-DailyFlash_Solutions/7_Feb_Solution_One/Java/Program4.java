class Program4{

	public static void main(String args[]){

		char  ch = 'A';
		for(int itr =0 ;itr<4;itr++){

			for(int jtr =0 ;jtr<4;jtr++){

				System.out.print(jtr<3-itr?" ":(char)(ch+jtr));
			}
			System.out.printf("\n");	
		}
	}	

}	
