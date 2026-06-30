#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C56C8
// Address: 0x1c56c8 - 0x1c5760
void sub_001C56C8_0x1c56c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C56C8_0x1c56c8");
#endif

    switch (ctx->pc) {
        case 0x1c56c8u: goto label_1c56c8;
        case 0x1c56ccu: goto label_1c56cc;
        case 0x1c56d0u: goto label_1c56d0;
        case 0x1c56d4u: goto label_1c56d4;
        case 0x1c56d8u: goto label_1c56d8;
        case 0x1c56dcu: goto label_1c56dc;
        case 0x1c56e0u: goto label_1c56e0;
        case 0x1c56e4u: goto label_1c56e4;
        case 0x1c56e8u: goto label_1c56e8;
        case 0x1c56ecu: goto label_1c56ec;
        case 0x1c56f0u: goto label_1c56f0;
        case 0x1c56f4u: goto label_1c56f4;
        case 0x1c56f8u: goto label_1c56f8;
        case 0x1c56fcu: goto label_1c56fc;
        case 0x1c5700u: goto label_1c5700;
        case 0x1c5704u: goto label_1c5704;
        case 0x1c5708u: goto label_1c5708;
        case 0x1c570cu: goto label_1c570c;
        case 0x1c5710u: goto label_1c5710;
        case 0x1c5714u: goto label_1c5714;
        case 0x1c5718u: goto label_1c5718;
        case 0x1c571cu: goto label_1c571c;
        case 0x1c5720u: goto label_1c5720;
        case 0x1c5724u: goto label_1c5724;
        case 0x1c5728u: goto label_1c5728;
        case 0x1c572cu: goto label_1c572c;
        case 0x1c5730u: goto label_1c5730;
        case 0x1c5734u: goto label_1c5734;
        case 0x1c5738u: goto label_1c5738;
        case 0x1c573cu: goto label_1c573c;
        case 0x1c5740u: goto label_1c5740;
        case 0x1c5744u: goto label_1c5744;
        case 0x1c5748u: goto label_1c5748;
        case 0x1c574cu: goto label_1c574c;
        case 0x1c5750u: goto label_1c5750;
        case 0x1c5754u: goto label_1c5754;
        case 0x1c5758u: goto label_1c5758;
        case 0x1c575cu: goto label_1c575c;
        default: break;
    }

    ctx->pc = 0x1c56c8u;

label_1c56c8:
    // 0x1c56c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c56c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c56cc:
    // 0x1c56cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c56ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c56d0:
    // 0x1c56d0: 0x8c42a5e0  lw          $v0, -0x5A20($v0)
    ctx->pc = 0x1c56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944224)));
label_1c56d4:
    // 0x1c56d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1c56d8:
    if (ctx->pc == 0x1C56D8u) {
        ctx->pc = 0x1C56D8u;
            // 0x1c56d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C56DCu;
        goto label_1c56dc;
    }
    ctx->pc = 0x1C56D4u;
    {
        const bool branch_taken_0x1c56d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56D4u;
            // 0x1c56d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56d4) {
            ctx->pc = 0x1C5700u;
            goto label_1c5700;
        }
    }
    ctx->pc = 0x1C56DCu;
label_1c56dc:
    // 0x1c56dc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1c56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1c56e0:
    // 0x1c56e0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1c56e4:
    if (ctx->pc == 0x1C56E4u) {
        ctx->pc = 0x1C56E4u;
            // 0x1c56e4: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x1C56E8u;
        goto label_1c56e8;
    }
    ctx->pc = 0x1C56E0u;
    {
        const bool branch_taken_0x1c56e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c56e0) {
            ctx->pc = 0x1C56E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56E0u;
            // 0x1c56e4: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5704u;
            goto label_1c5704;
        }
    }
    ctx->pc = 0x1C56E8u;
label_1c56e8:
    // 0x1c56e8: 0x40f809  jalr        $v0
