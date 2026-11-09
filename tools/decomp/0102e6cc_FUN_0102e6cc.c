
undefined4 FUN_0102e6cc(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  FUN_0101735a();
  bVar3 = param_3 < DAT_0102e810;
  uVar2 = FUN_01017388(param_1);
  uVar2 = uVar2 & 6;
  if (uVar2 != 0) {
    uVar2 = 1;
  }
  if (uVar2 == 0 && bVar3) {
    return param_4;
  }
  uVar1 = DAT_01017510;
  if (param_1 == 0) {
    uVar1 = DAT_0101750c;
  }
  uVar1 = pin_update(uVar1,1,1);
  return uVar1;
}

