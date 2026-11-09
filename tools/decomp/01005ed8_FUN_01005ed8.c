
void FUN_01005ed8(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  puVar2 = DAT_01005fb0;
  iVar3 = 0;
  uVar6 = 0;
  uVar5 = 0;
  if (*(byte *)(param_1 + 2) - 2 < 2) {
    return;
  }
  pbVar7 = (byte *)(param_1 + 0x2e);
  if ((char)DAT_01005fb0[8] == '\0') goto LAB_01005f78;
  bVar1 = *pbVar7;
  *(byte *)(param_1 + 0x2f) = bVar1;
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  if (*(char *)((int)puVar2 + 0x21) == '\x01') {
    pbVar4 = DAT_01005fb4;
    if ((*(char *)(param_1 + 2) == '\0') ||
       (pbVar4 = DAT_01005fb8, *(char *)(param_1 + 2) == '\x01')) {
      *pbVar7 = *pbVar4;
    }
  }
  else {
    if ((puVar2[1] <= param_4) && ((puVar2[1] < param_4 || (*puVar2 <= param_3)))) {
      if ((param_4 <= puVar2[3]) && ((param_4 < puVar2[3] || (param_3 <= puVar2[2])))) {
        *pbVar7 = 0;
        goto LAB_01005f70;
      }
    }
    if ((puVar2[5] <= param_4) && ((puVar2[5] < param_4 || (puVar2[4] <= param_3)))) {
      if ((param_4 <= puVar2[7]) && ((param_4 < puVar2[7] || (param_3 <= puVar2[6])))) {
        *pbVar7 = 1;
        goto LAB_01005f70;
      }
    }
    iVar3 = 0xb201;
  }
LAB_01005f70:
  uVar5 = (uint)*pbVar7;
  uVar6 = (uint)(bVar1 ^ *pbVar7);
  if (iVar3 != 0) {
    return;
  }
LAB_01005f78:
  iVar3 = *(int *)(DAT_01005fbc + (uint)*(byte *)(param_1 + 1) * 4);
  if (*(char *)(DAT_01005fc0 + 0x77d) == '\0') {
    bVar1 = *pbVar7 | (byte)(uVar5 << 5);
    pbVar7 = (byte *)(iVar3 + 0x1bd);
  }
  else {
    bVar1 = *pbVar7 | (byte)(uVar6 << 1) | (byte)(uVar5 << 5);
    pbVar7 = (byte *)(iVar3 + 0x1b8);
  }
  *pbVar7 = bVar1 | 0x10;
  return;
}

