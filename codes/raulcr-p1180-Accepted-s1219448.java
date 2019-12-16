import java.util.*;

public class Main
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int a[] =new int[6];
		a[0] = 1;
		a[1] = 1;
		a[2] = 2;
		a[3] = 2;
		a[4] = 2;
		a[5] = 8;
		int c=sc.nextInt();
		for (int j=0;j < c;j++)
		{
			int b;
			int d[] =new int[6];
			int f[]=new int[6];
			for (int i=0;i < 6;i++)
			{
				f[i] = sc.nextInt();
			}
			for (int i=0;i < 6;i++)
			{
				d[i]=a[i]-f[i];
			}
			System.out.print(d[0]);
			for (int k=1;k < 6;k++)
                            System.out.print(" " + d[k]);
                        System.out.print("\n");
		}
	}
}