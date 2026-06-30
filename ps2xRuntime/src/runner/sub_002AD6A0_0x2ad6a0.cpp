#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD6A0
// Address: 0x2ad6a0 - 0x2ad6f0
void sub_002AD6A0_0x2ad6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD6A0_0x2ad6a0");
#endif

    switch (ctx->pc) {
        case 0x2ad6d8u: goto label_2ad6d8;
        default: break;
    }

    ctx->pc = 0x2ad6a0u;

    // 0x2ad6a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ad6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ad6a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ad6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ad6a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad6ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ad6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ad6b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad6b4: 0x2463caa0  addiu       $v1, $v1, -0x3560
    ctx->pc = 0x2ad6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953632));
    // 0x2ad6b8: 0x2442fda0  addiu       $v0, $v0, -0x260
    ctx->pc = 0x2ad6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966688));
    // 0x2ad6bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ad6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ad6c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ad6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ad6c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad6c8: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x2ad6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x2ad6cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ad6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ad6d0: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x2AD6D0u;
    SET_GPR_U32(ctx, 31, 0x2AD6D8u);
    ctx->pc = 0x2AD6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD6D0u;
            // 0x2ad6d4: 0xafa60024  sw          $a2, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD6D8u; }
        if (ctx->pc != 0x2AD6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD6D8u; }
        if (ctx->pc != 0x2AD6D8u) { return; }
    }
    ctx->pc = 0x2AD6D8u;
label_2ad6d8:
    // 0x2ad6d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2ad6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2ad6dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ad6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad6e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ad6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD6E8u;
            // 0x2ad6ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD6F0u;
}
