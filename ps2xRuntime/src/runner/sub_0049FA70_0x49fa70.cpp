#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049FA70
// Address: 0x49fa70 - 0x49fe40
void sub_0049FA70_0x49fa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FA70_0x49fa70");
#endif

    switch (ctx->pc) {
        case 0x49fa70u: goto label_49fa70;
        case 0x49fa74u: goto label_49fa74;
        case 0x49fa78u: goto label_49fa78;
        case 0x49fa7cu: goto label_49fa7c;
        case 0x49fa80u: goto label_49fa80;
        case 0x49fa84u: goto label_49fa84;
        case 0x49fa88u: goto label_49fa88;
        case 0x49fa8cu: goto label_49fa8c;
        case 0x49fa90u: goto label_49fa90;
        case 0x49fa94u: goto label_49fa94;
        case 0x49fa98u: goto label_49fa98;
        case 0x49fa9cu: goto label_49fa9c;
        case 0x49faa0u: goto label_49faa0;
        case 0x49faa4u: goto label_49faa4;
        case 0x49faa8u: goto label_49faa8;
        case 0x49faacu: goto label_49faac;
        case 0x49fab0u: goto label_49fab0;
        case 0x49fab4u: goto label_49fab4;
        case 0x49fab8u: goto label_49fab8;
        case 0x49fabcu: goto label_49fabc;
        case 0x49fac0u: goto label_49fac0;
        case 0x49fac4u: goto label_49fac4;
        case 0x49fac8u: goto label_49fac8;
        case 0x49faccu: goto label_49facc;
        case 0x49fad0u: goto label_49fad0;
        case 0x49fad4u: goto label_49fad4;
        case 0x49fad8u: goto label_49fad8;
        case 0x49fadcu: goto label_49fadc;
        case 0x49fae0u: goto label_49fae0;
        case 0x49fae4u: goto label_49fae4;
        case 0x49fae8u: goto label_49fae8;
        case 0x49faecu: goto label_49faec;
        case 0x49faf0u: goto label_49faf0;
        case 0x49faf4u: goto label_49faf4;
        case 0x49faf8u: goto label_49faf8;
        case 0x49fafcu: goto label_49fafc;
        case 0x49fb00u: goto label_49fb00;
        case 0x49fb04u: goto label_49fb04;
        case 0x49fb08u: goto label_49fb08;
        case 0x49fb0cu: goto label_49fb0c;
        case 0x49fb10u: goto label_49fb10;
        case 0x49fb14u: goto label_49fb14;
        case 0x49fb18u: goto label_49fb18;
        case 0x49fb1cu: goto label_49fb1c;
        case 0x49fb20u: goto label_49fb20;
        case 0x49fb24u: goto label_49fb24;
        case 0x49fb28u: goto label_49fb28;
        case 0x49fb2cu: goto label_49fb2c;
        case 0x49fb30u: goto label_49fb30;
        case 0x49fb34u: goto label_49fb34;
        case 0x49fb38u: goto label_49fb38;
        case 0x49fb3cu: goto label_49fb3c;
        case 0x49fb40u: goto label_49fb40;
        case 0x49fb44u: goto label_49fb44;
        case 0x49fb48u: goto label_49fb48;
        case 0x49fb4cu: goto label_49fb4c;
        case 0x49fb50u: goto label_49fb50;
        case 0x49fb54u: goto label_49fb54;
        case 0x49fb58u: goto label_49fb58;
        case 0x49fb5cu: goto label_49fb5c;
        case 0x49fb60u: goto label_49fb60;
        case 0x49fb64u: goto label_49fb64;
        case 0x49fb68u: goto label_49fb68;
        case 0x49fb6cu: goto label_49fb6c;
        case 0x49fb70u: goto label_49fb70;
        case 0x49fb74u: goto label_49fb74;
        case 0x49fb78u: goto label_49fb78;
        case 0x49fb7cu: goto label_49fb7c;
        case 0x49fb80u: goto label_49fb80;
        case 0x49fb84u: goto label_49fb84;
        case 0x49fb88u: goto label_49fb88;
        case 0x49fb8cu: goto label_49fb8c;
        case 0x49fb90u: goto label_49fb90;
        case 0x49fb94u: goto label_49fb94;
        case 0x49fb98u: goto label_49fb98;
        case 0x49fb9cu: goto label_49fb9c;
        case 0x49fba0u: goto label_49fba0;
        case 0x49fba4u: goto label_49fba4;
        case 0x49fba8u: goto label_49fba8;
        case 0x49fbacu: goto label_49fbac;
        case 0x49fbb0u: goto label_49fbb0;
        case 0x49fbb4u: goto label_49fbb4;
        case 0x49fbb8u: goto label_49fbb8;
        case 0x49fbbcu: goto label_49fbbc;
        case 0x49fbc0u: goto label_49fbc0;
        case 0x49fbc4u: goto label_49fbc4;
        case 0x49fbc8u: goto label_49fbc8;
        case 0x49fbccu: goto label_49fbcc;
        case 0x49fbd0u: goto label_49fbd0;
        case 0x49fbd4u: goto label_49fbd4;
        case 0x49fbd8u: goto label_49fbd8;
        case 0x49fbdcu: goto label_49fbdc;
        case 0x49fbe0u: goto label_49fbe0;
        case 0x49fbe4u: goto label_49fbe4;
        case 0x49fbe8u: goto label_49fbe8;
        case 0x49fbecu: goto label_49fbec;
        case 0x49fbf0u: goto label_49fbf0;
        case 0x49fbf4u: goto label_49fbf4;
        case 0x49fbf8u: goto label_49fbf8;
        case 0x49fbfcu: goto label_49fbfc;
        case 0x49fc00u: goto label_49fc00;
        case 0x49fc04u: goto label_49fc04;
        case 0x49fc08u: goto label_49fc08;
        case 0x49fc0cu: goto label_49fc0c;
        case 0x49fc10u: goto label_49fc10;
        case 0x49fc14u: goto label_49fc14;
        case 0x49fc18u: goto label_49fc18;
        case 0x49fc1cu: goto label_49fc1c;
        case 0x49fc20u: goto label_49fc20;
        case 0x49fc24u: goto label_49fc24;
        case 0x49fc28u: goto label_49fc28;
        case 0x49fc2cu: goto label_49fc2c;
        case 0x49fc30u: goto label_49fc30;
        case 0x49fc34u: goto label_49fc34;
        case 0x49fc38u: goto label_49fc38;
        case 0x49fc3cu: goto label_49fc3c;
        case 0x49fc40u: goto label_49fc40;
        case 0x49fc44u: goto label_49fc44;
        case 0x49fc48u: goto label_49fc48;
        case 0x49fc4cu: goto label_49fc4c;
        case 0x49fc50u: goto label_49fc50;
        case 0x49fc54u: goto label_49fc54;
        case 0x49fc58u: goto label_49fc58;
        case 0x49fc5cu: goto label_49fc5c;
        case 0x49fc60u: goto label_49fc60;
        case 0x49fc64u: goto label_49fc64;
        case 0x49fc68u: goto label_49fc68;
        case 0x49fc6cu: goto label_49fc6c;
        case 0x49fc70u: goto label_49fc70;
        case 0x49fc74u: goto label_49fc74;
        case 0x49fc78u: goto label_49fc78;
        case 0x49fc7cu: goto label_49fc7c;
        case 0x49fc80u: goto label_49fc80;
        case 0x49fc84u: goto label_49fc84;
        case 0x49fc88u: goto label_49fc88;
        case 0x49fc8cu: goto label_49fc8c;
        case 0x49fc90u: goto label_49fc90;
        case 0x49fc94u: goto label_49fc94;
        case 0x49fc98u: goto label_49fc98;
        case 0x49fc9cu: goto label_49fc9c;
        case 0x49fca0u: goto label_49fca0;
        case 0x49fca4u: goto label_49fca4;
        case 0x49fca8u: goto label_49fca8;
        case 0x49fcacu: goto label_49fcac;
        case 0x49fcb0u: goto label_49fcb0;
        case 0x49fcb4u: goto label_49fcb4;
        case 0x49fcb8u: goto label_49fcb8;
        case 0x49fcbcu: goto label_49fcbc;
        case 0x49fcc0u: goto label_49fcc0;
        case 0x49fcc4u: goto label_49fcc4;
        case 0x49fcc8u: goto label_49fcc8;
        case 0x49fcccu: goto label_49fccc;
        case 0x49fcd0u: goto label_49fcd0;
        case 0x49fcd4u: goto label_49fcd4;
        case 0x49fcd8u: goto label_49fcd8;
        case 0x49fcdcu: goto label_49fcdc;
        case 0x49fce0u: goto label_49fce0;
        case 0x49fce4u: goto label_49fce4;
        case 0x49fce8u: goto label_49fce8;
        case 0x49fcecu: goto label_49fcec;
        case 0x49fcf0u: goto label_49fcf0;
        case 0x49fcf4u: goto label_49fcf4;
        case 0x49fcf8u: goto label_49fcf8;
        case 0x49fcfcu: goto label_49fcfc;
        case 0x49fd00u: goto label_49fd00;
        case 0x49fd04u: goto label_49fd04;
        case 0x49fd08u: goto label_49fd08;
        case 0x49fd0cu: goto label_49fd0c;
        case 0x49fd10u: goto label_49fd10;
        case 0x49fd14u: goto label_49fd14;
        case 0x49fd18u: goto label_49fd18;
        case 0x49fd1cu: goto label_49fd1c;
        case 0x49fd20u: goto label_49fd20;
        case 0x49fd24u: goto label_49fd24;
        case 0x49fd28u: goto label_49fd28;
        case 0x49fd2cu: goto label_49fd2c;
        case 0x49fd30u: goto label_49fd30;
        case 0x49fd34u: goto label_49fd34;
        case 0x49fd38u: goto label_49fd38;
        case 0x49fd3cu: goto label_49fd3c;
        case 0x49fd40u: goto label_49fd40;
        case 0x49fd44u: goto label_49fd44;
        case 0x49fd48u: goto label_49fd48;
        case 0x49fd4cu: goto label_49fd4c;
        case 0x49fd50u: goto label_49fd50;
        case 0x49fd54u: goto label_49fd54;
        case 0x49fd58u: goto label_49fd58;
        case 0x49fd5cu: goto label_49fd5c;
        case 0x49fd60u: goto label_49fd60;
        case 0x49fd64u: goto label_49fd64;
        case 0x49fd68u: goto label_49fd68;
        case 0x49fd6cu: goto label_49fd6c;
        case 0x49fd70u: goto label_49fd70;
        case 0x49fd74u: goto label_49fd74;
        case 0x49fd78u: goto label_49fd78;
        case 0x49fd7cu: goto label_49fd7c;
        case 0x49fd80u: goto label_49fd80;
        case 0x49fd84u: goto label_49fd84;
        case 0x49fd88u: goto label_49fd88;
        case 0x49fd8cu: goto label_49fd8c;
        case 0x49fd90u: goto label_49fd90;
        case 0x49fd94u: goto label_49fd94;
        case 0x49fd98u: goto label_49fd98;
        case 0x49fd9cu: goto label_49fd9c;
        case 0x49fda0u: goto label_49fda0;
        case 0x49fda4u: goto label_49fda4;
        case 0x49fda8u: goto label_49fda8;
        case 0x49fdacu: goto label_49fdac;
        case 0x49fdb0u: goto label_49fdb0;
        case 0x49fdb4u: goto label_49fdb4;
        case 0x49fdb8u: goto label_49fdb8;
        case 0x49fdbcu: goto label_49fdbc;
        case 0x49fdc0u: goto label_49fdc0;
        case 0x49fdc4u: goto label_49fdc4;
        case 0x49fdc8u: goto label_49fdc8;
        case 0x49fdccu: goto label_49fdcc;
        case 0x49fdd0u: goto label_49fdd0;
        case 0x49fdd4u: goto label_49fdd4;
        case 0x49fdd8u: goto label_49fdd8;
        case 0x49fddcu: goto label_49fddc;
        case 0x49fde0u: goto label_49fde0;
        case 0x49fde4u: goto label_49fde4;
        case 0x49fde8u: goto label_49fde8;
        case 0x49fdecu: goto label_49fdec;
        case 0x49fdf0u: goto label_49fdf0;
        case 0x49fdf4u: goto label_49fdf4;
        case 0x49fdf8u: goto label_49fdf8;
        case 0x49fdfcu: goto label_49fdfc;
        case 0x49fe00u: goto label_49fe00;
        case 0x49fe04u: goto label_49fe04;
        case 0x49fe08u: goto label_49fe08;
        case 0x49fe0cu: goto label_49fe0c;
        case 0x49fe10u: goto label_49fe10;
        case 0x49fe14u: goto label_49fe14;
        case 0x49fe18u: goto label_49fe18;
        case 0x49fe1cu: goto label_49fe1c;
        case 0x49fe20u: goto label_49fe20;
        case 0x49fe24u: goto label_49fe24;
        case 0x49fe28u: goto label_49fe28;
        case 0x49fe2cu: goto label_49fe2c;
        case 0x49fe30u: goto label_49fe30;
        case 0x49fe34u: goto label_49fe34;
        case 0x49fe38u: goto label_49fe38;
        case 0x49fe3cu: goto label_49fe3c;
        default: break;
    }

    ctx->pc = 0x49fa70u;

