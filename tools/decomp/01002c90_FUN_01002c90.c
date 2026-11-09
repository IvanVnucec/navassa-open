
undefined8 FUN_01002c90(int param_1,int param_2,undefined1 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = DAT_01002dac;
  uVar1 = 0xc201;
  if ((param_1 == 0) && (param_2 < 4)) {
    uStack_14 = param_4;
    FUN_01002b24(0,param_2,1);
    uVar1 = 0;
    FUN_0100aed4(param_3 + 4,*param_3,*(undefined1 *)((int)&local_18 + ((byte)param_3[2] & 3)));
    FUN_01002b24(0,param_2,0);
    FUN_01002b56(0,param_2,param_3[1]);
    FUN_01002b6e(0,param_2,param_3[2]);
    FUN_01002b8a(0,param_2,param_3[3]);
  }
  return CONCAT44(local_18,uVar1);
}

