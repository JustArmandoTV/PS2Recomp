#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022DA30
// Address: 0x22da30 - 0x22de20
void sub_0022DA30_0x22da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DA30_0x22da30");
#endif

    switch (ctx->pc) {
        case 0x22da30u: goto label_22da30;
        case 0x22da34u: goto label_22da34;
        case 0x22da38u: goto label_22da38;
        case 0x22da3cu: goto label_22da3c;
        case 0x22da40u: goto label_22da40;
        case 0x22da44u: goto label_22da44;
        case 0x22da48u: goto label_22da48;
        case 0x22da4cu: goto label_22da4c;
        case 0x22da50u: goto label_22da50;
        case 0x22da54u: goto label_22da54;
        case 0x22da58u: goto label_22da58;
        case 0x22da5cu: goto label_22da5c;
        case 0x22da60u: goto label_22da60;
        case 0x22da64u: goto label_22da64;
        case 0x22da68u: goto label_22da68;
        case 0x22da6cu: goto label_22da6c;
        case 0x22da70u: goto label_22da70;
        case 0x22da74u: goto label_22da74;
        case 0x22da78u: goto label_22da78;
        case 0x22da7cu: goto label_22da7c;
        case 0x22da80u: goto label_22da80;
        case 0x22da84u: goto label_22da84;
        case 0x22da88u: goto label_22da88;
        case 0x22da8cu: goto label_22da8c;
        case 0x22da90u: goto label_22da90;
        case 0x22da94u: goto label_22da94;
        case 0x22da98u: goto label_22da98;
        case 0x22da9cu: goto label_22da9c;
        case 0x22daa0u: goto label_22daa0;
        case 0x22daa4u: goto label_22daa4;
        case 0x22daa8u: goto label_22daa8;
        case 0x22daacu: goto label_22daac;
        case 0x22dab0u: goto label_22dab0;
        case 0x22dab4u: goto label_22dab4;
        case 0x22dab8u: goto label_22dab8;
        case 0x22dabcu: goto label_22dabc;
        case 0x22dac0u: goto label_22dac0;
        case 0x22dac4u: goto label_22dac4;
        case 0x22dac8u: goto label_22dac8;
        case 0x22daccu: goto label_22dacc;
        case 0x22dad0u: goto label_22dad0;
        case 0x22dad4u: goto label_22dad4;
        case 0x22dad8u: goto label_22dad8;
        case 0x22dadcu: goto label_22dadc;
        case 0x22dae0u: goto label_22dae0;
        case 0x22dae4u: goto label_22dae4;
        case 0x22dae8u: goto label_22dae8;
        case 0x22daecu: goto label_22daec;
        case 0x22daf0u: goto label_22daf0;
        case 0x22daf4u: goto label_22daf4;
        case 0x22daf8u: goto label_22daf8;
        case 0x22dafcu: goto label_22dafc;
        case 0x22db00u: goto label_22db00;
        case 0x22db04u: goto label_22db04;
        case 0x22db08u: goto label_22db08;
        case 0x22db0cu: goto label_22db0c;
        case 0x22db10u: goto label_22db10;
        case 0x22db14u: goto label_22db14;
        case 0x22db18u: goto label_22db18;
        case 0x22db1cu: goto label_22db1c;
        case 0x22db20u: goto label_22db20;
        case 0x22db24u: goto label_22db24;
        case 0x22db28u: goto label_22db28;
        case 0x22db2cu: goto label_22db2c;
        case 0x22db30u: goto label_22db30;
        case 0x22db34u: goto label_22db34;
        case 0x22db38u: goto label_22db38;
        case 0x22db3cu: goto label_22db3c;
        case 0x22db40u: goto label_22db40;
        case 0x22db44u: goto label_22db44;
        case 0x22db48u: goto label_22db48;
        case 0x22db4cu: goto label_22db4c;
        case 0x22db50u: goto label_22db50;
        case 0x22db54u: goto label_22db54;
        case 0x22db58u: goto label_22db58;
        case 0x22db5cu: goto label_22db5c;
        case 0x22db60u: goto label_22db60;
        case 0x22db64u: goto label_22db64;
        case 0x22db68u: goto label_22db68;
        case 0x22db6cu: goto label_22db6c;
        case 0x22db70u: goto label_22db70;
        case 0x22db74u: goto label_22db74;
        case 0x22db78u: goto label_22db78;
        case 0x22db7cu: goto label_22db7c;
        case 0x22db80u: goto label_22db80;
        case 0x22db84u: goto label_22db84;
        case 0x22db88u: goto label_22db88;
        case 0x22db8cu: goto label_22db8c;
        case 0x22db90u: goto label_22db90;
        case 0x22db94u: goto label_22db94;
        case 0x22db98u: goto label_22db98;
        case 0x22db9cu: goto label_22db9c;
        case 0x22dba0u: goto label_22dba0;
        case 0x22dba4u: goto label_22dba4;
        case 0x22dba8u: goto label_22dba8;
        case 0x22dbacu: goto label_22dbac;
        case 0x22dbb0u: goto label_22dbb0;
        case 0x22dbb4u: goto label_22dbb4;
        case 0x22dbb8u: goto label_22dbb8;
        case 0x22dbbcu: goto label_22dbbc;
        case 0x22dbc0u: goto label_22dbc0;
        case 0x22dbc4u: goto label_22dbc4;
        case 0x22dbc8u: goto label_22dbc8;
        case 0x22dbccu: goto label_22dbcc;
        case 0x22dbd0u: goto label_22dbd0;
        case 0x22dbd4u: goto label_22dbd4;
        case 0x22dbd8u: goto label_22dbd8;
        case 0x22dbdcu: goto label_22dbdc;
        case 0x22dbe0u: goto label_22dbe0;
        case 0x22dbe4u: goto label_22dbe4;
        case 0x22dbe8u: goto label_22dbe8;
        case 0x22dbecu: goto label_22dbec;
        case 0x22dbf0u: goto label_22dbf0;
        case 0x22dbf4u: goto label_22dbf4;
        case 0x22dbf8u: goto label_22dbf8;
        case 0x22dbfcu: goto label_22dbfc;
        case 0x22dc00u: goto label_22dc00;
        case 0x22dc04u: goto label_22dc04;
        case 0x22dc08u: goto label_22dc08;
        case 0x22dc0cu: goto label_22dc0c;
        case 0x22dc10u: goto label_22dc10;
        case 0x22dc14u: goto label_22dc14;
        case 0x22dc18u: goto label_22dc18;
        case 0x22dc1cu: goto label_22dc1c;
        case 0x22dc20u: goto label_22dc20;
        case 0x22dc24u: goto label_22dc24;
        case 0x22dc28u: goto label_22dc28;
        case 0x22dc2cu: goto label_22dc2c;
        case 0x22dc30u: goto label_22dc30;
        case 0x22dc34u: goto label_22dc34;
        case 0x22dc38u: goto label_22dc38;
        case 0x22dc3cu: goto label_22dc3c;
        case 0x22dc40u: goto label_22dc40;
        case 0x22dc44u: goto label_22dc44;
        case 0x22dc48u: goto label_22dc48;
        case 0x22dc4cu: goto label_22dc4c;
        case 0x22dc50u: goto label_22dc50;
        case 0x22dc54u: goto label_22dc54;
        case 0x22dc58u: goto label_22dc58;
        case 0x22dc5cu: goto label_22dc5c;
        case 0x22dc60u: goto label_22dc60;
        case 0x22dc64u: goto label_22dc64;
        case 0x22dc68u: goto label_22dc68;
        case 0x22dc6cu: goto label_22dc6c;
        case 0x22dc70u: goto label_22dc70;
        case 0x22dc74u: goto label_22dc74;
        case 0x22dc78u: goto label_22dc78;
        case 0x22dc7cu: goto label_22dc7c;
        case 0x22dc80u: goto label_22dc80;
        case 0x22dc84u: goto label_22dc84;
        case 0x22dc88u: goto label_22dc88;
        case 0x22dc8cu: goto label_22dc8c;
        case 0x22dc90u: goto label_22dc90;
        case 0x22dc94u: goto label_22dc94;
        case 0x22dc98u: goto label_22dc98;
        case 0x22dc9cu: goto label_22dc9c;
        case 0x22dca0u: goto label_22dca0;
        case 0x22dca4u: goto label_22dca4;
        case 0x22dca8u: goto label_22dca8;
        case 0x22dcacu: goto label_22dcac;
        case 0x22dcb0u: goto label_22dcb0;
        case 0x22dcb4u: goto label_22dcb4;
        case 0x22dcb8u: goto label_22dcb8;
        case 0x22dcbcu: goto label_22dcbc;
        case 0x22dcc0u: goto label_22dcc0;
        case 0x22dcc4u: goto label_22dcc4;
        case 0x22dcc8u: goto label_22dcc8;
        case 0x22dcccu: goto label_22dccc;
        case 0x22dcd0u: goto label_22dcd0;
        case 0x22dcd4u: goto label_22dcd4;
        case 0x22dcd8u: goto label_22dcd8;
        case 0x22dcdcu: goto label_22dcdc;
        case 0x22dce0u: goto label_22dce0;
        case 0x22dce4u: goto label_22dce4;
        case 0x22dce8u: goto label_22dce8;
        case 0x22dcecu: goto label_22dcec;
        case 0x22dcf0u: goto label_22dcf0;
        case 0x22dcf4u: goto label_22dcf4;
        case 0x22dcf8u: goto label_22dcf8;
        case 0x22dcfcu: goto label_22dcfc;
        case 0x22dd00u: goto label_22dd00;
        case 0x22dd04u: goto label_22dd04;
        case 0x22dd08u: goto label_22dd08;
        case 0x22dd0cu: goto label_22dd0c;
        case 0x22dd10u: goto label_22dd10;
        case 0x22dd14u: goto label_22dd14;
        case 0x22dd18u: goto label_22dd18;
        case 0x22dd1cu: goto label_22dd1c;
        case 0x22dd20u: goto label_22dd20;
        case 0x22dd24u: goto label_22dd24;
        case 0x22dd28u: goto label_22dd28;
        case 0x22dd2cu: goto label_22dd2c;
        case 0x22dd30u: goto label_22dd30;
        case 0x22dd34u: goto label_22dd34;
        case 0x22dd38u: goto label_22dd38;
        case 0x22dd3cu: goto label_22dd3c;
        case 0x22dd40u: goto label_22dd40;
        case 0x22dd44u: goto label_22dd44;
        case 0x22dd48u: goto label_22dd48;
        case 0x22dd4cu: goto label_22dd4c;
        case 0x22dd50u: goto label_22dd50;
        case 0x22dd54u: goto label_22dd54;
        case 0x22dd58u: goto label_22dd58;
        case 0x22dd5cu: goto label_22dd5c;
        case 0x22dd60u: goto label_22dd60;
        case 0x22dd64u: goto label_22dd64;
        case 0x22dd68u: goto label_22dd68;
        case 0x22dd6cu: goto label_22dd6c;
        case 0x22dd70u: goto label_22dd70;
        case 0x22dd74u: goto label_22dd74;
        case 0x22dd78u: goto label_22dd78;
        case 0x22dd7cu: goto label_22dd7c;
        case 0x22dd80u: goto label_22dd80;
        case 0x22dd84u: goto label_22dd84;
        case 0x22dd88u: goto label_22dd88;
        case 0x22dd8cu: goto label_22dd8c;
        case 0x22dd90u: goto label_22dd90;
        case 0x22dd94u: goto label_22dd94;
        case 0x22dd98u: goto label_22dd98;
        case 0x22dd9cu: goto label_22dd9c;
        case 0x22dda0u: goto label_22dda0;
        case 0x22dda4u: goto label_22dda4;
        case 0x22dda8u: goto label_22dda8;
        case 0x22ddacu: goto label_22ddac;
        case 0x22ddb0u: goto label_22ddb0;
        case 0x22ddb4u: goto label_22ddb4;
        case 0x22ddb8u: goto label_22ddb8;
        case 0x22ddbcu: goto label_22ddbc;
        case 0x22ddc0u: goto label_22ddc0;
        case 0x22ddc4u: goto label_22ddc4;
        case 0x22ddc8u: goto label_22ddc8;
        case 0x22ddccu: goto label_22ddcc;
        case 0x22ddd0u: goto label_22ddd0;
        case 0x22ddd4u: goto label_22ddd4;
        case 0x22ddd8u: goto label_22ddd8;
        case 0x22dddcu: goto label_22dddc;
        case 0x22dde0u: goto label_22dde0;
        case 0x22dde4u: goto label_22dde4;
        case 0x22dde8u: goto label_22dde8;
        case 0x22ddecu: goto label_22ddec;
        case 0x22ddf0u: goto label_22ddf0;
        case 0x22ddf4u: goto label_22ddf4;
        case 0x22ddf8u: goto label_22ddf8;
        case 0x22ddfcu: goto label_22ddfc;
        case 0x22de00u: goto label_22de00;
        case 0x22de04u: goto label_22de04;
        case 0x22de08u: goto label_22de08;
        case 0x22de0cu: goto label_22de0c;
        case 0x22de10u: goto label_22de10;
        case 0x22de14u: goto label_22de14;
        case 0x22de18u: goto label_22de18;
        case 0x22de1cu: goto label_22de1c;
        default: break;
    }

    ctx->pc = 0x22da30u;