label_49fa70:
    // 0x49fa70: 0x3e00008  jr          $ra
label_49fa74:
    if (ctx->pc == 0x49FA74u) {
        ctx->pc = 0x49FA74u;
            // 0x49fa74: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->pc = 0x49FA78u;
        goto label_49fa78;
    }
    ctx->pc = 0x49FA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FA70u;
            // 0x49fa74: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49FA78u;
label_49fa78:
    // 0x49fa78: 0x0  nop
    ctx->pc = 0x49fa78u;
    // NOP
label_49fa7c:
    // 0x49fa7c: 0x0  nop
    ctx->pc = 0x49fa7cu;
    // NOP
label_49fa80:
    // 0x49fa80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49fa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_49fa84:
    // 0x49fa84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49fa88:
    // 0x49fa88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x49fa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_49fa8c:
    // 0x49fa8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49fa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_49fa90:
    // 0x49fa90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49fa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49fa94:
    // 0x49fa94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49fa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49fa98:
    // 0x49fa98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49fa9c:
    // 0x49fa9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49faa0:
    // 0x49faa0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x49faa0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_49faa4:
    // 0x49faa4: 0x10a30035  beq         $a1, $v1, . + 4 + (0x35 << 2)
label_49faa8:
    if (ctx->pc == 0x49FAA8u) {
        ctx->pc = 0x49FAA8u;
            // 0x49faa8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49FAACu;
        goto label_49faac;
    }
    ctx->pc = 0x49FAA4u;
    {
        const bool branch_taken_0x49faa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x49FAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FAA4u;
            // 0x49faa8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49faa4) {
            ctx->pc = 0x49FB7Cu;
            goto label_49fb7c;
        }
    }
    ctx->pc = 0x49FAACu;
