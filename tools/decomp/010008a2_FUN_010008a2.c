
void FUN_010008a2(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  sbyte sVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  
  puVar7 = (undefined4 *)
           (*(int *)(DAT_010011f4 + (uint)*(byte *)(param_3 + 0x85) * 8 + 4) +
           *(int *)(param_3 + 0x80) * 0x14);
  uVar4 = puVar7[1];
  *param_2 = *puVar7;
  param_2[1] = uVar4;
  if ((*(byte *)(param_2 + 7) & 3) == 0) {
    param_2[param_1 + 2] = 0;
    param_2[param_1 + 4] = 0;
  }
  *(char *)(param_2 + 0xb) =
       (char)*(undefined4 *)
              (param_4 + (uint)*(byte *)(param_3 + 0x85) * 0x100 + *(int *)(param_3 + 0x80) * 4 +
              0x230);
  if (*(int *)(param_4 + 0x2c) << 0x14 < 0) {
    iVar9 = param_4 + param_1 * 2;
    sVar1 = *(sbyte *)(param_4 + param_1 + 0x7d8);
    bVar2 = *(byte *)(param_4 + param_1 + 0x794);
    uVar8 = (*(uint *)(param_4 + 0x7c8) & (uint)*(ushort *)(iVar9 + 0x7d4) << sVar1) >> sVar1;
    uVar6 = (ushort)uVar8;
    if ((uint)bVar2 < (uVar8 & 0xffff)) {
      uVar6 = bVar2 - 1;
      *DAT_010011f8 = DAT_010011fc;
      *DAT_01001200 = 0x37b;
      boot_msg(1,0xeb08,1);
    }
    uVar6 = *(ushort *)(param_4 + param_1 * 0x10 + (uint)uVar6 * 2 + 0x7a6) /
            *(ushort *)(iVar9 + 0x7da);
  }
  else {
    uVar6 = (ushort)*(byte *)((int)puVar7 + param_1 + 0x12) << 2;
  }
  *(ushort *)((int)param_2 + param_1 * 2 + 0x22) = uVar6;
  pbVar3 = DAT_010013fc;
  if (*DAT_010011f0 != '\x04') {
    return;
  }
  if ((char)param_1 == '\0') {
    bVar2 = *DAT_010013fc;
    if ((int)((uint)bVar2 << 0x19) < 0) {
      FUN_0100083a(2,(int)((uint)bVar2 << 0x1d) < 0);
      *pbVar3 = *pbVar3 ^ 4;
      return;
    }
    *DAT_010013fc = bVar2 | 0x44;
    uVar5 = 0;
    uVar4 = 2;
  }
  else {
    if ((char)param_1 != '\x01') {
      return;
    }
    bVar2 = *DAT_010013fc;
    if ((int)((uint)bVar2 << 0x18) < 0) {
      if ((int)((uint)bVar2 << 0x1c) < 0) {
        uVar4 = 3;
      }
      else {
        uVar4 = 2;
      }
      FUN_0100083a(3,uVar4);
      *pbVar3 = *pbVar3 ^ 8;
      return;
    }
    *DAT_010013fc = bVar2 | 0x88;
    uVar5 = 2;
    uVar4 = 3;
  }
  FUN_0100083a(uVar4,uVar5);
  return;
}

