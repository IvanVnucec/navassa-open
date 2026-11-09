
longlong FUN_0102beaa(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  byte *pbVar5;
  uint local_18;
  
  nmi_signal_helper(0x30);
  pbVar5 = DAT_0102c024;
  piVar4 = DAT_0102c01c;
  pbVar3 = DAT_0102c018;
  nmi_signal_helper(*DAT_0102c01c != DAT_0102c020);
  nmi_signal_helper(*piVar4 != DAT_0102c028);
  bVar1 = *pbVar5;
  *pbVar5 = 0xff;
  bVar2 = *pbVar5;
  local_18._1_3_ = (undefined3)((uint)param_3 >> 8);
  local_18 = CONCAT31(local_18._1_3_,bVar2);
  pbVar3[8] = 7;
  pbVar3[9] = 0;
  pbVar3[10] = 0;
  pbVar3[0xb] = 0;
  *pbVar3 = bVar2 & 0x30;
  while( true ) {
    if (-1 < (int)(local_18 << 0x18)) break;
    *(int *)(pbVar3 + 8) = *(int *)(pbVar3 + 8) + -1;
    local_18 = CONCAT31(local_18._1_3_,(char)local_18 << 1);
  }
  nmi_signal_helper(*(int *)(pbVar3 + 8) == 3);
  nmi_signal_helper(*(int *)(pbVar3 + 8) == 3);
  *(uint *)(pbVar3 + 8) = (*(uint *)(pbVar3 + 8) & 7) << 8;
  *pbVar5 = bVar1;
  piVar4[8] = piVar4[8] | 0xf00000;
  piVar4[8] = piVar4[8] | 0xf0000000;
  FUN_0102c03c();
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  pbVar3[6] = 0;
  pbVar3[7] = 0;
  FUN_0103a434();
  *DAT_0102c02c = *DAT_0102c02c | 0xc0000000;
  FUN_0103a414();
  return (ulonglong)local_18 << 0x20;
}

