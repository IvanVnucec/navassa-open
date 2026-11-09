
int FUN_01016536(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int *param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 uStack_19;
  undefined1 auStack_18 [4];
  
  iVar1 = FUN_010164d0(param_1,param_2,&local_1a,&local_1b,auStack_18,&uStack_19,&local_1c,param_4,
                       param_3);
  iVar2 = iVar1;
  if (param_5 != (int *)0x0) {
    iVar2 = *param_5;
  }
  if ((param_5 != (int *)0x0 && iVar2 != 0) && (iVar1 == 0)) {
    iVar1 = FUN_010163a2(param_4,param_3,local_1a,local_1b,local_1c,param_6,param_5);
  }
  uVar3 = param_5[2];
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  nmi_signal_helper(uVar3 & 0xff);
  *(uint *)(*param_5 + (param_5[2] + -1) * 4) =
       *(uint *)(*param_5 + (param_5[2] + -1) * 4) | 0x20000000;
  return iVar1;
}

