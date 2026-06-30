#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F2D20
// Address: 0x4f2d20 - 0x4f2d80
void sub_004F2D20_0x4f2d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2D20_0x4f2d20");
#endif

    switch (ctx->pc) {
        case 0x4f2d60u: goto label_4f2d60;
        default: break;
    }

    ctx->pc = 0x4f2d20u;

    // 0x4f2d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f2d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f2d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f2d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f2d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f2d2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f2d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2d30: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4F2D30u;
    {
        const bool branch_taken_0x4f2d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2d30) {
            ctx->pc = 0x4F2D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2D30u;
            // 0x4f2d34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F2D64u;
            goto label_4f2d64;
        }
    }
    ctx->pc = 0x4F2D38u;
    // 0x4f2d38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f2d3c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4f2d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4f2d40: 0x24424228  addiu       $v0, $v0, 0x4228
    ctx->pc = 0x4f2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16936));
    // 0x4f2d44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4f2d44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4f2d48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f2d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f2d4c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4f2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4f2d50: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F2D50u;
    {
        const bool branch_taken_0x4f2d50 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4F2D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2D50u;
            // 0x4f2d54: 0xac40aae0  sw          $zero, -0x5520($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2d50) {
            ctx->pc = 0x4F2D60u;
            goto label_4f2d60;
        }
    }
    ctx->pc = 0x4F2D58u;
    // 0x4f2d58: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F2D58u;
    SET_GPR_U32(ctx, 31, 0x4F2D60u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2D60u; }
        if (ctx->pc != 0x4F2D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2D60u; }
        if (ctx->pc != 0x4F2D60u) { return; }
    }
    ctx->pc = 0x4F2D60u;
label_4f2d60:
    // 0x4f2d60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f2d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2d64:
    // 0x4f2d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f2d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2D6Cu;
            // 0x4f2d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F2D74u;
    // 0x4f2d74: 0x0  nop
    ctx->pc = 0x4f2d74u;
    // NOP
    // 0x4f2d78: 0x0  nop
    ctx->pc = 0x4f2d78u;
    // NOP
    // 0x4f2d7c: 0x0  nop
    ctx->pc = 0x4f2d7cu;
    // NOP
}
