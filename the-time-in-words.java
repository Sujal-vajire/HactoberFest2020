#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
string ans="";
string single_digits[] = { "zero", "one", "two",  
                               "three", "four","five",  
                               "six", "seven", "eight", "nine"}; 
string two_digits[] = {"ten", "eleven", "twelve",  
                               "thirteen", "fourteen", 
                               "fifteen", "sixteen",  
                               "seventeen", "eighteen", "nineteen"}; 
  
 string tens_multiple[] = {"", "", "twenty", "thirty", "forty",  
                                            "fifty","sixty", "seventy",  
                                            "eighty", "ninety"}; 
string hr="";
  if(m>30)
    h++;
  if(h>12)
    h-=12;
  if(h<10){
      hr =  single_digits[h];
  }else{
      h=h%10;
      hr =  two_digits[h%10];
  }
if(m==00){
    ans = hr+" o' clock";
  }
  else if(m==15||m==45){
    ans="quarter";
    if(m==15)
      ans+=" past";
    else {
      ans+=" to";
    }
      
    ans+=" "+hr;
  }else if(m==30){
    ans="half past "+hr;
  }else if(m<30){
    if(m==1)
      ans="one minute";
    else if(m<10)
      ans = single_digits[m]+" minutes";
    else if(m>=10&&m<20)
      ans = two_digits[m%10]+" minutes";
    else{
      if(m%10==0)
      ans = tens_multiple[m/10]+" minutes";
      else{
        ans = tens_multiple[m/10]+" "+single_digits[m%10]+" minutes";
      }
    }
    ans+=" past "+hr;
  }else{
    
    m=60-m;
    if(m<10)
      ans = single_digits[m]+" minutes";
    else if(m>=10&&m<20)
      ans = two_digits[m%10]+" minutes";
    else{
        if(m%10==0)
        ans = tens_multiple[m/10]+" minutes";
        else{
          ans = tens_multiple[m/10]+" "+single_digits[m%10]+" minutes";
        }
      }
    ans+=" to "+hr;
  }
  // cout<<"ans: "<<ans<<endl;
  return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
