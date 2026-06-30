#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5558
// Address: 0x1b5558 - 0x1b55e8
void sub_001B5558_0x1b5558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5558_0x1b5558");
#endif

    switch (ctx->pc) {
        case 0x1b5568u: goto label_1b5568;
        case 0x1b5598u: goto label_1b5598;
        case 0x1b55ccu: goto label_1b55cc;
        default: break;
    }

    ctx->pc = 0x1b5558u;

    // 0x1b5558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b555c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5560: 0xc06e388  jal         func_1B8E20
    ctx->pc = 0x1B5560u;
    SET_GPR_U32(ctx, 31, 0x1B5568u);
    ctx->pc = 0x1B5564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5560u;
            // 0x1b5564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E20u;
    if (runtime->hasFunction(0x1B8E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5568u; }
        if (ctx->pc != 0x1B5568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E20_0x1b8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5568u; }
        if (ctx->pc != 0x1B5568u) { return; }
    }
    ctx->pc = 0x1B5568u;
label_1b5568:
    // 0x1b5568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b556c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b556cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b5570: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5570u;
            // 0x1b5574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5578u;
    // 0x1b5578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b557c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5580: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b5580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5584: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5588: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b558c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b558cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5590: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B5590u;
    SET_GPR_U32(ctx, 31, 0x1B5598u);
    ctx->pc = 0x1B5594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5590u;
            // 0x1b5594: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5598u; }
        if (ctx->pc != 0x1B5598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5598u; }
        if (ctx->pc != 0x1B5598u) { return; }
    }
    ctx->pc = 0x1B5598u;
label_1b5598:
    // 0x1b5598: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b5598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b559c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B559Cu;
    {
        const bool branch_taken_0x1b559c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B559Cu;
            // 0x1b55a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b559c) {
            ctx->pc = 0x1B55C0u;
            goto label_1b55c0;
        }
    }
    ctx->pc = 0x1B55A4u;
    // 0x1b55a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b55a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b55a8: 0x34a50155  ori         $a1, $a1, 0x155
    ctx->pc = 0x1b55a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)341);
    // 0x1b55ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b55acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b55b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b55b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b55b4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B55B4u;
    ctx->pc = 0x1B55B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55B4u;
            // 0x1b55b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B55BCu;
    // 0x1b55bc: 0x0  nop
    ctx->pc = 0x1b55bcu;
    // NOP
label_1b55c0:
    // 0x1b55c0: 0x8e243720  lw          $a0, 0x3720($s1)
    ctx->pc = 0x1b55c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14112)));
    // 0x1b55c4: 0xc06d57a  jal         func_1B55E8
    ctx->pc = 0x1B55C4u;
    SET_GPR_U32(ctx, 31, 0x1B55CCu);
    ctx->pc = 0x1B55C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55C4u;
            // 0x1b55c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B55E8u;
    if (runtime->hasFunction(0x1B55E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B55E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55CCu; }
        if (ctx->pc != 0x1B55CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55E8_0x1b55e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B55CCu; }
        if (ctx->pc != 0x1B55CCu) { return; }
    }
    ctx->pc = 0x1B55CCu;
label_1b55cc:
    // 0x1b55cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b55ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b55d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b55d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b55d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b55d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b55d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b55dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B55DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B55E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55DCu;
            // 0x1b55e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B55E4u;
    // 0x1b55e4: 0x0  nop
    ctx->pc = 0x1b55e4u;
    // NOP
}
