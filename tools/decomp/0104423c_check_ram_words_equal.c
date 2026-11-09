
undefined4 check_ram_words_equal(void)

{
  if (DAT_01044250[1] == *DAT_01044250) {
    return 1;
  }
  return 0;
}