label_49faac:
    // 0x49faac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49faacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49fab0:
    // 0x49fab0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_49fab4:
    if (ctx->pc == 0x49FAB4u) {
        ctx->pc = 0x49FAB4u;
            // 0x49fab4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49FAB8u;
        goto label_49fab8;
    }
    ctx->pc = 0x49FAB0u;
    {
        const bool branch_taken_0x49fab0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49fab0) {
            ctx->pc = 0x49FAB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49FAB0u;
            // 0x49fab4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49FACCu;
            goto label_49facc;
        }
    }
    ctx->pc = 0x49FAB8u;
label_49fab8:
    // 0x49fab8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49fabc:
    // 0x49fabc: 0x10a300d6  beq         $a1, $v1, . + 4 + (0xD6 << 2)
label_49fac0:
    if (ctx->pc == 0x49FAC0u) {
        ctx->pc = 0x49FAC4u;
        goto label_49fac4;
    }
    ctx->pc = 0x49FABCu;
    {
        const bool branch_taken_0x49fabc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49fabc) {
            ctx->pc = 0x49FE18u;
            goto label_49fe18;
        }
    }
    ctx->pc = 0x49FAC4u;
label_49fac4:
    // 0x49fac4: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_49fac8:
    if (ctx->pc == 0x49FAC8u) {
        ctx->pc = 0x49FACCu;
        goto label_49facc;
    }
    ctx->pc = 0x49FAC4u;
    {
        const bool branch_taken_0x49fac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fac4) {
            ctx->pc = 0x49FE18u;
            goto label_49fe18;
        }
    }
    ctx->pc = 0x49FACCu;
label_49facc:
    // 0x49facc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x49faccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_49fad0:
    // 0x49fad0: 0x320f809  jalr        $t9
label_49fad4:
    if (ctx->pc == 0x49FAD4u) {
        ctx->pc = 0x49FAD8u;
        goto label_49fad8;
    }
    ctx->pc = 0x49FAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49FAD8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49FAD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49FAD8u; }
            if (ctx->pc != 0x49FAD8u) { return; }
        }
        }
    }
    ctx->pc = 0x49FAD8u;
label_49fad8:
    // 0x49fad8: 0x8e900088  lw          $s0, 0x88($s4)
    ctx->pc = 0x49fad8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_49fadc:
    // 0x49fadc: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x49fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_49fae0:
    // 0x49fae0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x49fae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_49fae4:
    // 0x49fae4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x49fae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49fae8:
    // 0x49fae8: 0xc040140  jal         func_100500
label_49faec:
    if (ctx->pc == 0x49FAECu) {
        ctx->pc = 0x49FAECu;
            // 0x49faec: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x49FAF0u;
        goto label_49faf0;
    }
    ctx->pc = 0x49FAE8u;
    SET_GPR_U32(ctx, 31, 0x49FAF0u);
    ctx->pc = 0x49FAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FAE8u;
            // 0x49faec: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FAF0u; }
        if (ctx->pc != 0x49FAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FAF0u; }
        if (ctx->pc != 0x49FAF0u) { return; }
    }
    ctx->pc = 0x49FAF0u;
label_49faf0:
    // 0x49faf0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_49faf4:
    if (ctx->pc == 0x49FAF4u) {
        ctx->pc = 0x49FAF4u;
            // 0x49faf4: 0xae820094  sw          $v0, 0x94($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
        ctx->pc = 0x49FAF8u;
        goto label_49faf8;
    }
    ctx->pc = 0x49FAF0u;
    {
        const bool branch_taken_0x49faf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49faf0) {
            ctx->pc = 0x49FAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49FAF0u;
            // 0x49faf4: 0xae820094  sw          $v0, 0x94($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49FB10u;
            goto label_49fb10;
        }
    }
    ctx->pc = 0x49FAF8u;
label_49faf8:
    // 0x49faf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49faf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49fafc:
    // 0x49fafc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49fafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49fb00:
    // 0x49fb00: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x49fb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49fb04:
    // 0x49fb04: 0xc0b4554  jal         func_2D1550
label_49fb08:
    if (ctx->pc == 0x49FB08u) {
        ctx->pc = 0x49FB08u;
            // 0x49fb08: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49FB0Cu;
        goto label_49fb0c;
    }
    ctx->pc = 0x49FB04u;
    SET_GPR_U32(ctx, 31, 0x49FB0Cu);
    ctx->pc = 0x49FB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FB04u;
            // 0x49fb08: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FB0Cu; }
        if (ctx->pc != 0x49FB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FB0Cu; }
        if (ctx->pc != 0x49FB0Cu) { return; }
    }
    ctx->pc = 0x49FB0Cu;
label_49fb0c:
    // 0x49fb0c: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x49fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
label_49fb10:
    // 0x49fb10: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x49fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_49fb14:
    // 0x49fb14: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x49fb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_49fb18:
    // 0x49fb18: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x49fb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49fb1c:
    // 0x49fb1c: 0xc040140  jal         func_100500
label_49fb20:
    if (ctx->pc == 0x49FB20u) {
        ctx->pc = 0x49FB20u;
            // 0x49fb20: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x49FB24u;
        goto label_49fb24;
    }
    ctx->pc = 0x49FB1Cu;
    SET_GPR_U32(ctx, 31, 0x49FB24u);
    ctx->pc = 0x49FB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FB1Cu;
            // 0x49fb20: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FB24u; }
        if (ctx->pc != 0x49FB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FB24u; }
        if (ctx->pc != 0x49FB24u) { return; }
    }
    ctx->pc = 0x49FB24u;
label_49fb24:
    // 0x49fb24: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_49fb28:
    if (ctx->pc == 0x49FB28u) {
        ctx->pc = 0x49FB28u;
            // 0x49fb28: 0xae820098  sw          $v0, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
        ctx->pc = 0x49FB2Cu;
        goto label_49fb2c;
    }
    ctx->pc = 0x49FB24u;
    {
        const bool branch_taken_0x49fb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fb24) {
            ctx->pc = 0x49FB28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49FB24u;
            // 0x49fb28: 0xae820098  sw          $v0, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49FB44u;
            goto label_49fb44;
        }
    }
    ctx->pc = 0x49FB2Cu;
label_49fb2c:
    // 0x49fb2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49fb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49fb30:
    // 0x49fb30: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x49fb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_49fb34:
    // 0x49fb34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x49fb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49fb38:
    // 0x49fb38: 0xc0b4554  jal         func_2D1550
label_49fb3c:
    if (ctx->pc == 0x49FB3Cu) {
        ctx->pc = 0x49FB3Cu;
            // 0x49fb3c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49FB40u;
        goto label_49fb40;
    }
    ctx->pc = 0x49FB38u;
    SET_GPR_U32(ctx, 31, 0x49FB40u);
    ctx->pc = 0x49FB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FB38u;
            // 0x49fb3c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FB40u; }
        if (ctx->pc != 0x49FB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FB40u; }
        if (ctx->pc != 0x49FB40u) { return; }
    }
    ctx->pc = 0x49FB40u;
label_49fb40:
    // 0x49fb40: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x49fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
label_49fb44:
    // 0x49fb44: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x49fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_49fb48:
    // 0x49fb48: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x49fb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_49fb4c:
    // 0x49fb4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x49fb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49fb50:
    // 0x49fb50: 0xc040140  jal         func_100500
label_49fb54:
    if (ctx->pc == 0x49FB54u) {
        ctx->pc = 0x49FB54u;
            // 0x49fb54: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x49FB58u;
        goto label_49fb58;
    }
    ctx->pc = 0x49FB50u;
    SET_GPR_U32(ctx, 31, 0x49FB58u);
    ctx->pc = 0x49FB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FB50u;
            // 0x49fb54: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FB58u; }
        if (ctx->pc != 0x49FB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FB58u; }
        if (ctx->pc != 0x49FB58u) { return; }
    }
    ctx->pc = 0x49FB58u;
