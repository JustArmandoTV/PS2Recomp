#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052C820
// Address: 0x52c820 - 0x52c880
void sub_0052C820_0x52c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052C820_0x52c820");
#endif

    switch (ctx->pc) {
        case 0x52c860u: goto label_52c860;
        default: break;
    }

    ctx->pc = 0x52c820u;

    // 0x52c820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x52c824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x52c828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52c828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52c82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52c82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52c830: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x52C830u;
    {
        const bool branch_taken_0x52c830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c830) {
            ctx->pc = 0x52C834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C830u;
            // 0x52c834: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C864u;
            goto label_52c864;
        }
    }
    ctx->pc = 0x52C838u;
    // 0x52c838: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52c838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52c83c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x52c83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x52c840: 0x244268f8  addiu       $v0, $v0, 0x68F8
    ctx->pc = 0x52c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26872));
    // 0x52c844: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x52c844u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x52c848: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x52c848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x52c84c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x52c850: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x52C850u;
    {
        const bool branch_taken_0x52c850 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x52C854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C850u;
            // 0x52c854: 0xac40b608  sw          $zero, -0x49F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c850) {
            ctx->pc = 0x52C860u;
            goto label_52c860;
        }
    }
    ctx->pc = 0x52C858u;
    // 0x52c858: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x52C858u;
    SET_GPR_U32(ctx, 31, 0x52C860u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C860u; }
        if (ctx->pc != 0x52C860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C860u; }
        if (ctx->pc != 0x52C860u) { return; }
    }
    ctx->pc = 0x52C860u;
label_52c860:
    // 0x52c860: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52c860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52c864:
    // 0x52c864: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52c864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52c868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52c868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52c86c: 0x3e00008  jr          $ra
    ctx->pc = 0x52C86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52C870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C86Cu;
            // 0x52c870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52C874u;
    // 0x52c874: 0x0  nop
    ctx->pc = 0x52c874u;
    // NOP
    // 0x52c878: 0x0  nop
    ctx->pc = 0x52c878u;
    // NOP
    // 0x52c87c: 0x0  nop
    ctx->pc = 0x52c87cu;
    // NOP
}
