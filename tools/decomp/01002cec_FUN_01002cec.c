
undefined8 FUN_01002cec(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined1 *puStack_1c;
  
  local_20 = DAT_01002db0;
  uVar1 = 0xc201;
  if (param_2 == 1 || param_2 == 2) {
    if (param_1 == 2) {
      if ((param_3 != 0) && (param_3 != 1)) goto LAB_01002d72;
    }
    else if ((param_1 != 3) || (param_3 != 2 && param_3 != 3)) goto LAB_01002d72;
    puStack_1c = param_4;
    FUN_01002b24(param_2,param_3,1);
    FUN_0100afc6(*(undefined1 *)(DAT_01002d84 + param_1),param_4 + 4,*param_4,
                 *(undefined1 *)((int)&local_20 + ((byte)param_4[2] & 3)));
    FUN_01002b24(param_2,param_3,0);
    FUN_01002b56(param_2,param_3,param_4[1]);
    FUN_01002b6e(param_2,param_3,param_4[2]);
    FUN_01002b8a(param_2,param_3,param_4[3]);
    uVar1 = 0;
  }
LAB_01002d72:
  return CONCAT44(local_20,uVar1);
}

