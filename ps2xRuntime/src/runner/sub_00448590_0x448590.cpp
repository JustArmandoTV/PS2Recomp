#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00448590
// Address: 0x448590 - 0x4485f0
void sub_00448590_0x448590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00448590_0x448590");
#endif

    switch (ctx->pc) {
        case 0x4485d0u: goto label_4485d0;
        case 0x4485d8u: goto label_4485d8;
        default: break;
    }

    ctx->pc = 0x448590u;

    // 0x448590: 0x81124cc  j           func_449330
    ctx->pc = 0x448590u;
    ctx->pc = 0x448594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448590u;
            // 0x448594: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x449330u;
    {
        auto targetFn = runtime->lookupFunction(0x449330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x448598u;
    // 0x448598: 0x0  nop
    ctx->pc = 0x448598u;
    // NOP
    // 0x44859c: 0x0  nop
    ctx->pc = 0x44859cu;
    // NOP
    // 0x4485a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4485a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4485a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4485a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4485a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4485a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4485ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4485acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4485b0: 0x8c9001d4  lw          $s0, 0x1D4($a0)
    ctx->pc = 0x4485b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x4485b4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4485B4u;
    {
        const bool branch_taken_0x4485b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4485B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4485B4u;
            // 0x4485b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4485b4) {
            ctx->pc = 0x4485D8u;
            goto label_4485d8;
        }
    }
    ctx->pc = 0x4485BCu;
    // 0x4485bc: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4485BCu;
    {
        const bool branch_taken_0x4485bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4485bc) {
            ctx->pc = 0x4485C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4485BCu;
            // 0x4485c0: 0xae2001d4  sw          $zero, 0x1D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4485DCu;
            goto label_4485dc;
        }
    }
    ctx->pc = 0x4485C4u;
    // 0x4485c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4485c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4485c8: 0xc0b6158  jal         func_2D8560
    ctx->pc = 0x4485C8u;
    SET_GPR_U32(ctx, 31, 0x4485D0u);
    ctx->pc = 0x4485CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4485C8u;
            // 0x4485cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8560u;
    if (runtime->hasFunction(0x2D8560u)) {
        auto targetFn = runtime->lookupFunction(0x2D8560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4485D0u; }
        if (ctx->pc != 0x4485D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8560_0x2d8560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4485D0u; }
        if (ctx->pc != 0x4485D0u) { return; }
    }
    ctx->pc = 0x4485D0u;
label_4485d0:
    // 0x4485d0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4485D0u;
    SET_GPR_U32(ctx, 31, 0x4485D8u);
    ctx->pc = 0x4485D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4485D0u;
            // 0x4485d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4485D8u; }
        if (ctx->pc != 0x4485D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4485D8u; }
        if (ctx->pc != 0x4485D8u) { return; }
    }
    ctx->pc = 0x4485D8u;
label_4485d8:
    // 0x4485d8: 0xae2001d4  sw          $zero, 0x1D4($s1)
    ctx->pc = 0x4485d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
label_4485dc:
    // 0x4485dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4485dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4485e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4485e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4485e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4485e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4485e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4485E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4485ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4485E8u;
            // 0x4485ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4485F0u;
}
