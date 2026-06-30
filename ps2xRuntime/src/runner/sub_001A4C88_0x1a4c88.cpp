#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4C88
// Address: 0x1a4c88 - 0x1a4cf8
void sub_001A4C88_0x1a4c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4C88_0x1a4c88");
#endif

    switch (ctx->pc) {
        case 0x1a4ca8u: goto label_1a4ca8;
        case 0x1a4cb8u: goto label_1a4cb8;
        default: break;
    }

    ctx->pc = 0x1a4c88u;

    // 0x1a4c88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4c8c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a4c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a4c90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a4c9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a4ca0: 0xc06e376  jal         func_1B8DD8
    ctx->pc = 0x1A4CA0u;
    SET_GPR_U32(ctx, 31, 0x1A4CA8u);
    ctx->pc = 0x1A4CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CA0u;
            // 0x1a4ca4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DD8u;
    if (runtime->hasFunction(0x1B8DD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B8DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CA8u; }
        if (ctx->pc != 0x1A4CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8DD8_0x1b8dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CA8u; }
        if (ctx->pc != 0x1A4CA8u) { return; }
    }
    ctx->pc = 0x1A4CA8u;
label_1a4ca8:
    // 0x1a4ca8: 0x1051000d  beq         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A4CA8u;
    {
        const bool branch_taken_0x1a4ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A4CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CA8u;
            // 0x1a4cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ca8) {
            ctx->pc = 0x1A4CE0u;
            goto label_1a4ce0;
        }
    }
    ctx->pc = 0x1A4CB0u;
    // 0x1a4cb0: 0xc069948  jal         func_1A6520
    ctx->pc = 0x1A4CB0u;
    SET_GPR_U32(ctx, 31, 0x1A4CB8u);
    ctx->pc = 0x1A4CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CB0u;
            // 0x1a4cb4: 0x8e05218c  lw          $a1, 0x218C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8588)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6520u;
    if (runtime->hasFunction(0x1A6520u)) {
        auto targetFn = runtime->lookupFunction(0x1A6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CB8u; }
        if (ctx->pc != 0x1A4CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6520_0x1a6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CB8u; }
        if (ctx->pc != 0x1A4CB8u) { return; }
    }
    ctx->pc = 0x1A4CB8u;
label_1a4cb8:
    // 0x1a4cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4cbc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a4cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a4cc0: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4CC0u;
    {
        const bool branch_taken_0x1a4cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1A4CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CC0u;
            // 0x1a4cc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4cc0) {
            ctx->pc = 0x1A4CE0u;
            goto label_1a4ce0;
        }
    }
    ctx->pc = 0x1A4CC8u;
    // 0x1a4cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4ccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4cd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4cd4: 0x806e370  j           func_1B8DC0
    ctx->pc = 0x1A4CD4u;
    ctx->pc = 0x1A4CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CD4u;
            // 0x1a4cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DC0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B8DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A4CDCu;
    // 0x1a4cdc: 0x0  nop
    ctx->pc = 0x1a4cdcu;
    // NOP
label_1a4ce0:
    // 0x1a4ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4ce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4cec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CECu;
            // 0x1a4cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4CF4u;
    // 0x1a4cf4: 0x0  nop
    ctx->pc = 0x1a4cf4u;
    // NOP
}
