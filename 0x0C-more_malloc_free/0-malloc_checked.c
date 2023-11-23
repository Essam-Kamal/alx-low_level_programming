/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: pointer to the array intialized or NULL
*/

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
