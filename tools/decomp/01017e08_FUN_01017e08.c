
undefined8 FUN_01017e08(int param_1,char *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar2 = DAT_010181e0;
  local_18 = DAT_010181d8;
  uStack_14 = DAT_010181dc;
  local_1c = DAT_010181e0;
  uVar5 = 0;
  if (*param_2 == '\x01') {
    cVar1 = param_2[2];
    if (param_1 == 0) {
      if (cVar1 == '\0' || cVar1 == '\x02') {
LAB_01017e36:
        cVar1 = param_2[1];
        if (cVar1 == '\x04' || cVar1 == '\x05') {
          uVar4 = 0x20;
        }
        else {
          if (cVar1 != '\x06') goto LAB_01017e84;
          uVar4 = 0x40;
        }
        *param_3 = (char)(uVar4 / *(byte *)((int)&local_1c + (uint)(byte)param_2[2]));
        goto LAB_01017e88;
      }
    }
    else if ((cVar1 == '\0') && ((byte)param_2[1] < 3)) {
      uVar3 = *(undefined1 *)((int)&local_18 + (uint)(byte)param_2[1]);
LAB_01017e6c:
      *param_3 = uVar3;
      goto LAB_01017e88;
    }
  }
  else {
    if (*param_2 != '\x02') goto LAB_01017e88;
    if ((byte)param_2[2] < 2) {
      if (param_2[1] == '\x03') {
        uVar3 = (undefined1)(0x18 / *(byte *)((int)&local_1c + (uint)(byte)param_2[2]));
        goto LAB_01017e6c;
      }
      goto LAB_01017e36;
    }
  }
LAB_01017e84:
  uVar5 = 0xc301;
LAB_01017e88:
  return CONCAT44(uVar2,uVar5);
}

