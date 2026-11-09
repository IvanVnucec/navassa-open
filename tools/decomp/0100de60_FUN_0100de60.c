
undefined4 FUN_0100de60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined4 extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined4 local_18;
  
  pcVar3 = DAT_0100e0b0;
  pbVar2 = DAT_0100e078;
  iVar5 = *(int *)(DAT_0100e0ac + param_1 * 4) + 0x1d6;
  local_18 = param_4;
  pin_update(iVar5,4,0);
  pin_update(iVar5,2,2);
  pcVar1 = DAT_0100e038;
  local_18 = 0;
  FUN_0100bb90(param_1,&local_18,*DAT_0100e038);
  FUN_0100bb90(param_1,&local_18,-(uint)(*pcVar1 == '\0') >> 0x1f);
  if ((*pbVar2 == 0) && (FUN_0100df5e(0,extraout_r1,*pcVar1), *pcVar3 != '\0')) {
    FUN_0100df04();
    FUN_0100defa();
  }
  pcVar4 = DAT_0100e010;
  if (*DAT_0100e010 != '\0') {
    pcVar4 = (char *)(uint)*pbVar2;
  }
  if ((*DAT_0100e010 != '\0' && pcVar4 != (char *)0x1) &&
     (FUN_0100df5e(*pcVar1,pcVar4,-(uint)(*pcVar1 == '\0') >> 0x1f), *pcVar3 != '\0')) {
    FUN_0100df04();
    FUN_0100defa();
  }
  return local_18;
}

