
undefined8 FUN_01036b1c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  int unaff_r4;
  int unaff_r5;
  undefined8 uVar3;
  
  uVar3 = FUN_01036bb2();
  FUN_01036bc2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0);
  FUN_01036ba6();
  iVar1 = FUN_010368cc(*(undefined4 *)(unaff_r4 + 4));
  if (iVar1 == 0) {
    FUN_01036b96();
    pin_update(unaff_r5 + 0x13f);
    FUN_01036b8e();
    FUN_01036ba0();
    FUN_01036b82();
    uVar2 = FUN_01036ba0();
    uVar2 = FUN_01036c82(uVar2,0x1f,1);
    uVar2 = FUN_01036c82(uVar2,0x20,((uint)*(byte *)(unaff_r4 + 1) << 0x1d) >> 0x18);
    FUN_01036bc4(uVar2,1,*(undefined1 *)(unaff_r4 + 2));
    FUN_01036bbc();
    iVar1 = 0;
  }
  return CONCAT44(in_r3,iVar1);
}

