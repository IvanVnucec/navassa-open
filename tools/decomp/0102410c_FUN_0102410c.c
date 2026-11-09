
undefined4 FUN_0102410c(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar2 = DAT_0102432c;
  puVar1 = DAT_01024328;
  uVar3 = FUN_010241b8();
  uVar3 = FUN_010241be(uVar3,2,0x3c00,*puVar1);
  uVar3 = FUN_010241be(uVar3,5,0,*puVar1);
  uVar3 = FUN_010241be(uVar3,6,0,*puVar1);
  FUN_010241be(uVar3,1,0,*puVar1);
  uVar3 = FUN_010241b8();
  uVar3 = FUN_010241be(uVar3,2,0x3c00,0);
  uVar3 = FUN_010241be(uVar3,5,0,0);
  uVar3 = FUN_010241be(uVar3,6,0,0);
  uVar4 = FUN_010241be(uVar3,1,0,0);
  uVar4 = FUN_010241a8((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1);
  FUN_010241a8((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
  FUN_010241b0();
  uVar3 = FUN_010241b0();
  uVar3 = FUN_010241a0(uVar3,1);
  FUN_010241a0(uVar3,0);
  return uVar2;
}

