
undefined4 FUN_0103efe0(int param_1,undefined4 param_2,uint param_3,ushort param_4)

{
  undefined4 uVar1;
  ushort *puVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar1 = DAT_0103f11c;
  uVar3 = 2;
  if (param_1 != 0) {
    if (param_1 != 1) {
      return 0x2f00;
    }
    uVar3 = 1;
  }
  FUN_0103f134(DAT_0103f11c,0x3fff,uVar3);
  FUN_0103f134(DAT_0103f120,0x40ffffff,param_3);
  bVar4 = param_3 == 0;
  while (!bVar4) {
    param_3 = param_3 >> 1;
    bVar4 = param_3 == 0;
  }
  FUN_0103f134(uVar1,0xf0000);
  puVar2 = DAT_0103f124;
  *DAT_0103f124 = *DAT_0103f124 | 0x1f;
  puVar2[1] = param_4;
  return 0;
}

