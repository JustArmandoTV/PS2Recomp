#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358F60
// Address: 0x358f60 - 0x359110
void sub_00358F60_0x358f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358F60_0x358f60");
#endif

    switch (ctx->pc) {
        case 0x358f60u: goto label_358f60;
        case 0x358f64u: goto label_358f64;
        case 0x358f68u: goto label_358f68;
        case 0x358f6cu: goto label_358f6c;
        case 0x358f70u: goto label_358f70;
        case 0x358f74u: goto label_358f74;
        case 0x358f78u: goto label_358f78;
        case 0x358f7cu: goto label_358f7c;
        case 0x358f80u: goto label_358f80;
        case 0x358f84u: goto label_358f84;
        case 0x358f88u: goto label_358f88;
        case 0x358f8cu: goto label_358f8c;
        case 0x358f90u: goto label_358f90;
        case 0x358f94u: goto label_358f94;
        case 0x358f98u: goto label_358f98;
        case 0x358f9cu: goto label_358f9c;
        case 0x358fa0u: goto label_358fa0;
        case 0x358fa4u: goto label_358fa4;
        case 0x358fa8u: goto label_358fa8;
        case 0x358facu: goto label_358fac;
        case 0x358fb0u: goto label_358fb0;
        case 0x358fb4u: goto label_358fb4;
        case 0x358fb8u: goto label_358fb8;
        case 0x358fbcu: goto label_358fbc;
        case 0x358fc0u: goto label_358fc0;
        case 0x358fc4u: goto label_358fc4;
        case 0x358fc8u: goto label_358fc8;
        case 0x358fccu: goto label_358fcc;
        case 0x358fd0u: goto label_358fd0;
        case 0x358fd4u: goto label_358fd4;
        case 0x358fd8u: goto label_358fd8;
        case 0x358fdcu: goto label_358fdc;
        case 0x358fe0u: goto label_358fe0;
        case 0x358fe4u: goto label_358fe4;
        case 0x358fe8u: goto label_358fe8;
        case 0x358fecu: goto label_358fec;
        case 0x358ff0u: goto label_358ff0;
        case 0x358ff4u: goto label_358ff4;
        case 0x358ff8u: goto label_358ff8;
        case 0x358ffcu: goto label_358ffc;
        case 0x359000u: goto label_359000;
        case 0x359004u: goto label_359004;
        case 0x359008u: goto label_359008;
        case 0x35900cu: goto label_35900c;
        case 0x359010u: goto label_359010;
        case 0x359014u: goto label_359014;
        case 0x359018u: goto label_359018;
        case 0x35901cu: goto label_35901c;
        case 0x359020u: goto label_359020;
        case 0x359024u: goto label_359024;
        case 0x359028u: goto label_359028;
        case 0x35902cu: goto label_35902c;
        case 0x359030u: goto label_359030;
        case 0x359034u: goto label_359034;
        case 0x359038u: goto label_359038;
        case 0x35903cu: goto label_35903c;
        case 0x359040u: goto label_359040;
        case 0x359044u: goto label_359044;
        case 0x359048u: goto label_359048;
        case 0x35904cu: goto label_35904c;
        case 0x359050u: goto label_359050;
        case 0x359054u: goto label_359054;
        case 0x359058u: goto label_359058;
        case 0x35905cu: goto label_35905c;
        case 0x359060u: goto label_359060;
        case 0x359064u: goto label_359064;
        case 0x359068u: goto label_359068;
        case 0x35906cu: goto label_35906c;
        case 0x359070u: goto label_359070;
        case 0x359074u: goto label_359074;
        case 0x359078u: goto label_359078;
        case 0x35907cu: goto label_35907c;
        case 0x359080u: goto label_359080;
        case 0x359084u: goto label_359084;
        case 0x359088u: goto label_359088;
        case 0x35908cu: goto label_35908c;
        case 0x359090u: goto label_359090;
        case 0x359094u: goto label_359094;
        case 0x359098u: goto label_359098;
        case 0x35909cu: goto label_35909c;
        case 0x3590a0u: goto label_3590a0;
        case 0x3590a4u: goto label_3590a4;
        case 0x3590a8u: goto label_3590a8;
        case 0x3590acu: goto label_3590ac;
        case 0x3590b0u: goto label_3590b0;
        case 0x3590b4u: goto label_3590b4;
        case 0x3590b8u: goto label_3590b8;
        case 0x3590bcu: goto label_3590bc;
        case 0x3590c0u: goto label_3590c0;
        case 0x3590c4u: goto label_3590c4;
        case 0x3590c8u: goto label_3590c8;
        case 0x3590ccu: goto label_3590cc;
        case 0x3590d0u: goto label_3590d0;
        case 0x3590d4u: goto label_3590d4;
        case 0x3590d8u: goto label_3590d8;
        case 0x3590dcu: goto label_3590dc;
        case 0x3590e0u: goto label_3590e0;
        case 0x3590e4u: goto label_3590e4;
        case 0x3590e8u: goto label_3590e8;
        case 0x3590ecu: goto label_3590ec;
        case 0x3590f0u: goto label_3590f0;
        case 0x3590f4u: goto label_3590f4;
        case 0x3590f8u: goto label_3590f8;
        case 0x3590fcu: goto label_3590fc;
        case 0x359100u: goto label_359100;
        case 0x359104u: goto label_359104;
        case 0x359108u: goto label_359108;
        case 0x35910cu: goto label_35910c;
        default: break;
    }

    ctx->pc = 0x358f60u;

