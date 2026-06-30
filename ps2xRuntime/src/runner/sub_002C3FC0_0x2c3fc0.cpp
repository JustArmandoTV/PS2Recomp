#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C3FC0
// Address: 0x2c3fc0 - 0x2c4100
void sub_002C3FC0_0x2c3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3FC0_0x2c3fc0");
#endif

    switch (ctx->pc) {
        case 0x2c3fdcu: goto label_2c3fdc;
        case 0x2c3ff4u: goto label_2c3ff4;
        case 0x2c3ffcu: goto label_2c3ffc;
        case 0x2c4030u: goto label_2c4030;
        case 0x2c4090u: goto label_2c4090;
        case 0x2c409cu: goto label_2c409c;
        case 0x2c40a8u: goto label_2c40a8;
        case 0x2c40b4u: goto label_2c40b4;
        case 0x2c40c0u: goto label_2c40c0;
        case 0x2c40ccu: goto label_2c40cc;
        case 0x2c40e4u: goto label_2c40e4;
        default: break;
    }

    ctx->pc = 0x2c3fc0u;

    // 0x2c3fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c3fc4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c3fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c3fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c3fcc: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x2c3fccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x2c3fd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3fd4: 0xc0b1110  jal         func_2C4440
    ctx->pc = 0x2C3FD4u;
    SET_GPR_U32(ctx, 31, 0x2C3FDCu);
    ctx->pc = 0x2C3FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3FD4u;
            // 0x2c3fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4440u;
    if (runtime->hasFunction(0x2C4440u)) {
        auto targetFn = runtime->lookupFunction(0x2C4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FDCu; }
        if (ctx->pc != 0x2C3FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4440_0x2c4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FDCu; }
        if (ctx->pc != 0x2C3FDCu) { return; }
    }
    ctx->pc = 0x2C3FDCu;
label_2c3fdc:
    // 0x2c3fdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c3fe0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c3fe4: 0x246310c0  addiu       $v1, $v1, 0x10C0
    ctx->pc = 0x2c3fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4288));
    // 0x2c3fe8: 0x244210f8  addiu       $v0, $v0, 0x10F8
    ctx->pc = 0x2c3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4344));
    // 0x2c3fec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c3fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c3ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3ff4:
    // 0x2c3ff4: 0xc0b110c  jal         func_2C4430
    ctx->pc = 0x2C3FF4u;
    SET_GPR_U32(ctx, 31, 0x2C3FFCu);
    ctx->pc = 0x2C3FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3FF4u;
            // 0x2c3ff8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4430u;
    if (runtime->hasFunction(0x2C4430u)) {
        auto targetFn = runtime->lookupFunction(0x2C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FFCu; }
        if (ctx->pc != 0x2C3FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4430_0x2c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FFCu; }
        if (ctx->pc != 0x2C3FFCu) { return; }
    }
    ctx->pc = 0x2C3FFCu;
label_2c3ffc:
    // 0x2c3ffc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c3ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c4000: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c4000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c4004: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x2c4004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
    // 0x2c4008: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c4008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c400c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c400cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c4010: 0x24425728  addiu       $v0, $v0, 0x5728
    ctx->pc = 0x2c4010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22312));
    // 0x2c4014: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c4014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c4018: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c4018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c401c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c401cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4024: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4024u;
            // 0x2c4028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C402Cu;
    // 0x2c402c: 0x0  nop
    ctx->pc = 0x2c402cu;
    // NOP
label_2c4030:
    // 0x2c4030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c4034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c4038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c403c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c403cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4044: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C4044u;
    {
        const bool branch_taken_0x2c4044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4044u;
            // 0x2c4048: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4044) {
            ctx->pc = 0x2C40E4u;
            goto label_2c40e4;
        }
    }
    ctx->pc = 0x2C404Cu;
    // 0x2c404c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c404cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c4050: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c4054: 0x246310c0  addiu       $v1, $v1, 0x10C0
    ctx->pc = 0x2c4054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4288));
    // 0x2c4058: 0x244210f8  addiu       $v0, $v0, 0x10F8
    ctx->pc = 0x2c4058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4344));
    // 0x2c405c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c405cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c4060: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C4060u;
    {
        const bool branch_taken_0x2c4060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4060u;
            // 0x2c4064: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4060) {
            ctx->pc = 0x2C40CCu;
            goto label_2c40cc;
        }
    }
    ctx->pc = 0x2C4068u;
    // 0x2c4068: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c406c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c406cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c4070: 0x24631070  addiu       $v1, $v1, 0x1070
    ctx->pc = 0x2c4070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4208));
    // 0x2c4074: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c4074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c4078: 0x244210a8  addiu       $v0, $v0, 0x10A8
    ctx->pc = 0x2c4078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4264));
    // 0x2c407c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c407cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c4080: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c4080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c4084: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c4084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c4088: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C4088u;
    SET_GPR_U32(ctx, 31, 0x2C4090u);
    ctx->pc = 0x2C408Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4088u;
            // 0x2c408c: 0x24a541d0  addiu       $a1, $a1, 0x41D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4090u; }
        if (ctx->pc != 0x2C4090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4090u; }
        if (ctx->pc != 0x2C4090u) { return; }
    }
    ctx->pc = 0x2C4090u;
