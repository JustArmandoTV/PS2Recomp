#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005275A0
// Address: 0x5275a0 - 0x5275e0
void sub_005275A0_0x5275a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005275A0_0x5275a0");
#endif

    switch (ctx->pc) {
        case 0x5275b4u: goto label_5275b4;
        default: break;
    }

    ctx->pc = 0x5275a0u;

    // 0x5275a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5275a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5275a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5275a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5275a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5275a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5275ac: 0xc0ecadc  jal         func_3B2B70
    ctx->pc = 0x5275ACu;
    SET_GPR_U32(ctx, 31, 0x5275B4u);
    ctx->pc = 0x5275B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5275ACu;
            // 0x5275b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B70u;
    if (runtime->hasFunction(0x3B2B70u)) {
        auto targetFn = runtime->lookupFunction(0x3B2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5275B4u; }
        if (ctx->pc != 0x5275B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B2B70_0x3b2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5275B4u; }
        if (ctx->pc != 0x5275B4u) { return; }
    }
    ctx->pc = 0x5275B4u;
label_5275b4:
    // 0x5275b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5275b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x5275b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5275b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5275bc: 0x246364c0  addiu       $v1, $v1, 0x64C0
    ctx->pc = 0x5275bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25792));
    // 0x5275c0: 0xae03017c  sw          $v1, 0x17C($s0)
    ctx->pc = 0x5275c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 3));
    // 0x5275c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5275c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5275c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5275c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5275cc: 0x3e00008  jr          $ra
    ctx->pc = 0x5275CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5275D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5275CCu;
            // 0x5275d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5275D4u;
    // 0x5275d4: 0x0  nop
    ctx->pc = 0x5275d4u;
    // NOP
    // 0x5275d8: 0x0  nop
    ctx->pc = 0x5275d8u;
    // NOP
    // 0x5275dc: 0x0  nop
    ctx->pc = 0x5275dcu;
    // NOP
}
