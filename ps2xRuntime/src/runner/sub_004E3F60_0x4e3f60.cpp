#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E3F60
// Address: 0x4e3f60 - 0x4e40a0
void sub_004E3F60_0x4e3f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3F60_0x4e3f60");
#endif

    switch (ctx->pc) {
        case 0x4e3f60u: goto label_4e3f60;
        case 0x4e3f64u: goto label_4e3f64;
        case 0x4e3f68u: goto label_4e3f68;
        case 0x4e3f6cu: goto label_4e3f6c;
        case 0x4e3f70u: goto label_4e3f70;
        case 0x4e3f74u: goto label_4e3f74;
        case 0x4e3f78u: goto label_4e3f78;
        case 0x4e3f7cu: goto label_4e3f7c;
        case 0x4e3f80u: goto label_4e3f80;
        case 0x4e3f84u: goto label_4e3f84;
        case 0x4e3f88u: goto label_4e3f88;
        case 0x4e3f8cu: goto label_4e3f8c;
        case 0x4e3f90u: goto label_4e3f90;
        case 0x4e3f94u: goto label_4e3f94;
        case 0x4e3f98u: goto label_4e3f98;
        case 0x4e3f9cu: goto label_4e3f9c;
        case 0x4e3fa0u: goto label_4e3fa0;
        case 0x4e3fa4u: goto label_4e3fa4;
        case 0x4e3fa8u: goto label_4e3fa8;
        case 0x4e3facu: goto label_4e3fac;
        case 0x4e3fb0u: goto label_4e3fb0;
        case 0x4e3fb4u: goto label_4e3fb4;
        case 0x4e3fb8u: goto label_4e3fb8;
        case 0x4e3fbcu: goto label_4e3fbc;
        case 0x4e3fc0u: goto label_4e3fc0;
        case 0x4e3fc4u: goto label_4e3fc4;
        case 0x4e3fc8u: goto label_4e3fc8;
        case 0x4e3fccu: goto label_4e3fcc;
        case 0x4e3fd0u: goto label_4e3fd0;
        case 0x4e3fd4u: goto label_4e3fd4;
        case 0x4e3fd8u: goto label_4e3fd8;
        case 0x4e3fdcu: goto label_4e3fdc;
        case 0x4e3fe0u: goto label_4e3fe0;
        case 0x4e3fe4u: goto label_4e3fe4;
        case 0x4e3fe8u: goto label_4e3fe8;
        case 0x4e3fecu: goto label_4e3fec;
        case 0x4e3ff0u: goto label_4e3ff0;
        case 0x4e3ff4u: goto label_4e3ff4;
        case 0x4e3ff8u: goto label_4e3ff8;
        case 0x4e3ffcu: goto label_4e3ffc;
        case 0x4e4000u: goto label_4e4000;
        case 0x4e4004u: goto label_4e4004;
        case 0x4e4008u: goto label_4e4008;
        case 0x4e400cu: goto label_4e400c;
        case 0x4e4010u: goto label_4e4010;
        case 0x4e4014u: goto label_4e4014;
        case 0x4e4018u: goto label_4e4018;
        case 0x4e401cu: goto label_4e401c;
        case 0x4e4020u: goto label_4e4020;
        case 0x4e4024u: goto label_4e4024;
        case 0x4e4028u: goto label_4e4028;
        case 0x4e402cu: goto label_4e402c;
        case 0x4e4030u: goto label_4e4030;
        case 0x4e4034u: goto label_4e4034;
        case 0x4e4038u: goto label_4e4038;
        case 0x4e403cu: goto label_4e403c;
        case 0x4e4040u: goto label_4e4040;
        case 0x4e4044u: goto label_4e4044;
        case 0x4e4048u: goto label_4e4048;
        case 0x4e404cu: goto label_4e404c;
        case 0x4e4050u: goto label_4e4050;
        case 0x4e4054u: goto label_4e4054;
        case 0x4e4058u: goto label_4e4058;
        case 0x4e405cu: goto label_4e405c;
        case 0x4e4060u: goto label_4e4060;
        case 0x4e4064u: goto label_4e4064;
        case 0x4e4068u: goto label_4e4068;
        case 0x4e406cu: goto label_4e406c;
        case 0x4e4070u: goto label_4e4070;
        case 0x4e4074u: goto label_4e4074;
        case 0x4e4078u: goto label_4e4078;
        case 0x4e407cu: goto label_4e407c;
        case 0x4e4080u: goto label_4e4080;
        case 0x4e4084u: goto label_4e4084;
        case 0x4e4088u: goto label_4e4088;
        case 0x4e408cu: goto label_4e408c;
        case 0x4e4090u: goto label_4e4090;
        case 0x4e4094u: goto label_4e4094;
        case 0x4e4098u: goto label_4e4098;
        case 0x4e409cu: goto label_4e409c;
        default: break;
    }

    ctx->pc = 0x4e3f60u;

