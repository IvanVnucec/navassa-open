
undefined8 FUN_01019ae0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_20;
  
  uVar2 = FUN_01019a84(0);
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  uVar3 = 0;
  local_20 = param_4;
  if (param_1 == 6 || param_1 == 4) {
    FUN_01019c0a();
    FUN_01019bea();
    local_20 = 5;
    uVar2 = FUN_01019c14();
    uVar3 = uVar2;
    if (param_1 != 6) goto LAB_01019b1c;
LAB_01019b20:
    uVar2 = FUN_01019bee(uVar2,2,2);
    FUN_01019bee(uVar2,2,0);
    local_20 = 5;
    uVar3 = FUN_01019bfe();
  }
  else {
LAB_01019b1c:
    if (param_1 == 5) goto LAB_01019b20;
  }
  FUN_01019c0a();
  uVar2 = DAT_01019bdc;
  pin_update(DAT_01019bdc,1,1);
  if (param_1 == 6 || param_1 == 4) {
    FUN_01019bf4();
    FUN_01019be0();
    local_20 = 5;
    uVar3 = FUN_01019c14();
    if (param_1 != 6) goto LAB_01019b72;
  }
  else {
LAB_01019b72:
    if (param_1 != 5) goto LAB_01019b8a;
  }
  FUN_01019bf4();
  FUN_01019be0();
  local_20 = 5;
  uVar3 = FUN_01019bfe();
LAB_01019b8a:
  FUN_01019bea();
  pin_update(uVar2,1,0);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar4 & 1) == 1);
  }
  return CONCAT44(local_20,uVar3);
}

