import  java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException { 
		System.out.printf("Enter String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        	String st = br.readLine();
		for(int i = 0; i< st.length(); i++){
			if(st.charAt(i) == 'a' || st.charAt(i) == 'A' || st.charAt(i) == 'E' || st.charAt(i) == 'e' || st.charAt(i) == 'I' || st.charAt(i) == 'i' || st.charAt(i) == 'O' || st.charAt(i) == 'o' || st.charAt(i) == 'u' || st.charAt(i) == 'U'){
				System.out.print(st.charAt(i) + " : " + (int)st.charAt(i));
			}
			System.out.println();
		}	
	}
}
