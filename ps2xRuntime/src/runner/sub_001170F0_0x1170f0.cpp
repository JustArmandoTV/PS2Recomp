#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001170F0
// Address: 0x1170f0 - 0x117200
void sub_001170F0_0x1170f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001170F0_0x1170f0");
#endif

    switch (ctx->pc) {
        case 0x117104u: goto label_117104;
        case 0x117130u: goto label_117130;
        case 0x11714cu: goto label_11714c;
        case 0x117154u: goto label_117154;
        case 0x11715cu: goto label_11715c;
        case 0x11716cu: goto label_11716c;
        case 0x117194u: goto label_117194;
        case 0x1171c0u: goto label_1171c0;
        case 0x1171d8u: goto label_1171d8;
        case 0x1171e8u: goto label_1171e8;
        default: break;
    }

    ctx->pc = 0x1170f0u;

    // 0x1170f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1170f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1170f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1170f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1170f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1170f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1170fc: 0xc045968  jal         func_1165A0
    ctx->pc = 0x1170FCu;
    SET_GPR_U32(ctx, 31, 0x117104u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117104u; }
        if (ctx->pc != 0x117104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117104u; }
        if (ctx->pc != 0x117104u) { return; }
    }
    ctx->pc = 0x117104u;
label_117104:
    // 0x117104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117108: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11710c: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x11710cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x117110: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x117110u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x117114: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x117114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x117118: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x117118u;
    {
        const bool branch_taken_0x117118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x117118) {
            ctx->pc = 0x117138u;
            goto label_117138;
        }
    }
    ctx->pc = 0x117120u;
    // 0x117120: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x117120u;
    {
        const bool branch_taken_0x117120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117120u;
            // 0x117124: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117120) {
            ctx->pc = 0x117170u;
            goto label_117170;
        }
    }
    ctx->pc = 0x117128u;
    // 0x117128: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x117128u;
    SET_GPR_U32(ctx, 31, 0x117130u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117130u; }
        if (ctx->pc != 0x117130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117130u; }
        if (ctx->pc != 0x117130u) { return; }
    }
    ctx->pc = 0x117130u;
label_117130:
    // 0x117130: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x117130u;
    {
        const bool branch_taken_0x117130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117130u;
            // 0x117134: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117130) {
            ctx->pc = 0x117170u;
            goto label_117170;
        }
    }
    ctx->pc = 0x117138u;
label_117138:
    // 0x117138: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x117138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x11713c: 0x3484f3ff  ori         $a0, $a0, 0xF3FF
    ctx->pc = 0x11713cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62463);
    // 0x117140: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x117140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x117144: 0xc045ba4  jal         func_116E90
    ctx->pc = 0x117144u;
    SET_GPR_U32(ctx, 31, 0x11714Cu);
    ctx->pc = 0x117148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117144u;
            // 0x117148: 0x34840080  ori         $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E90u;
    if (runtime->hasFunction(0x116E90u)) {
        auto targetFn = runtime->lookupFunction(0x116E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11714Cu; }
        if (ctx->pc != 0x11714Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E90_0x116e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11714Cu; }
        if (ctx->pc != 0x11714Cu) { return; }
    }
    ctx->pc = 0x11714Cu;
label_11714c:
    // 0x11714c: 0xc045dc2  jal         func_117708
    ctx->pc = 0x11714Cu;
    SET_GPR_U32(ctx, 31, 0x117154u);
    ctx->pc = 0x117708u;
    if (runtime->hasFunction(0x117708u)) {
        auto targetFn = runtime->lookupFunction(0x117708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117154u; }
        if (ctx->pc != 0x117154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117708_0x117708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117154u; }
        if (ctx->pc != 0x117154u) { return; }
    }
    ctx->pc = 0x117154u;
label_117154:
    // 0x117154: 0xc045c80  jal         func_117200
    ctx->pc = 0x117154u;
    SET_GPR_U32(ctx, 31, 0x11715Cu);
    ctx->pc = 0x117158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117154u;
            // 0x117158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11715Cu; }
        if (ctx->pc != 0x11715Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117200_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11715Cu; }
        if (ctx->pc != 0x11715Cu) { return; }
    }
    ctx->pc = 0x11715Cu;
