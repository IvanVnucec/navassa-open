
undefined1 FUN_0100426a(int param_1,int param_2,int param_3)

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
  FUN_010101bc(param_2,param_2 + 4,param_3,uVar2);
  return uVar1;
}

