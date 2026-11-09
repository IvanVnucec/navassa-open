
void FUN_01001a7e(uint param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_01002680;
  uVar2 = 0;
  do {
    if ((int)((param_1 >> (uVar2 & 0xff)) << 0x1f) < 0) {
      **(undefined1 **)(iVar1 + uVar2 * 4) = param_2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return;
}

