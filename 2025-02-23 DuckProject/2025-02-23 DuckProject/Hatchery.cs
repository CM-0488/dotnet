namespace _2025_02_23_DuckProject
{
    public static class Hatchery
    {
        public static void Hatch(Duck oneDuck, Duck twoDuck)
        {
            if (oneDuck.GetType().Name == twoDuck.GetType().Name)
            {
                Console.WriteLine("Created a new Duckling");
            }
            else
            {
                Console.WriteLine("Can't breed different duck species.");
            }
        }

        
    }
}