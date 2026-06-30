#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0980
// Address: 0x1b0980 - 0x1b09e8
void sub_001B0980_0x1b0980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0980_0x1b0980");
#endif

    switch (ctx->pc) {
        case 0x1b0994u: goto label_1b0994;
        default: break;
    }

    ctx->pc = 0x1b0980u;

    // 0x1b0980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0988: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b0988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b098c: 0xc045968  jal         func_1165A0
    ctx->pc = 0x1B098Cu;
    SET_GPR_U32(ctx, 31, 0x1B0994u);
    ctx->pc = 0x1B0990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B098Cu;
            // 0x1b0990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0994u; }
        if (ctx->pc != 0x1B0994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0994u; }
        if (ctx->pc != 0x1B0994u) { return; }
    }
    ctx->pc = 0x1B0994u;
label_1b0994:
    // 0x1b0994: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1b0994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1b0998: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1b0998u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x1b099c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x1b099cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x1b09a0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1b09a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1b09a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x1b09a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1b09a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1b09ac: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x1b09acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x1b09b0: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x1b09b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x1b09b4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1b09b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1b09b8: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x1b09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x1b09bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1b09bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1b09c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b09c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b09c4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1b09c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1b09c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b09c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b09cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b09d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b09d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b09d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b09d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b09d8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1b09d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1b09dc: 0x804597c  j           func_1165F0
    ctx->pc = 0x1B09DCu;
    ctx->pc = 0x1B09E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B09DCu;
            // 0x1b09e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001165F0_0x1165f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B09E4u;
    // 0x1b09e4: 0x0  nop
    ctx->pc = 0x1b09e4u;
    // NOP
}
