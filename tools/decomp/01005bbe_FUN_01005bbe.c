
undefined8 FUN_01005bbe(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01005b00();
  if (iVar1 == 0) {
    *(undefined1 *)((uint)*(byte *)(param_2 + 0x29d) + param_2 + 8) = 1;
  }
  *(undefined4 *)((uint)*(byte *)(param_2 + 0x29d) * 0x138 + param_2 + 0x20) =
       *(undefined4 *)(param_1 + 0x20);
  FUN_0101204c((uint)*(byte *)(param_2 + 0x29d) * 0x138 + param_2 + 0x24,param_1 + 0x24,200);
  *(undefined4 *)(param_2 + 0xec + (uint)*(byte *)(param_2 + 0x29d) * 0x138) =
       *(undefined4 *)(param_1 + 0xec);
  iVar2 = (short)(ushort)*(byte *)(param_2 + 0x29d) * 0x138;
  if (*(int *)(param_2 + 0xec + iVar2) == 0) {
    FUN_0101204c(param_2 + iVar2 + 0xf0,param_1 + 0xf0,0x68);
  }
  return CONCAT44(param_4,iVar1);
}

