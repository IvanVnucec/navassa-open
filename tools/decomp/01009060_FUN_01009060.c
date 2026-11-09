
void FUN_01009060(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_010091f8 + param_2 * 4);
  if (param_2 < 3) {
    uVar1 = *(undefined1 *)(param_1 + 0x1d);
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x1c);
  }
  uVar1 = FUN_0101614a(uVar1);
  pin_update(iVar2 + 0xd0,3,uVar1);
  *(undefined1 *)(DAT_0100940c + param_2 + 8) = uVar1;
  return;
}

