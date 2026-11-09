
void FUN_0103b442(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_40 [52];
  undefined4 uStack_c;
  
  uStack_c = param_4;
  if (param_1 == 0) {
    FUN_0100974e(*(undefined4 *)(DAT_0103b4bc + param_2 * 4 + 0x7c),0,param_2);
  }
  else if (param_1 == 2) {
    FUN_0103b484(param_2,auStack_40);
    FUN_0101c40c(auStack_40,param_2 + 2U & 0xff,0);
    FUN_0101cf28(param_2);
  }
  return;
}