label_22da30:
    // 0x22da30: 0x8c890050  lw          $t1, 0x50($a0)
    ctx->pc = 0x22da30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_22da34:
    // 0x22da34: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x22da34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_22da38:
    // 0x22da38: 0x94a8006c  lhu         $t0, 0x6C($a1)
    ctx->pc = 0x22da38u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 108)));
label_22da3c:
    // 0x22da3c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x22da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_22da40:
    // 0x22da40: 0x8c8a004c  lw          $t2, 0x4C($a0)
    ctx->pc = 0x22da40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_22da44:
    // 0x22da44: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x22da44u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_22da48:
    // 0x22da48: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x22da48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_22da4c:
    // 0x22da4c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x22da4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_22da50:
    // 0x22da50: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x22da50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_22da54:
    // 0x22da54: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x22da54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_22da58:
    // 0x22da58: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x22da58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_22da5c:
    // 0x22da5c: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x22da5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_22da60:
    // 0x22da60: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x22da60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
label_22da64:
    // 0x22da64: 0x94aa006c  lhu         $t2, 0x6C($a1)
    ctx->pc = 0x22da64u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 108)));
label_22da68:
    // 0x22da68: 0x8c88004c  lw          $t0, 0x4C($a0)
    ctx->pc = 0x22da68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_22da6c:
    // 0x22da6c: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x22da6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_22da70:
    // 0x22da70: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x22da70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_22da74:
    // 0x22da74: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x22da74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_22da78:
    // 0x22da78: 0xa50a006c  sh          $t2, 0x6C($t0)
    ctx->pc = 0x22da78u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 108), (uint16_t)GPR_U32(ctx, 10));
