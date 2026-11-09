
undefined4 FUN_01034f60(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  iVar4 = *(int *)(DAT_01035244 + param_1 * 4);
  FUN_01034e18();
  FUN_01015e2c(1000);
  pbVar5 = (byte *)(iVar4 + 7);
  bVar1 = *pbVar5 >> 4 & *pbVar5 >> 5;
  iVar2 = (uint)bVar1 << 0x1f;
  uVar6 = (ulonglong)CONCAT14(bVar1,iVar2);
  if (iVar2 < 0) {
    uVar3 = FUN_010351a2();
    FUN_010351a6(uVar3,0x10,0);
    uVar6 = FUN_01015e2c(10);
  }
  uVar3 = FUN_010351a4((int)uVar6,(int)(uVar6 >> 0x20),0x20);
  FUN_010351a6(uVar3,0x10,0x10);
  FUN_010351b2(pbVar5,8,5);
  FUN_010351b2(pbVar5,2,5);
  pin_update(iVar4 + 0x10,0x3f,0x1f);
  pin_update(iVar4 + 0x13,0x3f,0x1f,*(undefined1 *)(iVar4 + 9));
  uVar3 = FUN_01035034(*(undefined1 *)(iVar4 + 0x14),extraout_r1,0x80);
  FUN_01035036(uVar3,0x40,0x40);
  FUN_0103503e();
  FUN_0103503e();
  FUN_0103503c();
  FUN_0103503e();
  uVar3 = FUN_01035032();
  uVar7 = FUN_01035036(uVar3,0x40,0);
  uVar3 = FUN_01035034((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0);
  FUN_01035036(uVar3,0x40,0);
  return 0;
}

