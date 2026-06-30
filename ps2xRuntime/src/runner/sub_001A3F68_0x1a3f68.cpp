#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3F68
// Address: 0x1a3f68 - 0x1a4128
void sub_001A3F68_0x1a3f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3F68_0x1a3f68");
#endif

    switch (ctx->pc) {
        case 0x1a3f88u: goto label_1a3f88;
        case 0x1a3ffcu: goto label_1a3ffc;
        case 0x1a4010u: goto label_1a4010;
        case 0x1a4020u: goto label_1a4020;
        case 0x1a4060u: goto label_1a4060;
        case 0x1a40f0u: goto label_1a40f0;
        case 0x1a40fcu: goto label_1a40fc;
        case 0x1a4104u: goto label_1a4104;
        default: break;
    }

    ctx->pc = 0x1a3f68u;

    // 0x1a3f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3f6c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1a3f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1a3f70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3f74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a3f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3f7c: 0x8c912074  lw          $s1, 0x2074($a0)
    ctx->pc = 0x1a3f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8308)));
    // 0x1a3f80: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A3F80u;
    SET_GPR_U32(ctx, 31, 0x1A3F88u);
    ctx->pc = 0x1A3F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F80u;
            // 0x1a3f84: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F88u; }
        if (ctx->pc != 0x1A3F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F88u; }
        if (ctx->pc != 0x1A3F88u) { return; }
    }
    ctx->pc = 0x1A3F88u;
label_1a3f88:
    // 0x1a3f88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a3f88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f8c: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1a3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1a3f90: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a3f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f94: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3F94u;
    {
        const bool branch_taken_0x1a3f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A3F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F94u;
            // 0x1a3f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f94) {
            ctx->pc = 0x1A3FB8u;
            goto label_1a3fb8;
        }
    }
    ctx->pc = 0x1A3F9Cu;
    // 0x1a3f9c: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x1a3f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x1a3fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3fa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3fac: 0x805d0e4  j           func_174390
    ctx->pc = 0x1A3FACu;
    ctx->pc = 0x1A3FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3FACu;
            // 0x1a3fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174390u;
    if (runtime->hasFunction(0x174390u)) {
        auto targetFn = runtime->lookupFunction(0x174390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00174390_0x174390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A3FB4u;
    // 0x1a3fb4: 0x0  nop
    ctx->pc = 0x1a3fb4u;
    // NOP
label_1a3fb8:
    // 0x1a3fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3fbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3FC4u;
            // 0x1a3fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3FCCu;
    // 0x1a3fcc: 0x0  nop
    ctx->pc = 0x1a3fccu;
    // NOP
    // 0x1a3fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3fd4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a3fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a3fd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a3fdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3fe4: 0x26303620  addiu       $s0, $s1, 0x3620
    ctx->pc = 0x1a3fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13856));
    // 0x1a3fe8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a3fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a3fec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a3fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a3ff0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a3ff4: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A3FF4u;
    SET_GPR_U32(ctx, 31, 0x1A3FFCu);
    ctx->pc = 0x1A3FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3FF4u;
            // 0x1a3ff8: 0x26333618  addiu       $s3, $s1, 0x3618 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 13848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FFCu; }
        if (ctx->pc != 0x1A3FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FFCu; }
        if (ctx->pc != 0x1A3FFCu) { return; }
    }
    ctx->pc = 0x1A3FFCu;
label_1a3ffc:
    // 0x1a3ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4000: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1A4000u;
    {
        const bool branch_taken_0x1a4000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4000u;
            // 0x1a4004: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4000) {
            ctx->pc = 0x1A4108u;
            goto label_1a4108;
        }
    }
    ctx->pc = 0x1A4008u;
    // 0x1a4008: 0xc06904a  jal         func_1A4128
    ctx->pc = 0x1A4008u;
    SET_GPR_U32(ctx, 31, 0x1A4010u);
    ctx->pc = 0x1A400Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4008u;
            // 0x1a400c: 0xae332074  sw          $s3, 0x2074($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8308), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4128u;
    if (runtime->hasFunction(0x1A4128u)) {
        auto targetFn = runtime->lookupFunction(0x1A4128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4010u; }
        if (ctx->pc != 0x1A4010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4128_0x1a4128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4010u; }
        if (ctx->pc != 0x1A4010u) { return; }
    }
    ctx->pc = 0x1A4010u;
label_1a4010:
    // 0x1a4010: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1A4010u;
    {
        const bool branch_taken_0x1a4010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4010u;
            // 0x1a4014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4010) {
            ctx->pc = 0x1A4108u;
            goto label_1a4108;
        }
    }
    ctx->pc = 0x1A4018u;
    // 0x1a4018: 0xc0690b8  jal         func_1A42E0
    ctx->pc = 0x1A4018u;
    SET_GPR_U32(ctx, 31, 0x1A4020u);
    ctx->pc = 0x1A42E0u;
    if (runtime->hasFunction(0x1A42E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A42E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4020u; }
        if (ctx->pc != 0x1A4020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A42E0_0x1a42e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4020u; }
        if (ctx->pc != 0x1A4020u) { return; }
    }
    ctx->pc = 0x1A4020u;
label_1a4020:
    // 0x1a4020: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a4020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a4024: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a4024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4028: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a4028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a402c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A402Cu;
    {
        const bool branch_taken_0x1a402c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A402Cu;
            // 0x1a4030: 0x34a50c04  ori         $a1, $a1, 0xC04 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3076);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a402c) {
            ctx->pc = 0x1A4050u;
            goto label_1a4050;
        }
    }
    ctx->pc = 0x1A4034u;
    // 0x1a4034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a403c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a403cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4040: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a4040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a4044: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4048: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A4048u;
    ctx->pc = 0x1A404Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4048u;
            // 0x1a404c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A4050u;