label_11715c:
    // 0x11715c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11715Cu;
    {
        const bool branch_taken_0x11715c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11715Cu;
            // 0x117160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11715c) {
            ctx->pc = 0x117170u;
            goto label_117170;
        }
    }
    ctx->pc = 0x117164u;
    // 0x117164: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x117164u;
    SET_GPR_U32(ctx, 31, 0x11716Cu);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11716Cu; }
        if (ctx->pc != 0x11716Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11716Cu; }
        if (ctx->pc != 0x11716Cu) { return; }
    }
    ctx->pc = 0x11716Cu;
label_11716c:
    // 0x11716c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11716cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117170:
    // 0x117170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117178: 0x3e00008  jr          $ra
    ctx->pc = 0x117178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11717Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117178u;
            // 0x11717c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117180u;
    // 0x117180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11718c: 0xc045968  jal         func_1165A0
    ctx->pc = 0x11718Cu;
    SET_GPR_U32(ctx, 31, 0x117194u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117194u; }
        if (ctx->pc != 0x117194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117194u; }
        if (ctx->pc != 0x117194u) { return; }
    }
    ctx->pc = 0x117194u;
label_117194:
    // 0x117194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117198: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11719c: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x11719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x1171a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1171a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1171a4: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x1171a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1171a8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1171A8u;
    {
        const bool branch_taken_0x1171a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1171a8) {
            ctx->pc = 0x1171C8u;
            goto label_1171c8;
        }
    }
    ctx->pc = 0x1171B0u;
    // 0x1171b0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1171B0u;
    {
        const bool branch_taken_0x1171b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1171B0u;
            // 0x1171b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171b0) {
            ctx->pc = 0x1171ECu;
            goto label_1171ec;
        }
    }
    ctx->pc = 0x1171B8u;
    // 0x1171b8: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x1171B8u;
    SET_GPR_U32(ctx, 31, 0x1171C0u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171C0u; }
        if (ctx->pc != 0x1171C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171C0u; }
        if (ctx->pc != 0x1171C0u) { return; }
    }
    ctx->pc = 0x1171C0u;
label_1171c0:
    // 0x1171c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1171C0u;
    {
        const bool branch_taken_0x1171c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1171C0u;
            // 0x1171c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171c0) {
            ctx->pc = 0x1171ECu;
            goto label_1171ec;
        }
    }
    ctx->pc = 0x1171C8u;
label_1171c8:
    // 0x1171c8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1171c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1171cc: 0x3484f37f  ori         $a0, $a0, 0xF37F
    ctx->pc = 0x1171ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62335);
    // 0x1171d0: 0xc045ba4  jal         func_116E90
    ctx->pc = 0x1171D0u;
    SET_GPR_U32(ctx, 31, 0x1171D8u);
    ctx->pc = 0x1171D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1171D0u;
            // 0x1171d4: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E90u;
    if (runtime->hasFunction(0x116E90u)) {
        auto targetFn = runtime->lookupFunction(0x116E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171D8u; }
        if (ctx->pc != 0x1171D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E90_0x116e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171D8u; }
        if (ctx->pc != 0x1171D8u) { return; }
    }
    ctx->pc = 0x1171D8u;
label_1171d8:
    // 0x1171d8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1171D8u;
    {
        const bool branch_taken_0x1171d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1171D8u;
            // 0x1171dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171d8) {
            ctx->pc = 0x1171ECu;
            goto label_1171ec;
        }
    }
    ctx->pc = 0x1171E0u;
    // 0x1171e0: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x1171E0u;
    SET_GPR_U32(ctx, 31, 0x1171E8u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171E8u; }
        if (ctx->pc != 0x1171E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171E8u; }
        if (ctx->pc != 0x1171E8u) { return; }
    }
    ctx->pc = 0x1171E8u;
label_1171e8:
    // 0x1171e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1171e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1171ec:
    // 0x1171ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1171ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1171f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1171f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1171f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1171F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1171F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1171F4u;
            // 0x1171f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1171FCu;
    // 0x1171fc: 0x0  nop
    ctx->pc = 0x1171fcu;
    // NOP
}
