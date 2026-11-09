
void FUN_01049244(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_10;
  
  uVar3 = *(byte *)(param_1 + 2) & 3;
  iVar2 = thunk_FUN_010155ba(uVar3);
  puVar1 = DAT_01049708;
  if (iVar2 == 0) {
    iVar2 = DAT_01049744 + uVar3 * 0x60;
    iVar4 = (int)(*(float *)(iVar2 + 0x38) / DAT_01049508);
    local_10._0_1_ = (undefined1)iVar4;
    *DAT_01049708 = (char)(int)*(float *)(iVar2 + 0x3c);
    puVar1[1] = (undefined1)local_10;
    local_10._1_1_ = (undefined1)((uint)iVar4 >> 8);
    puVar1[2] = local_10._1_1_;
    puVar1[3] = *(undefined1 *)(iVar2 + 0x45);
    local_10 = *(uint *)(iVar2 + 0x54) / 1000 & 0xffff;
    puVar1[4] = (undefined1)local_10;
    puVar1[5] = local_10._1_1_;
  }
  return;
}

