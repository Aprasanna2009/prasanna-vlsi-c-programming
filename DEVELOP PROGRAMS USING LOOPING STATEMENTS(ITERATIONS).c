#include &lt;stdio.h&gt;
int main()
{
int n, i, sum, res;
printf(&quot;Enter a number: &quot;);
scanf(&quot;%d&quot;, &amp;n);
printf(&quot;\nNumbers from 1 to %d:\n&quot;, n);
for(i = 1; i &lt;= n; i++)
{
printf(&quot;%d &quot;, i);
}
sum = 0;
i = 1;
while(i &lt;= n)
{
sum = sum + i;
i++;
}
res = 1;
i = 1;
do
{
res = res * i;
i++;
} while(i &lt;= n);
printf(&quot;\n\nSum of numbers = %d&quot;, sum);
printf(&quot;\nFactorial of %d = %d&quot;, n, res);
Department of ECE | IFET COLLEGE OF ENGINEERING
return 0;
}