label_358f60:
    // 0x358f60: 0x3e00008  jr          $ra
label_358f64:
    if (ctx->pc == 0x358F64u) {
        ctx->pc = 0x358F64u;
            // 0x358f64: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = 0x358F68u;
        goto label_358f68;
    }
    ctx->pc = 0x358F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358F60u;
            // 0x358f64: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358F68u;
label_358f68:
    // 0x358f68: 0x0  nop
    ctx->pc = 0x358f68u;
    // NOP
label_358f6c:
    // 0x358f6c: 0x0  nop
    ctx->pc = 0x358f6cu;
    // NOP
label_358f70:
    // 0x358f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x358f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_358f74:
    // 0x358f74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x358f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_358f78:
    // 0x358f78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x358f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_358f7c:
    // 0x358f7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x358f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_358f80:
    // 0x358f80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x358f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_358f84:
    // 0x358f84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_358f88:
    // 0x358f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x358f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_358f8c:
    // 0x358f8c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x358f8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_358f90:
    // 0x358f90: 0x10a3002a  beq         $a1, $v1, . + 4 + (0x2A << 2)
label_358f94:
    if (ctx->pc == 0x358F94u) {
        ctx->pc = 0x358F94u;
            // 0x358f94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358F98u;
        goto label_358f98;
    }
    ctx->pc = 0x358F90u;
    {
        const bool branch_taken_0x358f90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x358F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358F90u;
            // 0x358f94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358f90) {
            ctx->pc = 0x35903Cu;
            goto label_35903c;
        }
    }
    ctx->pc = 0x358F98u;
label_358f98:
    // 0x358f98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x358f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_358f9c:
    // 0x358f9c: 0x50a30024  beql        $a1, $v1, . + 4 + (0x24 << 2)
label_358fa0:
    if (ctx->pc == 0x358FA0u) {
        ctx->pc = 0x358FA0u;
            // 0x358fa0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x358FA4u;
        goto label_358fa4;
    }
    ctx->pc = 0x358F9Cu;
    {
        const bool branch_taken_0x358f9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x358f9c) {
            ctx->pc = 0x358FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358F9Cu;
            // 0x358fa0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x359030u;
            goto label_359030;
        }
    }
    ctx->pc = 0x358FA4u;
label_358fa4:
    // 0x358fa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x358fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_358fa8:
    // 0x358fa8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_358fac:
    if (ctx->pc == 0x358FACu) {
        ctx->pc = 0x358FB0u;
        goto label_358fb0;
    }
    ctx->pc = 0x358FA8u;
    {
        const bool branch_taken_0x358fa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x358fa8) {
            ctx->pc = 0x358FB8u;
            goto label_358fb8;
        }
    }
    ctx->pc = 0x358FB0u;
label_358fb0:
    // 0x358fb0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_358fb4:
    if (ctx->pc == 0x358FB4u) {
        ctx->pc = 0x358FB8u;
        goto label_358fb8;
    }
    ctx->pc = 0x358FB0u;
    {
        const bool branch_taken_0x358fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358fb0) {
            ctx->pc = 0x359070u;
            goto label_359070;
        }
    }
    ctx->pc = 0x358FB8u;
label_358fb8:
    // 0x358fb8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x358fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_358fbc:
    // 0x358fbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x358fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358fc0:
    // 0x358fc0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x358fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_358fc4:
    // 0x358fc4: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x358fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_358fc8:
    // 0x358fc8: 0x10640029  beq         $v1, $a0, . + 4 + (0x29 << 2)
label_358fcc:
    if (ctx->pc == 0x358FCCu) {
        ctx->pc = 0x358FD0u;
        goto label_358fd0;
    }
    ctx->pc = 0x358FC8u;
    {
        const bool branch_taken_0x358fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x358fc8) {
            ctx->pc = 0x359070u;
            goto label_359070;
        }
    }
    ctx->pc = 0x358FD0u;
