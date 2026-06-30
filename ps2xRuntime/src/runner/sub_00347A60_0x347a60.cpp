#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347A60
// Address: 0x347a60 - 0x347ac0
void sub_00347A60_0x347a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347A60_0x347a60");
#endif

    switch (ctx->pc) {
        case 0x347aa0u: goto label_347aa0;
        default: break;
    }

    ctx->pc = 0x347a60u;

    // 0x347a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x347a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347a6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a70: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x347A70u;
    {
        const bool branch_taken_0x347a70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x347a70) {
            ctx->pc = 0x347A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347A70u;
            // 0x347a74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x347AA4u;
            goto label_347aa4;
        }
    }
    ctx->pc = 0x347A78u;
    // 0x347a78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x347a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x347a7c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x347a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x347a80: 0x24425878  addiu       $v0, $v0, 0x5878
    ctx->pc = 0x347a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22648));
    // 0x347a84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x347a84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x347a88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x347a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x347a8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x347a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x347a90: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x347A90u;
    {
        const bool branch_taken_0x347a90 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x347A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347A90u;
            // 0x347a94: 0xac403ea8  sw          $zero, 0x3EA8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a90) {
            ctx->pc = 0x347AA0u;
            goto label_347aa0;
        }
    }
    ctx->pc = 0x347A98u;
    // 0x347a98: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x347A98u;
    SET_GPR_U32(ctx, 31, 0x347AA0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347AA0u; }
        if (ctx->pc != 0x347AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347AA0u; }
        if (ctx->pc != 0x347AA0u) { return; }
    }
    ctx->pc = 0x347AA0u;
label_347aa0:
    // 0x347aa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x347aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_347aa4:
    // 0x347aa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347aac: 0x3e00008  jr          $ra
    ctx->pc = 0x347AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347AACu;
            // 0x347ab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347AB4u;
    // 0x347ab4: 0x0  nop
    ctx->pc = 0x347ab4u;
    // NOP
    // 0x347ab8: 0x0  nop
    ctx->pc = 0x347ab8u;
    // NOP
    // 0x347abc: 0x0  nop
    ctx->pc = 0x347abcu;
    // NOP
}
