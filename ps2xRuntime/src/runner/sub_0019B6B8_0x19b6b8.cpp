#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B6B8
// Address: 0x19b6b8 - 0x19b708
void sub_0019B6B8_0x19b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B6B8_0x19b6b8");
#endif

    switch (ctx->pc) {
        case 0x19b6ccu: goto label_19b6cc;
        case 0x19b6f8u: goto label_19b6f8;
        default: break;
    }

    ctx->pc = 0x19b6b8u;

    // 0x19b6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b6c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19b6c4: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x19B6C4u;
    SET_GPR_U32(ctx, 31, 0x19B6CCu);
    ctx->pc = 0x19B6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6C4u;
            // 0x19b6c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6CCu; }
        if (ctx->pc != 0x19B6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6CCu; }
        if (ctx->pc != 0x19B6CCu) { return; }
    }
    ctx->pc = 0x19B6CCu;
label_19b6cc:
    // 0x19b6cc: 0xac500068  sw          $s0, 0x68($v0)
    ctx->pc = 0x19b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 16));
    // 0x19b6d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19b6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19b6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19b6d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b6d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19B6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6DCu;
            // 0x19b6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B6E4u;
    // 0x19b6e4: 0x0  nop
    ctx->pc = 0x19b6e4u;
    // NOP
    // 0x19b6e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b6f0: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x19B6F0u;
    SET_GPR_U32(ctx, 31, 0x19B6F8u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6F8u; }
        if (ctx->pc != 0x19B6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6F8u; }
        if (ctx->pc != 0x19B6F8u) { return; }
    }
    ctx->pc = 0x19B6F8u;
label_19b6f8:
    // 0x19b6f8: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x19b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x19b6fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b700: 0x3e00008  jr          $ra
    ctx->pc = 0x19B700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B700u;
            // 0x19b704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B708u;
}