label_22da7c:
    // 0x22da7c: 0x8c880050  lw          $t0, 0x50($a0)
    ctx->pc = 0x22da7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_22da80:
    // 0x22da80: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x22da80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_22da84:
    // 0x22da84: 0xac880050  sw          $t0, 0x50($a0)
    ctx->pc = 0x22da84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 8));
label_22da88:
    // 0x22da88: 0xaca00094  sw          $zero, 0x94($a1)
    ctx->pc = 0x22da88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 0));
label_22da8c:
    // 0x22da8c: 0xa4a7006c  sh          $a3, 0x6C($a1)
    ctx->pc = 0x22da8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 108), (uint16_t)GPR_U32(ctx, 7));
label_22da90:
    // 0x22da90: 0x90850027  lbu         $a1, 0x27($a0)
    ctx->pc = 0x22da90u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
label_22da94:
    // 0x22da94: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x22da94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_22da98:
    // 0x22da98: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x22da98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_22da9c:
    // 0x22da9c: 0x3e00008  jr          $ra
label_22daa0:
    if (ctx->pc == 0x22DAA0u) {
        ctx->pc = 0x22DAA0u;
            // 0x22daa0: 0xa0830027  sb          $v1, 0x27($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22DAA4u;
        goto label_22daa4;
    }
    ctx->pc = 0x22DA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DA9Cu;
            // 0x22daa0: 0xa0830027  sb          $v1, 0x27($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22DAA4u;
label_22daa4:
    // 0x22daa4: 0x0  nop
    ctx->pc = 0x22daa4u;
    // NOP
label_22daa8:
    // 0x22daa8: 0x0  nop
    ctx->pc = 0x22daa8u;
    // NOP
