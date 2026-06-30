#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3B40
// Address: 0x1c3b40 - 0x1c3b88
void sub_001C3B40_0x1c3b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3B40_0x1c3b40");
#endif

    switch (ctx->pc) {
        case 0x1c3b64u: goto label_1c3b64;
        default: break;
    }

    ctx->pc = 0x1c3b40u;

    // 0x1c3b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c3b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c3b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3b4c: 0x3c10006e  lui         $s0, 0x6E
    ctx->pc = 0x1c3b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)110 << 16));
    // 0x1c3b50: 0x26101ee0  addiu       $s0, $s0, 0x1EE0
    ctx->pc = 0x1c3b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7904));
    // 0x1c3b54: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c3b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c3b58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c3b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c3b5c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C3B5Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B64u);
    ctx->pc = 0x1C3B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B5Cu;
            // 0x1c3b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B64u; }
        if (ctx->pc != 0x1C3B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B64u; }
        if (ctx->pc != 0x1C3B64u) { return; }
    }
    ctx->pc = 0x1C3B64u;
label_1c3b64:
    // 0x1c3b64: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c3b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c3b68: 0x8c62a4d8  lw          $v0, -0x5B28($v1)
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943960)));
    // 0x1c3b6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c3b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3b70: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1c3b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1c3b74: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1c3b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1c3b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B7Cu;
            // 0x1c3b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3B84u;
    // 0x1c3b84: 0x0  nop
    ctx->pc = 0x1c3b84u;
    // NOP
}
