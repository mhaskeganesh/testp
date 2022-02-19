import java.io.*;

class Memory {

	static void check(int  age, char sex, char status)  {

		if(sex == 'f' || sex == 'F'){
			System.out.printf("She will work in Urban areas\n");
		}
		else if(age >= 20 && age <= 40){
			System.out.printf("He will work in any areas\n");
		}
		else {
			System.out.printf("He will work in urban areas\n");
		}
	}

	static public void main(String ... kbd) throws IOException {
		
		
		char sex = 'm', status = 'y';
	    int age = 20;
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter age, sex(m/f), Marital Status(y/n)\n");
		try{
			age = Integer.parseInt(br.readLine());
			sex = (char)br.read();
			br.skip(1);
			status = (char)br.read();
		
		}
		catch(NumberFormatException n){
			System.exit(0);
		}

		if(age < 20 || age > 60 || (sex != 'f' && sex != 'F' && sex != 'm' && sex != 'M') || (status != 'y'
				&& status != 'Y' && status != 'n' && status != 'N')){
			System.out.printf("Error\n");
		}
		else{
			check(age, sex, status);
		}
	}
}