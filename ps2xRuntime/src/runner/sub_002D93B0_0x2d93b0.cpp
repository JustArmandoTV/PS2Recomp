#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D93B0
// Address: 0x2d93b0 - 0x2d9460
void sub_002D93B0_0x2d93b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D93B0_0x2d93b0");
#endif

    switch (ctx->pc) {
        case 0x2d93e0u: goto label_2d93e0;
        case 0x2d9400u: goto label_2d9400;
        default: break;
    }

    ctx->pc = 0x2d93b0u;

    // 0x2d93b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d93b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d93b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d93b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d93b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d93b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d93bc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2d93bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2d93c0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d93c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d93c4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2d93c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d93c8: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D93C8u;
    {
        const bool branch_taken_0x2d93c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D93CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D93C8u;
            // 0x2d93cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93c8) {
            ctx->pc = 0x2D9444u;
            goto label_2d9444;
        }
    }
    ctx->pc = 0x2D93D0u;
    // 0x2d93d0: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x2d93d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d93d4: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D93D4u;
    {
        const bool branch_taken_0x2d93d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d93d4) {
            ctx->pc = 0x2D9438u;
            goto label_2d9438;
        }
    }
    ctx->pc = 0x2D93DCu;
    // 0x2d93dc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d93dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d93e0:
    // 0x2d93e0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2d93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d93e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d93e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d93e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d93e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d93ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d93ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d93f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D93F0u;
    {
        const bool branch_taken_0x2d93f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d93f0) {
            ctx->pc = 0x2D9400u;
            goto label_2d9400;
        }
    }
    ctx->pc = 0x2D93F8u;
    // 0x2d93f8: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D93F8u;
    SET_GPR_U32(ctx, 31, 0x2D9400u);
    ctx->pc = 0x2D93FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D93F8u;
            // 0x2d93fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9400u; }
        if (ctx->pc != 0x2D9400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9400u; }
        if (ctx->pc != 0x2D9400u) { return; }
    }
    ctx->pc = 0x2D9400u;
label_2d9400:
    // 0x2d9400: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d9400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d9404: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d9404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d9408: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2d9408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2d940c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2d940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d9410: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2d9410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d9414: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2d9414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x2d9418: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2d9418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d941c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D941Cu;
    {
        const bool branch_taken_0x2d941c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D9420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D941Cu;
            // 0x2d9420: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d941c) {
            ctx->pc = 0x2D9428u;
            goto label_2d9428;
        }
    }
    ctx->pc = 0x2D9424u;
    // 0x2d9424: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2d9424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_2d9428:
    // 0x2d9428: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d9428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d942c: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x2d942cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d9430: 0x5020ffeb  beql        $at, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2D9430u;
    {
        const bool branch_taken_0x2d9430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9430) {
            ctx->pc = 0x2D9434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9430u;
            // 0x2d9434: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D93E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d93e0;
        }
    }
    ctx->pc = 0x2D9438u;
label_2d9438:
    // 0x2d9438: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2d9438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d943c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D943Cu;
    {
        const bool branch_taken_0x2d943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D943Cu;
            // 0x2d9440: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d943c) {
            ctx->pc = 0x2D9448u;
            goto label_2d9448;
        }
    }
    ctx->pc = 0x2D9444u;
label_2d9444:
    // 0x2d9444: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2d9444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2d9448:
    // 0x2d9448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d944c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d944cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9450: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9450u;
            // 0x2d9454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9458u;
    // 0x2d9458: 0x0  nop
    ctx->pc = 0x2d9458u;
    // NOP
    // 0x2d945c: 0x0  nop
    ctx->pc = 0x2d945cu;
    // NOP
}
