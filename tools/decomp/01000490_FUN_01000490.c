
void FUN_01000490(uint param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(param_2 << 4);
  if (-1 < (int)param_1) {
    *(undefined1 *)(DAT_01000fec + param_1) = uVar1;
    return;
  }
  *(undefined1 *)((param_1 & 0xf) + DAT_010011ec + -4) = uVar1;
  return;
}