label_1c56ec:
    if (ctx->pc == 0x1C56ECu) {
        ctx->pc = 0x1C56F0u;
        goto label_1c56f0;
    }
    ctx->pc = 0x1C56E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C56F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C56F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C56F0u; }
            if (ctx->pc != 0x1C56F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C56F0u;
label_1c56f0:
    // 0x1c56f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c56f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c56f4:
    // 0x1c56f4: 0x3e00008  jr          $ra
label_1c56f8:
    if (ctx->pc == 0x1C56F8u) {
        ctx->pc = 0x1C56F8u;
            // 0x1c56f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C56FCu;
        goto label_1c56fc;
    }
    ctx->pc = 0x1C56F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C56F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56F4u;
            // 0x1c56f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C56FCu;
label_1c56fc:
    // 0x1c56fc: 0x0  nop
    ctx->pc = 0x1c56fcu;
    // NOP
label_1c5700:
    // 0x1c5700: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c5700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c5704:
    // 0x1c5704: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c5704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c5708:
    // 0x1c5708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c570c:
    // 0x1c570c: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
label_1c5710:
    // 0x1c5710: 0x24c6bf10  addiu       $a2, $a2, -0x40F0
    ctx->pc = 0x1c5710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950672));
label_1c5714:
    // 0x1c5714: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x1c5714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_1c5718:
    // 0x1c5718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c571c:
    // 0x1c571c: 0x2408ff35  addiu       $t0, $zero, -0xCB
    ctx->pc = 0x1c571cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
label_1c5720:
    // 0x1c5720: 0x80711fe  j           func_1C47F8
label_1c5724:
    if (ctx->pc == 0x1C5724u) {
        ctx->pc = 0x1C5724u;
            // 0x1c5724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C5728u;
        goto label_1c5728;
    }
    ctx->pc = 0x1C5720u;
    ctx->pc = 0x1C5724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5720u;
            // 0x1c5724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5728u;
label_1c5728:
    // 0x1c5728: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c5728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c572c:
    // 0x1c572c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c572cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c5730:
    // 0x1c5730: 0x8c42a5e0  lw          $v0, -0x5A20($v0)
    ctx->pc = 0x1c5730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944224)));
label_1c5734:
    // 0x1c5734: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c5738:
    if (ctx->pc == 0x1C5738u) {
        ctx->pc = 0x1C5738u;
            // 0x1c5738: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C573Cu;
        goto label_1c573c;
    }
    ctx->pc = 0x1C5734u;
    {
        const bool branch_taken_0x1c5734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5734u;
            // 0x1c5738: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5734) {
            ctx->pc = 0x1C5750u;
            goto label_1c5750;
        }
    }
    ctx->pc = 0x1C573Cu;
label_1c573c:
    // 0x1c573c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1c573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1c5740:
    // 0x1c5740: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1c5744:
    if (ctx->pc == 0x1C5744u) {
        ctx->pc = 0x1C5744u;
            // 0x1c5744: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C5748u;
        goto label_1c5748;
    }
    ctx->pc = 0x1C5740u;
    {
        const bool branch_taken_0x1c5740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5740) {
            ctx->pc = 0x1C5744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5740u;
            // 0x1c5744: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5754u;
            goto label_1c5754;
        }
    }
    ctx->pc = 0x1C5748u;
label_1c5748:
    // 0x1c5748: 0x40f809  jalr        $v0
label_1c574c:
    if (ctx->pc == 0x1C574Cu) {
        ctx->pc = 0x1C5750u;
        goto label_1c5750;
    }
    ctx->pc = 0x1C5748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C5750u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C5750u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C5750u; }
            if (ctx->pc != 0x1C5750u) { return; }
        }
        }
    }
    ctx->pc = 0x1C5750u;
label_1c5750:
    // 0x1c5750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5754:
    // 0x1c5754: 0x3e00008  jr          $ra
label_1c5758:
    if (ctx->pc == 0x1C5758u) {
        ctx->pc = 0x1C5758u;
            // 0x1c5758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C575Cu;
        goto label_1c575c;
    }
    ctx->pc = 0x1C5754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5754u;
            // 0x1c5758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C575Cu;
label_1c575c:
    // 0x1c575c: 0x0  nop
    ctx->pc = 0x1c575cu;
    // NOP
}
