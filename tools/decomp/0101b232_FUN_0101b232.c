
void FUN_0101b232(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_10 = 0;
  FUN_01035c28(&local_c,&local_10,&local_14);
  iVar1 = DAT_0101ba44;
  iVar2 = FUN_0101af84(&LAB_0101b63c_1,&LAB_0101ba50,local_14,0,0,local_10,local_c);
  *(int *)(iVar1 + 0x68) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_0101bb28();
    if (iVar2 == 1) {
      FUN_0101b222();
      *(undefined4 *)(iVar1 + 100) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x50) = 1;
      *(undefined4 *)(iVar1 + 0x4c) = 0;
      uVar4 = FUN_0101b4ee();
      FUN_0102beaa(*(undefined4 *)(*(int *)((int)uVar4 + 0x78) + 0x44),
                   *(undefined4 *)((int)((ulonglong)uVar4 >> 0x20) + 0x2c));
      return;
    }
    if (iVar2 == -1) {
      uVar3 = 0;
      goto LAB_0101b2a4;
    }
  }
  uVar3 = 1;
LAB_0101b2a4:
  nmi_signal_helper(uVar3);
  return;
}

