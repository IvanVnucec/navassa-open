
int FUN_0104060c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0103ae90(param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_01040692();
  }
  if ((iVar1 == 0) && (iVar1 = FUN_01036000(*(undefined1 *)(param_1 + 1),0,0), iVar1 == 0)) {
    iVar1 = FUN_01036000(*(undefined1 *)(param_1 + 1),1,1);
  }
  FUN_0100bc60(*(undefined1 *)(param_1 + 1),1);
  if (iVar1 == 0) {
    FUN_010406a8();
    iVar1 = FUN_0103aeaa(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_0104070c(param_1);
    }
  }
  FUN_0102dc18(*(undefined1 *)(param_1 + 2));
  if (((uint)*(ushort *)(DAT_01040f5c + 0x22) & 1 << *(sbyte *)(*(int *)(param_1 + 0x44) + 1)) == 0)
  {
    dma_multi_channel_cfg(1 << (uint)*(byte *)(param_1 + 1));
    iVar1 = FUN_0103aeaa(*(undefined4 *)(param_1 + 0x44));
    FUN_0102dc18(*(undefined1 *)(*(int *)(param_1 + 0x44) + 2));
  }
  return iVar1;
}

