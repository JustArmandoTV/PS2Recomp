#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B68B0
// Address: 0x2b68b0 - 0x2b6900
void sub_002B68B0_0x2b68b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B68B0_0x2b68b0");
#endif

    switch (ctx->pc) {
        case 0x2b68e0u: goto label_2b68e0;
        default: break;
    }

    ctx->pc = 0x2b68b0u;

    // 0x2b68b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b68b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b68b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b68b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b68b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b68b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b68bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b68bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68c0: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B68C0u;
    {
        const bool branch_taken_0x2b68c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b68c0) {
            ctx->pc = 0x2B68C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B68C0u;
            // 0x2b68c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B68E4u;
            goto label_2b68e4;
        }
    }
    ctx->pc = 0x2B68C8u;
    // 0x2b68c8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2b68c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2b68cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b68ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b68d0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B68D0u;
    {
        const bool branch_taken_0x2b68d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b68d0) {
            ctx->pc = 0x2B68E0u;
            goto label_2b68e0;
        }
    }
    ctx->pc = 0x2B68D8u;
    // 0x2b68d8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B68D8u;
    SET_GPR_U32(ctx, 31, 0x2B68E0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B68E0u; }
        if (ctx->pc != 0x2B68E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B68E0u; }
        if (ctx->pc != 0x2B68E0u) { return; }
    }
    ctx->pc = 0x2B68E0u;
label_2b68e0:
    // 0x2b68e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b68e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b68e4:
    // 0x2b68e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b68e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b68e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b68e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b68ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B68ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B68F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B68ECu;
            // 0x2b68f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B68F4u;
    // 0x2b68f4: 0x0  nop
    ctx->pc = 0x2b68f4u;
    // NOP
    // 0x2b68f8: 0x0  nop
    ctx->pc = 0x2b68f8u;
    // NOP
    // 0x2b68fc: 0x0  nop
    ctx->pc = 0x2b68fcu;
    // NOP
}
