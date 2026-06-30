#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192870
// Address: 0x192870 - 0x192900
void sub_00192870_0x192870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192870_0x192870");
#endif

    switch (ctx->pc) {
        case 0x1928a8u: goto label_1928a8;
        case 0x1928b0u: goto label_1928b0;
        case 0x1928c8u: goto label_1928c8;
        default: break;
    }

    ctx->pc = 0x192870u;

    // 0x192870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192874: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x192874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19287c: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x19287cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x192880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x192880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x192884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x192884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192888: 0x26106a58  addiu       $s0, $s0, 0x6A58
    ctx->pc = 0x192888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27224));
    // 0x19288c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192890: 0x113180  sll         $a2, $s1, 6
    ctx->pc = 0x192890u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x192894: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x192894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x192898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19289c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19289cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1928a0: 0xc06419c  jal         func_190670
    ctx->pc = 0x1928A0u;
    SET_GPR_U32(ctx, 31, 0x1928A8u);
    ctx->pc = 0x1928A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1928A0u;
            // 0x1928a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190670u;
    if (runtime->hasFunction(0x190670u)) {
        auto targetFn = runtime->lookupFunction(0x190670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928A8u; }
        if (ctx->pc != 0x1928A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190670_0x190670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928A8u; }
        if (ctx->pc != 0x1928A8u) { return; }
    }
    ctx->pc = 0x1928A8u;
label_1928a8:
    // 0x1928a8: 0xc064a5e  jal         func_192978
    ctx->pc = 0x1928A8u;
    SET_GPR_U32(ctx, 31, 0x1928B0u);
    ctx->pc = 0x1928ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1928A8u;
            // 0x1928ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192978u;
    if (runtime->hasFunction(0x192978u)) {
        auto targetFn = runtime->lookupFunction(0x192978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928B0u; }
        if (ctx->pc != 0x1928B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192978_0x192978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928B0u; }
        if (ctx->pc != 0x1928B0u) { return; }
    }
    ctx->pc = 0x1928B0u;
label_1928b0:
    // 0x1928b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1928b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1928b4: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x1928b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x1928b8: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1928B8u;
    {
        const bool branch_taken_0x1928b8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1928BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928B8u;
            // 0x1928bc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928b8) {
            ctx->pc = 0x1928E4u;
            goto label_1928e4;
        }
    }
    ctx->pc = 0x1928C0u;
    // 0x1928c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1928c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1928c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1928c8:
    // 0x1928c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1928c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1928cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1928ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1928d0: 0x0  nop
    ctx->pc = 0x1928d0u;
    // NOP
    // 0x1928d4: 0x0  nop
    ctx->pc = 0x1928d4u;
    // NOP
    // 0x1928d8: 0x0  nop
    ctx->pc = 0x1928d8u;
    // NOP
    // 0x1928dc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1928DCu;
    {
        const bool branch_taken_0x1928dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1928E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928DCu;
            // 0x1928e0: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928dc) {
            ctx->pc = 0x1928C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1928c8;
        }
    }
    ctx->pc = 0x1928E4u;
label_1928e4:
    // 0x1928e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1928e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1928e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1928e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1928ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1928f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1928f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1928f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1928F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1928F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928F4u;
            // 0x1928f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1928FCu;
    // 0x1928fc: 0x0  nop
    ctx->pc = 0x1928fcu;
    // NOP
}
