
undefined8 FUN_01008026(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  
  uVar1 = 0;
  if (param_1 < 0x38) {
    pcVar2 = *(code **)(DAT_0100812c + param_1 * 8 + 4);
    if (pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_1,*(undefined1 *)(DAT_0100812c + param_1 * 8));
    }
  }
  else {
    uVar1 = 0x8000;
  }
  return CONCAT44(param_4,uVar1);
}

