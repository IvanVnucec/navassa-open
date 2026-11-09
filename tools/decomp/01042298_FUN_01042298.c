
undefined4 FUN_01042298(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint in_fpscr;
  float fVar7;
  undefined1 auStack_28 [8];
  float local_20;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar2 = FUN_01020cdc(param_1,2,auStack_28);
  if (iVar2 == 0) {
    fVar7 = (float)FUN_010145f4(local_20 * -4.0);
    if (((int)fVar7 & 0xffU) == 0) {
      return 0x2604;
    }
    uVar4 = (int)fVar7 + 4;
    uVar5 = uVar4 & 0xff;
    cVar1 = (char)uVar4;
    if (uVar5 < 0x55) {
      cVar6 = (char)(uVar5 / 0xc);
      bVar3 = cVar1 + cVar6 * -0xc;
    }
    else {
      cVar6 = '\a';
      bVar3 = cVar1 + 0xac;
    }
    fVar7 = (float)VectorUnsignedToFloat((uint)bVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)FUN_01011240(0x41200000,fVar7 / DAT_010423d4);
    fVar7 = (float)FUN_010145f4(fVar7 * DAT_010423d8);
    uVar4 = (uint)fVar7;
    if ((uVar4 & 0xffff) == 0xfff) {
      uVar4 = 0xffa;
    }
    FUN_010423fc(param_1,param_3);
    FUN_01042424(param_1,*(undefined1 *)(param_3 + 4),cVar6,uVar4 & 0xffff);
    FUN_01042474(param_1);
    iVar2 = FUN_01042484(param_1,300);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 0x2600;
}

