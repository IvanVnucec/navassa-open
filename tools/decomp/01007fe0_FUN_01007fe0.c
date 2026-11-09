
int FUN_01007fe0(uint param_1,uint param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  iVar1 = 0;
  if (0x37 < param_1) {
    return 0x8000;
  }
  if (0x1c < param_2) {
    return 0x8001;
  }
  if (param_2 != 0x1c) {
    uVar3 = 0;
    do {
      if ((uVar3 != param_1) && (*(byte *)(DAT_0100812c + uVar3 * 8) == param_2)) {
        iVar1 = 0x8002;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x38);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  puVar2 = (undefined1 *)(DAT_0100812c + param_1 * 8);
  *puVar2 = (char)param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  return iVar1;
}

