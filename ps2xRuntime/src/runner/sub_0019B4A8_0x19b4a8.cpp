#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B4A8
// Address: 0x19b4a8 - 0x19b4f0
void sub_0019B4A8_0x19b4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B4A8_0x19b4a8");
#endif

    switch (ctx->pc) {
        case 0x19b4b8u: goto label_19b4b8;
        case 0x19b4dcu: goto label_19b4dc;
        default: break;
    }

    ctx->pc = 0x19b4a8u;

    // 0x19b4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b4b0: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x19B4B0u;
    SET_GPR_U32(ctx, 31, 0x19B4B8u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B4B8u; }
        if (ctx->pc != 0x19B4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B4B8u; }
        if (ctx->pc != 0x19B4B8u) { return; }
    }
    ctx->pc = 0x19B4B8u;
label_19b4b8:
    // 0x19b4b8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x19b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x19b4bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19B4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4C0u;
            // 0x19b4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B4C8u;
    // 0x19b4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b4cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b4d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19b4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19b4d4: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x19B4D4u;
    SET_GPR_U32(ctx, 31, 0x19B4DCu);
    ctx->pc = 0x19B4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4D4u;
            // 0x19b4d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B4DCu; }
        if (ctx->pc != 0x19B4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B4DCu; }
        if (ctx->pc != 0x19B4DCu) { return; }
    }
    ctx->pc = 0x19B4DCu;
label_19b4dc:
    // 0x19b4dc: 0xac50003c  sw          $s0, 0x3C($v0)
    ctx->pc = 0x19b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 16));
    // 0x19b4e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19b4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19b4e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b4e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x19B4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4E8u;
            // 0x19b4ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B4F0u;
}
