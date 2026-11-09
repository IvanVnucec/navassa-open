
void FUN_0102e9f6(short param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(&DAT_0102f294 + param_2 * 4);
  if (param_3 == 1) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  FUN_0102e834(uVar2,param_1 * 0x11 + 0x94,3,uVar1,param_4);
  FUN_0102e834(uVar2,param_1 * 0x11 + 0x97,0x30,0x30);
  return;
}

