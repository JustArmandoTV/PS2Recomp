#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00401F60
// Address: 0x401f60 - 0x401fb0
void sub_00401F60_0x401f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00401F60_0x401f60");
#endif

    switch (ctx->pc) {
        case 0x401f94u: goto label_401f94;
        default: break;
    }

    ctx->pc = 0x401f60u;

    // 0x401f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x401f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x401f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x401f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x401f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x401f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x401f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x401f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401f70: 0x52050009  beql        $s0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x401F70u;
    {
        const bool branch_taken_0x401f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x401f70) {
            ctx->pc = 0x401F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401F70u;
            // 0x401f74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401F98u;
            goto label_401f98;
        }
    }
    ctx->pc = 0x401F78u;
    // 0x401f78: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x401f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x401f7c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x401f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x401f80: 0x83a7002c  lb          $a3, 0x2C($sp)
    ctx->pc = 0x401f80u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x401f84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x401f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x401f88: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x401f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401f8c: 0xc100860  jal         func_402180
    ctx->pc = 0x401F8Cu;
    SET_GPR_U32(ctx, 31, 0x401F94u);
    ctx->pc = 0x401F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401F8Cu;
            // 0x401f90: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x402180u;
    if (runtime->hasFunction(0x402180u)) {
        auto targetFn = runtime->lookupFunction(0x402180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401F94u; }
        if (ctx->pc != 0x401F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00402180_0x402180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401F94u; }
        if (ctx->pc != 0x401F94u) { return; }
    }
    ctx->pc = 0x401F94u;
label_401f94:
    // 0x401f94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x401f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_401f98:
    // 0x401f98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x401f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x401f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x401f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x401fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x401FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x401FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401FA0u;
            // 0x401fa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x401FA8u;
    // 0x401fa8: 0x0  nop
    ctx->pc = 0x401fa8u;
    // NOP
    // 0x401fac: 0x0  nop
    ctx->pc = 0x401facu;
    // NOP
}
