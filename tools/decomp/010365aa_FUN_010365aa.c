
void FUN_010365aa(int param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  
  pbVar2 = (byte *)(param_1 + 0x2e);
  *pbVar2 = 0xff;
  *(undefined1 *)(param_1 + 0x2f) = 0xff;
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  iVar1 = DAT_01036688;
  uVar3 = (uint)*(byte *)(param_1 + 1);
  if (*(byte *)(param_1 + 2) < 2) {
    bVar4 = -1 < (int)((uint)(*(ushort *)(DAT_0103667c + 0x22) >> (uVar3 + 10 & 0xff)) << 0x1f);
    *(bool *)(param_1 + 0x2f) = !bVar4;
    *pbVar2 = !bVar4;
    *(bool *)(param_1 + 0x30) = bVar4;
    *(byte *)(*(int *)(iVar1 + uVar3 * 4) + 0x1bd) =
         *pbVar2 | *(char *)(param_1 + 0x2f) << 2 | *(char *)(param_1 + 0x30) << 3;
    *(byte *)(*(int *)(iVar1 + (uint)*(byte *)(param_1 + 1) * 4) + 0x1b8) =
         *pbVar2 | *(char *)(param_1 + 0x2f) << 2 | *(char *)(param_1 + 0x30) << 3;
    return;
  }
  *(undefined1 *)(*(int *)(DAT_01036688 + uVar3 * 4) + 0x1bd) = 0;
  *(undefined1 *)(*(int *)(iVar1 + (uint)*(byte *)(param_1 + 1) * 4) + 0x1b8) = 0;
  return;
}

