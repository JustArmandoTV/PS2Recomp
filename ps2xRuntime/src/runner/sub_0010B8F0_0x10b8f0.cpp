#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010B8F0
// Address: 0x10b8f0 - 0x10b968
void sub_0010B8F0_0x10b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B8F0_0x10b8f0");
#endif

    switch (ctx->pc) {
        case 0x10b904u: goto label_10b904;
        default: break;
    }

    ctx->pc = 0x10b8f0u;

    // 0x10b8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b8f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b8f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b8fc: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10B8FCu;
    SET_GPR_U32(ctx, 31, 0x10B904u);
    ctx->pc = 0x10B900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8FCu;
            // 0x10b900: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B904u; }
        if (ctx->pc != 0x10B904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B904u; }
        if (ctx->pc != 0x10B904u) { return; }
    }
    ctx->pc = 0x10B904u;
label_10b904:
    // 0x10b904: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b908: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10b908u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10b90c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10b90cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10b910: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10b910u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10b914: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10b914u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x10b918: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10b918u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10b91c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b920: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10b920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10b924: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10b924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10b928: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x10b928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x10b92c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10b930: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10b930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10b934: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10b934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x10b938: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10b938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b93c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10b93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10b940: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10b940u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10b944: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B944u;
    {
        const bool branch_taken_0x10b944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B944u;
            // 0x10b948: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b944) {
            ctx->pc = 0x10B958u;
            goto label_10b958;
        }
    }
    ctx->pc = 0x10B94Cu;
    // 0x10b94c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b950: 0x804597c  j           func_1165F0
    ctx->pc = 0x10B950u;
    ctx->pc = 0x10B954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B950u;
            // 0x10b954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001165F0_0x1165f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B958u;
label_10b958:
    // 0x10b958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b95c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B95Cu;
            // 0x10b960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B964u;
    // 0x10b964: 0x0  nop
    ctx->pc = 0x10b964u;
    // NOP
}
