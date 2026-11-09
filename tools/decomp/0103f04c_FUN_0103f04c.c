
undefined8 FUN_0103f04c(uint param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar5 = DAT_0103f128;
  iVar1 = DAT_0103f120;
  uVar8 = FUN_010027dc(DAT_0103f128,0xef,param_1 | 0xe0);
  uVar2 = FUN_0103f0e8((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x40000000);
  uVar2 = FUN_0103f0ea(uVar2,0x40000000,0);
  uVar8 = FUN_0103f0ea(uVar2,0x80000000,0);
  FUN_0103f0e8((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x80000000);
  iVar3 = FUN_010221ce(DAT_0103f12c,0x80,0x80,param_5);
  FUN_010027dc(DAT_0103f130,0x80,0x80);
  FUN_010027dc(uVar5,0x90,0x10);
  if (iVar3 == 0) {
    uVar5 = *(undefined4 *)(iVar1 + 4);
    for (cVar6 = '\0'; cVar6 < param_4; cVar6 = cVar6 + '\x01') {
      uVar2 = FUN_0103f0ee();
      uVar7 = FUN_0103f0f8((int)cVar6);
      puVar4 = (undefined4 *)(param_3 + cVar6 * 8);
      *puVar4 = uVar2;
      puVar4[1] = uVar7;
    }
    *(undefined4 *)(iVar1 + 4) = uVar5;
  }
  return CONCAT44(param_4,iVar3);
}

