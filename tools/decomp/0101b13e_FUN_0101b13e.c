
undefined4 FUN_0101b13e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_0101ba44;
  if (param_1 != 0) {
    FUN_0101b134(param_1,*(undefined4 *)(DAT_0101ba44 + 0x6c));
    *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 1;
    prvAddCurrentTaskToDelayedList(param_1,0);
    iVar1 = FUN_0101b2b8();
    if (iVar1 != 0) {
      return param_4;
    }
  }
  FUN_0101b20a();
  return param_4;
}

