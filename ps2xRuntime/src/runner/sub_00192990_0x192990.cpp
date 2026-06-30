#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192990
// Address: 0x192990 - 0x1929f0
void sub_00192990_0x192990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192990_0x192990");
#endif

    switch (ctx->pc) {
        case 0x1929a0u: goto label_1929a0;
        case 0x1929c8u: goto label_1929c8;
        case 0x1929d8u: goto label_1929d8;
        default: break;
    }

    ctx->pc = 0x192990u;

    // 0x192990: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x192990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x192994: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x192994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x192998: 0x3e00008  jr          $ra
    ctx->pc = 0x192998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19299Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192998u;
            // 0x19299c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1929A0u;
label_1929a0:
    // 0x1929a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1929a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1929a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1929a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1929a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1929ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1929acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1929b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1929b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1929B4u;
    {
        const bool branch_taken_0x1929b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1929B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929B4u;
            // 0x1929b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929b4) {
            ctx->pc = 0x1929D0u;
            goto label_1929d0;
        }
    }
    ctx->pc = 0x1929BCu;
    // 0x1929bc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1929bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1929c0: 0xc064a7c  jal         func_1929F0
    ctx->pc = 0x1929C0u;
    SET_GPR_U32(ctx, 31, 0x1929C8u);
    ctx->pc = 0x1929C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1929C0u;
            // 0x1929c4: 0x8c446a58  lw          $a0, 0x6A58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1929F0u;
    if (runtime->hasFunction(0x1929F0u)) {
        auto targetFn = runtime->lookupFunction(0x1929F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929C8u; }
        if (ctx->pc != 0x1929C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001929F0_0x1929f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929C8u; }
        if (ctx->pc != 0x1929C8u) { return; }
    }
    ctx->pc = 0x1929C8u;
label_1929c8:
    // 0x1929c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1929C8u;
    {
        const bool branch_taken_0x1929c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929C8u;
            // 0x1929cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929c8) {
            ctx->pc = 0x1929DCu;
            goto label_1929dc;
        }
    }
    ctx->pc = 0x1929D0u;
label_1929d0:
    // 0x1929d0: 0xc064a7c  jal         func_1929F0
    ctx->pc = 0x1929D0u;
    SET_GPR_U32(ctx, 31, 0x1929D8u);
    ctx->pc = 0x1929F0u;
    if (runtime->hasFunction(0x1929F0u)) {
        auto targetFn = runtime->lookupFunction(0x1929F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929D8u; }
        if (ctx->pc != 0x1929D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001929F0_0x1929f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929D8u; }
        if (ctx->pc != 0x1929D8u) { return; }
    }
    ctx->pc = 0x1929D8u;
label_1929d8:
    // 0x1929d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1929d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1929dc:
    // 0x1929dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1929dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1929e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1929e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1929e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1929E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1929E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929E4u;
            // 0x1929e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1929ECu;
    // 0x1929ec: 0x0  nop
    ctx->pc = 0x1929ecu;
    // NOP
}