label_1a4050:
    // 0x1a4050: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1a4050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4054: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a4054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a4058: 0xc06156e  jal         func_1855B8
    ctx->pc = 0x1A4058u;
    SET_GPR_U32(ctx, 31, 0x1A4060u);
    ctx->pc = 0x1A405Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4058u;
            // 0x1a405c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1855B8u;
    if (runtime->hasFunction(0x1855B8u)) {
        auto targetFn = runtime->lookupFunction(0x1855B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4060u; }
        if (ctx->pc != 0x1A4060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001855B8_0x1855b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4060u; }
        if (ctx->pc != 0x1A4060u) { return; }
    }
    ctx->pc = 0x1A4060u;
label_1a4060:
    // 0x1a4060: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a4060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4064: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1a4064u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4068: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a4068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a406c: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a406cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x1a4070: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a4070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a4074: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a4074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a4078: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x1a4078u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x1a407c: 0x24ab2f58  addiu       $t3, $a1, 0x2F58
    ctx->pc = 0x1a407cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 12120));
    // 0x1a4080: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1a4080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4084: 0x262836cc  addiu       $t0, $s1, 0x36CC
    ctx->pc = 0x1a4084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 14028));
    // 0x1a4088: 0x244a2f18  addiu       $t2, $v0, 0x2F18
    ctx->pc = 0x1a4088u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 12056));
    // 0x1a408c: 0x24632f38  addiu       $v1, $v1, 0x2F38
    ctx->pc = 0x1a408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12088));
    // 0x1a4090: 0x24c62f78  addiu       $a2, $a2, 0x2F78
    ctx->pc = 0x1a4090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12152));
    // 0x1a4094: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A4094u;
    {
        const bool branch_taken_0x1a4094 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4094u;
            // 0x1a4098: 0x24e72f98  addiu       $a3, $a3, 0x2F98 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4094) {
            ctx->pc = 0x1A40C0u;
            goto label_1a40c0;
        }
    }
    ctx->pc = 0x1A409Cu;
    // 0x1a409c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a409cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a40a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a40a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a40a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a40a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a40a8: 0x34a50c05  ori         $a1, $a1, 0xC05
    ctx->pc = 0x1a40a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3077);
    // 0x1a40ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a40acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a40b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a40b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a40b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a40b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a40b8: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A40B8u;
    ctx->pc = 0x1A40BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A40B8u;
            // 0x1a40bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A40C0u;
label_1a40c0:
    // 0x1a40c0: 0xae690004  sw          $t1, 0x4($s3)
    ctx->pc = 0x1a40c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 9));
    // 0x1a40c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a40c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a40c8: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x1a40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x1a40cc: 0xae282184  sw          $t0, 0x2184($s1)
    ctx->pc = 0x1a40ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8580), GPR_U32(ctx, 8));
    // 0x1a40d0: 0xad070014  sw          $a3, 0x14($t0)
    ctx->pc = 0x1a40d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x1a40d4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1a40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1a40d8: 0xad0a0004  sw          $t2, 0x4($t0)
    ctx->pc = 0x1a40d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 10));
    // 0x1a40dc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1a40dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1a40e0: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1a40e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1a40e4: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x1a40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x1a40e8: 0xc05cc1e  jal         func_173078
    ctx->pc = 0x1A40E8u;
    SET_GPR_U32(ctx, 31, 0x1A40F0u);
    ctx->pc = 0x1A40ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A40E8u;
            // 0x1a40ec: 0xad060010  sw          $a2, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173078u;
    if (runtime->hasFunction(0x173078u)) {
        auto targetFn = runtime->lookupFunction(0x173078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A40F0u; }
        if (ctx->pc != 0x1A40F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173078_0x173078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A40F0u; }
        if (ctx->pc != 0x1A40F0u) { return; }
    }
    ctx->pc = 0x1A40F0u;
label_1a40f0:
    // 0x1a40f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a40f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a40f4: 0xc0691d4  jal         func_1A4750
    ctx->pc = 0x1A40F4u;
    SET_GPR_U32(ctx, 31, 0x1A40FCu);
    ctx->pc = 0x1A40F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A40F4u;
            // 0x1a40f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4750u;
    if (runtime->hasFunction(0x1A4750u)) {
        auto targetFn = runtime->lookupFunction(0x1A4750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A40FCu; }
        if (ctx->pc != 0x1A40FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4750_0x1a4750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A40FCu; }
        if (ctx->pc != 0x1A40FCu) { return; }
    }
    ctx->pc = 0x1A40FCu;
label_1a40fc:
    // 0x1a40fc: 0xc0690d8  jal         func_1A4360
    ctx->pc = 0x1A40FCu;
    SET_GPR_U32(ctx, 31, 0x1A4104u);
    ctx->pc = 0x1A4100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A40FCu;
            // 0x1a4100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4360u;
    if (runtime->hasFunction(0x1A4360u)) {
        auto targetFn = runtime->lookupFunction(0x1A4360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4104u; }
        if (ctx->pc != 0x1A4104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4360_0x1a4360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4104u; }
        if (ctx->pc != 0x1A4104u) { return; }
    }
    ctx->pc = 0x1A4104u;
label_1a4104:
    // 0x1a4104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4108:
    // 0x1a4108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a410c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a410cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4110: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a4110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4114: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a4114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a4118: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a411c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A411Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A411Cu;
            // 0x1a4120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4124u;
    // 0x1a4124: 0x0  nop
    ctx->pc = 0x1a4124u;
    // NOP
}