label_49fb58:
    // 0x49fb58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49fb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49fb5c:
    // 0x49fb5c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_49fb60:
    if (ctx->pc == 0x49FB60u) {
        ctx->pc = 0x49FB60u;
            // 0x49fb60: 0xae84009c  sw          $a0, 0x9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 4));
        ctx->pc = 0x49FB64u;
        goto label_49fb64;
    }
    ctx->pc = 0x49FB5Cu;
    {
        const bool branch_taken_0x49fb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fb5c) {
            ctx->pc = 0x49FB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49FB5Cu;
            // 0x49fb60: 0xae84009c  sw          $a0, 0x9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49FB7Cu;
            goto label_49fb7c;
        }
    }
    ctx->pc = 0x49FB64u;
label_49fb64:
    // 0x49fb64: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x49fb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_49fb68:
    // 0x49fb68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x49fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49fb6c:
    // 0x49fb6c: 0xc0b4554  jal         func_2D1550
label_49fb70:
    if (ctx->pc == 0x49FB70u) {
        ctx->pc = 0x49FB70u;
            // 0x49fb70: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49FB74u;
        goto label_49fb74;
    }
    ctx->pc = 0x49FB6Cu;
    SET_GPR_U32(ctx, 31, 0x49FB74u);
    ctx->pc = 0x49FB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FB6Cu;
            // 0x49fb70: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FB74u; }
        if (ctx->pc != 0x49FB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FB74u; }
        if (ctx->pc != 0x49FB74u) { return; }
    }
    ctx->pc = 0x49FB74u;
label_49fb74:
    // 0x49fb74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49fb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49fb78:
    // 0x49fb78: 0xae84009c  sw          $a0, 0x9C($s4)
    ctx->pc = 0x49fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 4));
label_49fb7c:
    // 0x49fb7c: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x49fb7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_49fb80:
    // 0x49fb80: 0x120000a5  beqz        $s0, . + 4 + (0xA5 << 2)
label_49fb84:
    if (ctx->pc == 0x49FB84u) {
        ctx->pc = 0x49FB88u;
        goto label_49fb88;
    }
    ctx->pc = 0x49FB80u;
    {
        const bool branch_taken_0x49fb80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fb80) {
            ctx->pc = 0x49FE18u;
            goto label_49fe18;
        }
    }
    ctx->pc = 0x49FB88u;
label_49fb88:
    // 0x49fb88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49fb88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49fb8c:
    // 0x49fb8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49fb8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49fb90:
    // 0x49fb90: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x49fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_49fb94:
    // 0x49fb94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x49fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_49fb98:
    // 0x49fb98: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x49fb98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49fb9c:
    // 0x49fb9c: 0xc127fbc  jal         func_49FEF0
label_49fba0:
    if (ctx->pc == 0x49FBA0u) {
        ctx->pc = 0x49FBA0u;
            // 0x49fba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49FBA4u;
        goto label_49fba4;
    }
    ctx->pc = 0x49FB9Cu;
    SET_GPR_U32(ctx, 31, 0x49FBA4u);
    ctx->pc = 0x49FBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FB9Cu;
            // 0x49fba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49FEF0u;
    if (runtime->hasFunction(0x49FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x49FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FBA4u; }
        if (ctx->pc != 0x49FBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049FEF0_0x49fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FBA4u; }
        if (ctx->pc != 0x49FBA4u) { return; }
    }
    ctx->pc = 0x49FBA4u;
label_49fba4:
    // 0x49fba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49fba8:
    // 0x49fba8: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_49fbac:
    if (ctx->pc == 0x49FBACu) {
        ctx->pc = 0x49FBB0u;
        goto label_49fbb0;
    }
    ctx->pc = 0x49FBA8u;
    {
        const bool branch_taken_0x49fba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49fba8) {
            ctx->pc = 0x49FBE0u;
            goto label_49fbe0;
        }
    }
    ctx->pc = 0x49FBB0u;
label_49fbb0:
    // 0x49fbb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49fbb4:
    if (ctx->pc == 0x49FBB4u) {
        ctx->pc = 0x49FBB8u;
        goto label_49fbb8;
    }
    ctx->pc = 0x49FBB0u;
    {
        const bool branch_taken_0x49fbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fbb0) {
            ctx->pc = 0x49FBC0u;
            goto label_49fbc0;
        }
    }
    ctx->pc = 0x49FBB8u;
label_49fbb8:
    // 0x49fbb8: 0x10000093  b           . + 4 + (0x93 << 2)
label_49fbbc:
    if (ctx->pc == 0x49FBBCu) {
        ctx->pc = 0x49FBC0u;
        goto label_49fbc0;
    }
    ctx->pc = 0x49FBB8u;
    {
        const bool branch_taken_0x49fbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fbb8) {
            ctx->pc = 0x49FE08u;
            goto label_49fe08;
        }
    }
    ctx->pc = 0x49FBC0u;
label_49fbc0:
    // 0x49fbc0: 0xc127f9c  jal         func_49FE70
label_49fbc4:
    if (ctx->pc == 0x49FBC4u) {
        ctx->pc = 0x49FBC4u;
            // 0x49fbc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49FBC8u;
        goto label_49fbc8;
    }
    ctx->pc = 0x49FBC0u;
    SET_GPR_U32(ctx, 31, 0x49FBC8u);
    ctx->pc = 0x49FBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FBC0u;
            // 0x49fbc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49FE70u;
    if (runtime->hasFunction(0x49FE70u)) {
        auto targetFn = runtime->lookupFunction(0x49FE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FBC8u; }
        if (ctx->pc != 0x49FBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049FE70_0x49fe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FBC8u; }
        if (ctx->pc != 0x49FBC8u) { return; }
    }
    ctx->pc = 0x49FBC8u;
label_49fbc8:
    // 0x49fbc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49fbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49fbcc:
    // 0x49fbcc: 0xc127f98  jal         func_49FE60
label_49fbd0:
    if (ctx->pc == 0x49FBD0u) {
        ctx->pc = 0x49FBD0u;
            // 0x49fbd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49FBD4u;
        goto label_49fbd4;
    }
    ctx->pc = 0x49FBCCu;
    SET_GPR_U32(ctx, 31, 0x49FBD4u);
    ctx->pc = 0x49FBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FBCCu;
            // 0x49fbd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49FE60u;
    if (runtime->hasFunction(0x49FE60u)) {
        auto targetFn = runtime->lookupFunction(0x49FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FBD4u; }
        if (ctx->pc != 0x49FBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049FE60_0x49fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FBD4u; }
        if (ctx->pc != 0x49FBD4u) { return; }
    }
    ctx->pc = 0x49FBD4u;
label_49fbd4:
    // 0x49fbd4: 0x1000008c  b           . + 4 + (0x8C << 2)
label_49fbd8:
    if (ctx->pc == 0x49FBD8u) {
        ctx->pc = 0x49FBDCu;
        goto label_49fbdc;
    }
    ctx->pc = 0x49FBD4u;
    {
        const bool branch_taken_0x49fbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fbd4) {
            ctx->pc = 0x49FE08u;
            goto label_49fe08;
        }
    }
    ctx->pc = 0x49FBDCu;
label_49fbdc:
    // 0x49fbdc: 0x0  nop
    ctx->pc = 0x49fbdcu;
    // NOP
label_49fbe0:
    // 0x49fbe0: 0xc127f94  jal         func_49FE50
