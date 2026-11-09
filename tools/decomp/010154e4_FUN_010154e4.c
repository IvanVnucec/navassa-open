
undefined8
FUN_010154e4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_0101369c(*(undefined4 *)(param_5 + 8),*(undefined4 *)(param_5 + 0xc),DAT_01015a24,0,
                       param_2,param_3,param_4);
  if (param_1 < 2) {
    iVar3 = param_1 * 0x10;
    *(undefined4 *)(param_5 + 0x38) = *(undefined4 *)(&DAT_01015b14 + iVar3);
    *(undefined4 *)(param_5 + 0x3c) = *(undefined4 *)(&DAT_01015b18 + iVar3);
    *(undefined4 *)(param_5 + 0x40) = *(undefined4 *)(&DAT_01015b1c + iVar3);
    *(undefined *)(param_5 + 0x44) = (&DAT_01015b20)[iVar3];
    return CONCAT44(param_3,param_2);
  }
  if (param_1 == 2) {
    puVar2 = &DAT_01015b64;
  }
  else {
    puVar2 = &DAT_01015bdc;
  }
  iVar4 = param_5 + 0x40;
  iVar3 = param_5 + 0x3c;
  FUN_01015562(puVar2,6,uVar1,param_5 + 0x38,iVar3,iVar4,param_5 + 0x44);
  return CONCAT44(iVar4,iVar3);
}

