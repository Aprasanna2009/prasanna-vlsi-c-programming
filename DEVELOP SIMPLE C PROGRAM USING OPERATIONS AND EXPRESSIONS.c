#include &lt;stdio.h&gt;
int main()
{
int a, b, choice, res;
printf(&quot;===== OPERATORS AND EXPRESSIONS =====\n&quot;);
printf(&quot;Enter the first number: &quot;);
scanf(&quot;%d&quot;, &amp;a);
printf(&quot;Enter the second number: &quot;);
scanf(&quot;%d&quot;, &amp;b);
printf(&quot;\n----- MENU \n&quot;);
printf(&quot;1. Addition\n&quot;);
printf(&quot;2. Subtraction\n&quot;);
printf(&quot;3. Multiplication\n&quot;);
printf(&quot;4. Division\n&quot;);
printf(&quot;5. Modulus\n&quot;);
printf(&quot;\nEnter your choice: &quot;);
scanf(&quot;%d&quot;, &amp;choice);
switch(choice)
{
case 1:
res = a + b;
printf(&quot;Result = %d&quot;, res);
break;
case 2:
res = a - b;
printf(&quot;Result = %d&quot;, res);
break;
case 3:
res = a * b;
printf(&quot;Result = %d&quot;, res);
break;
case 4:
if(b != 0)
{
res = a / b;
printf(&quot;Result = %d&quot;, res);
}
else
{
printf(&quot;Division by zero is not possible.&quot;);
}
break;
case 5:
if(b != 0)
{
res = a % b;
printf(&quot;Result = %d&quot;, res);
}
else
{
printf(&quot;Modulus by zero is not possible.&quot;);
}
break;
default:
printf(&quot;Invalid choice.&quot;);
}
return 0;
}
