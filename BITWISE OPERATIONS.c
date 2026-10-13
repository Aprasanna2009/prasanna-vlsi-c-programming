#include &lt;stdio.h&gt;
int main()
{
int a, b, res, choice;
printf(&quot;===== BITWISE OPERATIONS =====\n&quot;);
printf(&quot;Enter the first number: &quot;);
scanf(&quot;%d&quot;, &amp;a);
printf(&quot;Enter the second number: &quot;);
scanf(&quot;%d&quot;, &amp;b);
printf(&quot;\n----- MENU \n&quot;);
printf(&quot;1. Bitwise AND (&amp;)\n&quot;);
printf(&quot;2. Bitwise OR (|)\n&quot;);
printf(&quot;3. Bitwise XOR (^)\n&quot;);
printf(&quot;4. Bitwise NOT (~)\n&quot;);
printf(&quot;5. Left Shift (&lt;&lt;)\n&quot;);
printf(&quot;6. Right Shift (&gt;&gt;)\n&quot;);
printf(&quot;\nEnter your choice: &quot;);
scanf(&quot;%d&quot;, &amp;choice);
switch(choice)
{
case 1:
res = a &amp; b;
printf(&quot;Bitwise AND Result = %d&quot;, res);
break;
case 2:
res = a | b;
printf(&quot;Bitwise OR Result = %d&quot;, res);
break;
case 3:
res = a ^ b;
printf(&quot;Bitwise XOR Result = %d&quot;, res);
break;
case 4:
res = ~a;
printf(&quot;Bitwise NOT Result = %d&quot;, res);
break;
case 5:
res = a &lt;&lt; b;
printf(&quot;Left Shift Result = %d&quot;, res);
break;
case 6:
res = a &gt;&gt; b;
printf(&quot;Right Shift Result = %d&quot;, res);
break;
default:
printf(&quot;Invalid choice.&quot;);
}
return 0;
}

