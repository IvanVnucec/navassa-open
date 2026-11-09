
undefined8 FUN_01043006(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined8 uVar8;
  
  pbVar1 = DAT_01043080;
  FUN_0100a822(DAT_01043080,0x2c,0,param_3,param_4);
  FUN_01042cbc(pbVar1[5],pbVar1[6],param_4);
  uVar2 = (uint)pbVar1[5];
  bVar7 = 0;
  if (uVar2 == 1) {
    uVar3 = FUN_01043000(1,0x10,0x10);
    uVar5 = 0x20;
LAB_01042ef8:
    uVar2 = FUN_01043000(uVar3,uVar5,0);
  }
  else if (uVar2 == 0) {
    uVar3 = FUN_01043000(0,0x20,0x20);
    uVar5 = 0x10;
    goto LAB_01042ef8;
  }
  uVar3 = FUN_01043000(uVar2,1,1);
  uVar3 = FUN_01043000(uVar3,2,2);
  FUN_01043000(uVar3,4,4);
  iVar4 = FUN_01042d54(3,pbVar1[1]);
  if (iVar4 == 0) {
    iVar4 = FUN_01042d54(4,0x8c3);
  }
  uVar2 = (uint)(*pbVar1 >> 1);
  if ((int)((uint)*pbVar1 << 0x1f) < 0) {
    uVar2 = uVar2 + 1;
  }
  if (iVar4 == 0) {
    while ((bVar7 < uVar2 && (iVar4 == 0))) {
      iVar4 = FUN_01042dba(bVar7,*(undefined2 *)(pbVar1 + (uint)bVar7 * 2 + 0xc));
      bVar7 = bVar7 + 1;
    }
  }
  if (iVar4 == 0) {
    uVar2 = (uint)pbVar1[2];
    if (pbVar1[3] == 1 && uVar2 == 0) {
      uVar2 = (uint)*pbVar1;
    }
    iVar4 = FUN_01042dba(0x10,((uint)((1 << (pbVar1[6] & 3)) << 0x18) >> 0xe |
                              (uint)pbVar1[3] << 0xe) & 0xffff | (uint)*pbVar1 << 5 | uVar2 & 0x1f);
  }
  if (iVar4 == 0) {
    if (pbVar1[7] == 1) {
      FUN_01042e44(*(undefined4 *)(pbVar1 + 8));
    }
    bVar7 = pbVar1[7];
    if (bVar7 == 1) {
      uVar8 = pin_update(DAT_01043074,0xf,0xd);
      uVar3 = DAT_01043078;
      uVar5 = FUN_01042d4c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1);
      uVar5 = FUN_01042d4e(uVar5,2,0);
      FUN_01042d4e(uVar5,4,4);
      uVar6 = 0;
      uVar5 = 8;
    }
    else if (bVar7 == 0) {
      pin_update(DAT_01043074,0xf,0xe);
      uVar6 = 1;
      uVar5 = 1;
      uVar3 = DAT_0104307c;
    }
    else {
      if (bVar7 != 2) goto LAB_01042fdc;
      uVar6 = 0xb;
      uVar5 = 0xf;
      uVar3 = DAT_01043074;
    }
    pin_update(uVar3,uVar5,uVar6);
  }
LAB_01042fdc:
  return CONCAT44(param_3,iVar4);
}

