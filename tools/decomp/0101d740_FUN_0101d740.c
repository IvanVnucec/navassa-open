
undefined8
FUN_0101d740(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 unaff_r6;
  
  if (param_1 == 0) {
    unaff_r6 = 2;
  }
  else if (param_1 == 1) {
    unaff_r6 = 3;
  }
  if (param_2 == 0) {
    uVar1 = FUN_0101d734(0,1,1,param_4,param_3);
    uVar1 = FUN_0101d734(uVar1,8,8);
    uVar2 = 0x10;
  }
  else if (param_2 == 1) {
    uVar1 = FUN_0101d734(1,2,2,param_4,param_3);
    uVar1 = FUN_0101d734(uVar1,0x20,0x20);
    uVar2 = 0x40;
  }
  else {
    if (param_2 != 2) goto LAB_0101d7b0;
    uVar1 = FUN_0101d734(2,4,4,param_4,param_3);
    uVar1 = FUN_0101d734(uVar1,0x80,0x80);
    uVar2 = 0x100;
  }
  FUN_0101d734(uVar1,uVar2,0);
LAB_0101d7b0:
  FUN_01035cbc(unaff_r6,param_2,param_3,param_4);
  return CONCAT44(param_4,param_5);
}