label_22daac:
    // 0x22daac: 0x0  nop
    ctx->pc = 0x22daacu;
    // NOP
label_22dab0:
    // 0x22dab0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22dab4:
    // 0x22dab4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22dab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22dab8:
    // 0x22dab8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_22dabc:
    // 0x22dabc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22dabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_22dac0:
    // 0x22dac0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22dac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22dac4:
    // 0x22dac4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22dac8:
    // 0x22dac8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22dac8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22dacc:
    // 0x22dacc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22daccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22dad0:
    // 0x22dad0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22dad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22dad4:
    // 0x22dad4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22dad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22dad8:
    // 0x22dad8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22dad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22dadc:
    // 0x22dadc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22dadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22dae0:
    // 0x22dae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22dae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22dae4:
    // 0x22dae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22dae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22dae8:
    // 0x22dae8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22dae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22daec:
    // 0x22daec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x22daecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_22daf0:
    // 0x22daf0: 0x320f809  jalr        $t9
label_22daf4:
    if (ctx->pc == 0x22DAF4u) {
        ctx->pc = 0x22DAF4u;
            // 0x22daf4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DAF8u;
        goto label_22daf8;
    }
    ctx->pc = 0x22DAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DAF8u);
        ctx->pc = 0x22DAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DAF0u;
            // 0x22daf4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DAF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DAF8u; }
            if (ctx->pc != 0x22DAF8u) { return; }
        }
        }
    }
    ctx->pc = 0x22DAF8u;
label_22daf8:
    // 0x22daf8: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x22daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_22dafc:
    // 0x22dafc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22db00:
    // 0x22db00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22db00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22db04:
    // 0x22db04: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_22db08:
    if (ctx->pc == 0x22DB08u) {
        ctx->pc = 0x22DB08u;
            // 0x22db08: 0x8ea20050  lw          $v0, 0x50($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->pc = 0x22DB0Cu;
        goto label_22db0c;
    }
    ctx->pc = 0x22DB04u;
    {
        const bool branch_taken_0x22db04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22db04) {
            ctx->pc = 0x22DB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB04u;
            // 0x22db08: 0x8ea20050  lw          $v0, 0x50($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22DB44u;
            goto label_22db44;
        }
    }
    ctx->pc = 0x22DB0Cu;
label_22db0c:
    // 0x22db0c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22db0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22db10:
    // 0x22db10: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22db10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22db14:
    // 0x22db14: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x22db14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_22db18:
    // 0x22db18: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22db18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22db1c:
    // 0x22db1c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22db20:
    // 0x22db20: 0x8ea7004c  lw          $a3, 0x4C($s5)
    ctx->pc = 0x22db20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_22db24:
    // 0x22db24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22db24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22db28:
    // 0x22db28: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x22db28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22db2c:
    // 0x22db2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22db2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22db30:
    // 0x22db30: 0x24a5c768  addiu       $a1, $a1, -0x3898
    ctx->pc = 0x22db30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952808));
label_22db34:
    // 0x22db34: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22db34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22db38:
    // 0x22db38: 0x320f809  jalr        $t9
label_22db3c:
    if (ctx->pc == 0x22DB3Cu) {
        ctx->pc = 0x22DB3Cu;
            // 0x22db3c: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x22DB40u;
        goto label_22db40;
    }
    ctx->pc = 0x22DB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DB40u);
        ctx->pc = 0x22DB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB38u;
            // 0x22db3c: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DB40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DB40u; }
            if (ctx->pc != 0x22DB40u) { return; }
        }
        }
    }
    ctx->pc = 0x22DB40u;
label_22db40:
    // 0x22db40: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x22db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_22db44:
    // 0x22db44: 0x18400072  blez        $v0, . + 4 + (0x72 << 2)
label_22db48:
    if (ctx->pc == 0x22DB48u) {
        ctx->pc = 0x22DB48u;
            // 0x22db48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DB4Cu;
        goto label_22db4c;
    }
    ctx->pc = 0x22DB44u;
    {
        const bool branch_taken_0x22db44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22DB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB44u;
            // 0x22db48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db44) {
            ctx->pc = 0x22DD10u;
            goto label_22dd10;
        }
    }
    ctx->pc = 0x22DB4Cu;
label_22db4c:
    // 0x22db4c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x22db4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22db50:
    // 0x22db50: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x22db50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_22db54:
    // 0x22db54: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22db54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22db58:
    // 0x22db58: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22db58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22db5c:
    // 0x22db5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22db5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22db60:
    // 0x22db60: 0x24a5c778  addiu       $a1, $a1, -0x3888
    ctx->pc = 0x22db60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952824));
label_22db64:
    // 0x22db64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22db64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22db68:
    // 0x22db68: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x22db68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_22db6c:
    // 0x22db6c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22db6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22db70:
    // 0x22db70: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x22db70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_22db74:
    // 0x22db74: 0x320f809  jalr        $t9
label_22db78:
    if (ctx->pc == 0x22DB78u) {
        ctx->pc = 0x22DB78u;
            // 0x22db78: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DB7Cu;
        goto label_22db7c;
    }
    ctx->pc = 0x22DB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DB7Cu);
        ctx->pc = 0x22DB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB74u;
            // 0x22db78: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DB7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DB7Cu; }
            if (ctx->pc != 0x22DB7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22DB7Cu;
label_22db7c:
    // 0x22db7c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22db7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22db80:
    // 0x22db80: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22db80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22db84:
    // 0x22db84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22db84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22db88:
    // 0x22db88: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x22db88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_22db8c:
    // 0x22db8c: 0x320f809  jalr        $t9
label_22db90:
    if (ctx->pc == 0x22DB90u) {
        ctx->pc = 0x22DB90u;
            // 0x22db90: 0x24a5c780  addiu       $a1, $a1, -0x3880 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952832));
        ctx->pc = 0x22DB94u;
        goto label_22db94;
    }
    ctx->pc = 0x22DB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DB94u);
        ctx->pc = 0x22DB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DB8Cu;
            // 0x22db90: 0x24a5c780  addiu       $a1, $a1, -0x3880 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952832));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DB94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DB94u; }
            if (ctx->pc != 0x22DB94u) { return; }
        }
        }
    }
    ctx->pc = 0x22DB94u;