label_49fbe4:
    if (ctx->pc == 0x49FBE4u) {
        ctx->pc = 0x49FBE4u;
            // 0x49fbe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49FBE8u;
        goto label_49fbe8;
    }
    ctx->pc = 0x49FBE0u;
    SET_GPR_U32(ctx, 31, 0x49FBE8u);
    ctx->pc = 0x49FBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FBE0u;
            // 0x49fbe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49FE50u;
    if (runtime->hasFunction(0x49FE50u)) {
        auto targetFn = runtime->lookupFunction(0x49FE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FBE8u; }
        if (ctx->pc != 0x49FBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049FE50_0x49fe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FBE8u; }
        if (ctx->pc != 0x49FBE8u) { return; }
    }
    ctx->pc = 0x49FBE8u;
label_49fbe8:
    // 0x49fbe8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49fbec:
    // 0x49fbec: 0x10430066  beq         $v0, $v1, . + 4 + (0x66 << 2)
label_49fbf0:
    if (ctx->pc == 0x49FBF0u) {
        ctx->pc = 0x49FBF4u;
        goto label_49fbf4;
    }
    ctx->pc = 0x49FBECu;
    {
        const bool branch_taken_0x49fbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49fbec) {
            ctx->pc = 0x49FD88u;
            goto label_49fd88;
        }
    }
    ctx->pc = 0x49FBF4u;
label_49fbf4:
    // 0x49fbf4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49fbf8:
    // 0x49fbf8: 0x10430047  beq         $v0, $v1, . + 4 + (0x47 << 2)
label_49fbfc:
    if (ctx->pc == 0x49FBFCu) {
        ctx->pc = 0x49FC00u;
        goto label_49fc00;
    }
    ctx->pc = 0x49FBF8u;
    {
        const bool branch_taken_0x49fbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49fbf8) {
            ctx->pc = 0x49FD18u;
            goto label_49fd18;
        }
    }
    ctx->pc = 0x49FC00u;
label_49fc00:
    // 0x49fc00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49fc04:
    // 0x49fc04: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
label_49fc08:
    if (ctx->pc == 0x49FC08u) {
        ctx->pc = 0x49FC0Cu;
        goto label_49fc0c;
    }
    ctx->pc = 0x49FC04u;
    {
        const bool branch_taken_0x49fc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49fc04) {
            ctx->pc = 0x49FC88u;
            goto label_49fc88;
        }
    }
    ctx->pc = 0x49FC0Cu;
label_49fc0c:
    // 0x49fc0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49fc10:
    // 0x49fc10: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_49fc14:
    if (ctx->pc == 0x49FC14u) {
        ctx->pc = 0x49FC18u;
        goto label_49fc18;
    }
    ctx->pc = 0x49FC10u;
    {
        const bool branch_taken_0x49fc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49fc10) {
            ctx->pc = 0x49FC28u;
            goto label_49fc28;
        }
    }
    ctx->pc = 0x49FC18u;
label_49fc18:
    // 0x49fc18: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_49fc1c:
    if (ctx->pc == 0x49FC1Cu) {
        ctx->pc = 0x49FC20u;
        goto label_49fc20;
    }
    ctx->pc = 0x49FC18u;
    {
        const bool branch_taken_0x49fc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fc18) {
            ctx->pc = 0x49FDF0u;
            goto label_49fdf0;
        }
    }
    ctx->pc = 0x49FC20u;
label_49fc20:
    // 0x49fc20: 0x10000073  b           . + 4 + (0x73 << 2)
label_49fc24:
    if (ctx->pc == 0x49FC24u) {
        ctx->pc = 0x49FC28u;
        goto label_49fc28;
    }
    ctx->pc = 0x49FC20u;
    {
        const bool branch_taken_0x49fc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fc20) {
            ctx->pc = 0x49FDF0u;
            goto label_49fdf0;
        }
    }
    ctx->pc = 0x49FC28u;
label_49fc28:
    // 0x49fc28: 0xc0775b8  jal         func_1DD6E0
label_49fc2c:
    if (ctx->pc == 0x49FC2Cu) {
        ctx->pc = 0x49FC30u;
        goto label_49fc30;
    }
    ctx->pc = 0x49FC28u;
    SET_GPR_U32(ctx, 31, 0x49FC30u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC30u; }
        if (ctx->pc != 0x49FC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC30u; }
        if (ctx->pc != 0x49FC30u) { return; }
    }
    ctx->pc = 0x49FC30u;
label_49fc30:
    // 0x49fc30: 0xc0775b4  jal         func_1DD6D0
label_49fc34:
    if (ctx->pc == 0x49FC34u) {
        ctx->pc = 0x49FC34u;
            // 0x49fc34: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49FC38u;
        goto label_49fc38;
    }
    ctx->pc = 0x49FC30u;
    SET_GPR_U32(ctx, 31, 0x49FC38u);
    ctx->pc = 0x49FC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FC30u;
            // 0x49fc34: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC38u; }
        if (ctx->pc != 0x49FC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC38u; }
        if (ctx->pc != 0x49FC38u) { return; }
    }
    ctx->pc = 0x49FC38u;
label_49fc38:
    // 0x49fc38: 0xc642008c  lwc1        $f2, 0x8C($s2)
    ctx->pc = 0x49fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49fc3c:
    // 0x49fc3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x49fc3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49fc40:
    // 0x49fc40: 0x0  nop
    ctx->pc = 0x49fc40u;
    // NOP
label_49fc44:
    // 0x49fc44: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x49fc44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_49fc48:
    // 0x49fc48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x49fc48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49fc4c:
    // 0x49fc4c: 0x45000068  bc1f        . + 4 + (0x68 << 2)
label_49fc50:
    if (ctx->pc == 0x49FC50u) {
        ctx->pc = 0x49FC50u;
            // 0x49fc50: 0xe640008c  swc1        $f0, 0x8C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
        ctx->pc = 0x49FC54u;
        goto label_49fc54;
    }
    ctx->pc = 0x49FC4Cu;
    {
        const bool branch_taken_0x49fc4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x49FC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FC4Cu;
            // 0x49fc50: 0xe640008c  swc1        $f0, 0x8C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fc4c) {
            ctx->pc = 0x49FDF0u;
            goto label_49fdf0;
        }
    }
    ctx->pc = 0x49FC54u;
label_49fc54:
    // 0x49fc54: 0xe641008c  swc1        $f1, 0x8C($s2)
    ctx->pc = 0x49fc54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
label_49fc58:
    // 0x49fc58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49fc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49fc5c:
    // 0x49fc5c: 0xc127f90  jal         func_49FE40
label_49fc60:
    if (ctx->pc == 0x49FC60u) {
        ctx->pc = 0x49FC60u;
            // 0x49fc60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x49FC64u;
        goto label_49fc64;
    }
    ctx->pc = 0x49FC5Cu;
    SET_GPR_U32(ctx, 31, 0x49FC64u);
    ctx->pc = 0x49FC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FC5Cu;
            // 0x49fc60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49FE40u;
    if (runtime->hasFunction(0x49FE40u)) {
        auto targetFn = runtime->lookupFunction(0x49FE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC64u; }
        if (ctx->pc != 0x49FC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049FE40_0x49fe40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC64u; }
        if (ctx->pc != 0x49FC64u) { return; }
    }
    ctx->pc = 0x49FC64u;
label_49fc64:
    // 0x49fc64: 0xc0d1c10  jal         func_347040
label_49fc68:
    if (ctx->pc == 0x49FC68u) {
        ctx->pc = 0x49FC68u;
            // 0x49fc68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49FC6Cu;
        goto label_49fc6c;
    }
    ctx->pc = 0x49FC64u;
    SET_GPR_U32(ctx, 31, 0x49FC6Cu);
    ctx->pc = 0x49FC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FC64u;
            // 0x49fc68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC6Cu; }
        if (ctx->pc != 0x49FC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC6Cu; }
        if (ctx->pc != 0x49FC6Cu) { return; }
    }
    ctx->pc = 0x49FC6Cu;
