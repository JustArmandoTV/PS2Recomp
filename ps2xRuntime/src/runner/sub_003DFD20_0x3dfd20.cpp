#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DFD20
// Address: 0x3dfd20 - 0x3dfd80
void sub_003DFD20_0x3dfd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFD20_0x3dfd20");
#endif

    switch (ctx->pc) {
        case 0x3dfd60u: goto label_3dfd60;
        default: break;
    }

    ctx->pc = 0x3dfd20u;

    // 0x3dfd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dfd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dfd24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dfd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dfd28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dfd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dfd2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dfd2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfd30: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3DFD30u;
    {
        const bool branch_taken_0x3dfd30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfd30) {
            ctx->pc = 0x3DFD34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFD30u;
            // 0x3dfd34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DFD64u;
            goto label_3dfd64;
        }
    }
    ctx->pc = 0x3DFD38u;
    // 0x3dfd38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dfd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3dfd3c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3dfd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3dfd40: 0x24429b18  addiu       $v0, $v0, -0x64E8
    ctx->pc = 0x3dfd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941464));
    // 0x3dfd44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3dfd44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3dfd48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3dfd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3dfd4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3dfd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3dfd50: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFD50u;
    {
        const bool branch_taken_0x3dfd50 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3DFD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFD50u;
            // 0x3dfd54: 0xac403da0  sw          $zero, 0x3DA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15776), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfd50) {
            ctx->pc = 0x3DFD60u;
            goto label_3dfd60;
        }
    }
    ctx->pc = 0x3DFD58u;
    // 0x3dfd58: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3DFD58u;
    SET_GPR_U32(ctx, 31, 0x3DFD60u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFD60u; }
        if (ctx->pc != 0x3DFD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFD60u; }
        if (ctx->pc != 0x3DFD60u) { return; }
    }
    ctx->pc = 0x3DFD60u;
label_3dfd60:
    // 0x3dfd60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3dfd60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfd64:
    // 0x3dfd64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dfd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dfd68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dfd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dfd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFD6Cu;
            // 0x3dfd70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DFD74u;
    // 0x3dfd74: 0x0  nop
    ctx->pc = 0x3dfd74u;
    // NOP
    // 0x3dfd78: 0x0  nop
    ctx->pc = 0x3dfd78u;
    // NOP
    // 0x3dfd7c: 0x0  nop
    ctx->pc = 0x3dfd7cu;
    // NOP
}
