#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B59C0
// Address: 0x2b59c0 - 0x2b5a10
void sub_002B59C0_0x2b59c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B59C0_0x2b59c0");
#endif

    switch (ctx->pc) {
        case 0x2b59f8u: goto label_2b59f8;
        default: break;
    }

    ctx->pc = 0x2b59c0u;

    // 0x2b59c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b59c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b59c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b59c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b59c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b59c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b59cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b59ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b59d0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B59D0u;
    {
        const bool branch_taken_0x2b59d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b59d0) {
            ctx->pc = 0x2B59D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59D0u;
            // 0x2b59d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B59FCu;
            goto label_2b59fc;
        }
    }
    ctx->pc = 0x2B59D8u;
    // 0x2b59d8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2b59d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2b59dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b59dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b59e0: 0x24632a40  addiu       $v1, $v1, 0x2A40
    ctx->pc = 0x2b59e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10816));
    // 0x2b59e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b59e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b59e8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B59E8u;
    {
        const bool branch_taken_0x2b59e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B59ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59E8u;
            // 0x2b59ec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59e8) {
            ctx->pc = 0x2B59F8u;
            goto label_2b59f8;
        }
    }
    ctx->pc = 0x2B59F0u;
    // 0x2b59f0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B59F0u;
    SET_GPR_U32(ctx, 31, 0x2B59F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B59F8u; }
        if (ctx->pc != 0x2B59F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B59F8u; }
        if (ctx->pc != 0x2B59F8u) { return; }
    }
    ctx->pc = 0x2B59F8u;
label_2b59f8:
    // 0x2b59f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b59f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b59fc:
    // 0x2b59fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b59fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5a00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5a04: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A04u;
            // 0x2b5a08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5A0Cu;
    // 0x2b5a0c: 0x0  nop
    ctx->pc = 0x2b5a0cu;
    // NOP
}