label_358fd0:
    // 0x358fd0: 0x8e0a0084  lw          $t2, 0x84($s0)
    ctx->pc = 0x358fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_358fd4:
    // 0x358fd4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x358fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_358fd8:
    // 0x358fd8: 0x8e090088  lw          $t1, 0x88($s0)
    ctx->pc = 0x358fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_358fdc:
    // 0x358fdc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x358fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_358fe0:
    // 0x358fe0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x358fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_358fe4:
    // 0x358fe4: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x358fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_358fe8:
    // 0x358fe8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x358fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_358fec:
    // 0x358fec: 0x8ca717b0  lw          $a3, 0x17B0($a1)
    ctx->pc = 0x358fecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6064)));
label_358ff0:
    // 0x358ff0: 0x8cc80030  lw          $t0, 0x30($a2)
    ctx->pc = 0x358ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_358ff4:
    // 0x358ff4: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x358ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_358ff8:
    // 0x358ff8: 0x8d060240  lw          $a2, 0x240($t0)
    ctx->pc = 0x358ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 576)));
label_358ffc:
    // 0x358ffc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x358ffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_359000:
    // 0x359000: 0xad060240  sw          $a2, 0x240($t0)
    ctx->pc = 0x359000u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 576), GPR_U32(ctx, 6));
label_359004:
    // 0x359004: 0x8c8717b8  lw          $a3, 0x17B8($a0)
    ctx->pc = 0x359004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6072)));
label_359008:
    // 0x359008: 0x8d0602d0  lw          $a2, 0x2D0($t0)
    ctx->pc = 0x359008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 720)));
label_35900c:
    // 0x35900c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x35900cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_359010:
    // 0x359010: 0xad0602d0  sw          $a2, 0x2D0($t0)
    ctx->pc = 0x359010u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 720), GPR_U32(ctx, 6));
label_359014:
    // 0x359014: 0x8c6717c0  lw          $a3, 0x17C0($v1)
    ctx->pc = 0x359014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6080)));
label_359018:
    // 0x359018: 0x8d0601b0  lw          $a2, 0x1B0($t0)
    ctx->pc = 0x359018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 432)));
label_35901c:
    // 0x35901c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x35901cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_359020:
    // 0x359020: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
label_359024:
    if (ctx->pc == 0x359024u) {
        ctx->pc = 0x359024u;
            // 0x359024: 0xad0601b0  sw          $a2, 0x1B0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 432), GPR_U32(ctx, 6));
        ctx->pc = 0x359028u;
        goto label_359028;
    }
    ctx->pc = 0x359020u;
    {
        const bool branch_taken_0x359020 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x359024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359020u;
            // 0x359024: 0xad0601b0  sw          $a2, 0x1B0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 432), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359020) {
            ctx->pc = 0x358FE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_358fe4;
        }
    }
    ctx->pc = 0x359028u;
label_359028:
    // 0x359028: 0x10000011  b           . + 4 + (0x11 << 2)
label_35902c:
    if (ctx->pc == 0x35902Cu) {
        ctx->pc = 0x359030u;
        goto label_359030;
    }
    ctx->pc = 0x359028u;
    {
        const bool branch_taken_0x359028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359028) {
            ctx->pc = 0x359070u;
            goto label_359070;
        }
    }
    ctx->pc = 0x359030u;
label_359030:
    // 0x359030: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x359030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_359034:
    // 0x359034: 0x320f809  jalr        $t9
label_359038:
    if (ctx->pc == 0x359038u) {
        ctx->pc = 0x35903Cu;
        goto label_35903c;
    }
    ctx->pc = 0x359034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35903Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x35903Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35903Cu; }
            if (ctx->pc != 0x35903Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35903Cu;
label_35903c:
    // 0x35903c: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x35903cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_359040:
    // 0x359040: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_359044:
    if (ctx->pc == 0x359044u) {
        ctx->pc = 0x359048u;
        goto label_359048;
    }
    ctx->pc = 0x359040u;
    {
        const bool branch_taken_0x359040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x359040) {
            ctx->pc = 0x359070u;
            goto label_359070;
        }
    }
    ctx->pc = 0x359048u;
label_359048:
    // 0x359048: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x359048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35904c:
    // 0x35904c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35904cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359050:
    // 0x359050: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x359050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_359054:
    // 0x359054: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x359054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_359058:
    // 0x359058: 0xc0e3658  jal         func_38D960
