/*
Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".
*/


public class Troll {
    public static String disemvowel(String str) {
        str.toLowerCase();
        return str.replaceAll("(?i)[aeiou]" , "");
    }
}

//The Java Regex or Regular Expression is an API to define pattern for searching or manipulating strings.
/*
Regex case insensitive by adding (?i) flag at start. 
This way characters used in regex will represent its lower and upper case
*/

//A more modern easier to read way..
public class Troll {
    public static String disemvowel(String str) {
      String output = "";
      for (int i=0; i<str.length(); i++) {
        switch (str.toLowerCase().charAt(i)) {
          case 'a': output+= "";
            break;
          case 'e': output+= "";
            break;
          case 'i': output+= "";
            break;
          case 'o': output+= "";
            break;
          case 'u': output+= "";
            break;
          default: output+= str.charAt(i);
        }
      }
      return output;
    }
}
//Using string allocation to a new String variable.