label_49fc6c:
    // 0x49fc6c: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x49fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_49fc70:
    // 0x49fc70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x49fc70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49fc74:
    // 0x49fc74: 0xc122d2c  jal         func_48B4B0
label_49fc78:
    if (ctx->pc == 0x49FC78u) {
        ctx->pc = 0x49FC78u;
            // 0x49fc78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49FC7Cu;
        goto label_49fc7c;
    }
    ctx->pc = 0x49FC74u;
    SET_GPR_U32(ctx, 31, 0x49FC7Cu);
    ctx->pc = 0x49FC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FC74u;
            // 0x49fc78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC7Cu; }
        if (ctx->pc != 0x49FC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC7Cu; }
        if (ctx->pc != 0x49FC7Cu) { return; }
    }
    ctx->pc = 0x49FC7Cu;
label_49fc7c:
    // 0x49fc7c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_49fc80:
    if (ctx->pc == 0x49FC80u) {
        ctx->pc = 0x49FC84u;
        goto label_49fc84;
    }
    ctx->pc = 0x49FC7Cu;
    {
        const bool branch_taken_0x49fc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fc7c) {
            ctx->pc = 0x49FDF0u;
            goto label_49fdf0;
        }
    }
    ctx->pc = 0x49FC84u;
label_49fc84:
    // 0x49fc84: 0x0  nop
    ctx->pc = 0x49fc84u;
    // NOP
label_49fc88:
    // 0x49fc88: 0xc0775b8  jal         func_1DD6E0
label_49fc8c:
    if (ctx->pc == 0x49FC8Cu) {
        ctx->pc = 0x49FC90u;
        goto label_49fc90;
    }
    ctx->pc = 0x49FC88u;
    SET_GPR_U32(ctx, 31, 0x49FC90u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC90u; }
        if (ctx->pc != 0x49FC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC90u; }
        if (ctx->pc != 0x49FC90u) { return; }
    }
    ctx->pc = 0x49FC90u;
label_49fc90:
    // 0x49fc90: 0xc0775b4  jal         func_1DD6D0
label_49fc94:
    if (ctx->pc == 0x49FC94u) {
        ctx->pc = 0x49FC94u;
            // 0x49fc94: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49FC98u;
        goto label_49fc98;
    }
    ctx->pc = 0x49FC90u;
    SET_GPR_U32(ctx, 31, 0x49FC98u);
    ctx->pc = 0x49FC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FC90u;
            // 0x49fc94: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC98u; }
        if (ctx->pc != 0x49FC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FC98u; }
        if (ctx->pc != 0x49FC98u) { return; }
    }
    ctx->pc = 0x49FC98u;
label_49fc98:
    // 0x49fc98: 0xc641008c  lwc1        $f1, 0x8C($s2)
    ctx->pc = 0x49fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49fc9c:
    // 0x49fc9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x49fc9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_49fca0:
    // 0x49fca0: 0xc0775b8  jal         func_1DD6E0
label_49fca4:
    if (ctx->pc == 0x49FCA4u) {
        ctx->pc = 0x49FCA4u;
            // 0x49fca4: 0xe640008c  swc1        $f0, 0x8C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
        ctx->pc = 0x49FCA8u;
        goto label_49fca8;
    }
    ctx->pc = 0x49FCA0u;
    SET_GPR_U32(ctx, 31, 0x49FCA8u);
    ctx->pc = 0x49FCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FCA0u;
            // 0x49fca4: 0xe640008c  swc1        $f0, 0x8C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FCA8u; }
        if (ctx->pc != 0x49FCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FCA8u; }
        if (ctx->pc != 0x49FCA8u) { return; }
    }
    ctx->pc = 0x49FCA8u;
label_49fca8:
    // 0x49fca8: 0xc0775b4  jal         func_1DD6D0
label_49fcac:
    if (ctx->pc == 0x49FCACu) {
        ctx->pc = 0x49FCACu;
            // 0x49fcac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49FCB0u;
        goto label_49fcb0;
    }
    ctx->pc = 0x49FCA8u;
    SET_GPR_U32(ctx, 31, 0x49FCB0u);
    ctx->pc = 0x49FCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FCA8u;
            // 0x49fcac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FCB0u; }
        if (ctx->pc != 0x49FCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FCB0u; }
        if (ctx->pc != 0x49FCB0u) { return; }
    }
    ctx->pc = 0x49FCB0u;
label_49fcb0:
    // 0x49fcb0: 0xc6420090  lwc1        $f2, 0x90($s2)
    ctx->pc = 0x49fcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49fcb4:
    // 0x49fcb4: 0xc6430094  lwc1        $f3, 0x94($s2)
    ctx->pc = 0x49fcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_49fcb8:
    // 0x49fcb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x49fcb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49fcbc:
    // 0x49fcbc: 0x0  nop
    ctx->pc = 0x49fcbcu;
    // NOP
label_49fcc0:
    // 0x49fcc0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x49fcc0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_49fcc4:
    // 0x49fcc4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x49fcc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_49fcc8:
    // 0x49fcc8: 0xe6400090  swc1        $f0, 0x90($s2)
    ctx->pc = 0x49fcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
label_49fccc:
    // 0x49fccc: 0xc641008c  lwc1        $f1, 0x8C($s2)
    ctx->pc = 0x49fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49fcd0:
    // 0x49fcd0: 0xc6400088  lwc1        $f0, 0x88($s2)
    ctx->pc = 0x49fcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49fcd4:
    // 0x49fcd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x49fcd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49fcd8:
    // 0x49fcd8: 0x45010045  bc1t        . + 4 + (0x45 << 2)
label_49fcdc:
    if (ctx->pc == 0x49FCDCu) {
        ctx->pc = 0x49FCE0u;
        goto label_49fce0;
    }
    ctx->pc = 0x49FCD8u;
    {
        const bool branch_taken_0x49fcd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49fcd8) {
            ctx->pc = 0x49FDF0u;
            goto label_49fdf0;
        }
    }
    ctx->pc = 0x49FCE0u;
label_49fce0:
    // 0x49fce0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49fce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49fce4:
    // 0x49fce4: 0xc127f90  jal         func_49FE40
label_49fce8:
    if (ctx->pc == 0x49FCE8u) {
        ctx->pc = 0x49FCE8u;
            // 0x49fce8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x49FCECu;
        goto label_49fcec;
    }
    ctx->pc = 0x49FCE4u;
    SET_GPR_U32(ctx, 31, 0x49FCECu);
    ctx->pc = 0x49FCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FCE4u;
            // 0x49fce8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49FE40u;
    if (runtime->hasFunction(0x49FE40u)) {
        auto targetFn = runtime->lookupFunction(0x49FE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FCECu; }
        if (ctx->pc != 0x49FCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049FE40_0x49fe40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FCECu; }
        if (ctx->pc != 0x49FCECu) { return; }
    }
    ctx->pc = 0x49FCECu;
label_49fcec:
    // 0x49fcec: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x49fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_49fcf0:
    // 0x49fcf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49fcf4:
    // 0x49fcf4: 0xc0d1c10  jal         func_347040
label_49fcf8:
    if (ctx->pc == 0x49FCF8u) {
        ctx->pc = 0x49FCF8u;
            // 0x49fcf8: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x49FCFCu;
        goto label_49fcfc;
    }
    ctx->pc = 0x49FCF4u;
    SET_GPR_U32(ctx, 31, 0x49FCFCu);
    ctx->pc = 0x49FCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FCF4u;
            // 0x49fcf8: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FCFCu; }
        if (ctx->pc != 0x49FCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FCFCu; }
        if (ctx->pc != 0x49FCFCu) { return; }
    }
    ctx->pc = 0x49FCFCu;
