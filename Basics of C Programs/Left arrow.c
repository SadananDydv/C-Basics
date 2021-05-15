printf("Left Arrow\n");
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
// center horizontal, bottom left diagonal, upper left diagonal
if(i == n / 2 || i - j == n / 2 || i + j == n / 2)
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
