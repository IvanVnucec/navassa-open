
void FUN_01009a04(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(DAT_01009ebc + param_1 * 4);
  puVar2 = (undefined1 *)(iVar1 + 0x8b);
  if (param_3 == 0) {
    *puVar2 = (char)param_2;
    FUN_01009a60(puVar2,0xf,(int)param_2 >> 8 & 0xff);
    pin_update(iVar1 + 0x8a,2,2,param_4);
    return;
  }
  uVar3 = FUN_0100b782(param_3,puVar2,param_2 & 0xff);
  uVar3 = FUN_01009a66(uVar3,iVar1 + 0x8c,(int)param_2 >> 8 & 0xff,0xf);
  FUN_01009a66(uVar3,iVar1 + 0x8a,2,2);
  FUN_0100b594(param_3,param_4);
  return;
}

