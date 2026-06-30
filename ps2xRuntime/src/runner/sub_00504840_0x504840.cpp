#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00504840
// Address: 0x504840 - 0x5048a0
void sub_00504840_0x504840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504840_0x504840");
#endif

    switch (ctx->pc) {
        case 0x504880u: goto label_504880;
        default: break;
    }

    ctx->pc = 0x504840u;

    // 0x504840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x504840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x504844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x504844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x504848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x504848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50484c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50484cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504850: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x504850u;
    {
        const bool branch_taken_0x504850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x504850) {
            ctx->pc = 0x504854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504850u;
            // 0x504854: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504884u;
            goto label_504884;
        }
    }
    ctx->pc = 0x504858u;
    // 0x504858: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50485c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x50485cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x504860: 0x24424cc0  addiu       $v0, $v0, 0x4CC0
    ctx->pc = 0x504860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19648));
    // 0x504864: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x504864u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x504868: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x504868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x50486c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x50486cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x504870: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x504870u;
    {
        const bool branch_taken_0x504870 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x504874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504870u;
            // 0x504874: 0xac40aaf0  sw          $zero, -0x5510($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504870) {
            ctx->pc = 0x504880u;
            goto label_504880;
        }
    }
    ctx->pc = 0x504878u;
    // 0x504878: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x504878u;
    SET_GPR_U32(ctx, 31, 0x504880u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504880u; }
        if (ctx->pc != 0x504880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504880u; }
        if (ctx->pc != 0x504880u) { return; }
    }
    ctx->pc = 0x504880u;
label_504880:
    // 0x504880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x504880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_504884:
    // 0x504884: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x504884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50488c: 0x3e00008  jr          $ra
    ctx->pc = 0x50488Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50488Cu;
            // 0x504890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504894u;
    // 0x504894: 0x0  nop
    ctx->pc = 0x504894u;
    // NOP
    // 0x504898: 0x0  nop
    ctx->pc = 0x504898u;
    // NOP
    // 0x50489c: 0x0  nop
    ctx->pc = 0x50489cu;
    // NOP
}
