namespace _2025_02_23_DuckProject
{
    public abstract class Duck : IBird
    {
        string habitat;
        string age;
        protected IWings wings;

        public void Fly()
        {
            wings.Fly();
        }

        public void Quack()
        {
            Console.WriteLine($"{this.GetType()} is quacking!!!");            
        }
    }
}
