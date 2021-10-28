package coding;
import java.util.*;
import java.io.*;
import java.lang.*;

class solution{
	public static void main(String[] args) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine()),count=0;
		while(t!=0) {
		int mask=(t&(~(t)+1));
		if(mask!=0) {
			count++;
		}
		t=t-mask;
		}
		System.out.println(count);
	}
}
