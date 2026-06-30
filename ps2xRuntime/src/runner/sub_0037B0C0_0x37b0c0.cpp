#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037B0C0
// Address: 0x37b0c0 - 0x37b100
void sub_0037B0C0_0x37b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B0C0_0x37b0c0");
#endif

    switch (ctx->pc) {
        case 0x37b0e4u: goto label_37b0e4;
        default: break;
    }

    ctx->pc = 0x37b0c0u;

    // 0x37b0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b0c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x37b0c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37b0cc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x37b0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x37b0d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b0d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b0d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x37b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x37b0dc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x37B0DCu;
    SET_GPR_U32(ctx, 31, 0x37B0E4u);
    ctx->pc = 0x37B0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B0DCu;
            // 0x37b0e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B0E4u; }
        if (ctx->pc != 0x37B0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B0E4u; }
        if (ctx->pc != 0x37B0E4u) { return; }
    }
    ctx->pc = 0x37B0E4u;
label_37b0e4:
    // 0x37b0e4: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x37b0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x37b0e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37b0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b0ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x37B0F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B0F0u;
            // 0x37b0f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B0F8u;
    // 0x37b0f8: 0x0  nop
    ctx->pc = 0x37b0f8u;
    // NOP
    // 0x37b0fc: 0x0  nop
    ctx->pc = 0x37b0fcu;
    // NOP
}
