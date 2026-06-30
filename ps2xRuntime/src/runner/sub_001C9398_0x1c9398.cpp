#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C9398
// Address: 0x1c9398 - 0x1c93f8
void sub_001C9398_0x1c9398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9398_0x1c9398");
#endif

    switch (ctx->pc) {
        case 0x1c93acu: goto label_1c93ac;
        case 0x1c93d8u: goto label_1c93d8;
        default: break;
    }

    ctx->pc = 0x1c9398u;

    // 0x1c9398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c939c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c93a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c93a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c93a4: 0xc072cd2  jal         func_1CB348
    ctx->pc = 0x1C93A4u;
    SET_GPR_U32(ctx, 31, 0x1C93ACu);
    ctx->pc = 0x1CB348u;
    if (runtime->hasFunction(0x1CB348u)) {
        auto targetFn = runtime->lookupFunction(0x1CB348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93ACu; }
        if (ctx->pc != 0x1C93ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB348_0x1cb348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93ACu; }
        if (ctx->pc != 0x1C93ACu) { return; }
    }
    ctx->pc = 0x1C93ACu;
label_1c93ac:
    // 0x1c93ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c93acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c93b0: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1c93b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c93b4: 0x2450a6f8  addiu       $s0, $v0, -0x5908
    ctx->pc = 0x1c93b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944504));
    // 0x1c93b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c93b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c93c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c93c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c93c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c93c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C93C8u;
    {
        const bool branch_taken_0x1c93c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C93CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93C8u;
            // 0x1c93cc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93c8) {
            ctx->pc = 0x1C93E0u;
            goto label_1c93e0;
        }
    }
    ctx->pc = 0x1C93D0u;
    // 0x1c93d0: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C93D0u;
    SET_GPR_U32(ctx, 31, 0x1C93D8u);
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93D8u; }
        if (ctx->pc != 0x1C93D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93D8u; }
        if (ctx->pc != 0x1C93D8u) { return; }
    }
    ctx->pc = 0x1C93D8u;
label_1c93d8:
    // 0x1c93d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c93d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c93dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c93dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c93e0:
    // 0x1c93e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c93e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c93e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c93e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c93e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c93ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C93ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C93F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93ECu;
            // 0x1c93f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C93F4u;
    // 0x1c93f4: 0x0  nop
    ctx->pc = 0x1c93f4u;
    // NOP
}
