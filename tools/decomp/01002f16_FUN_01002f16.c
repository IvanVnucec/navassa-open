
void FUN_01002f16(int param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(DAT_010032f0 + param_1 * 4);
  uVar1 = *(undefined2 *)(DAT_0100b218 + 2);
  *puVar2 = (char)uVar1;
  puVar2[8] = (char)((ushort)uVar1 >> 8);
  return;
}

