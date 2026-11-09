
void FUN_0104193c(undefined4 param_1,int *param_2,undefined2 *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  float fVar6;
  float local_38 [2];
  
  iVar1 = DAT_01041ce8;
  sVar5 = *(short *)((int)param_2 + 0x8a);
  iVar2 = 0;
  uVar4 = 0;
  fVar6 = DAT_010419d8;
  while ((uVar4 < *(ushort *)((int)param_2 + 0x8e) && (iVar2 == 0))) {
    FUN_01041d24(param_1,*(undefined1 *)((int)param_2 + 0x92),(int)sVar5);
    iVar2 = FUN_01041ef8(param_1,param_2[0x1f],(char)param_2[0x24],local_38);
    if (iVar2 == 0) {
      if (*(char *)((int)param_2 + 0x93) != '\0') {
        *(short *)(iVar1 + uVar4 * 2) = sVar5;
        *(float *)(iVar1 + 0x2c + uVar4 * 4) = local_38[0];
      }
      if ((int)((uint)(local_38[0] < fVar6) << 0x1f) < 0) {
        *param_3 = (short)uVar4;
        *param_4 = sVar5;
        fVar6 = local_38[0];
      }
      sVar5 = sVar5 + (short)param_2[0x23];
      iVar3 = *param_2 + (uint)*(byte *)(param_2 + 0x24) * 2;
      *(short *)(iVar3 + 0x3e) = *(short *)(iVar3 + 0x3e) + 1;
    }
    uVar4 = uVar4 + 1 & 0xffff;
  }
  return;
}

