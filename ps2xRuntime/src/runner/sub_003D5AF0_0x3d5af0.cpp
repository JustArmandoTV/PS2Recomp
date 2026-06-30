#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D5AF0
// Address: 0x3d5af0 - 0x3d5b40
void sub_003D5AF0_0x3d5af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5AF0_0x3d5af0");
#endif

    switch (ctx->pc) {
        case 0x3d5b08u: goto label_3d5b08;
        case 0x3d5b14u: goto label_3d5b14;
        default: break;
    }

    ctx->pc = 0x3d5af0u;

    // 0x3d5af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d5af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d5af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d5af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d5af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d5af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d5afc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d5afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5b00: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D5B00u;
    SET_GPR_U32(ctx, 31, 0x3D5B08u);
    ctx->pc = 0x3D5B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5B00u;
            // 0x3d5b04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5B08u; }
        if (ctx->pc != 0x3D5B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5B08u; }
        if (ctx->pc != 0x3D5B08u) { return; }
    }
    ctx->pc = 0x3D5B08u;
label_3d5b08:
    // 0x3d5b08: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d5b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d5b0c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D5B0Cu;
    SET_GPR_U32(ctx, 31, 0x3D5B14u);
    ctx->pc = 0x3D5B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5B0Cu;
            // 0x3d5b10: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5B14u; }
        if (ctx->pc != 0x3D5B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5B14u; }
        if (ctx->pc != 0x3D5B14u) { return; }
    }
    ctx->pc = 0x3D5B14u;
label_3d5b14:
    // 0x3d5b14: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x3d5b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x3d5b18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d5b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d5b1c: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x3d5b1cu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3d5b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d5b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5b24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d5b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d5b28: 0x1010  mfhi        $v0
    ctx->pc = 0x3d5b28u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3d5b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5B2Cu;
            // 0x3d5b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D5B34u;
    // 0x3d5b34: 0x0  nop
    ctx->pc = 0x3d5b34u;
    // NOP
    // 0x3d5b38: 0x0  nop
    ctx->pc = 0x3d5b38u;
    // NOP
    // 0x3d5b3c: 0x0  nop
    ctx->pc = 0x3d5b3cu;
    // NOP
}
