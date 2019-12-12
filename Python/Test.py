# --------------------------
# VGU Selected Problems from the ACM Programming Contest WS 2019/2020
# *Problem: carrots Solving for Carrots
# *Link: https://open.kattis.com/problems/factovisors
# @author Nguyen Truong Thanh Hung - CS2016 - No. 11376
# @version 1.0, 27/11/2019
# *Method: compare prime factors of n! and m
# *Status: Accepted
# *Runtime: 0.00s
# *Programming language: C++
# --------------------------

public


class goldbach2 {

public static boolean isPrime(int n) {
for (int i = 2; i < (int)(Math.sqrt(n) + 1); i++)
if (n % i == 0)


return false;
return (n != 1);
}

public
static
void
main(String[]
args) {
Scanner
scan = new
Scanner(System. in);

ArrayList < Integer > primes = new
ArrayList < Integer > ();
primes.add(2);

for (int i = 3; i < 32000; i += 2)
    if (isPrime(i))
        primes.add(i);

int
cases = scan.nextInt();

for (int zax = 0; zax < cases; zax++)
    {
        int
    count = 0;
    String
    str = "";
    int
    num = scan.nextInt();

    for (int i = 0; i < primes.size(); i++)
    {
    int low = primes.get(i);
    int high = num - primes.get(i);

    if (high < low)
    break;

    if (primes.contains(high))
        {
            count + +;
        str += low + "+" + high + "\n";
        }
        }

        System.out.println(num + " has " + count + " representation(s)");
        System.out.println(str);
        }

        scan.close();

        }
        }
