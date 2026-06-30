#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5A60
// Address: 0x2a5a60 - 0x2a5ab0
void sub_002A5A60_0x2a5a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5A60_0x2a5a60");
#endif

    switch (ctx->pc) {
        case 0x2a5a94u: goto label_2a5a94;
        default: break;
    }

    ctx->pc = 0x2a5a60u;

    // 0x2a5a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5a64: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a5a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5a6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a5a70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5a74: 0x2463fb48  addiu       $v1, $v1, -0x4B8
    ctx->pc = 0x2a5a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966088));
    // 0x2a5a78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2a5a7c: 0x2442fb30  addiu       $v0, $v0, -0x4D0
    ctx->pc = 0x2a5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966064));
    // 0x2a5a80: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a5a84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a5a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a5a8c: 0xc0a9598  jal         func_2A5660
    ctx->pc = 0x2A5A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A5A94u);
    ctx->pc = 0x2A5A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A8Cu;
            // 0x2a5a90: 0xac8001c8  sw          $zero, 0x1C8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5660u;
    if (runtime->hasFunction(0x2A5660u)) {
        auto targetFn = runtime->lookupFunction(0x2A5660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A94u; }
        if (ctx->pc != 0x2A5A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5660_0x2a5660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A94u; }
        if (ctx->pc != 0x2A5A94u) { return; }
    }
    ctx->pc = 0x2A5A94u;
label_2a5a94:
    // 0x2a5a94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a5a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5AA0u;
            // 0x2a5aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5AA8u;
    // 0x2a5aa8: 0x0  nop
    ctx->pc = 0x2a5aa8u;
    // NOP
    // 0x2a5aac: 0x0  nop
    ctx->pc = 0x2a5aacu;
    // NOP
}
