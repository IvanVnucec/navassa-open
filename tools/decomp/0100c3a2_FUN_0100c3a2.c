
undefined8 FUN_0100c3a2(undefined1 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_18;
  undefined4 uStack_14;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  local_18 = param_3;
  uStack_14 = param_4;
  if (*(char *)(iVar1 + 0xc) == '\0') {
    uVar3 = FUN_0101dd1e(*param_1,&local_18);
    iVar2 = DAT_0100cac0;
    *(ushort *)(iVar1 + 0x56) = (ushort)(local_18 >> 0x14);
    *(char *)(iVar1 + 0x58) = (char)(local_18 & 0x3f);
    *(ushort *)(iVar1 + 0x54) = (ushort)((local_18 << 0xc) >> 0x14);
    if ((uint)*(byte *)(iVar2 + 0xe) != (local_18 & 0x3f)) {
      uVar3 = 0x2114;
    }
  }
  else {
    iVar2 = FUN_0101dd14(*param_1);
    *(byte *)(iVar1 + 0x58) = (byte)iVar2 & 0x3f;
    *(ushort *)(iVar1 + 0x54) = (ushort)((uint)(iVar2 << 0xc) >> 0x14);
    *(ushort *)(iVar1 + 0x56) = (ushort)((uint)iVar2 >> 0x14);
  }
  FUN_0100c404(param_1);
  return CONCAT44(local_18,uVar3);
}

