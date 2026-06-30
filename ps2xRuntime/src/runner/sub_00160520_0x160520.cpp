#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160520
// Address: 0x160520 - 0x160560
void sub_00160520_0x160520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160520_0x160520");
#endif

    switch (ctx->pc) {
        case 0x160540u: goto label_160540;
        default: break;
    }

    ctx->pc = 0x160520u;

    // 0x160520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x160524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x160528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16052c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x16052cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x160530: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x160530u;
    {
        const bool branch_taken_0x160530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x160534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160530u;
            // 0x160534: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160530) {
            ctx->pc = 0x160550u;
            goto label_160550;
        }
    }
    ctx->pc = 0x160538u;
    // 0x160538: 0xc0580a0  jal         func_160280
    ctx->pc = 0x160538u;
    SET_GPR_U32(ctx, 31, 0x160540u);
    ctx->pc = 0x160280u;
    if (runtime->hasFunction(0x160280u)) {
        auto targetFn = runtime->lookupFunction(0x160280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160540u; }
        if (ctx->pc != 0x160540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160280_0x160280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160540u; }
        if (ctx->pc != 0x160540u) { return; }
    }
    ctx->pc = 0x160540u;
label_160540:
    // 0x160540: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160544: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x160544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x160548: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x160548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x16054c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x16054cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_160550:
    // 0x160550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x160550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160558: 0x3e00008  jr          $ra
    ctx->pc = 0x160558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16055Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160558u;
            // 0x16055c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160560u;
}