label_49fcfc:
    // 0x49fcfc: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x49fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_49fd00:
    // 0x49fd00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x49fd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49fd04:
    // 0x49fd04: 0xc122d2c  jal         func_48B4B0
label_49fd08:
    if (ctx->pc == 0x49FD08u) {
        ctx->pc = 0x49FD08u;
            // 0x49fd08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49FD0Cu;
        goto label_49fd0c;
    }
    ctx->pc = 0x49FD04u;
    SET_GPR_U32(ctx, 31, 0x49FD0Cu);
    ctx->pc = 0x49FD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FD04u;
            // 0x49fd08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FD0Cu; }
        if (ctx->pc != 0x49FD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FD0Cu; }
        if (ctx->pc != 0x49FD0Cu) { return; }
    }
    ctx->pc = 0x49FD0Cu;
label_49fd0c:
    // 0x49fd0c: 0x10000038  b           . + 4 + (0x38 << 2)
label_49fd10:
    if (ctx->pc == 0x49FD10u) {
        ctx->pc = 0x49FD14u;
        goto label_49fd14;
    }
    ctx->pc = 0x49FD0Cu;
    {
        const bool branch_taken_0x49fd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fd0c) {
            ctx->pc = 0x49FDF0u;
            goto label_49fdf0;
        }
    }
    ctx->pc = 0x49FD14u;
label_49fd14:
    // 0x49fd14: 0x0  nop
    ctx->pc = 0x49fd14u;
    // NOP
label_49fd18:
    // 0x49fd18: 0xc641008c  lwc1        $f1, 0x8C($s2)
    ctx->pc = 0x49fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49fd1c:
    // 0x49fd1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49fd1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49fd20:
    // 0x49fd20: 0x0  nop
    ctx->pc = 0x49fd20u;
    // NOP
label_49fd24:
    // 0x49fd24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x49fd24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49fd28:
    // 0x49fd28: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_49fd2c:
    if (ctx->pc == 0x49FD2Cu) {
        ctx->pc = 0x49FD30u;
        goto label_49fd30;
    }
    ctx->pc = 0x49FD28u;
    {
        const bool branch_taken_0x49fd28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49fd28) {
            ctx->pc = 0x49FD50u;
            goto label_49fd50;
        }
    }
    ctx->pc = 0x49FD30u;
label_49fd30:
    // 0x49fd30: 0xc0775b8  jal         func_1DD6E0
label_49fd34:
    if (ctx->pc == 0x49FD34u) {
        ctx->pc = 0x49FD38u;
        goto label_49fd38;
    }
    ctx->pc = 0x49FD30u;
    SET_GPR_U32(ctx, 31, 0x49FD38u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FD38u; }
        if (ctx->pc != 0x49FD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FD38u; }
        if (ctx->pc != 0x49FD38u) { return; }
    }
    ctx->pc = 0x49FD38u;
label_49fd38:
    // 0x49fd38: 0xc0775b4  jal         func_1DD6D0
label_49fd3c:
    if (ctx->pc == 0x49FD3Cu) {
        ctx->pc = 0x49FD3Cu;
            // 0x49fd3c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49FD40u;
        goto label_49fd40;
    }
    ctx->pc = 0x49FD38u;
    SET_GPR_U32(ctx, 31, 0x49FD40u);
    ctx->pc = 0x49FD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FD38u;
            // 0x49fd3c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FD40u; }
        if (ctx->pc != 0x49FD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FD40u; }
        if (ctx->pc != 0x49FD40u) { return; }
    }
    ctx->pc = 0x49FD40u;
label_49fd40:
    // 0x49fd40: 0xc641008c  lwc1        $f1, 0x8C($s2)
    ctx->pc = 0x49fd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49fd44:
    // 0x49fd44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x49fd44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_49fd48:
    // 0x49fd48: 0xe640008c  swc1        $f0, 0x8C($s2)
    ctx->pc = 0x49fd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
label_49fd4c:
    // 0x49fd4c: 0x0  nop
    ctx->pc = 0x49fd4cu;
    // NOP
label_49fd50:
    // 0x49fd50: 0xc641008c  lwc1        $f1, 0x8C($s2)
    ctx->pc = 0x49fd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49fd54:
    // 0x49fd54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49fd54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49fd58:
    // 0x49fd58: 0x0  nop
    ctx->pc = 0x49fd58u;
    // NOP
label_49fd5c:
    // 0x49fd5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x49fd5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49fd60:
    // 0x49fd60: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_49fd64:
    if (ctx->pc == 0x49FD64u) {
        ctx->pc = 0x49FD68u;
        goto label_49fd68;
    }
    ctx->pc = 0x49FD60u;
    {
        const bool branch_taken_0x49fd60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49fd60) {
            ctx->pc = 0x49FDF0u;
            goto label_49fdf0;
        }
    }
    ctx->pc = 0x49FD68u;
label_49fd68:
    // 0x49fd68: 0x86420098  lh          $v0, 0x98($s2)
    ctx->pc = 0x49fd68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 152)));
label_49fd6c:
    // 0x49fd6c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_49fd70:
    if (ctx->pc == 0x49FD70u) {
        ctx->pc = 0x49FD74u;
        goto label_49fd74;
    }
    ctx->pc = 0x49FD6Cu;
    {
        const bool branch_taken_0x49fd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49fd6c) {
            ctx->pc = 0x49FDF0u;
            goto label_49fdf0;
        }
    }
    ctx->pc = 0x49FD74u;
label_49fd74:
    // 0x49fd74: 0xc1280fc  jal         func_4A03F0
label_49fd78:
    if (ctx->pc == 0x49FD78u) {
        ctx->pc = 0x49FD78u;
            // 0x49fd78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49FD7Cu;
        goto label_49fd7c;
    }
    ctx->pc = 0x49FD74u;
    SET_GPR_U32(ctx, 31, 0x49FD7Cu);
    ctx->pc = 0x49FD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FD74u;
            // 0x49fd78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A03F0u;
    if (runtime->hasFunction(0x4A03F0u)) {
        auto targetFn = runtime->lookupFunction(0x4A03F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FD7Cu; }
        if (ctx->pc != 0x49FD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A03F0_0x4a03f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FD7Cu; }
        if (ctx->pc != 0x49FD7Cu) { return; }
    }
    ctx->pc = 0x49FD7Cu;
label_49fd7c:
    // 0x49fd7c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_49fd80:
    if (ctx->pc == 0x49FD80u) {
        ctx->pc = 0x49FD84u;
        goto label_49fd84;
    }
    ctx->pc = 0x49FD7Cu;
    {
        const bool branch_taken_0x49fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fd7c) {
            ctx->pc = 0x49FDF0u;
            goto label_49fdf0;
        }
    }
    ctx->pc = 0x49FD84u;
label_49fd84:
    // 0x49fd84: 0x0  nop
    ctx->pc = 0x49fd84u;
    // NOP
label_49fd88:
    // 0x49fd88: 0xc0775b8  jal         func_1DD6E0
label_49fd8c:
    if (ctx->pc == 0x49FD8Cu) {
        ctx->pc = 0x49FD90u;
        goto label_49fd90;
    }
    ctx->pc = 0x49FD88u;
    SET_GPR_U32(ctx, 31, 0x49FD90u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FD90u; }
        if (ctx->pc != 0x49FD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FD90u; }
        if (ctx->pc != 0x49FD90u) { return; }
    }
    ctx->pc = 0x49FD90u;
label_49fd90:
    // 0x49fd90: 0xc0775b4  jal         func_1DD6D0
