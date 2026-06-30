#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E91C0
// Address: 0x2e91c0 - 0x2e9220
void sub_002E91C0_0x2e91c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E91C0_0x2e91c0");
#endif

    switch (ctx->pc) {
        case 0x2e91f8u: goto label_2e91f8;
        default: break;
    }

    ctx->pc = 0x2e91c0u;

    // 0x2e91c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e91c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e91c4: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x2e91c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x2e91c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e91c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e91cc: 0x30c30007  andi        $v1, $a2, 0x7
    ctx->pc = 0x2e91ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2e91d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e91d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e91d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E91D4u;
    {
        const bool branch_taken_0x2e91d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E91D4u;
            // 0x2e91d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91d4) {
            ctx->pc = 0x2E91E4u;
            goto label_2e91e4;
        }
    }
    ctx->pc = 0x2E91DCu;
    // 0x2e91dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E91DCu;
    {
        const bool branch_taken_0x2e91dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E91DCu;
            // 0x2e91e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91dc) {
            ctx->pc = 0x2E91E8u;
            goto label_2e91e8;
        }
    }
    ctx->pc = 0x2E91E4u;
label_2e91e4:
    // 0x2e91e4: 0x30c80004  andi        $t0, $a2, 0x4
    ctx->pc = 0x2e91e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_2e91e8:
    // 0x2e91e8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2e91e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e91ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e91ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e91f0: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2E91F0u;
    SET_GPR_U32(ctx, 31, 0x2E91F8u);
    ctx->pc = 0x2E91F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E91F0u;
            // 0x2e91f4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91F8u; }
        if (ctx->pc != 0x2E91F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91F8u; }
        if (ctx->pc != 0x2E91F8u) { return; }
    }
    ctx->pc = 0x2E91F8u;
label_2e91f8:
    // 0x2e91f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2e91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2e91fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e91fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9200: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2e9200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2e9204: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2e9204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2e9208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e9208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e920c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e920cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9210: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9210u;
            // 0x2e9214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9218u;
    // 0x2e9218: 0x0  nop
    ctx->pc = 0x2e9218u;
    // NOP
    // 0x2e921c: 0x0  nop
    ctx->pc = 0x2e921cu;
    // NOP
}
