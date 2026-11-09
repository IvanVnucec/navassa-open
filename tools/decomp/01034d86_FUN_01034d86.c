
void FUN_01034d86(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 * 0x54 + DAT_0103524c + 0x50);
  if (uVar1 < DAT_01035258) {
    if (DAT_0103525c + uVar1 < DAT_01035260) {
      uVar2 = 9;
    }
    else if (DAT_01035264 + uVar1 < DAT_01035268) {
      uVar2 = 10;
    }
    else if (DAT_0103526c + uVar1 < DAT_01035270) {
      uVar2 = 0xb;
    }
    else {
      if (DAT_01035270 < uVar1) {
        return;
      }
      uVar2 = 0xc;
    }
  }
  else {
    uVar2 = 8;
  }
  pin_update(*(int *)(DAT_01035244 + param_1 * 4) + 0x1b,0xf,uVar2);
  return;
}

