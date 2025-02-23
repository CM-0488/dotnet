namespace _2025_02_23_DuckProject
{
    public class LakeDuck : Duck
    {
        public LakeDuck()
        {
            wings = new WaterproofWings();
        }
        void Dive()
        {
            Console.WriteLine($"{this.GetType()} is diving!!!");
        }

        void Fish()
        {
            Console.WriteLine($"{this.GetType()} is fishing!!!");
        }
    }
}
