package bao;
import java.util.*;
import java.io.*;
public class first {
	static int  firstUnique(String a) {//找出字符串中唯一第一个不重复字符方法
		int b[]=new int[26];
		int h=0;
	
		char  c[] = a.toCharArray();
	    int  size=a.length();
        for( int i= 0;i<size;i++) {//求各个字母相同的个数，没有则默认为0
        	b[c[i]-'a']=b[c[i]-'a']+1;
	}
	    for(int k=0;k<size;k++) {//找出所要求的字母，并返回其下标
	    	if(b[c[k]-'a']==1) {
	    	return k;
	    		}
	        
	    }
	        return -1;
		 
		 
	 }

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		System.out.print("s=:");
		String s = in.nextLine();
	    int q=firstUnique(s);
        System.out.print("返回：");
        System.out.print(q);
        System.out.print(".");
	}

}

