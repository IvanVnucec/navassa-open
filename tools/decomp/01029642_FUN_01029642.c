
void FUN_01029642(void)

{
  char cVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  
  puVar2 = DAT_01029948;
  uVar3 = 0;
  do {
    cVar1 = *(char *)(DAT_0102994c + uVar3 * 0x80 + 0x2d8);
    puVar4 = puVar2 + uVar3 * 5;
    if (cVar1 == '\0') {
      if (uVar3 == 0) {
        *puVar2 = 0x2cb0;
      }
      else {
        *puVar4 = 0xacb0;
      }
      puVar4[2] = 0xf42f;
      uVar5 = 0xf40f;
LAB_01029694:
      puVar4[3] = uVar5;
    }
    else if (cVar1 == '\x01' || cVar1 == '\x02') {
      if (uVar3 == 0) {
        *puVar2 = 0x2cb0;
      }
      else {
        *puVar4 = 0xacb0;
      }
      puVar4[2] = 61999;
      uVar5 = 0xf20f;
      goto LAB_01029694;
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return;
    }
  } while( true );
}

