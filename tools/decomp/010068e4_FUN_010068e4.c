
void FUN_010068e4(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  
  bVar1 = *(byte *)(DAT_010071ac + param_2);
  iVar5 = DAT_010071b0 + (uint)bVar1 * 4;
  uVar6 = *(uint *)(iVar5 + 0x2c);
  bVar8 = *(uint *)(iVar5 + 0x34) != uVar6;
  if (bVar8) {
    uVar6 = (uint)*DAT_01007354;
  }
  pbVar3 = DAT_01007354;
  iVar5 = param_3;
  if ((!bVar8 || uVar6 == 1) && (pbVar3 = (byte *)(uint)DAT_01007354[1], pbVar3 == (byte *)0x0)) {
    iVar5 = 0;
  }
  if (param_1 == 0) {
    iVar2 = FUN_0100719e(0,pbVar3,0,8);
    if (iVar2 != 0) {
      return;
    }
    uVar7 = 8;
    uVar6 = iVar5 << 3 & 0xff;
    uVar4 = DAT_01007358;
  }
  else if (param_1 == 2) {
    iVar5 = FUN_010071a2(0,DAT_01007364,0,4);
    if (bVar1 == 0) {
      if (iVar5 != 0) {
        return;
      }
      uVar7 = 2;
      uVar6 = param_3 << 0x19;
    }
    else {
      if (iVar5 != 0) {
        return;
      }
      uVar7 = 4;
      uVar6 = param_3 << 0x1a;
    }
    uVar6 = uVar6 >> 0x18;
    uVar4 = DAT_0100755c;
  }
  else {
    if (1 < param_1) {
      return;
    }
    iVar2 = FUN_010071a2(0,DAT_0100735c,0,8);
    if (iVar2 != 0) {
      return;
    }
    uVar7 = 8;
    uVar6 = iVar5 << 3 & 0xff;
    uVar4 = DAT_01007360;
  }
  FUN_0100b704(param_4,uVar4,uVar6,uVar7);
  return;
}

