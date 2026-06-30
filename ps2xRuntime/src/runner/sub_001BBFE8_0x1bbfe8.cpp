#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBFE8
// Address: 0x1bbfe8 - 0x1bc030
void sub_001BBFE8_0x1bbfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBFE8_0x1bbfe8");
#endif

    switch (ctx->pc) {
        case 0x1bc000u: goto label_1bc000;
        default: break;
    }

    ctx->pc = 0x1bbfe8u;

    // 0x1bbfe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbfec: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bbfecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bbff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbff4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bbff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bbff8: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BBFF8u;
    SET_GPR_U32(ctx, 31, 0x1BC000u);
    ctx->pc = 0x1BBFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFF8u;
            // 0x1bbffc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC000u; }
        if (ctx->pc != 0x1BC000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC000u; }
        if (ctx->pc != 0x1BC000u) { return; }
    }
    ctx->pc = 0x1BC000u;
label_1bc000:
    // 0x1bc000: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bc000u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc004: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC004u;
    {
        const bool branch_taken_0x1bc004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc004) {
            ctx->pc = 0x1BC008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC004u;
            // 0x1bc008: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC024u;
            goto label_1bc024;
        }
    }
    ctx->pc = 0x1BC00Cu;
    // 0x1bc00c: 0x9463001a  lhu         $v1, 0x1A($v1)
    ctx->pc = 0x1bc00cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1bc010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc014: 0x3864ffff  xori        $a0, $v1, 0xFFFF
    ctx->pc = 0x1bc014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
    // 0x1bc018: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x1bc018u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1bc01c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc024:
    // 0x1bc024: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bc024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc028: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC028u;
            // 0x1bc02c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC030u;
}
