
ulonglong FUN_0100e0d2(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r4;
  uint uVar4;
  uint unaff_r6;
  byte bVar5;
  
  bVar5 = 0;
  uVar3 = param_4;
  do {
    iVar1 = FUN_0100a5ae(0,bVar5);
    if (iVar1 != param_1) {
      uVar3 = (uint)bVar5;
    }
    uVar2 = (uint)bVar5;
    uVar4 = uVar2;
  } while (((iVar1 != param_1 && uVar3 != 0x3f) && (uVar4 = unaff_r6, iVar1 < param_1)) &&
          (bVar5 = bVar5 + 1, uVar4 = unaff_r4, unaff_r6 = uVar2, bVar5 < 0x40));
  return CONCAT44(param_4,uVar4) & 0xffffffff000000ff;
}