label_22db94:
    // 0x22db94: 0x96030076  lhu         $v1, 0x76($s0)
    ctx->pc = 0x22db94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
label_22db98:
    // 0x22db98: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x22db98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_22db9c:
    // 0x22db9c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_22dba0:
    if (ctx->pc == 0x22DBA0u) {
        ctx->pc = 0x22DBA4u;
        goto label_22dba4;
    }
    ctx->pc = 0x22DB9Cu;
    {
        const bool branch_taken_0x22db9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22db9c) {
            ctx->pc = 0x22DBE8u;
            goto label_22dbe8;
        }
    }
    ctx->pc = 0x22DBA4u;
label_22dba4:
    // 0x22dba4: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x22dba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_22dba8:
    // 0x22dba8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22dba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22dbac:
    // 0x22dbac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22dbb0:
    // 0x22dbb0: 0x96060074  lhu         $a2, 0x74($s0)
    ctx->pc = 0x22dbb0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
label_22dbb4:
    // 0x22dbb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22dbb8:
    // 0x22dbb8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22dbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22dbbc:
    // 0x22dbbc: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x22dbbcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22dbc0:
    // 0x22dbc0: 0x8e070070  lw          $a3, 0x70($s0)
    ctx->pc = 0x22dbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_22dbc4:
    // 0x22dbc4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x22dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_22dbc8:
    // 0x22dbc8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22dbc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22dbcc:
    // 0x22dbcc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22dbd0:
    // 0x22dbd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22dbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22dbd4:
    // 0x22dbd4: 0x24a5c790  addiu       $a1, $a1, -0x3870
    ctx->pc = 0x22dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952848));
label_22dbd8:
    // 0x22dbd8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22dbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22dbdc:
    // 0x22dbdc: 0x320f809  jalr        $t9
label_22dbe0:
    if (ctx->pc == 0x22DBE0u) {
        ctx->pc = 0x22DBE0u;
            // 0x22dbe0: 0x24080  sll         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22DBE4u;
        goto label_22dbe4;
    }
    ctx->pc = 0x22DBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DBE4u);
        ctx->pc = 0x22DBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DBDCu;
            // 0x22dbe0: 0x24080  sll         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DBE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DBE4u; }
            if (ctx->pc != 0x22DBE4u) { return; }
        }
        }
    }
    ctx->pc = 0x22DBE4u;
label_22dbe4:
    // 0x22dbe4: 0x0  nop
    ctx->pc = 0x22dbe4u;
    // NOP
label_22dbe8:
    // 0x22dbe8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x22dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22dbec:
    // 0x22dbec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22dbf0:
    // 0x22dbf0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22dbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22dbf4:
    // 0x22dbf4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_22dbf8:
    if (ctx->pc == 0x22DBF8u) {
        ctx->pc = 0x22DBFCu;
        goto label_22dbfc;
    }
    ctx->pc = 0x22DBF4u;
    {
        const bool branch_taken_0x22dbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dbf4) {
            ctx->pc = 0x22DC30u;
            goto label_22dc30;
        }
    }
    ctx->pc = 0x22DBFCu;
label_22dbfc:
    // 0x22dbfc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22dbfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22dc00:
    // 0x22dc00: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22dc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22dc04:
    // 0x22dc04: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x22dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22dc08:
    // 0x22dc08: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22dc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22dc0c:
    // 0x22dc0c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22dc10:
    // 0x22dc10: 0x8e070078  lw          $a3, 0x78($s0)
    ctx->pc = 0x22dc10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_22dc14:
    // 0x22dc14: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22dc14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22dc18:
    // 0x22dc18: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x22dc18u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22dc1c:
    // 0x22dc1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22dc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22dc20:
    // 0x22dc20: 0x24a5c7a0  addiu       $a1, $a1, -0x3860
    ctx->pc = 0x22dc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952864));
label_22dc24:
    // 0x22dc24: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22dc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22dc28:
    // 0x22dc28: 0x320f809  jalr        $t9
label_22dc2c:
    if (ctx->pc == 0x22DC2Cu) {
        ctx->pc = 0x22DC2Cu;
            // 0x22dc2c: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x22DC30u;
        goto label_22dc30;
    }
    ctx->pc = 0x22DC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DC30u);
        ctx->pc = 0x22DC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC28u;
            // 0x22dc2c: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DC30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DC30u; }
            if (ctx->pc != 0x22DC30u) { return; }
        }
        }
    }
    ctx->pc = 0x22DC30u;
label_22dc30:
    // 0x22dc30: 0x96020074  lhu         $v0, 0x74($s0)
    ctx->pc = 0x22dc30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
label_22dc34:
    // 0x22dc34: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_22dc38:
    if (ctx->pc == 0x22DC38u) {
        ctx->pc = 0x22DC38u;
            // 0x22dc38: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DC3Cu;
        goto label_22dc3c;
    }
    ctx->pc = 0x22DC34u;
    {
        const bool branch_taken_0x22dc34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22DC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC34u;
            // 0x22dc38: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc34) {
            ctx->pc = 0x22DCA8u;
            goto label_22dca8;
        }
    }
    ctx->pc = 0x22DC3Cu;
