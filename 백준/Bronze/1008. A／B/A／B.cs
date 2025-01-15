using System;

namespace A_B
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            
            double a = double.Parse(s[0]);
            double b = double.Parse(s[1]);
            
            Console.WriteLine(a/b);
        }
    }
}