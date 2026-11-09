
undefined4 FUN_01006dc0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_3 * 0xbc + DAT_01007514;
  switch(param_2) {
  case 0:
  case 4:
    return *(undefined4 *)(iVar2 + 0x1a8);
  case 1:
    return *(undefined4 *)(iVar2 + 800);
  case 2:
    if (param_1 != 0) {
      return *(undefined4 *)(iVar2 + 0x498);
    }
    break;
  case 3:
    if (param_1 != 0) {
      uVar1 = *(undefined4 *)(iVar2 + 0x610);
    }
  }
  return uVar1;
}

