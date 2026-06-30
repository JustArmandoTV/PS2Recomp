#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3678
// Address: 0x1b3678 - 0x1b36e0
void sub_001B3678_0x1b3678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3678_0x1b3678");
#endif

    ctx->pc = 0x1b3678u;

    // 0x1b3678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b367c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b367cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3684: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b3684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b3688: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3688u;
    {
        const bool branch_taken_0x1b3688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B368Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3688u;
            // 0x1b368c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3688) {
            ctx->pc = 0x1B36A8u;
            goto label_1b36a8;
        }
    }
    ctx->pc = 0x1B3690u;
    // 0x1b3690: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b3690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b3694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3698: 0x34a50204  ori         $a1, $a1, 0x204
    ctx->pc = 0x1b3698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)516);
    // 0x1b369c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B369Cu;
    ctx->pc = 0x1B36A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B369Cu;
            // 0x1b36a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B36A4u;
    // 0x1b36a4: 0x0  nop
    ctx->pc = 0x1b36a4u;
    // NOP
label_1b36a8:
    // 0x1b36a8: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1b36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1b36ac: 0x2c423840  sltiu       $v0, $v0, 0x3840
    ctx->pc = 0x1b36acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14400) ? 1 : 0);
    // 0x1b36b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B36B0u;
    {
        const bool branch_taken_0x1b36b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B36B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36B0u;
            // 0x1b36b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b36b0) {
            ctx->pc = 0x1B36D0u;
            goto label_1b36d0;
        }
    }
    ctx->pc = 0x1B36B8u;
    // 0x1b36b8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b36b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b36bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b36bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36c0: 0x34a50205  ori         $a1, $a1, 0x205
    ctx->pc = 0x1b36c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)517);
    // 0x1b36c4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B36C4u;
    ctx->pc = 0x1B36C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36C4u;
            // 0x1b36c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B36CCu;
    // 0x1b36cc: 0x0  nop
    ctx->pc = 0x1b36ccu;
    // NOP
label_1b36d0:
    // 0x1b36d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b36d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B36D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B36D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36D4u;
            // 0x1b36d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B36DCu;
    // 0x1b36dc: 0x0  nop
    ctx->pc = 0x1b36dcu;
    // NOP
}
