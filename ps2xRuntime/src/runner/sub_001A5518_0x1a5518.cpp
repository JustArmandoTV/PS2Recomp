#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5518
// Address: 0x1a5518 - 0x1a5610
void sub_001A5518_0x1a5518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5518_0x1a5518");
#endif

    switch (ctx->pc) {
        case 0x1a5538u: goto label_1a5538;
        case 0x1a5540u: goto label_1a5540;
        case 0x1a5568u: goto label_1a5568;
        case 0x1a5588u: goto label_1a5588;
        case 0x1a55b8u: goto label_1a55b8;
        case 0x1a55d0u: goto label_1a55d0;
        case 0x1a55e8u: goto label_1a55e8;
        default: break;
    }

    ctx->pc = 0x1a5518u;

    // 0x1a5518: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1a5518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a551c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a551cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a5520: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x1a5520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x1a5524: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1a5524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1a5528: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1a5528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1a552c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1a552cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1a5530: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5530u;
            // 0x1a5534: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5538u;
label_1a5538:
    // 0x1a5538: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a5538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a553c: 0x0  nop
    ctx->pc = 0x1a553cu;
    // NOP
label_1a5540:
    // 0x1a5540: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a5544: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a5544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a5548: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a5548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a554c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1a554cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1a5550: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1a5550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1a5554: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A5554u;
    {
        const bool branch_taken_0x1a5554 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A5558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5554u;
            // 0x1a5558: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5554) {
            ctx->pc = 0x1A5540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a5540;
        }
    }
    ctx->pc = 0x1A555Cu;
    // 0x1a555c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A555Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5564u;
    // 0x1a5564: 0x0  nop
    ctx->pc = 0x1a5564u;
    // NOP
label_1a5568:
    // 0x1a5568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a556c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a5570: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a5570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a557c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5580: 0xc069584  jal         func_1A5610
    ctx->pc = 0x1A5580u;
    SET_GPR_U32(ctx, 31, 0x1A5588u);
    ctx->pc = 0x1A5584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5580u;
            // 0x1a5584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5610u;
    if (runtime->hasFunction(0x1A5610u)) {
        auto targetFn = runtime->lookupFunction(0x1A5610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5588u; }
        if (ctx->pc != 0x1A5588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5610_0x1a5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5588u; }
        if (ctx->pc != 0x1A5588u) { return; }
    }
    ctx->pc = 0x1A5588u;
label_1a5588:
    // 0x1a5588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a558c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A558Cu;
    {
        const bool branch_taken_0x1a558c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A558Cu;
            // 0x1a5590: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a558c) {
            ctx->pc = 0x1A55B0u;
            goto label_1a55b0;
        }
    }
    ctx->pc = 0x1A5594u;
    // 0x1a5594: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a5594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a5598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a559c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a559cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a55a0: 0x34a50408  ori         $a1, $a1, 0x408
    ctx->pc = 0x1a55a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1032);
    // 0x1a55a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a55a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a55a8: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A55A8u;
    ctx->pc = 0x1A55ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55A8u;
            // 0x1a55ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A55B0u;
label_1a55b0:
    // 0x1a55b0: 0xc06e388  jal         func_1B8E20
    ctx->pc = 0x1A55B0u;
    SET_GPR_U32(ctx, 31, 0x1A55B8u);
    ctx->pc = 0x1A55B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55B0u;
            // 0x1a55b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E20u;
    if (runtime->hasFunction(0x1B8E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55B8u; }
        if (ctx->pc != 0x1A55B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E20_0x1b8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55B8u; }
        if (ctx->pc != 0x1A55B8u) { return; }
    }
    ctx->pc = 0x1A55B8u;
label_1a55b8:
    // 0x1a55b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a55b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a55bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a55bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a55c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A55C0u;
    {
        const bool branch_taken_0x1a55c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A55C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55C0u;
            // 0x1a55c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55c0) {
            ctx->pc = 0x1A55F8u;
            goto label_1a55f8;
        }
    }
    ctx->pc = 0x1A55C8u;
    // 0x1a55c8: 0xc06e388  jal         func_1B8E20
    ctx->pc = 0x1A55C8u;
    SET_GPR_U32(ctx, 31, 0x1A55D0u);
    ctx->pc = 0x1B8E20u;
    if (runtime->hasFunction(0x1B8E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55D0u; }
        if (ctx->pc != 0x1A55D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E20_0x1b8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55D0u; }
        if (ctx->pc != 0x1A55D0u) { return; }
    }
    ctx->pc = 0x1A55D0u;
label_1a55d0:
    // 0x1a55d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a55d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a55d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a55d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a55d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A55D8u;
    {
        const bool branch_taken_0x1a55d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A55DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55D8u;
            // 0x1a55dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55d8) {
            ctx->pc = 0x1A55F8u;
            goto label_1a55f8;
        }
    }
    ctx->pc = 0x1A55E0u;
    // 0x1a55e0: 0xc06e388  jal         func_1B8E20
    ctx->pc = 0x1A55E0u;
    SET_GPR_U32(ctx, 31, 0x1A55E8u);
    ctx->pc = 0x1B8E20u;
    if (runtime->hasFunction(0x1B8E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55E8u; }
        if (ctx->pc != 0x1A55E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E20_0x1b8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55E8u; }
        if (ctx->pc != 0x1A55E8u) { return; }
    }
    ctx->pc = 0x1A55E8u;
label_1a55e8:
    // 0x1a55e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a55e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a55ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a55ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a55f0: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1a55f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1a55f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a55f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a55f8:
    // 0x1a55f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a55f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a55fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a55fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5608: 0x8069596  j           func_1A5658
    ctx->pc = 0x1A5608u;
    ctx->pc = 0x1A560Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5608u;
            // 0x1a560c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5658u;
    {
        auto targetFn = runtime->lookupFunction(0x1A5658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A5610u;
}