label_4e3f60:
    // 0x4e3f60: 0x3e00008  jr          $ra
label_4e3f64:
    if (ctx->pc == 0x4E3F64u) {
        ctx->pc = 0x4E3F64u;
            // 0x4e3f64: 0x8c8200d0  lw          $v0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->pc = 0x4E3F68u;
        goto label_4e3f68;
    }
    ctx->pc = 0x4E3F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3F60u;
            // 0x4e3f64: 0x8c8200d0  lw          $v0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E3F68u;
label_4e3f68:
    // 0x4e3f68: 0x0  nop
    ctx->pc = 0x4e3f68u;
    // NOP
label_4e3f6c:
    // 0x4e3f6c: 0x0  nop
    ctx->pc = 0x4e3f6cu;
    // NOP
label_4e3f70:
    // 0x4e3f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e3f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e3f74:
    // 0x4e3f74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4e3f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e3f78:
    // 0x4e3f78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e3f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e3f7c:
    // 0x4e3f7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e3f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e3f80:
    // 0x4e3f80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e3f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e3f84:
    // 0x4e3f84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e3f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e3f88:
    // 0x4e3f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e3f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e3f8c:
    // 0x4e3f8c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4e3f8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e3f90:
    // 0x4e3f90: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4e3f94:
    if (ctx->pc == 0x4E3F94u) {
        ctx->pc = 0x4E3F94u;
            // 0x4e3f94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3F98u;
        goto label_4e3f98;
    }
    ctx->pc = 0x4E3F90u;
    {
        const bool branch_taken_0x4e3f90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E3F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3F90u;
            // 0x4e3f94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3f90) {
            ctx->pc = 0x4E3FC4u;
            goto label_4e3fc4;
        }
    }
    ctx->pc = 0x4E3F98u;
label_4e3f98:
    // 0x4e3f98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e3f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e3f9c:
    // 0x4e3f9c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4e3fa0:
    if (ctx->pc == 0x4E3FA0u) {
        ctx->pc = 0x4E3FA0u;
            // 0x4e3fa0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E3FA4u;
        goto label_4e3fa4;
    }
    ctx->pc = 0x4E3F9Cu;
    {
        const bool branch_taken_0x4e3f9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e3f9c) {
            ctx->pc = 0x4E3FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3F9Cu;
            // 0x4e3fa0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3FB8u;
            goto label_4e3fb8;
        }
    }
    ctx->pc = 0x4E3FA4u;
label_4e3fa4:
    // 0x4e3fa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e3fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e3fa8:
    // 0x4e3fa8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4e3fac:
    if (ctx->pc == 0x4E3FACu) {
        ctx->pc = 0x4E3FB0u;
        goto label_4e3fb0;
    }
    ctx->pc = 0x4E3FA8u;
    {
        const bool branch_taken_0x4e3fa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e3fa8) {
            ctx->pc = 0x4E3FF8u;
            goto label_4e3ff8;
        }
    }
    ctx->pc = 0x4E3FB0u;
