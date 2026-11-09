
undefined1 FUN_01004288(int param_1,undefined4 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (param_1 == 0) {
    uVar2 = *(undefined1 *)(DAT_010044ec + param_3 + 2);
  }
  else {
    uVar2 = 0;
  }
  uVar1 = *(undefined1 *)(DAT_010044ec + param_3);
  FUN_01010184(*param_2,param_2[1],param_3,uVar2);
  return uVar1;
}

