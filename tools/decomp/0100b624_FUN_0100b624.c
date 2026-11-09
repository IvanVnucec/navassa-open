
void FUN_0100b624(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 2) {
    uVar1 = param_1;
  }
  FUN_010027dc(*(undefined4 *)(&DAT_0100b86c + param_2 * 4),3,
               (uint)(param_1 != 2) | (uVar1 & 0x7f) << 1);
  return;
}

