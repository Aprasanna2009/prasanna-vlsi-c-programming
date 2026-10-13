#include &lt;stdio.h&gt;
int square(int n);
int factorial(int n);
int main()
{
int n, res, fact;
printf(&quot;Enter a number: &quot;);
scanf(&quot;%d&quot;, &amp;n);
res = square(n);
fact = factorial(n);
printf(&quot;\nSquare of %d = %d&quot;, n, res);
printf(&quot;\nFactorial of %d = %d&quot;, n, fact);
return 0;
}
int square(int n)
{
int res;
res = n * n;
return res;
}
int factorial(int n)
{
int res;
if(n == 0 || n == 1)
{
return 1;
}
else
{
res = n * factorial(n - 1);
return res;
}
}

