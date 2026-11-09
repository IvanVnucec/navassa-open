
void FUN_01008b46(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  iVar3 = *(int *)(DAT_010091f8 + param_1 * 4);
  pcVar4 = DAT_010096f4;
  if (param_2 == 0) {
    pcVar4 = DAT_010096f8;
  }
  iVar2 = (*pcVar4)(param_2,iVar3 + 0x37,*(undefined1 *)(DAT_010091f0 + param_1 * 0x60 + 0x45),0xf,
                    param_4);
  if (iVar2 == 0) {
    iVar2 = FUN_01008b9e(param_1,param_2);
  }
  pbVar1 = (byte *)(iVar3 + 0x2c);
  *(byte *)(DAT_010097e8 + param_1) = (byte)(((uint)*pbVar1 << 0x1c) >> 0x1e);
  if (iVar2 == 0) {
    (*pcVar4)(param_2,pbVar1,0,0xc,param_4);
  }
  return;
}

