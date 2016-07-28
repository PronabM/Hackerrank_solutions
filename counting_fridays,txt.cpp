using System;
using System.Collections.Generic;
using System.IO;

class Solution {
    static void Main(String[] args) 
    {
        int t,i;
        t = int.Parse(Console.ReadLine());
        for(i=0;i<t;i++)
        {
            int d1,m1,y1,d2,m2,y2,f=0;
            decimal count=0;
            string[] tokens = Console.ReadLine().Split();
            d1 = int.Parse(tokens[0]);
            m1 = int.Parse(tokens[1]);
            y1 = int.Parse(tokens[2]);
            d2 = int.Parse(tokens[3]);
            m2 = int.Parse(tokens[4]);
            y2 = int.Parse(tokens[5]);
            if(d1>13)
		    {
			  if(m1==12)
			  {
			      m1=1;
				  y1++;	
			   }	
			 else
			     m1++;
		    }
            if(d2<13)
		    {
			  if(m2==1)
			  {
			      m2=12;
				  y2-=1;	
			   }	
			 else
			     m2-=1;
		    }
            if((y2==9999)&&(m2>=8))
                f=1;
            if(y2==9999)
                y2=9998;    
            
            DateTime idate = new DateTime(y1,m1,13);
             DateTime fdate = new DateTime(y2,m2,13);
            if (idate.DayOfWeek == DayOfWeek.Friday)
                    count++;

            while (idate<fdate)
            {
                idate = idate.AddMonths(1);
                if (idate.DayOfWeek == DayOfWeek.Friday)
                    count++;    
            }
            count+=f;
            Console.WriteLine(count.ToString());    
        }            
    }
}
