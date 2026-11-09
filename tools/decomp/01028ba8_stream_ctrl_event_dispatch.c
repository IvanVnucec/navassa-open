
int stream_ctrl_event_dispatch(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_01028d00;
  iVar2 = 0;
  iVar3 = 0;
  if ((int)((uint)*(byte *)(param_1 + 0x14) << 0x1d) < 0) {
    FUN_0101cf98(0);
    iVar3 = *(int *)(iVar1 + 8);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x14) << 0x1c) < 0) {
    FUN_0101cf98(1);
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x44);
    iVar2 = stream_event_dispatcher
                      (iVar1,*(int *)(iVar1 + 8),
                       *(undefined4 *)
                        (*(int *)(DAT_01028d04 + *(int *)(iVar1 + 8) * 8 +
                                 (uint)*(byte *)(iVar1 + 2) * 4) + 0xc),0,0,0,0,0,0);
    if (iVar2 == 0) {
      iVar1 = DAT_01028d08 + (uint)*(byte *)(iVar3 + 1) * 0x1c;
      if (*(byte *)(*(int *)(*(int *)(iVar1 + 0x18) + 0x10) + 0x10) < 3) {
        iVar2 = FUN_0103624a(iVar1,0);
      }
    }
  }
  return iVar2;
}

