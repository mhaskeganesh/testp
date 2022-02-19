

class Program1{

	
	public static void main(String ... args){

		int flag = 0;

		for(int itr = 2 ; itr<=100 ;itr++){

			flag=0;
			for(int jtr = 2 ; jtr<=itr/2;jtr++){
			
				if(itr%jtr==0){
					flag = 1;
			       		break;
				}

			}	
			if(flag==0)
				System.out.printf("%d\t",itr);
		}
	}	
}	
