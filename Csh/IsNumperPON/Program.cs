// See https://aka.ms/new-console-template for more information
Console.WriteLine("Write your number: ");
int num = int.Parse(Console.ReadLine());

if (num > 0)
{
    Console.WriteLine("Your number positive.");
} 
else if (num < 0)
{
    Console.WriteLine("Your number is negative.");
}
else 
{
    Console.WriteLine("Your number is zero!");
}