label_35905c:
    if (ctx->pc == 0x35905Cu) {
        ctx->pc = 0x35905Cu;
            // 0x35905c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x359060u;
        goto label_359060;
    }
    ctx->pc = 0x359058u;
    SET_GPR_U32(ctx, 31, 0x359060u);
    ctx->pc = 0x35905Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359058u;
            // 0x35905c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359060u; }
        if (ctx->pc != 0x359060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359060u; }
        if (ctx->pc != 0x359060u) { return; }
    }
    ctx->pc = 0x359060u;
label_359060:
    // 0x359060: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x359060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_359064:
    // 0x359064: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x359064u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_359068:
    // 0x359068: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_35906c:
    if (ctx->pc == 0x35906Cu) {
        ctx->pc = 0x35906Cu;
            // 0x35906c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x359070u;
        goto label_359070;
    }
    ctx->pc = 0x359068u;
    {
        const bool branch_taken_0x359068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35906Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359068u;
            // 0x35906c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359068) {
            ctx->pc = 0x359050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359050;
        }
    }
    ctx->pc = 0x359070u;
label_359070:
    // 0x359070: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x359070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_359074:
    // 0x359074: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x359074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_359078:
    // 0x359078: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x359078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35907c:
    // 0x35907c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35907cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_359080:
    // 0x359080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359084:
    // 0x359084: 0x3e00008  jr          $ra
label_359088:
    if (ctx->pc == 0x359088u) {
        ctx->pc = 0x359088u;
            // 0x359088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x35908Cu;
        goto label_35908c;
    }
    ctx->pc = 0x359084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359084u;
            // 0x359088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35908Cu;
label_35908c:
    // 0x35908c: 0x0  nop
    ctx->pc = 0x35908cu;
    // NOP
label_359090:
    // 0x359090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x359090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_359094:
    // 0x359094: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x359094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_359098:
    // 0x359098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x359098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35909c:
    // 0x35909c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35909cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3590a0:
    // 0x3590a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3590a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3590a4:
    // 0x3590a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3590a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3590a8:
    // 0x3590a8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x3590a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3590ac:
    // 0x3590ac: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_3590b0:
    if (ctx->pc == 0x3590B0u) {
        ctx->pc = 0x3590B0u;
            // 0x3590b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3590B4u;
        goto label_3590b4;
    }
    ctx->pc = 0x3590ACu;
    {
        const bool branch_taken_0x3590ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3590B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3590ACu;
            // 0x3590b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3590ac) {
            ctx->pc = 0x3590E8u;
            goto label_3590e8;
        }
    }
    ctx->pc = 0x3590B4u;
label_3590b4:
    // 0x3590b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3590b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3590b8:
    // 0x3590b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3590b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3590bc:
    // 0x3590bc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3590bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3590c0:
    // 0x3590c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3590c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3590c4:
    // 0x3590c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3590c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3590c8:
    // 0x3590c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3590c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3590cc:
    // 0x3590cc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x3590ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_3590d0:
    // 0x3590d0: 0x320f809  jalr        $t9
label_3590d4:
    if (ctx->pc == 0x3590D4u) {
        ctx->pc = 0x3590D8u;
        goto label_3590d8;
    }
    ctx->pc = 0x3590D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3590D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3590D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3590D8u; }
            if (ctx->pc != 0x3590D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3590D8u;
label_3590d8:
    // 0x3590d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3590d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3590dc:
    // 0x3590dc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3590dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3590e0:
    // 0x3590e0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_3590e4:
    if (ctx->pc == 0x3590E4u) {
        ctx->pc = 0x3590E4u;
            // 0x3590e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3590E8u;
        goto label_3590e8;
    }
    ctx->pc = 0x3590E0u;
    {
        const bool branch_taken_0x3590e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3590E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3590E0u;
            // 0x3590e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3590e0) {
            ctx->pc = 0x3590BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3590bc;
        }
    }
    ctx->pc = 0x3590E8u;
label_3590e8:
    // 0x3590e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3590e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3590ec:
    // 0x3590ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3590ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3590f0:
    // 0x3590f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3590f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3590f4:
    // 0x3590f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3590f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3590f8:
    // 0x3590f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3590f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3590fc:
    // 0x3590fc: 0x3e00008  jr          $ra
label_359100:
    if (ctx->pc == 0x359100u) {
        ctx->pc = 0x359100u;
            // 0x359100: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x359104u;
        goto label_359104;
    }
    ctx->pc = 0x3590FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3590FCu;
            // 0x359100: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359104u;
label_359104:
    // 0x359104: 0x0  nop
    ctx->pc = 0x359104u;
    // NOP
label_359108:
    // 0x359108: 0x0  nop
    ctx->pc = 0x359108u;
    // NOP
label_35910c:
    // 0x35910c: 0x0  nop
    ctx->pc = 0x35910cu;
    // NOP
}
