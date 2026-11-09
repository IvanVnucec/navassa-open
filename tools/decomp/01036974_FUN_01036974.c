
undefined8 FUN_01036974(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  int unaff_r5;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01036bb2();
  uVar4 = FUN_01036bc2((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
  uVar4 = FUN_01036b9e((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
  uVar4 = FUN_01036b14((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
  FUN_01036b0c((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
  FUN_01036ba6();
  iVar1 = FUN_010368cc(*(undefined4 *)(unaff_r4 + 0xc));
  bVar3 = iVar1 == 0;
  if (bVar3) {
    FUN_01036b96();
    pin_update(unaff_r5 + 0x9b);
    FUN_01036b8e();
    FUN_01036b06();
    FUN_01036b82();
    FUN_01036b06();
    FUN_01036ba6();
    iVar1 = FUN_010368cc(*(undefined4 *)(unaff_r4 + 0x10));
    bVar3 = iVar1 == 0;
    if (bVar3) {
      FUN_01036b96();
      pin_update(unaff_r5 + 0x176);
      FUN_01036b8e();
      pin_update(unaff_r5 + 0x177);
      FUN_01036afa();
      FUN_01036ba0();
      FUN_01036ba6();
      iVar1 = FUN_010368cc(*(undefined4 *)(unaff_r4 + 0x14));
      bVar3 = iVar1 == 0;
    }
  }
  if (bVar3) {
    FUN_01036b96();
    pin_update(unaff_r5 + 0x172);
    FUN_01036b8e();
    pin_update(unaff_r5 + 0x173);
    FUN_01036afa();
    FUN_01036b16();
    FUN_01036ba6();
    iVar1 = FUN_010368cc(*(undefined4 *)(unaff_r4 + 0x18));
    if (iVar1 == 0) {
      FUN_01036b96();
      pin_update(unaff_r5 + 0x1c9);
      FUN_01036b8e();
      uVar2 = pin_update(unaff_r5 + 0x1cb);
      uVar2 = FUN_01036b0e(uVar2,2,(uint)(param_3 << 0x19) >> 0x18);
      FUN_01036b06(uVar2,0x1f,1);
      pin_update(unaff_r5 + 0x171,0x1f,1);
      pin_update(unaff_r5 + 0x175,0x1f,1);
      uVar2 = pin_update(unaff_r5 + 0x1c8,0x1f,1);
      uVar2 = FUN_01036b06(uVar2,0x20,((uint)*(byte *)(unaff_r4 + 8) << 0x1d) >> 0x18);
      FUN_01036bc4(uVar2,1,*(undefined1 *)(unaff_r4 + 9));
      uVar2 = pin_update(unaff_r5 + 0x9d,1,*(undefined1 *)(unaff_r4 + 4));
      uVar2 = FUN_01036ba0(uVar2,1,*(undefined1 *)(unaff_r4 + 5));
      uVar2 = FUN_01036b16(uVar2,1,*(undefined1 *)(unaff_r4 + 6));
      FUN_01036b0e(uVar2,4,((uint)*(byte *)(unaff_r4 + 7) << 0x1a) >> 0x18);
      uVar4 = FUN_01036bbc();
      uVar4 = FUN_01036b9e((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),
                           ((uint)*(byte *)(unaff_r4 + 1) << 0x19) >> 0x18);
      uVar4 = FUN_01036b14((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),
                           ((uint)*(byte *)(unaff_r4 + 2) << 0x19) >> 0x18);
      FUN_01036b0c((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),*(undefined1 *)(unaff_r4 + 3));
      iVar1 = 0;
    }
  }
  return CONCAT44(param_3,iVar1);
}

