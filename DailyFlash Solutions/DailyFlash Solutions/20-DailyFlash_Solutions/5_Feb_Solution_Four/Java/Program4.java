
class Pattern1{
	
	public static void  main(String[] arr){

		int num1 = 97  ;
		for(int i = 0 ; i < 4 ; i++){
			int num = 97;
			num1 = num + 2*i ;
			num = num1 ;
			for(int j = 4 ; j > i ; j--){
				System.out.print( (char)num++ + "\t"); 
			}
			System.out.println();
		}
	}
}
