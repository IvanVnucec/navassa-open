
undefined4 FUN_0102d9ce(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 4) {
    if (param_2 == 0x1c) {
      FUN_0100a224();
    }
    else {
      if (param_1 == 0x36) {
        iVar1 = FUN_0100a264(0x36,param_2,&LAB_0102da14_1,&LAB_0102da1c_1);
      }
      else {
        if (param_1 != 0x37) {
          return 0;
        }
        iVar1 = FUN_0100a264(0x37,param_2,0x102da25,0x102da41);
      }
      if (iVar1 == 0) {
        FUN_0100a2b4(param_1,2,6);
      }
    }
  }
  return 0;
}

