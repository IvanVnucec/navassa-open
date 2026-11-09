
void FUN_010406c8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0103ae90(param_1,0);
  if (((((uint)*(ushort *)(DAT_01040f5c + 0x22) & 1 << (uint)*(byte *)(param_1 + 2)) != 0) &&
      (iVar1 == 0)) &&
     (iVar1 = FUN_01009650(*(undefined4 *)(DAT_010411b8 + (uint)*(byte *)(param_1 + 1) * 4 + 0x34),5
                           ,(uint)*(byte *)(param_1 + 2),1), iVar1 == 0)) {
    FUN_01036000(*(undefined1 *)(param_1 + 1),1,0);
    return;
  }
  return;
}

