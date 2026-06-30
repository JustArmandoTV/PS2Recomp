#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049E8F0
// Address: 0x49e8f0 - 0x49e950
void sub_0049E8F0_0x49e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E8F0_0x49e8f0");
#endif

    switch (ctx->pc) {
        case 0x49e930u: goto label_49e930;
        default: break;
    }

    ctx->pc = 0x49e8f0u;

    // 0x49e8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49e8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49e8f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49e8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49e8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49e8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49e8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49e8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e900: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x49E900u;
    {
        const bool branch_taken_0x49e900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e900) {
            ctx->pc = 0x49E904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E900u;
            // 0x49e904: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E934u;
            goto label_49e934;
        }
    }
    ctx->pc = 0x49E908u;
    // 0x49e908: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49e90c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x49e90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x49e910: 0x2442ff08  addiu       $v0, $v0, -0xF8
    ctx->pc = 0x49e910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967048));
    // 0x49e914: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x49e914u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x49e918: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49e918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49e91c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x49e920: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x49E920u;
    {
        const bool branch_taken_0x49e920 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x49E924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E920u;
            // 0x49e924: 0xac407c18  sw          $zero, 0x7C18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e920) {
            ctx->pc = 0x49E930u;
            goto label_49e930;
        }
    }
    ctx->pc = 0x49E928u;
    // 0x49e928: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x49E928u;
    SET_GPR_U32(ctx, 31, 0x49E930u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E930u; }
        if (ctx->pc != 0x49E930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E930u; }
        if (ctx->pc != 0x49E930u) { return; }
    }
    ctx->pc = 0x49E930u;
label_49e930:
    // 0x49e930: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49e930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49e934:
    // 0x49e934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49e934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49e938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49e938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e93c: 0x3e00008  jr          $ra
    ctx->pc = 0x49E93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E93Cu;
            // 0x49e940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49E944u;
    // 0x49e944: 0x0  nop
    ctx->pc = 0x49e944u;
    // NOP
    // 0x49e948: 0x0  nop
    ctx->pc = 0x49e948u;
    // NOP
    // 0x49e94c: 0x0  nop
    ctx->pc = 0x49e94cu;
    // NOP
}
