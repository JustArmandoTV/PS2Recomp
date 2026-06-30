#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E43B0
// Address: 0x2e43b0 - 0x2e4440
void sub_002E43B0_0x2e43b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E43B0_0x2e43b0");
#endif

    switch (ctx->pc) {
        case 0x2e43e0u: goto label_2e43e0;
        case 0x2e43f8u: goto label_2e43f8;
        case 0x2e4400u: goto label_2e4400;
        default: break;
    }

    ctx->pc = 0x2e43b0u;

    // 0x2e43b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e43b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e43b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e43b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e43b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e43b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e43bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e43bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e43c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e43c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e43c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e43c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e43c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43cc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2e43ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e43d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E43D0u;
    {
        const bool branch_taken_0x2e43d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E43D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E43D0u;
            // 0x2e43d4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43d0) {
            ctx->pc = 0x2E43E0u;
            goto label_2e43e0;
        }
    }
    ctx->pc = 0x2E43D8u;
    // 0x2e43d8: 0xc04008c  jal         func_100230
    ctx->pc = 0x2E43D8u;
    SET_GPR_U32(ctx, 31, 0x2E43E0u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43E0u; }
        if (ctx->pc != 0x2E43E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43E0u; }
        if (ctx->pc != 0x2E43E0u) { return; }
    }
    ctx->pc = 0x2E43E0u;
label_2e43e0:
    // 0x2e43e0: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x2e43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2e43e4: 0xa2510008  sb          $s1, 0x8($s2)
    ctx->pc = 0x2e43e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e43e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2e43e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2e43ec: 0xa2500009  sb          $s0, 0x9($s2)
    ctx->pc = 0x2e43ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 16));
    // 0x2e43f0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2E43F0u;
    SET_GPR_U32(ctx, 31, 0x2E43F8u);
    ctx->pc = 0x2E43F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E43F0u;
            // 0x2e43f4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43F8u; }
        if (ctx->pc != 0x2E43F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43F8u; }
        if (ctx->pc != 0x2E43F8u) { return; }
    }
    ctx->pc = 0x2E43F8u;
label_2e43f8:
    // 0x2e43f8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2e43f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2e43fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e43fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4400:
    // 0x2e4400: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x2e4400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x2e4404: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e4404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e4408: 0x24630084  addiu       $v1, $v1, 0x84
    ctx->pc = 0x2e4408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
    // 0x2e440c: 0x0  nop
    ctx->pc = 0x2e440cu;
    // NOP
    // 0x2e4410: 0x0  nop
    ctx->pc = 0x2e4410u;
    // NOP
    // 0x2e4414: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E4414u;
    {
        const bool branch_taken_0x2e4414 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4414) {
            ctx->pc = 0x2E4400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e4400;
        }
    }
    ctx->pc = 0x2E441Cu;
    // 0x2e441c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e441cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e4420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e442c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E442Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E442Cu;
            // 0x2e4430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4434u;
    // 0x2e4434: 0x0  nop
    ctx->pc = 0x2e4434u;
    // NOP
    // 0x2e4438: 0x0  nop
    ctx->pc = 0x2e4438u;
    // NOP
    // 0x2e443c: 0x0  nop
    ctx->pc = 0x2e443cu;
    // NOP
}
