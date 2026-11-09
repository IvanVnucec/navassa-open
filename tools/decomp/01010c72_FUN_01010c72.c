
void FUN_01010c72(int param_1,uint param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(DAT_01010e3c + param_1 * 4);
  uVar6 = FUN_01010cba();
  FUN_01010cbc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0);
  pbVar5 = (byte *)(iVar2 + 0xec);
  for (bVar1 = 0; bVar1 < param_2; bVar1 = bVar1 + 1) {
    bVar4 = *pbVar5 & 0x7f;
    *param_3 = bVar4;
    bVar3 = *param_4;
    if (bVar4 <= *param_4) {
      bVar3 = bVar4;
    }
    *param_4 = bVar3;
    param_3 = param_3 + 1;
    pbVar5 = pbVar5 + 1;
  }
  return;
}

