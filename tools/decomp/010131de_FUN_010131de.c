
longlong FUN_010131de(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r4;
  undefined4 unaff_r5;
  code *pcVar4;
  undefined4 in_lr;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  
  bVar5 = *(char *)(param_2 + 2) != '\x01';
  uVar3 = param_3;
  if (!bVar5) {
    uVar3 = (uint)*(byte *)(param_2 + 1);
  }
  if (bVar5 || uVar3 != 1) {
    iVar1 = FUN_010299b0(param_1,0,param_3);
    if (iVar1 != 0) goto LAB_0101321c;
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_010299b0(param_1,1,param_3);
    if (iVar1 != 0) {
LAB_0101321c:
      return CONCAT44(param_4,iVar1);
    }
    uVar2 = 1;
  }
  cVar6 = param_1 == 2;
  if (1 < param_1) {
    return CONCAT44(param_4,0xc800);
  }
  iVar1 = unaff_r4;
  uVar7 = FUN_010299f4(param_3,uVar2);
  pcVar4 = DAT_01029c68;
  if (cVar6 != '\0') {
    pcVar4 = DAT_01029c7c;
  }
  (*pcVar4)((int)uVar7,unaff_r4 + 0xac,(uint)((int)((ulonglong)uVar7 >> 0x20) << 0x1d) >> 0x18,0x20,
            param_4,iVar1,unaff_r5,in_lr);
  return (ulonglong)param_4 << 0x20;
}