label_4e3fb0:
    // 0x4e3fb0: 0x10000011  b           . + 4 + (0x11 << 2)
label_4e3fb4:
    if (ctx->pc == 0x4E3FB4u) {
        ctx->pc = 0x4E3FB8u;
        goto label_4e3fb8;
    }
    ctx->pc = 0x4E3FB0u;
    {
        const bool branch_taken_0x4e3fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3fb0) {
            ctx->pc = 0x4E3FF8u;
            goto label_4e3ff8;
        }
    }
    ctx->pc = 0x4E3FB8u;
label_4e3fb8:
    // 0x4e3fb8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4e3fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4e3fbc:
    // 0x4e3fbc: 0x320f809  jalr        $t9
label_4e3fc0:
    if (ctx->pc == 0x4E3FC0u) {
        ctx->pc = 0x4E3FC4u;
        goto label_4e3fc4;
    }
    ctx->pc = 0x4E3FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E3FC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E3FC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E3FC4u; }
            if (ctx->pc != 0x4E3FC4u) { return; }
        }
        }
    }
    ctx->pc = 0x4E3FC4u;
label_4e3fc4:
    // 0x4e3fc4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4e3fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4e3fc8:
    // 0x4e3fc8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_4e3fcc:
    if (ctx->pc == 0x4E3FCCu) {
        ctx->pc = 0x4E3FD0u;
        goto label_4e3fd0;
    }
    ctx->pc = 0x4E3FC8u;
    {
        const bool branch_taken_0x4e3fc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3fc8) {
            ctx->pc = 0x4E3FF8u;
            goto label_4e3ff8;
        }
    }
    ctx->pc = 0x4E3FD0u;
label_4e3fd0:
    // 0x4e3fd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e3fd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e3fd4:
    // 0x4e3fd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e3fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e3fd8:
    // 0x4e3fd8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4e3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4e3fdc:
    // 0x4e3fdc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4e3fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4e3fe0:
    // 0x4e3fe0: 0xc0e3658  jal         func_38D960
label_4e3fe4:
    if (ctx->pc == 0x4E3FE4u) {
        ctx->pc = 0x4E3FE4u;
            // 0x4e3fe4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4E3FE8u;
        goto label_4e3fe8;
    }
    ctx->pc = 0x4E3FE0u;
    SET_GPR_U32(ctx, 31, 0x4E3FE8u);
    ctx->pc = 0x4E3FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3FE0u;
            // 0x4e3fe4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3FE8u; }
        if (ctx->pc != 0x4E3FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3FE8u; }
        if (ctx->pc != 0x4E3FE8u) { return; }
    }
    ctx->pc = 0x4E3FE8u;
label_4e3fe8:
    // 0x4e3fe8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4e3fe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4e3fec:
    // 0x4e3fec: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4e3fecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4e3ff0:
    // 0x4e3ff0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4e3ff4:
    if (ctx->pc == 0x4E3FF4u) {
        ctx->pc = 0x4E3FF4u;
            // 0x4e3ff4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4E3FF8u;
        goto label_4e3ff8;
    }
    ctx->pc = 0x4E3FF0u;
    {
        const bool branch_taken_0x4e3ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E3FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3FF0u;
            // 0x4e3ff4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3ff0) {
            ctx->pc = 0x4E3FD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e3fd8;
        }
    }
    ctx->pc = 0x4E3FF8u;
label_4e3ff8:
    // 0x4e3ff8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e3ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e3ffc:
    // 0x4e3ffc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e3ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4000:
    // 0x4e4000: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e4000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e4004:
    // 0x4e4004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e4004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4008:
    // 0x4e4008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e4008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e400c:
    // 0x4e400c: 0x3e00008  jr          $ra
