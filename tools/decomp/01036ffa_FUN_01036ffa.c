
undefined4 FUN_01036ffa(void)

{
  int iVar1;
  undefined4 in_r3;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = DAT_0103716c + iVar2 * 0x2c;
    if ((*(char *)(iVar1 + 0x10) == '\x02') && (*(int *)(*(int *)(iVar1 + 0x20) + 8) != 0)) {
      FUN_0102b5e4(iVar1,0x1037025);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  return in_r3;
}

