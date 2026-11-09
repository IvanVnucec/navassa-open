
void FUN_0100e860(byte *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0100ee1c;
  *(undefined1 *)
   ((uint)param_1[0xb1] + (uint)*param_1 * 0xd00 + DAT_0100ee1c + *(int *)(param_1 + 0xb4) * 0x20 +
   0xcc0) = *(undefined1 *)(*(int *)(param_1 + 0x10) + 1);
  *(undefined1 *)
   ((uint)param_1[0xb1] + (short)(ushort)*param_1 * 0xd00 + iVar1 + *(int *)(param_1 + 0xb4) * 0x20
   + 0xc80) = 0;
  return;
}

