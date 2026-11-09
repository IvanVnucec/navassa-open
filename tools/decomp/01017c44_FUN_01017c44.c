
undefined8 FUN_01017c44(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  undefined4 uVar4;
  int unaff_r6;
  uint unaff_r9;
  bool bVar5;
  undefined8 uVar6;
  
  bVar5 = (int)((0xfU >> (param_1 & 0xff)) << 0x1f) < 0;
  uVar4 = 0xc301;
  if (bVar5) {
    if (2 < (int)param_2) goto LAB_01017d72;
    unaff_r6 = *(int *)(DAT_01018060 + param_1 * 4);
    uVar4 = 0;
    unaff_r9 = param_2 & 1;
    if (-1 < (int)((0xcU >> (param_1 & 0xff)) << 0x1f)) {
      bVar5 = (int)((3U >> (param_1 & 0xff)) << 0x1f) < 0;
      unaff_r4 = param_2;
      goto LAB_01017cf8;
    }
    if (param_2 == 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x80;
    }
    uVar1 = DAT_010181b0;
    if (param_1 != 2) {
      uVar1 = DAT_010181b4;
    }
    pin_update(uVar1,0x80,uVar3);
    uVar3 = FUN_01017d78();
    FUN_01017d7a(uVar3,0x40);
    FUN_01017d80();
    pin_update(unaff_r6 + 0x28,1);
    pin_update(unaff_r6 + 0x1ef,1,1);
    pin_update(unaff_r6 + 0x13,1,unaff_r9);
    param_2 = param_2 >> 1;
    iVar2 = unaff_r6 + 0x1d;
  }
  else {
LAB_01017cf8:
    if (!bVar5) goto LAB_01017d72;
    if (unaff_r4 == 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x80;
    }
    uVar1 = DAT_010181b8;
    if (param_1 != 0) {
      uVar1 = DAT_010181bc;
    }
    pin_update(uVar1,0x80,uVar3);
    pin_update(unaff_r6 + 4,1);
    uVar3 = FUN_01017d80();
    FUN_01017d82(uVar3,2);
    pin_update(unaff_r6 + 0xf,0x10);
    uVar6 = pin_update(unaff_r6 + 0x1e3,1,1);
    FUN_01017d80((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),unaff_r9);
    param_2 = unaff_r4 >> 1;
    iVar2 = unaff_r6 + 0x10;
  }
  pin_update(iVar2,1,param_2);
LAB_01017d72:
  return CONCAT44(param_4,uVar4);
}

