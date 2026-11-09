
undefined8
FUN_0100827a(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_3 = 1;
  param_3[1] = (char)*param_1;
  param_3[2] = (char)param_1[1];
  uVar3 = param_1[2];
  *(undefined4 **)(param_3 + 8) = param_1;
  param_3[3] = (char)uVar3;
  uVar1 = param_1[3] & 0xffff;
  *(uint *)(param_3 + 4) = uVar1;
  iVar2 = uVar1 << 0x17;
  if (iVar2 < 0) {
    uVar3 = 0xc104;
  }
  else {
    iVar2 = uVar1 << 0x18;
    if (iVar2 < 0) {
      uVar3 = 0xc105;
    }
    else {
      iVar2 = uVar1 << 0x19;
      if (iVar2 < 0) {
        uVar3 = 0xc106;
      }
      else {
        iVar2 = uVar1 << 0x1a;
        if (iVar2 < 0) {
          uVar3 = 0xc107;
        }
        else {
          iVar2 = uVar1 << 0x1b;
          if (iVar2 < 0) {
            uVar3 = 0xc108;
          }
          else {
            iVar2 = uVar1 << 0x1c;
            if (iVar2 < 0) {
              uVar3 = 0xc109;
            }
            else {
              iVar2 = uVar1 << 0x1d;
              if (iVar2 < 0) {
                uVar3 = 0xc10a;
              }
              else {
                iVar2 = uVar1 << 0x1e;
                if (iVar2 < 0) {
                  uVar3 = 0xc10b;
                }
                else if ((int)(uVar1 << 0x1f) < 0) {
                  uVar3 = 0xc10c;
                }
                else {
                  uVar3 = 0xc10d;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_010027d8(param_2,0,iVar2,param_1 + 3);
  return CONCAT44(param_4,uVar3);
}

