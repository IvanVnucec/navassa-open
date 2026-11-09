
int FUN_010318ba(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_0103ae90(param_1,1);
  iVar2 = DAT_010320bc;
  if (iVar3 == 0) {
    uVar4 = (uint)*(byte *)(param_1 + 1);
    if (((uint)*(ushort *)(DAT_010320bc + 0x22) & 1 << uVar4) != 0) {
      iVar3 = FUN_0101681c(uVar4,*(undefined1 *)(DAT_010320bc + uVar4 * 0xbc + 0x1c6));
      *(undefined1 *)(param_1 + 0x24) = 0;
      if (iVar3 != 0) goto LAB_0103195e;
    }
    uVar4 = (uint)*(byte *)(param_1 + 1);
    if (((((uint)*(ushort *)(iVar2 + 0x22) & 1 << (uVar4 + 4 & 0xff)) == 0) ||
        (iVar3 = FUN_010168dc(uVar4,1,*(undefined1 *)(iVar2 + uVar4 * 0xbc + 0x33e)), iVar3 == 0))
       && ((uVar4 = (uint)*(byte *)(param_1 + 1),
           ((uint)*(ushort *)(iVar2 + 0x22) & 1 << (uVar4 + 8 & 0xff)) == 0 ||
           (iVar3 = FUN_010168dc(uVar4,3,*(undefined1 *)(iVar2 + uVar4 * 0xbc + 0x62e)), iVar3 == 0)
           ))) {
      bVar1 = *(byte *)(param_1 + 1);
      if (((uint)*(ushort *)(iVar2 + 0x22) & 1 << (uint)(byte)(bVar1 + 6)) != 0) {
        iVar3 = FUN_010169a8(bVar1,*(undefined1 *)(iVar2 + (short)(ushort)bVar1 * 0xbc + 0x4b6));
      }
    }
  }
LAB_0103195e:
  dma_multi_channel_cfg(1 << *(sbyte *)(param_1 + 1));
  if ((iVar3 == 0) && (iVar3 = FUN_0103aeaa(param_1), iVar3 == 0)) {
    iVar3 = FUN_010320c8(param_1);
  }
  FUN_0102dc18(*(undefined1 *)(param_1 + 2));
  return iVar3;
}