label_22dc3c:
    // 0x22dc3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22dc3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22dc40:
    // 0x22dc40: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x22dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_22dc44:
    // 0x22dc44: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22dc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22dc48:
    // 0x22dc48: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22dc4c:
    // 0x22dc4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22dc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22dc50:
    // 0x22dc50: 0x24a5c7b0  addiu       $a1, $a1, -0x3850
    ctx->pc = 0x22dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952880));
label_22dc54:
    // 0x22dc54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_22dc58:
    // 0x22dc58: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x22dc58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dc5c:
    // 0x22dc5c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x22dc5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_22dc60:
    // 0x22dc60: 0x320f809  jalr        $t9
label_22dc64:
    if (ctx->pc == 0x22DC64u) {
        ctx->pc = 0x22DC64u;
            // 0x22dc64: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x22DC68u;
        goto label_22dc68;
    }
    ctx->pc = 0x22DC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DC68u);
        ctx->pc = 0x22DC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC60u;
            // 0x22dc64: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DC68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DC68u; }
            if (ctx->pc != 0x22DC68u) { return; }
        }
        }
    }
    ctx->pc = 0x22DC68u;
label_22dc68:
    // 0x22dc68: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x22dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_22dc6c:
    // 0x22dc6c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22dc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22dc70:
    // 0x22dc70: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22dc70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22dc74:
    // 0x22dc74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22dc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22dc78:
    // 0x22dc78: 0x24a5c7c0  addiu       $a1, $a1, -0x3840
    ctx->pc = 0x22dc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952896));
label_22dc7c:
    // 0x22dc7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_22dc80:
    // 0x22dc80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dc84:
    // 0x22dc84: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x22dc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_22dc88:
    // 0x22dc88: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x22dc88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22dc8c:
    // 0x22dc8c: 0x320f809  jalr        $t9
label_22dc90:
    if (ctx->pc == 0x22DC90u) {
        ctx->pc = 0x22DC90u;
            // 0x22dc90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22DC94u;
        goto label_22dc94;
    }
    ctx->pc = 0x22DC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DC94u);
        ctx->pc = 0x22DC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC8Cu;
            // 0x22dc90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DC94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DC94u; }
            if (ctx->pc != 0x22DC94u) { return; }
        }
        }
    }
    ctx->pc = 0x22DC94u;
label_22dc94:
    // 0x22dc94: 0x96020074  lhu         $v0, 0x74($s0)
    ctx->pc = 0x22dc94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
label_22dc98:
    // 0x22dc98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22dc98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22dc9c:
    // 0x22dc9c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x22dc9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22dca0:
    // 0x22dca0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_22dca4:
    if (ctx->pc == 0x22DCA4u) {
        ctx->pc = 0x22DCA4u;
            // 0x22dca4: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->pc = 0x22DCA8u;
        goto label_22dca8;
    }
    ctx->pc = 0x22DCA0u;
    {
        const bool branch_taken_0x22dca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DCA0u;
            // 0x22dca4: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dca0) {
            ctx->pc = 0x22DC40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22dc40;
        }
    }
    ctx->pc = 0x22DCA8u;
label_22dca8:
    // 0x22dca8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x22dca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_22dcac:
    // 0x22dcac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22dcb0:
    // 0x22dcb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22dcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22dcb4:
    // 0x22dcb4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_22dcb8:
    if (ctx->pc == 0x22DCB8u) {
        ctx->pc = 0x22DCBCu;
        goto label_22dcbc;
    }
    ctx->pc = 0x22DCB4u;
    {
        const bool branch_taken_0x22dcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dcb4) {
            ctx->pc = 0x22DCE8u;
            goto label_22dce8;
        }
    }
    ctx->pc = 0x22DCBCu;
label_22dcbc:
    // 0x22dcbc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22dcbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22dcc0:
    // 0x22dcc0: 0x348bc  dsll32      $t1, $v1, 2
    ctx->pc = 0x22dcc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 2));
label_22dcc4:
    // 0x22dcc4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22dcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22dcc8:
    // 0x22dcc8: 0x8e070084  lw          $a3, 0x84($s0)
    ctx->pc = 0x22dcc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22dccc:
    // 0x22dccc: 0x8e080088  lw          $t0, 0x88($s0)
    ctx->pc = 0x22dcccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_22dcd0:
    // 0x22dcd0: 0x948be  dsrl32      $t1, $t1, 2
    ctx->pc = 0x22dcd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 2));
label_22dcd4:
    // 0x22dcd4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22dcd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22dcd8:
    // 0x22dcd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22dcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22dcdc:
    // 0x22dcdc: 0x24a5c7c8  addiu       $a1, $a1, -0x3838
    ctx->pc = 0x22dcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952904));
label_22dce0:
    // 0x22dce0: 0x320f809  jalr        $t9
label_22dce4:
    if (ctx->pc == 0x22DCE4u) {
        ctx->pc = 0x22DCE4u;
            // 0x22dce4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22DCE8u;
        goto label_22dce8;
    }
    ctx->pc = 0x22DCE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DCE8u);
        ctx->pc = 0x22DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DCE0u;
            // 0x22dce4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DCE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DCE8u; }
            if (ctx->pc != 0x22DCE8u) { return; }
        }
        }
    }
    ctx->pc = 0x22DCE8u;
label_22dce8:
    // 0x22dce8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22dce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22dcec:
    // 0x22dcec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x22dcecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_22dcf0:
    // 0x22dcf0: 0x320f809  jalr        $t9
