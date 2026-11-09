
void FUN_010106d0(uint param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *extraout_r1;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar7 = *(int *)(DAT_01010e3c + param_1 * 4);
  pin_update(iVar7 + 0xe1,0x1f,*param_2);
  iVar3 = DAT_01010e40;
  *(undefined1 *)(iVar7 + 0xe0) = param_2[1];
  *(undefined1 *)(iVar7 + 0xdd) = param_2[2];
  *(undefined1 *)(iVar7 + 0xe2) = param_2[3];
  *(undefined1 *)(iVar7 + 0xe3) = param_2[4];
  iVar9 = iVar7 + 0xd2;
  *(char *)(iVar7 + 0xcf) = (char)*(undefined2 *)(param_2 + 6);
  pin_update(iVar7 + 0xd0,0xf,*(ushort *)(param_2 + 6) >> 8);
  *(char *)(iVar7 + 0xe4) = (char)*(undefined2 *)(param_2 + 8);
  pin_update(iVar7 + 0xe5,0xf,*(ushort *)(param_2 + 8) >> 8);
  pin_update(iVar9,0xf,param_2[5]);
  pin_update(iVar9,0x30,((uint)(byte)param_2[10] << 0x1c) >> 0x18);
  if (param_2[10] == '\x01' || param_2[10] == '\x03') {
    iVar8 = *(int *)(iVar3 + param_1 * 4);
    pin_update(iVar8 + 0xda,2,2);
    pin_update(iVar8 + 0x182,2,2);
    pin_update(iVar8 + 0x19c,2,2);
    pin_update(iVar8 + 0x1b6,2,2);
  }
  if (param_2[10] == '\x03') {
    iVar8 = *(int *)(iVar3 + param_1 * 4);
    pin_update(iVar8 + 0xda,4,4);
    pin_update(iVar8 + 0x182,4,4);
    pin_update(iVar8 + 0x19c,4,4);
    pin_update(iVar8 + 0x1b6,4,4);
  }
  uVar1 = param_2[0xb];
  *(undefined1 *)(iVar7 + 0x1a6) = uVar1;
  uVar4 = FUN_01010b38(uVar1,8,((uint)(byte)param_2[0xc] << 0x1b) >> 0x18);
  uVar4 = FUN_01010b38(uVar4,7,param_2[0xd]);
  FUN_01010b38(uVar4,6,((uint)(byte)param_2[0xe] << 0x19) >> 0x18);
  iVar8 = iVar7 + 0xd4;
  pbVar6 = DAT_01010e44;
  if (((uint)*DAT_01010e44 & 1 << (param_1 & 0xff)) != 0) {
    pin_update(iVar8,0xc,((uint)(byte)param_2[0xf] << 0x1a) >> 0x18);
    pin_update(iVar7 + 0xe6,0xf,param_2[0x10]);
    pbVar6 = extraout_r1;
  }
  pbVar5 = (byte *)(*(int *)(iVar3 + param_1 * 4) + 0x1cb);
  bVar2 = *pbVar5;
  FUN_01010cbc(pbVar5,pbVar6,*pbVar5 & 1);
  pin_update(iVar7 + 0x1c7,2,bVar2 & 2);
  pin_update(iVar8,1,param_2[0x12]);
  uVar10 = pin_update(iVar8,0x20,((uint)(byte)param_2[0x13] << 0x1d) >> 0x18);
  uVar10 = FUN_01010c6a((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_2[0x11]);
  uVar10 = FUN_01010a40((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_2[0x16]);
  uVar4 = FUN_01010c60((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),
                       ((uint)(byte)param_2[0x17] << 0x19) >> 0x18);
  uVar4 = FUN_01010c62(uVar4,0x30,((uint)(byte)param_2[0x15] << 0x1c) >> 0x18);
  FUN_01010c62(uVar4,0xc0,((uint)(byte)param_2[0x15] << 0x1e) >> 0x18);
  pin_update(iVar9,0x80,((uint)(byte)param_2[0x14] << 0x1f) >> 0x18,param_4);
  return;
}

