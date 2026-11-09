
int FUN_0100d5dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  char cVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  undefined1 auStack_24 [8];
  float local_1c;
  
  FUN_010104ae(param_1,0,0xff,param_3);
  FUN_0100d6ec(10);
  iVar3 = FUN_01020cdc(param_1,1,auStack_24);
  fVar9 = (float)FUN_010145f4(local_1c * -4.0);
  if (iVar3 == 0) {
    if (((int)fVar9 & 0xffU) == 0) {
      iVar3 = 0x3404;
    }
    else {
      uVar4 = ((int)fVar9 & 0xffU) + 4;
      uVar5 = uVar4 & 0xff;
      cVar1 = (char)uVar4;
      if (uVar5 < 0x55) {
        cVar7 = (char)(uVar5 / 0xc);
        bVar2 = cVar1 + cVar7 * -0xc;
      }
      else {
        cVar7 = '\a';
        bVar2 = cVar1 + 0xac;
      }
      fVar9 = (float)VectorUnsignedToFloat((uint)bVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)FUN_01011240(0x41200000,fVar9 / DAT_0100d78c);
      fVar9 = (float)FUN_010145f4(fVar9 * DAT_0100d790);
      uVar6 = (undefined2)(int)fVar9;
      if (0xffe < ((int)fVar9 & 0xffffU)) {
        uVar6 = 0xffa;
      }
      FUN_01020644(param_1,param_2,cVar7,uVar6);
      iVar8 = *(int *)(DAT_0100d798 + param_1 * 4);
      pin_update(iVar8 + 0x34,2,0);
      pin_update(iVar8 + 0xd4,0x40,0x40);
      pin_update(iVar8 + 0xd4,0x40,0);
      FUN_010206b2(param_1);
      iVar3 = FUN_01022164(iVar8,0x1e,1,0,30000);
      pin_update(iVar8 + 0x34,2,2);
      if (iVar3 != 0) {
        iVar3 = 0x3400;
      }
    }
  }
  else {
    iVar3 = 0x3400;
  }
  return iVar3;
}