label_22dcf4:
    if (ctx->pc == 0x22DCF4u) {
        ctx->pc = 0x22DCF4u;
            // 0x22dcf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DCF8u;
        goto label_22dcf8;
    }
    ctx->pc = 0x22DCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DCF8u);
        ctx->pc = 0x22DCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DCF0u;
            // 0x22dcf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DCF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DCF8u; }
            if (ctx->pc != 0x22DCF8u) { return; }
        }
        }
    }
    ctx->pc = 0x22DCF8u;
label_22dcf8:
    // 0x22dcf8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x22dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_22dcfc:
    // 0x22dcfc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22dcfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_22dd00:
    // 0x22dd00: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x22dd00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22dd04:
    // 0x22dd04: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
label_22dd08:
    if (ctx->pc == 0x22DD08u) {
        ctx->pc = 0x22DD08u;
            // 0x22dd08: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x22DD0Cu;
        goto label_22dd0c;
    }
    ctx->pc = 0x22DD04u;
    {
        const bool branch_taken_0x22dd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD04u;
            // 0x22dd08: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd04) {
            ctx->pc = 0x22DB50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22db50;
        }
    }
    ctx->pc = 0x22DD0Cu;
label_22dd0c:
    // 0x22dd0c: 0x0  nop
    ctx->pc = 0x22dd0cu;
    // NOP
label_22dd10:
    // 0x22dd10: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x22dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_22dd14:
    // 0x22dd14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22dd18:
    // 0x22dd18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22dd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22dd1c:
    // 0x22dd1c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_22dd20:
    if (ctx->pc == 0x22DD20u) {
        ctx->pc = 0x22DD20u;
            // 0x22dd20: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->pc = 0x22DD24u;
        goto label_22dd24;
    }
    ctx->pc = 0x22DD1Cu;
    {
        const bool branch_taken_0x22dd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dd1c) {
            ctx->pc = 0x22DD20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD1Cu;
            // 0x22dd20: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22DD5Cu;
            goto label_22dd5c;
        }
    }
    ctx->pc = 0x22DD24u;
label_22dd24:
    // 0x22dd24: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22dd24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22dd28:
    // 0x22dd28: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22dd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22dd2c:
    // 0x22dd2c: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x22dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_22dd30:
    // 0x22dd30: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22dd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22dd34:
    // 0x22dd34: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22dd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22dd38:
    // 0x22dd38: 0x8ea7003c  lw          $a3, 0x3C($s5)
    ctx->pc = 0x22dd38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_22dd3c:
    // 0x22dd3c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22dd3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22dd40:
    // 0x22dd40: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x22dd40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22dd44:
    // 0x22dd44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22dd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22dd48:
    // 0x22dd48: 0x24a5c7d0  addiu       $a1, $a1, -0x3830
    ctx->pc = 0x22dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952912));
label_22dd4c:
    // 0x22dd4c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22dd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22dd50:
    // 0x22dd50: 0x320f809  jalr        $t9
label_22dd54:
    if (ctx->pc == 0x22DD54u) {
        ctx->pc = 0x22DD54u;
            // 0x22dd54: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x22DD58u;
        goto label_22dd58;
    }
    ctx->pc = 0x22DD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DD58u);
        ctx->pc = 0x22DD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD50u;
            // 0x22dd54: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DD58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DD58u; }
            if (ctx->pc != 0x22DD58u) { return; }
        }
        }
    }
    ctx->pc = 0x22DD58u;
label_22dd58:
    // 0x22dd58: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x22dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_22dd5c:
    // 0x22dd5c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_22dd60:
    if (ctx->pc == 0x22DD60u) {
        ctx->pc = 0x22DD60u;
            // 0x22dd60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DD64u;
        goto label_22dd64;
    }
    ctx->pc = 0x22DD5Cu;
    {
        const bool branch_taken_0x22dd5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22DD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD5Cu;
            // 0x22dd60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd5c) {
            ctx->pc = 0x22DDA8u;
            goto label_22dda8;
        }
    }
    ctx->pc = 0x22DD64u;
label_22dd64:
    // 0x22dd64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22dd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22dd68:
    // 0x22dd68: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x22dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_22dd6c:
    // 0x22dd6c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22dd70:
    // 0x22dd70: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22dd70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22dd74:
    // 0x22dd74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22dd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22dd78:
    // 0x22dd78: 0x24a5c7e0  addiu       $a1, $a1, -0x3820
    ctx->pc = 0x22dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952928));
label_22dd7c:
    // 0x22dd7c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_22dd80:
    // 0x22dd80: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x22dd80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22dd84:
    // 0x22dd84: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x22dd84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_22dd88:
    // 0x22dd88: 0x320f809  jalr        $t9
label_22dd8c:
    if (ctx->pc == 0x22DD8Cu) {
        ctx->pc = 0x22DD8Cu;
            // 0x22dd8c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x22DD90u;
        goto label_22dd90;
    }
    ctx->pc = 0x22DD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DD90u);
        ctx->pc = 0x22DD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD88u;
            // 0x22dd8c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DD90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DD90u; }
            if (ctx->pc != 0x22DD90u) { return; }
        }
        }
    }
    ctx->pc = 0x22DD90u;
label_22dd90:
    // 0x22dd90: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x22dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_22dd94:
    // 0x22dd94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22dd94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22dd98:
    // 0x22dd98: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x22dd98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22dd9c:
    // 0x22dd9c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_22dda0:
    if (ctx->pc == 0x22DDA0u) {
        ctx->pc = 0x22DDA0u;
            // 0x22dda0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x22DDA4u;
        goto label_22dda4;
    }
    ctx->pc = 0x22DD9Cu;
    {
        const bool branch_taken_0x22dd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD9Cu;
            // 0x22dda0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd9c) {
            ctx->pc = 0x22DD68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22dd68;
        }
    }
    ctx->pc = 0x22DDA4u;