label_2c4090:
    // 0x2c4090: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c4090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c4094: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x2C4094u;
    SET_GPR_U32(ctx, 31, 0x2C409Cu);
    ctx->pc = 0x2C4098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4094u;
            // 0x2c4098: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C409Cu; }
        if (ctx->pc != 0x2C409Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C409Cu; }
        if (ctx->pc != 0x2C409Cu) { return; }
    }
    ctx->pc = 0x2C409Cu;
label_2c409c:
    // 0x2c409c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c409cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c40a0: 0xc0b1058  jal         func_2C4160
    ctx->pc = 0x2C40A0u;
    SET_GPR_U32(ctx, 31, 0x2C40A8u);
    ctx->pc = 0x2C40A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40A0u;
            // 0x2c40a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4160u;
    if (runtime->hasFunction(0x2C4160u)) {
        auto targetFn = runtime->lookupFunction(0x2C4160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40A8u; }
        if (ctx->pc != 0x2C40A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4160_0x2c4160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40A8u; }
        if (ctx->pc != 0x2C40A8u) { return; }
    }
    ctx->pc = 0x2C40A8u;
label_2c40a8:
    // 0x2c40a8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c40a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c40ac: 0xc0b1058  jal         func_2C4160
    ctx->pc = 0x2C40ACu;
    SET_GPR_U32(ctx, 31, 0x2C40B4u);
    ctx->pc = 0x2C40B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40ACu;
            // 0x2c40b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4160u;
    if (runtime->hasFunction(0x2C4160u)) {
        auto targetFn = runtime->lookupFunction(0x2C4160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40B4u; }
        if (ctx->pc != 0x2C40B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4160_0x2c4160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40B4u; }
        if (ctx->pc != 0x2C40B4u) { return; }
    }
    ctx->pc = 0x2C40B4u;
label_2c40b4:
    // 0x2c40b4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c40b8: 0xc0b1040  jal         func_2C4100
    ctx->pc = 0x2C40B8u;
    SET_GPR_U32(ctx, 31, 0x2C40C0u);
    ctx->pc = 0x2C40BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40B8u;
            // 0x2c40bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4100u;
    if (runtime->hasFunction(0x2C4100u)) {
        auto targetFn = runtime->lookupFunction(0x2C4100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40C0u; }
        if (ctx->pc != 0x2C40C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4100_0x2c4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40C0u; }
        if (ctx->pc != 0x2C40C0u) { return; }
    }
    ctx->pc = 0x2C40C0u;
label_2c40c0:
    // 0x2c40c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c40c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40c4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C40C4u;
    SET_GPR_U32(ctx, 31, 0x2C40CCu);
    ctx->pc = 0x2C40C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40C4u;
            // 0x2c40c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40CCu; }
        if (ctx->pc != 0x2C40CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40CCu; }
        if (ctx->pc != 0x2C40CCu) { return; }
    }
    ctx->pc = 0x2C40CCu;
label_2c40cc:
    // 0x2c40cc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c40ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c40d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c40d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c40d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C40D4u;
    {
        const bool branch_taken_0x2c40d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c40d4) {
            ctx->pc = 0x2C40D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40D4u;
            // 0x2c40d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C40E8u;
            goto label_2c40e8;
        }
    }
    ctx->pc = 0x2C40DCu;
    // 0x2c40dc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C40DCu;
    SET_GPR_U32(ctx, 31, 0x2C40E4u);
    ctx->pc = 0x2C40E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40DCu;
            // 0x2c40e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40E4u; }
        if (ctx->pc != 0x2C40E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40E4u; }
        if (ctx->pc != 0x2C40E4u) { return; }
    }
    ctx->pc = 0x2C40E4u;
label_2c40e4:
    // 0x2c40e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c40e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c40e8:
    // 0x2c40e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c40e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c40ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c40ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c40f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c40f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c40f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C40F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C40F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40F4u;
            // 0x2c40f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C40FCu;
    // 0x2c40fc: 0x0  nop
    ctx->pc = 0x2c40fcu;
    // NOP
}
