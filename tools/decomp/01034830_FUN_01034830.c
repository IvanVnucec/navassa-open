
longlong FUN_01034830(undefined4 param_1,int param_2,undefined1 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (param_2 == 4) {
    param_2 = 0;
  }
  iVar2 = DAT_010348b4 + param_2 * 2;
  puVar3 = (undefined1 *)(DAT_010348b4 + param_4);
  uVar1 = FUN_0103487e(DAT_010348b4,*(undefined2 *)(iVar2 + 0x14),*puVar3,*param_3);
  uVar1 = FUN_0103487e(uVar1,*(undefined2 *)(iVar2 + 0x1c),puVar3[4],param_3[1]);
  uVar1 = FUN_0103487e(uVar1,*(undefined2 *)(iVar2 + 0x24),puVar3[8],param_3[2]);
  uVar1 = FUN_0103487e(uVar1,*(undefined2 *)(iVar2 + 0x2c),puVar3[0xc],param_3[3]);
  FUN_0103487e(uVar1,*(undefined2 *)(iVar2 + 0x34),puVar3[0x10],param_3[4]);
  return (ulonglong)param_4 << 0x20;
}

