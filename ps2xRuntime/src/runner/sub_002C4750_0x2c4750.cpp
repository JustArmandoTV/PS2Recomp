#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4750
// Address: 0x2c4750 - 0x2c47b0
void sub_002C4750_0x2c4750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4750_0x2c4750");
#endif

    switch (ctx->pc) {
        case 0x2c4790u: goto label_2c4790;
        default: break;
    }

    ctx->pc = 0x2c4750u;

    // 0x2c4750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c4754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c4754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c4758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c475c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c475cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4760: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C4760u;
    {
        const bool branch_taken_0x2c4760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4760) {
            ctx->pc = 0x2C4764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4760u;
            // 0x2c4764: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4794u;
            goto label_2c4794;
        }
    }
    ctx->pc = 0x2C4768u;
    // 0x2c4768: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c476c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c476cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c4770: 0x24420ef8  addiu       $v0, $v0, 0xEF8
    ctx->pc = 0x2c4770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3832));
    // 0x2c4774: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c4774u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c4778: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c4778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c477c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c477cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c4780: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4780u;
    {
        const bool branch_taken_0x2c4780 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C4784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4780u;
            // 0x2c4784: 0xac400dd8  sw          $zero, 0xDD8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4780) {
            ctx->pc = 0x2C4790u;
            goto label_2c4790;
        }
    }
    ctx->pc = 0x2C4788u;
    // 0x2c4788: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C4788u;
    SET_GPR_U32(ctx, 31, 0x2C4790u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4790u; }
        if (ctx->pc != 0x2C4790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4790u; }
        if (ctx->pc != 0x2C4790u) { return; }
    }
    ctx->pc = 0x2C4790u;
label_2c4790:
    // 0x2c4790: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c4790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4794:
    // 0x2c4794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c479c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C479Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C47A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C479Cu;
            // 0x2c47a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C47A4u;
    // 0x2c47a4: 0x0  nop
    ctx->pc = 0x2c47a4u;
    // NOP
    // 0x2c47a8: 0x0  nop
    ctx->pc = 0x2c47a8u;
    // NOP
    // 0x2c47ac: 0x0  nop
    ctx->pc = 0x2c47acu;
    // NOP
}
