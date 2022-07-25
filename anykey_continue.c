void anykey_continue(void)
{
	puts("请按任意键继续...");
	stdin->_IO_read_ptr = stdin->_IO_read_end;
	getch();
}