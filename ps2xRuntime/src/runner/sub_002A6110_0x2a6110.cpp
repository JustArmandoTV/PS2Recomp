#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A6110
// Address: 0x2a6110 - 0x2a6160
void sub_002A6110_0x2a6110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6110_0x2a6110");
#endif

    switch (ctx->pc) {
        case 0x2a6140u: goto label_2a6140;
        default: break;
    }

    ctx->pc = 0x2a6110u;

    // 0x2a6110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a611c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a611cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6120: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A6120u;
    {
        const bool branch_taken_0x2a6120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6120) {
            ctx->pc = 0x2A6124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6120u;
            // 0x2a6124: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A6144u;
            goto label_2a6144;
        }
    }
    ctx->pc = 0x2A6128u;
    // 0x2a6128: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2a6128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2a612c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a612cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a6130: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6130u;
    {
        const bool branch_taken_0x2a6130 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a6130) {
            ctx->pc = 0x2A6140u;
            goto label_2a6140;
        }
    }
    ctx->pc = 0x2A6138u;
    // 0x2a6138: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A6138u;
    SET_GPR_U32(ctx, 31, 0x2A6140u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6140u; }
        if (ctx->pc != 0x2A6140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6140u; }
        if (ctx->pc != 0x2A6140u) { return; }
    }
    ctx->pc = 0x2A6140u;
label_2a6140:
    // 0x2a6140: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a6140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6144:
    // 0x2a6144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a614c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A614Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A614Cu;
            // 0x2a6150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6154u;
    // 0x2a6154: 0x0  nop
    ctx->pc = 0x2a6154u;
    // NOP
    // 0x2a6158: 0x0  nop
    ctx->pc = 0x2a6158u;
    // NOP
    // 0x2a615c: 0x0  nop
    ctx->pc = 0x2a615cu;
    // NOP
}