label_4e4010:
    if (ctx->pc == 0x4E4010u) {
        ctx->pc = 0x4E4010u;
            // 0x4e4010: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E4014u;
        goto label_4e4014;
    }
    ctx->pc = 0x4E400Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E400Cu;
            // 0x4e4010: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4014u;
label_4e4014:
    // 0x4e4014: 0x0  nop
    ctx->pc = 0x4e4014u;
    // NOP
label_4e4018:
    // 0x4e4018: 0x0  nop
    ctx->pc = 0x4e4018u;
    // NOP
label_4e401c:
    // 0x4e401c: 0x0  nop
    ctx->pc = 0x4e401cu;
    // NOP
label_4e4020:
    // 0x4e4020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e4020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e4024:
    // 0x4e4024: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e4024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e4028:
    // 0x4e4028: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e4028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e402c:
    // 0x4e402c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e4030:
    // 0x4e4030: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e4030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e4034:
    // 0x4e4034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e4034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e4038:
    // 0x4e4038: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4e4038u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e403c:
    // 0x4e403c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4e4040:
    if (ctx->pc == 0x4E4040u) {
        ctx->pc = 0x4E4040u;
            // 0x4e4040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4044u;
        goto label_4e4044;
    }
    ctx->pc = 0x4E403Cu;
    {
        const bool branch_taken_0x4e403c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E403Cu;
            // 0x4e4040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e403c) {
            ctx->pc = 0x4E4078u;
            goto label_4e4078;
        }
    }
    ctx->pc = 0x4E4044u;
label_4e4044:
    // 0x4e4044: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e4044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e4048:
    // 0x4e4048: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e4048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e404c:
    // 0x4e404c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4e404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4e4050:
    // 0x4e4050: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4e4050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4e4054:
    // 0x4e4054: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4e4054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e4058:
    // 0x4e4058: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e4058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e405c:
    // 0x4e405c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4e405cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4e4060:
    // 0x4e4060: 0x320f809  jalr        $t9
label_4e4064:
    if (ctx->pc == 0x4E4064u) {
        ctx->pc = 0x4E4068u;
        goto label_4e4068;
    }
    ctx->pc = 0x4E4060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E4068u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E4068u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E4068u; }
            if (ctx->pc != 0x4E4068u) { return; }
        }
        }
    }
    ctx->pc = 0x4E4068u;
label_4e4068:
    // 0x4e4068: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4e4068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4e406c:
    // 0x4e406c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4e406cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4e4070:
    // 0x4e4070: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4e4074:
    if (ctx->pc == 0x4E4074u) {
        ctx->pc = 0x4E4074u;
            // 0x4e4074: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4E4078u;
        goto label_4e4078;
    }
    ctx->pc = 0x4E4070u;
    {
        const bool branch_taken_0x4e4070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E4074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4070u;
            // 0x4e4074: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4070) {
            ctx->pc = 0x4E404Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e404c;
        }
    }
    ctx->pc = 0x4E4078u;
label_4e4078:
    // 0x4e4078: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e4078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e407c:
    // 0x4e407c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e407cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4080:
    // 0x4e4080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e4080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e4084:
    // 0x4e4084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e4084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4088:
    // 0x4e4088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e4088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e408c:
    // 0x4e408c: 0x3e00008  jr          $ra
label_4e4090:
    if (ctx->pc == 0x4E4090u) {
        ctx->pc = 0x4E4090u;
            // 0x4e4090: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E4094u;
        goto label_4e4094;
    }
    ctx->pc = 0x4E408Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E408Cu;
            // 0x4e4090: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4094u;
label_4e4094:
    // 0x4e4094: 0x0  nop
    ctx->pc = 0x4e4094u;
    // NOP
label_4e4098:
    // 0x4e4098: 0x0  nop
    ctx->pc = 0x4e4098u;
    // NOP
label_4e409c:
    // 0x4e409c: 0x0  nop
    ctx->pc = 0x4e409cu;
    // NOP
}
