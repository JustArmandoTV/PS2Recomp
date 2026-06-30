#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00374C60
// Address: 0x374c60 - 0x374cc0
void sub_00374C60_0x374c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374C60_0x374c60");
#endif

    switch (ctx->pc) {
        case 0x374ca0u: goto label_374ca0;
        default: break;
    }

    ctx->pc = 0x374c60u;

    // 0x374c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x374c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x374c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x374c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x374c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x374c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c70: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x374C70u;
    {
        const bool branch_taken_0x374c70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x374c70) {
            ctx->pc = 0x374C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374C70u;
            // 0x374c74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374CA4u;
            goto label_374ca4;
        }
    }
    ctx->pc = 0x374C78u;
    // 0x374c78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x374c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x374c7c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x374c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x374c80: 0x24426fb8  addiu       $v0, $v0, 0x6FB8
    ctx->pc = 0x374c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28600));
    // 0x374c84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x374c84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x374c88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x374c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x374c8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x374c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x374c90: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x374C90u;
    {
        const bool branch_taken_0x374c90 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x374C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374C90u;
            // 0x374c94: 0xac406070  sw          $zero, 0x6070($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374c90) {
            ctx->pc = 0x374CA0u;
            goto label_374ca0;
        }
    }
    ctx->pc = 0x374C98u;
    // 0x374c98: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x374C98u;
    SET_GPR_U32(ctx, 31, 0x374CA0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374CA0u; }
        if (ctx->pc != 0x374CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374CA0u; }
        if (ctx->pc != 0x374CA0u) { return; }
    }
    ctx->pc = 0x374CA0u;
label_374ca0:
    // 0x374ca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x374ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_374ca4:
    // 0x374ca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x374ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374cac: 0x3e00008  jr          $ra
    ctx->pc = 0x374CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374CACu;
            // 0x374cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374CB4u;
    // 0x374cb4: 0x0  nop
    ctx->pc = 0x374cb4u;
    // NOP
    // 0x374cb8: 0x0  nop
    ctx->pc = 0x374cb8u;
    // NOP
    // 0x374cbc: 0x0  nop
    ctx->pc = 0x374cbcu;
    // NOP
}
