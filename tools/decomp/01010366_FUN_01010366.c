
undefined4 FUN_01010366(int param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = 0;
  if (param_1 < 2) {
    iVar4 = *(int *)(DAT_01010678 + param_1 * 4);
    uVar3 = DAT_0101066c;
    iVar1 = DAT_01010668;
    if (param_1 != 0) {
      uVar3 = DAT_01010674;
      iVar1 = DAT_01010670;
    }
    *(undefined1 *)(iVar1 + 0x4c) = *param_2;
    *(undefined1 *)(iVar1 + 0x5d) = param_2[2];
    *(undefined1 *)(iVar1 + 0x5f) = param_2[4];
    pin_update(uVar3,7,param_2[6]);
    *(undefined1 *)(iVar1 + 0x4d) = param_2[1];
    *(undefined1 *)(iVar1 + 0x5e) = param_2[3];
    *(undefined1 *)(iVar1 + 0x60) = param_2[5];
    pin_update(uVar3,0x38,((uint)(byte)param_2[7] << 0x1b) >> 0x18);
    pin_update(iVar1 + 0x4a,3,param_2[8]);
    *(undefined1 *)(iVar1 + 0x4b) = param_2[10];
    pin_update(iVar4 + 0x167,1,param_2[0xb]);
    pin_update(iVar4 + 0x165,1,param_2[0xc]);
    pin_update(iVar1 + 0x15c,3,param_2[0xd]);
    FUN_01004f66(param_1,1,param_3);
    FUN_01004f66(param_1,2,param_3);
  }
  else {
    uVar2 = 0xc400;
  }
  return uVar2;
}

