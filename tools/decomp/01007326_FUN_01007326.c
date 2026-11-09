
undefined8 FUN_01007326(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 extraout_r1;
  int iVar2;
  byte bVar3;
  uint unaff_r7;
  undefined8 uVar4;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined3 uStack_1b;
  
  FUN_0101206c(DAT_01007cd4,param_1,200);
  uStack_24 = 0;
  uStack_28 = CONCAT31((int3)((uint)param_3 >> 8),2);
  _uStack_1c = CONCAT31((int3)((uint)param_4 >> 8),3);
  bVar3 = 1;
  uStack_20 = param_2;
  uVar4 = FUN_010076a4(DAT_01007cd4);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  uStack_20 = CONCAT13(bVar3,(undefined3)uStack_20);
  iVar1 = (int)uVar4 + iVar2 * 4;
  if (param_2 == 0) {
    unaff_r7 = *(uint *)(iVar1 + 0x4c);
  }
  else if (param_2 == 1) {
    unaff_r7 = *(uint *)(iVar1 + 0x54);
  }
  else if (param_2 == 3) {
    unaff_r7 = *(uint *)(iVar1 + 100);
  }
  if (unaff_r7 < 3) {
    if (unaff_r7 == 2) {
      uVar4 = FUN_01007728(2,iVar2,1);
      FUN_010076c6((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
      FUN_010076d0();
      FUN_01007696(1,2);
      uStack_20 = CONCAT31(uStack_20._1_3_,extraout_r1);
    }
    else {
      FUN_010076b2();
      uStack_24 = (uint)bVar3;
      uStack_20 = CONCAT31(uStack_20._1_3_,(char)param_2);
    }
    FUN_01007bf6(&uStack_20,param_3);
    FUN_0100760c();
    if (unaff_r7 == 2) {
      FUN_010076be();
    }
  }
  return CONCAT44(uStack_24,uStack_28);
}

