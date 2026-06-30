#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F5A0
// Address: 0x19f5a0 - 0x19f5e8
void sub_0019F5A0_0x19f5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F5A0_0x19f5a0");
#endif

    switch (ctx->pc) {
        case 0x19f5c4u: goto label_19f5c4;
        default: break;
    }

    ctx->pc = 0x19f5a0u;

    // 0x19f5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f5a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f5a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19f5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19f5b0: 0x8e0203f0  lw          $v0, 0x3F0($s0)
    ctx->pc = 0x19f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1008)));
    // 0x19f5b4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F5B4u;
    {
        const bool branch_taken_0x19f5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f5b4) {
            ctx->pc = 0x19F5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5B4u;
            // 0x19f5b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F5D8u;
            goto label_19f5d8;
        }
    }
    ctx->pc = 0x19F5BCu;
    // 0x19f5bc: 0xc067d7a  jal         func_19F5E8
    ctx->pc = 0x19F5BCu;
    SET_GPR_U32(ctx, 31, 0x19F5C4u);
    ctx->pc = 0x19F5E8u;
    if (runtime->hasFunction(0x19F5E8u)) {
        auto targetFn = runtime->lookupFunction(0x19F5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5C4u; }
        if (ctx->pc != 0x19F5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F5E8_0x19f5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5C4u; }
        if (ctx->pc != 0x19F5C4u) { return; }
    }
    ctx->pc = 0x19F5C4u;
label_19f5c4:
    // 0x19f5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f5cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f5ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f5d0: 0x8067de6  j           func_19F798
    ctx->pc = 0x19F5D0u;
    ctx->pc = 0x19F5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5D0u;
            // 0x19f5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F798u;
    {
        auto targetFn = runtime->lookupFunction(0x19F798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19F5D8u;
label_19f5d8:
    // 0x19f5d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19F5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5DCu;
            // 0x19f5e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F5E4u;
    // 0x19f5e4: 0x0  nop
    ctx->pc = 0x19f5e4u;
    // NOP
}
