#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F3FB0
// Address: 0x3f3fb0 - 0x3f4080
void sub_003F3FB0_0x3f3fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3FB0_0x3f3fb0");
#endif

    switch (ctx->pc) {
        case 0x3f3fb0u: goto label_3f3fb0;
        case 0x3f3fb4u: goto label_3f3fb4;
        case 0x3f3fb8u: goto label_3f3fb8;
        case 0x3f3fbcu: goto label_3f3fbc;
        case 0x3f3fc0u: goto label_3f3fc0;
        case 0x3f3fc4u: goto label_3f3fc4;
        case 0x3f3fc8u: goto label_3f3fc8;
        case 0x3f3fccu: goto label_3f3fcc;
        case 0x3f3fd0u: goto label_3f3fd0;
        case 0x3f3fd4u: goto label_3f3fd4;
        case 0x3f3fd8u: goto label_3f3fd8;
        case 0x3f3fdcu: goto label_3f3fdc;
        case 0x3f3fe0u: goto label_3f3fe0;
        case 0x3f3fe4u: goto label_3f3fe4;
        case 0x3f3fe8u: goto label_3f3fe8;
        case 0x3f3fecu: goto label_3f3fec;
        case 0x3f3ff0u: goto label_3f3ff0;
        case 0x3f3ff4u: goto label_3f3ff4;
        case 0x3f3ff8u: goto label_3f3ff8;
        case 0x3f3ffcu: goto label_3f3ffc;
        case 0x3f4000u: goto label_3f4000;
        case 0x3f4004u: goto label_3f4004;
        case 0x3f4008u: goto label_3f4008;
        case 0x3f400cu: goto label_3f400c;
        case 0x3f4010u: goto label_3f4010;
        case 0x3f4014u: goto label_3f4014;
        case 0x3f4018u: goto label_3f4018;
        case 0x3f401cu: goto label_3f401c;
        case 0x3f4020u: goto label_3f4020;
        case 0x3f4024u: goto label_3f4024;
        case 0x3f4028u: goto label_3f4028;
        case 0x3f402cu: goto label_3f402c;
        case 0x3f4030u: goto label_3f4030;
        case 0x3f4034u: goto label_3f4034;
        case 0x3f4038u: goto label_3f4038;
        case 0x3f403cu: goto label_3f403c;
        case 0x3f4040u: goto label_3f4040;
        case 0x3f4044u: goto label_3f4044;
        case 0x3f4048u: goto label_3f4048;
        case 0x3f404cu: goto label_3f404c;
        case 0x3f4050u: goto label_3f4050;
        case 0x3f4054u: goto label_3f4054;
        case 0x3f4058u: goto label_3f4058;
        case 0x3f405cu: goto label_3f405c;
        case 0x3f4060u: goto label_3f4060;
        case 0x3f4064u: goto label_3f4064;
        case 0x3f4068u: goto label_3f4068;
        case 0x3f406cu: goto label_3f406c;
        case 0x3f4070u: goto label_3f4070;
        case 0x3f4074u: goto label_3f4074;
        case 0x3f4078u: goto label_3f4078;
        case 0x3f407cu: goto label_3f407c;
        default: break;
    }

    ctx->pc = 0x3f3fb0u;

label_3f3fb0:
    // 0x3f3fb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f3fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3f3fb4:
    // 0x3f3fb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f3fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f3fb8:
    // 0x3f3fb8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f3fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f3fbc:
    // 0x3f3fbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f3fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f3fc0:
    // 0x3f3fc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f3fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f3fc4:
    // 0x3f3fc4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3f3fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f3fc8:
    // 0x3f3fc8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3f3fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f3fcc:
    // 0x3f3fcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f3fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f3fd0:
    // 0x3f3fd0: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x3f3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3f3fd4:
    // 0x3f3fd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f3fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f3fd8:
    // 0x3f3fd8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x3f3fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_3f3fdc:
    // 0x3f3fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f3fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f3fe0:
    // 0x3f3fe0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3f3fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3f3fe4:
    // 0x3f3fe4: 0x943021  addu        $a2, $a0, $s4
    ctx->pc = 0x3f3fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_3f3fe8:
    // 0x3f3fe8: 0x8cc50074  lw          $a1, 0x74($a2)
    ctx->pc = 0x3f3fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3f3fec:
    // 0x3f3fec: 0x8cd20070  lw          $s2, 0x70($a2)
    ctx->pc = 0x3f3fecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
label_3f3ff0:
    // 0x3f3ff0: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
label_3f3ff4:
    if (ctx->pc == 0x3F3FF4u) {
        ctx->pc = 0x3F3FF4u;
            // 0x3f3ff4: 0x24d00074  addiu       $s0, $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 116));
        ctx->pc = 0x3F3FF8u;
        goto label_3f3ff8;
    }
    ctx->pc = 0x3F3FF0u;
    {
        const bool branch_taken_0x3f3ff0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F3FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3FF0u;
            // 0x3f3ff4: 0x24d00074  addiu       $s0, $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3ff0) {
            ctx->pc = 0x3F4060u;
            goto label_3f4060;
        }
    }
    ctx->pc = 0x3F3FF8u;
