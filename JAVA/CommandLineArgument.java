// Command Line Argument
class CommandLineArgument{
    public static void main(String [] args)
    {
        System.out.println("Number of Arguments : "+args.length);
        System.out.println("Arguments are");
        for(int i = 0;i<args.length;i++)
        System.err.println(args[i]+"");
    }
}