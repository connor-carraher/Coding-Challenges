//Counting Sundays Problem 19

using System;
using System.Diagnostics;
using System.Numerics;

class Problem19{   
    public static void Main(){    
        int sundays = 0;

        for (int year = 1901; year <= 2000; year++){
            for (int month = 1; month <= 12; month++){
                if ((new DateTime(year, month, 1)).DayOfWeek == DayOfWeek.Sunday){
                    sundays++;
                }
            }
        }
        Console.WriteLine(sundays);
    }
}