label_3f3ff8:
    // 0x3f3ff8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3f3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3f3ffc:
    // 0x3f3ffc: 0x52430019  beql        $s2, $v1, . + 4 + (0x19 << 2)
label_3f4000:
    if (ctx->pc == 0x3F4000u) {
        ctx->pc = 0x3F4000u;
            // 0x3f4000: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3F4004u;
        goto label_3f4004;
    }
    ctx->pc = 0x3F3FFCu;
    {
        const bool branch_taken_0x3f3ffc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3ffc) {
            ctx->pc = 0x3F4000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3FFCu;
            // 0x3f4000: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4064u;
            goto label_3f4064;
        }
    }
    ctx->pc = 0x3F4004u;
label_3f4004:
    // 0x3f4004: 0x8cc40060  lw          $a0, 0x60($a2)
    ctx->pc = 0x3f4004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
label_3f4008:
    // 0x3f4008: 0x8cc3005c  lw          $v1, 0x5C($a2)
    ctx->pc = 0x3f4008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_3f400c:
    // 0x3f400c: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_3f4010:
    if (ctx->pc == 0x3F4010u) {
        ctx->pc = 0x3F4010u;
            // 0x3f4010: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4014u;
        goto label_3f4014;
    }
    ctx->pc = 0x3F400Cu;
    {
        const bool branch_taken_0x3f400c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F4010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F400Cu;
            // 0x3f4010: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f400c) {
            ctx->pc = 0x3F4018u;
            goto label_3f4018;
        }
    }
    ctx->pc = 0x3F4014u;
label_3f4014:
    // 0x3f4014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f4014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f4018:
    // 0x3f4018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f401c:
    // 0x3f401c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3f4020:
    if (ctx->pc == 0x3F4020u) {
        ctx->pc = 0x3F4024u;
        goto label_3f4024;
    }
    ctx->pc = 0x3F401Cu;
    {
        const bool branch_taken_0x3f401c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f401c) {
            ctx->pc = 0x3F4060u;
            goto label_3f4060;
        }
    }
    ctx->pc = 0x3F4024u;
label_3f4024:
    // 0x3f4024: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f4024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f4028:
    // 0x3f4028: 0xc0fd080  jal         func_3F4200
label_3f402c:
    if (ctx->pc == 0x3F402Cu) {
        ctx->pc = 0x3F402Cu;
            // 0x3f402c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4030u;
        goto label_3f4030;
    }
    ctx->pc = 0x3F4028u;
    SET_GPR_U32(ctx, 31, 0x3F4030u);
    ctx->pc = 0x3F402Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4028u;
            // 0x3f402c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4030u; }
        if (ctx->pc != 0x3F4030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4030u; }
        if (ctx->pc != 0x3F4030u) { return; }
    }
    ctx->pc = 0x3F4030u;
label_3f4030:
    // 0x3f4030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f4030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4034:
    // 0x3f4034: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3f4034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f4038:
    // 0x3f4038: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3f4038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3f403c:
    // 0x3f403c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3f403cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f4040:
    // 0x3f4040: 0x8e8203a0  lw          $v0, 0x3A0($s4)
    ctx->pc = 0x3f4040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 928)));
label_3f4044:
    // 0x3f4044: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3f4044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f4048:
    // 0x3f4048: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3f4048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f404c:
    // 0x3f404c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3f404cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3f4050:
    // 0x3f4050: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f4050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f4054:
    // 0x3f4054: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f4054u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4058:
    // 0x3f4058: 0x40f809  jalr        $v0
label_3f405c:
    if (ctx->pc == 0x3F405Cu) {
        ctx->pc = 0x3F405Cu;
            // 0x3f405c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4060u;
        goto label_3f4060;
    }
    ctx->pc = 0x3F4058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F4060u);
        ctx->pc = 0x3F405Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4058u;
            // 0x3f405c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F4060u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F4060u; }
            if (ctx->pc != 0x3F4060u) { return; }
        }
        }
    }
    ctx->pc = 0x3F4060u;
label_3f4060:
    // 0x3f4060: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f4060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f4064:
    // 0x3f4064: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f4064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f4068:
    // 0x3f4068: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f4068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f406c:
    // 0x3f406c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f406cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f4070:
    // 0x3f4070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f4070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f4074:
    // 0x3f4074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f4074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f4078:
    // 0x3f4078: 0x3e00008  jr          $ra
label_3f407c:
    if (ctx->pc == 0x3F407Cu) {
        ctx->pc = 0x3F407Cu;
            // 0x3f407c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F4080u;
        goto label_fallthrough_0x3f4078;
    }
    ctx->pc = 0x3F4078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4078u;
            // 0x3f407c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f4078:
    ctx->pc = 0x3F4080u;
}