label_22dda4:
    // 0x22dda4: 0x0  nop
    ctx->pc = 0x22dda4u;
    // NOP
label_22dda8:
    // 0x22dda8: 0x26a4005c  addiu       $a0, $s5, 0x5C
    ctx->pc = 0x22dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
label_22ddac:
    // 0x22ddac: 0xc0921b8  jal         func_2486E0
label_22ddb0:
    if (ctx->pc == 0x22DDB0u) {
        ctx->pc = 0x22DDB0u;
            // 0x22ddb0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DDB4u;
        goto label_22ddb4;
    }
    ctx->pc = 0x22DDACu;
    SET_GPR_U32(ctx, 31, 0x22DDB4u);
    ctx->pc = 0x22DDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDACu;
            // 0x22ddb0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2486E0u;
    if (runtime->hasFunction(0x2486E0u)) {
        auto targetFn = runtime->lookupFunction(0x2486E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDB4u; }
        if (ctx->pc != 0x22DDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002486E0_0x2486e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDB4u; }
        if (ctx->pc != 0x22DDB4u) { return; }
    }
    ctx->pc = 0x22DDB4u;
label_22ddb4:
    // 0x22ddb4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22ddb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22ddb8:
    // 0x22ddb8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22ddbc:
    // 0x22ddbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22ddbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22ddc0:
    // 0x22ddc0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x22ddc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_22ddc4:
    // 0x22ddc4: 0x320f809  jalr        $t9
label_22ddc8:
    if (ctx->pc == 0x22DDC8u) {
        ctx->pc = 0x22DDC8u;
            // 0x22ddc8: 0x24a5c7e8  addiu       $a1, $a1, -0x3818 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952936));
        ctx->pc = 0x22DDCCu;
        goto label_22ddcc;
    }
    ctx->pc = 0x22DDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DDCCu);
        ctx->pc = 0x22DDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDC4u;
            // 0x22ddc8: 0x24a5c7e8  addiu       $a1, $a1, -0x3818 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952936));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DDCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DDCCu; }
            if (ctx->pc != 0x22DDCCu) { return; }
        }
        }
    }
    ctx->pc = 0x22DDCCu;
label_22ddcc:
    // 0x22ddcc: 0x26a4005c  addiu       $a0, $s5, 0x5C
    ctx->pc = 0x22ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
label_22ddd0:
    // 0x22ddd0: 0xc09214c  jal         func_248530
label_22ddd4:
    if (ctx->pc == 0x22DDD4u) {
        ctx->pc = 0x22DDD4u;
            // 0x22ddd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DDD8u;
        goto label_22ddd8;
    }
    ctx->pc = 0x22DDD0u;
    SET_GPR_U32(ctx, 31, 0x22DDD8u);
    ctx->pc = 0x22DDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDD0u;
            // 0x22ddd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x248530u;
    if (runtime->hasFunction(0x248530u)) {
        auto targetFn = runtime->lookupFunction(0x248530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDD8u; }
        if (ctx->pc != 0x22DDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00248530_0x248530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDD8u; }
        if (ctx->pc != 0x22DDD8u) { return; }
    }
    ctx->pc = 0x22DDD8u;
label_22ddd8:
    // 0x22ddd8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22ddd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22dddc:
    // 0x22dddc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x22dddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_22dde0:
    // 0x22dde0: 0x320f809  jalr        $t9
label_22dde4:
    if (ctx->pc == 0x22DDE4u) {
        ctx->pc = 0x22DDE4u;
            // 0x22dde4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DDE8u;
        goto label_22dde8;
    }
    ctx->pc = 0x22DDE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DDE8u);
        ctx->pc = 0x22DDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDE0u;
            // 0x22dde4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DDE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DDE8u; }
            if (ctx->pc != 0x22DDE8u) { return; }
        }
        }
    }
    ctx->pc = 0x22DDE8u;
label_22dde8:
    // 0x22dde8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x22dde8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22ddec:
    // 0x22ddec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22ddecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22ddf0:
    // 0x22ddf0: 0x320f809  jalr        $t9
label_22ddf4:
    if (ctx->pc == 0x22DDF4u) {
        ctx->pc = 0x22DDF4u;
            // 0x22ddf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DDF8u;
        goto label_22ddf8;
    }
    ctx->pc = 0x22DDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DDF8u);
        ctx->pc = 0x22DDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDF0u;
            // 0x22ddf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DDF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DDF8u; }
            if (ctx->pc != 0x22DDF8u) { return; }
        }
        }
    }
    ctx->pc = 0x22DDF8u;
label_22ddf8:
    // 0x22ddf8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22ddf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22ddfc:
    // 0x22ddfc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22ddfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22de00:
    // 0x22de00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22de00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22de04:
    // 0x22de04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22de04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22de08:
    // 0x22de08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22de08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22de0c:
    // 0x22de0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22de0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22de10:
    // 0x22de10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22de10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22de14:
    // 0x22de14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22de14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22de18:
    // 0x22de18: 0x3e00008  jr          $ra
label_22de1c:
    if (ctx->pc == 0x22DE1Cu) {
        ctx->pc = 0x22DE1Cu;
            // 0x22de1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x22DE20u;
        goto label_fallthrough_0x22de18;
    }
    ctx->pc = 0x22DE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE18u;
            // 0x22de1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x22de18:
    ctx->pc = 0x22DE20u;
}
