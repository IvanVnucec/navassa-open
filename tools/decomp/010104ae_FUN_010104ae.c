
undefined8 FUN_010104ae(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  
  if (1 < param_1) {
    uVar2 = 0xc400;
    goto LAB_01010548;
  }
  uVar5 = DAT_0101066c;
  iVar1 = DAT_01010668;
  if (param_1 != 0) {
    uVar5 = DAT_01010674;
    iVar1 = DAT_01010670;
  }
  uVar2 = 0xc401;
  if (param_2 == 0 || param_2 == 4) {
    if (param_3 < 0xb7) goto LAB_01010548;
    puVar3 = (undefined1 *)(iVar1 + 0x4c);
    puVar4 = (undefined1 *)(iVar1 + 0x4d);
LAB_0101050c:
    *puVar3 = (char)param_3;
    *puVar4 = (char)param_3;
    uVar2 = 0;
  }
  else {
    if (param_2 == 1) {
      if (0xc < param_3 - 2) goto LAB_01010548;
      puVar3 = (undefined1 *)(iVar1 + 0x5d);
      puVar4 = (undefined1 *)(iVar1 + 0x5e);
      goto LAB_0101050c;
    }
    if (param_2 == 3) {
      if (0xc < param_3 - 2) goto LAB_01010548;
      puVar3 = (undefined1 *)(iVar1 + 0x5f);
      puVar4 = (undefined1 *)(iVar1 + 0x60);
      goto LAB_0101050c;
    }
    if (param_2 == 2) {
      if ((int)param_3 < 8) {
        pin_update(uVar5,7,param_3);
        pin_update(uVar5,0x38,(param_3 << 0x1b) >> 0x18);
        uVar2 = 0;
      }
      else {
        uVar2 = 0xc401;
      }
    }
    else {
      uVar2 = 0xc400;
    }
  }
  FUN_01004f66(param_1,param_2,param_4);
LAB_01010548:
  return CONCAT44(param_4,uVar2);
}

