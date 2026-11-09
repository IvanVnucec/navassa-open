
void FUN_0102d2f6(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  byte bVar6;
  int iVar7;
  int unaff_r9;
  int iVar8;
  undefined8 uVar9;
  
  iVar2 = FUN_0102d640();
  iVar8 = *(int *)(iVar2 + param_1 * 4);
  iVar2 = *(int *)(DAT_0102da48 + param_1 * 4);
  iVar7 = *(int *)(param_3 + param_1 * 4);
  puVar5 = (undefined1 *)(unaff_r9 + param_1 * 0x48);
  pin_update(iVar7 + 0x40,0x1f,*puVar5);
  *(undefined1 *)(iVar7 + 0x51) = puVar5[1];
  *(undefined1 *)(iVar7 + 0x52) = puVar5[2];
  FUN_010027f4(iVar7 + 0x6b,0xffffff,*(undefined4 *)(puVar5 + 4));
  uVar3 = pin_update(iVar7 + 0x50,0x3f,puVar5[8]);
  uVar3 = FUN_0102d62e(uVar3,0x40,((uint)(byte)puVar5[9] << 0x1e) >> 0x18);
  uVar3 = FUN_0102d62e(uVar3,0x20,((uint)(byte)puVar5[10] << 0x1d) >> 0x18);
  uVar3 = FUN_0102d62e(uVar3,0x10,((byte)puVar5[0xb] & 1) << 4);
  uVar9 = FUN_0102d62e(uVar3,8,((uint)((byte)puVar5[0xb] >> 1) << 0x1b) >> 0x18);
  uVar3 = FUN_0102d634((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),puVar5[0xc]);
  FUN_0102d62e(uVar3,2,((uint)(byte)puVar5[0xd] << 0x19) >> 0x18);
  uVar1 = puVar5[0xe];
  *(undefined1 *)(iVar7 + 0x5c) = uVar1;
  FUN_0102d62e(uVar1,1,puVar5[0xf]);
  *(undefined1 *)(iVar7 + 0x6f) = puVar5[0x10];
  *(undefined1 *)(iVar7 + 0x79) = puVar5[0x12];
  pin_update(iVar7 + 0x7b,0x3f,puVar5[0x13]);
  pin_update(iVar7 + 0x7c,0x3f,puVar5[0x14]);
  bVar6 = 0;
  do {
    pin_update(iVar2 + (uint)bVar6 + 0x70,0x3f,puVar5[0x15]);
    bVar6 = bVar6 + 1;
  } while (bVar6 < 7);
  bVar6 = 0;
  do {
    pin_update(iVar2 + (uint)bVar6 + 0x69,0x3f,puVar5[0x16]);
    bVar6 = bVar6 + 1;
  } while (bVar6 < 7);
  pin_update(iVar2 + 0x68,7,0);
  pin_update(iVar2 + 0x55,1,1);
  pin_update(iVar2 + 0x55,1,0);
  *(undefined1 *)(iVar7 + 0x62) = puVar5[0x17];
  *(undefined1 *)(iVar7 + 99) = puVar5[0x18];
  pin_update(iVar7 + 0x44,0x1f,puVar5[0x19]);
  pin_update(iVar7 + 0x47,0x1f,puVar5[0x1a]);
  *(char *)(iVar8 + 0xec) = (char)*(undefined2 *)(puVar5 + 0x1c);
  pin_update(iVar8 + 0x1da,0x3f,*(ushort *)(puVar5 + 0x1c) >> 8);
  *(char *)(iVar8 + 0xee) = (char)*(undefined2 *)(puVar5 + 0x1e);
  pin_update(iVar8 + 0x1dd,0x3f,*(ushort *)(puVar5 + 0x1e) >> 8);
  *(char *)(iVar8 + 0xef) = (char)*(undefined2 *)(puVar5 + 0x20);
  pin_update(iVar8 + 0x1de,0x3f,*(ushort *)(puVar5 + 0x20) >> 8);
  *(char *)(iVar8 + 0xed) = (char)*(undefined2 *)(puVar5 + 0x22);
  pin_update(iVar8 + 0x1dc,0x3f,*(ushort *)(puVar5 + 0x22) >> 8);
  *(undefined1 *)(iVar7 + 100) = puVar5[0x24];
  *(undefined1 *)(iVar7 + 0x65) = puVar5[0x25];
  *(undefined1 *)(iVar7 + 0x80) = puVar5[0x26];
  *(undefined1 *)(iVar7 + 0x7f) = puVar5[0x27];
  pin_update(iVar7 + 0x48,0x1f,puVar5[0x28]);
  pin_update(iVar7 + 0x81,0x1f,puVar5[0x29]);
  pin_update(iVar7 + 0x82,0x1f,puVar5[0x2a]);
  uVar9 = pin_update(iVar7 + 0x45,0x1f,puVar5[0x2b]);
  uVar3 = FUN_0102d634((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),puVar5[0x2c]);
  FUN_0102d62e(uVar3,3,puVar5[0x2d]);
  *(char *)(iVar7 + 0x5a) = (char)*(undefined2 *)(puVar5 + 0x2e);
  pin_update(iVar7 + 0x1c6,0x3f,*(ushort *)(puVar5 + 0x2e) >> 8);
  *(undefined1 *)(iVar7 + 0x90) = puVar5[0x30];
  uVar3 = pin_update(iVar7 + 0x83,2,((uint)(byte)puVar5[0x31] << 0x19) >> 0x18);
  uVar3 = FUN_0102d62e(uVar3,1,puVar5[0x32]);
  FUN_0102d62e(uVar3,6,((uint)(byte)puVar5[0x33] << 0x19) >> 0x18);
  pin_update(iVar7 + 0x71,0x1f,puVar5[0x34]);
  pin_update(iVar7 + 0x61,0x7f,puVar5[0x35]);
  pin_update(iVar7 + 0x6a,0x1f,puVar5[0x36]);
  pin_update(iVar7 + 0x68,0x1f,puVar5[0x37]);
  pin_update(iVar7 + 0x43,0x7f,puVar5[0x38]);
  pin_update(iVar7 + 0x8d,0xf,puVar5[0x39]);
  pin_update(iVar7 + 0x67,0x1f,puVar5[0x3a]);
  pin_update(iVar7 + 0x69,0x1f,puVar5[0x3b]);
  *(undefined1 *)(iVar7 + 0x15) = puVar5[0x3c];
  pin_update(iVar7 + 0x13,0x1f,puVar5[0x3d]);
  *(undefined1 *)(iVar7 + 0x72) = puVar5[0x3e];
  *(undefined1 *)(iVar7 + 0x74) = puVar5[0x3f];
  pin_update(iVar7 + 0x12,8,((uint)(byte)puVar5[0x40] << 0x1b) >> 0x18);
  *(undefined1 *)(iVar7 + 0x70) = puVar5[0x41];
  uVar3 = DAT_0102da50;
  FUN_0102d020(iVar7,0x42,puVar5[0x44]);
  if (param_1 == 0) {
    FUN_0102d020(uVar3,0x141,*(undefined1 *)(unaff_r9 + 0x43));
    uVar1 = *(undefined1 *)(unaff_r9 + 0x42);
    uVar4 = 0x140;
  }
  else {
    FUN_0102d020(uVar3,0x143,puVar5[0x43]);
    uVar1 = puVar5[0x42];
    uVar4 = 0x142;
  }
  FUN_0102d020(uVar3,uVar4,uVar1);
  return;
}