label_49fd94:
    if (ctx->pc == 0x49FD94u) {
        ctx->pc = 0x49FD94u;
            // 0x49fd94: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49FD98u;
        goto label_49fd98;
    }
    ctx->pc = 0x49FD90u;
    SET_GPR_U32(ctx, 31, 0x49FD98u);
    ctx->pc = 0x49FD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FD90u;
            // 0x49fd94: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FD98u; }
        if (ctx->pc != 0x49FD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FD98u; }
        if (ctx->pc != 0x49FD98u) { return; }
    }
    ctx->pc = 0x49FD98u;
label_49fd98:
    // 0x49fd98: 0xc641008c  lwc1        $f1, 0x8C($s2)
    ctx->pc = 0x49fd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49fd9c:
    // 0x49fd9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x49fd9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_49fda0:
    // 0x49fda0: 0xc0775b8  jal         func_1DD6E0
label_49fda4:
    if (ctx->pc == 0x49FDA4u) {
        ctx->pc = 0x49FDA4u;
            // 0x49fda4: 0xe640008c  swc1        $f0, 0x8C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
        ctx->pc = 0x49FDA8u;
        goto label_49fda8;
    }
    ctx->pc = 0x49FDA0u;
    SET_GPR_U32(ctx, 31, 0x49FDA8u);
    ctx->pc = 0x49FDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FDA0u;
            // 0x49fda4: 0xe640008c  swc1        $f0, 0x8C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FDA8u; }
        if (ctx->pc != 0x49FDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FDA8u; }
        if (ctx->pc != 0x49FDA8u) { return; }
    }
    ctx->pc = 0x49FDA8u;
label_49fda8:
    // 0x49fda8: 0xc0775b4  jal         func_1DD6D0
label_49fdac:
    if (ctx->pc == 0x49FDACu) {
        ctx->pc = 0x49FDACu;
            // 0x49fdac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49FDB0u;
        goto label_49fdb0;
    }
    ctx->pc = 0x49FDA8u;
    SET_GPR_U32(ctx, 31, 0x49FDB0u);
    ctx->pc = 0x49FDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FDA8u;
            // 0x49fdac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FDB0u; }
        if (ctx->pc != 0x49FDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FDB0u; }
        if (ctx->pc != 0x49FDB0u) { return; }
    }
    ctx->pc = 0x49FDB0u;
label_49fdb0:
    // 0x49fdb0: 0xc6420090  lwc1        $f2, 0x90($s2)
    ctx->pc = 0x49fdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49fdb4:
    // 0x49fdb4: 0xc6430094  lwc1        $f3, 0x94($s2)
    ctx->pc = 0x49fdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_49fdb8:
    // 0x49fdb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x49fdb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49fdbc:
    // 0x49fdbc: 0x0  nop
    ctx->pc = 0x49fdbcu;
    // NOP
label_49fdc0:
    // 0x49fdc0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x49fdc0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_49fdc4:
    // 0x49fdc4: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x49fdc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_49fdc8:
    // 0x49fdc8: 0xe6400090  swc1        $f0, 0x90($s2)
    ctx->pc = 0x49fdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
label_49fdcc:
    // 0x49fdcc: 0xc641008c  lwc1        $f1, 0x8C($s2)
    ctx->pc = 0x49fdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49fdd0:
    // 0x49fdd0: 0xc6400088  lwc1        $f0, 0x88($s2)
    ctx->pc = 0x49fdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49fdd4:
    // 0x49fdd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x49fdd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49fdd8:
    // 0x49fdd8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_49fddc:
    if (ctx->pc == 0x49FDDCu) {
        ctx->pc = 0x49FDE0u;
        goto label_49fde0;
    }
    ctx->pc = 0x49FDD8u;
    {
        const bool branch_taken_0x49fdd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49fdd8) {
            ctx->pc = 0x49FDF0u;
            goto label_49fdf0;
        }
    }
    ctx->pc = 0x49FDE0u;
label_49fde0:
    // 0x49fde0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49fde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49fde4:
    // 0x49fde4: 0xc127f90  jal         func_49FE40
label_49fde8:
    if (ctx->pc == 0x49FDE8u) {
        ctx->pc = 0x49FDE8u;
            // 0x49fde8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49FDECu;
        goto label_49fdec;
    }
    ctx->pc = 0x49FDE4u;
    SET_GPR_U32(ctx, 31, 0x49FDECu);
    ctx->pc = 0x49FDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FDE4u;
            // 0x49fde8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49FE40u;
    if (runtime->hasFunction(0x49FE40u)) {
        auto targetFn = runtime->lookupFunction(0x49FE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FDECu; }
        if (ctx->pc != 0x49FDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049FE40_0x49fe40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FDECu; }
        if (ctx->pc != 0x49FDECu) { return; }
    }
    ctx->pc = 0x49FDECu;
label_49fdec:
    // 0x49fdec: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x49fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
label_49fdf0:
    // 0x49fdf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49fdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49fdf4:
    // 0x49fdf4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x49fdf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49fdf8:
    // 0x49fdf8: 0xc64d0090  lwc1        $f13, 0x90($s2)
    ctx->pc = 0x49fdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_49fdfc:
    // 0x49fdfc: 0xc0d3eb0  jal         func_34FAC0
label_49fe00:
    if (ctx->pc == 0x49FE00u) {
        ctx->pc = 0x49FE00u;
            // 0x49fe00: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x49FE04u;
        goto label_49fe04;
    }
    ctx->pc = 0x49FDFCu;
    SET_GPR_U32(ctx, 31, 0x49FE04u);
    ctx->pc = 0x49FE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49FDFCu;
            // 0x49fe00: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FAC0u;
    if (runtime->hasFunction(0x34FAC0u)) {
        auto targetFn = runtime->lookupFunction(0x34FAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FE04u; }
        if (ctx->pc != 0x49FE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FAC0_0x34fac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49FE04u; }
        if (ctx->pc != 0x49FE04u) { return; }
    }
    ctx->pc = 0x49FE04u;
label_49fe04:
    // 0x49fe04: 0x0  nop
    ctx->pc = 0x49fe04u;
    // NOP
label_49fe08:
    // 0x49fe08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49fe08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_49fe0c:
    // 0x49fe0c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x49fe0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_49fe10:
    // 0x49fe10: 0x1460ff5f  bnez        $v1, . + 4 + (-0xA1 << 2)
label_49fe14:
    if (ctx->pc == 0x49FE14u) {
        ctx->pc = 0x49FE14u;
            // 0x49fe14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x49FE18u;
        goto label_49fe18;
    }
    ctx->pc = 0x49FE10u;
    {
        const bool branch_taken_0x49fe10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49FE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FE10u;
            // 0x49fe14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fe10) {
            ctx->pc = 0x49FB90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49fb90;
        }
    }
    ctx->pc = 0x49FE18u;
label_49fe18:
    // 0x49fe18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x49fe18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_49fe1c:
    // 0x49fe1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49fe1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49fe20:
    // 0x49fe20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49fe20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49fe24:
    // 0x49fe24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49fe24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49fe28:
    // 0x49fe28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49fe28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49fe2c:
    // 0x49fe2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49fe2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49fe30:
    // 0x49fe30: 0x3e00008  jr          $ra
label_49fe34:
    if (ctx->pc == 0x49FE34u) {
        ctx->pc = 0x49FE34u;
            // 0x49fe34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x49FE38u;
        goto label_49fe38;
    }
    ctx->pc = 0x49FE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FE30u;
            // 0x49fe34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49FE38u;
label_49fe38:
    // 0x49fe38: 0x0  nop
    ctx->pc = 0x49fe38u;
    // NOP
label_49fe3c:
    // 0x49fe3c: 0x0  nop
    ctx->pc = 0x49fe3cu;
    // NOP
}
