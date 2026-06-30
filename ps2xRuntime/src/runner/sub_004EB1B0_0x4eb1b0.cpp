#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EB1B0
// Address: 0x4eb1b0 - 0x4eb200
void sub_004EB1B0_0x4eb1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB1B0_0x4eb1b0");
#endif

    switch (ctx->pc) {
        case 0x4eb1e8u: goto label_4eb1e8;
        default: break;
    }

    ctx->pc = 0x4eb1b0u;

    // 0x4eb1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4eb1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4eb1b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4eb1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4eb1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4eb1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4eb1bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eb1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb1c0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4EB1C0u;
    {
        const bool branch_taken_0x4eb1c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb1c0) {
            ctx->pc = 0x4EB1C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB1C0u;
            // 0x4eb1c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EB1ECu;
            goto label_4eb1ec;
        }
    }
    ctx->pc = 0x4EB1C8u;
    // 0x4eb1c8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x4eb1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4eb1cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4eb1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4eb1d0: 0x24633be0  addiu       $v1, $v1, 0x3BE0
    ctx->pc = 0x4eb1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15328));
    // 0x4eb1d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4eb1d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4eb1d8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EB1D8u;
    {
        const bool branch_taken_0x4eb1d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4EB1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB1D8u;
            // 0x4eb1dc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb1d8) {
            ctx->pc = 0x4EB1E8u;
            goto label_4eb1e8;
        }
    }
    ctx->pc = 0x4EB1E0u;
    // 0x4eb1e0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4EB1E0u;
    SET_GPR_U32(ctx, 31, 0x4EB1E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB1E8u; }
        if (ctx->pc != 0x4EB1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB1E8u; }
        if (ctx->pc != 0x4EB1E8u) { return; }
    }
    ctx->pc = 0x4EB1E8u;
label_4eb1e8:
    // 0x4eb1e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4eb1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eb1ec:
    // 0x4eb1ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4eb1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eb1f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4eb1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB1F4u;
            // 0x4eb1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EB1FCu;
    // 0x4eb1fc: 0x0  nop
    ctx->pc = 0x4eb1fcu;
    // NOP
}
