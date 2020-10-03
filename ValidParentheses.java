import java.util.*;

public class ValidParentheses{
	public static void main(String args[]) 
	{
		//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

		Scanner scanner = new Scanner(System.in);
		String s = scanner.next();

		if(isValid(s))
			System.out.println("Entered string is a valid string");
		else
			System.out.println("Entered string is not a valid string");
	}

    public static boolean isValid(String s) 
    {

        ArrayDeque<Character> stack = new ArrayDeque<>();
        for(int i = 0 ; i < s.length() ; i++)
        {
            char c = s.charAt(i);

		//if an opening bracket is found,push it to the stack
            if(c == '(' || c == '{' || c == '[')
                stack.push(c);
            else
            {
		//if an closing bracket is found and if the stack is empty,return false

                if(stack.isEmpty())
                    return false;
                
                char top = stack.pop();
                
		//if the opening and closing bracket is not of same type return false

                if(c == ')')
                {
                    if(top != '(')
                        return false;
                }
                else if(c == '}')
                {
                    if(top != '{')
                        return false;
                }
                else
                {
                    if(top != '[')
                        return false;
                }
            }
        }

	//if the stack is not empty return false else true

    if(stack.isEmpty())
        return true;
    else
        return false;
    }
}