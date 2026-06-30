#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052E5D0
// Address: 0x52e5d0 - 0x52e630
void sub_0052E5D0_0x52e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052E5D0_0x52e5d0");
#endif

    switch (ctx->pc) {
        case 0x52e610u: goto label_52e610;
        default: break;
    }

    ctx->pc = 0x52e5d0u;

    // 0x52e5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x52e5d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x52e5d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52e5dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52e5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52e5e0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x52E5E0u;
    {
        const bool branch_taken_0x52e5e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e5e0) {
            ctx->pc = 0x52E5E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52E5E0u;
            // 0x52e5e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52E614u;
            goto label_52e614;
        }
    }
    ctx->pc = 0x52E5E8u;
    // 0x52e5e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52e5ec: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x52e5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x52e5f0: 0x24426b30  addiu       $v0, $v0, 0x6B30
    ctx->pc = 0x52e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27440));
    // 0x52e5f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x52e5f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x52e5f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x52e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x52e5fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x52e600: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x52E600u;
    {
        const bool branch_taken_0x52e600 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x52E604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E600u;
            // 0x52e604: 0xac403fe8  sw          $zero, 0x3FE8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e600) {
            ctx->pc = 0x52E610u;
            goto label_52e610;
        }
    }
    ctx->pc = 0x52E608u;
    // 0x52e608: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x52E608u;
    SET_GPR_U32(ctx, 31, 0x52E610u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E610u; }
        if (ctx->pc != 0x52E610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E610u; }
        if (ctx->pc != 0x52E610u) { return; }
    }
    ctx->pc = 0x52E610u;
label_52e610:
    // 0x52e610: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52e610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52e614:
    // 0x52e614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52e614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52e618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52e618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52e61c: 0x3e00008  jr          $ra
    ctx->pc = 0x52E61Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52E620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E61Cu;
            // 0x52e620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52E624u;
    // 0x52e624: 0x0  nop
    ctx->pc = 0x52e624u;
    // NOP
    // 0x52e628: 0x0  nop
    ctx->pc = 0x52e628u;
    // NOP
    // 0x52e62c: 0x0  nop
    ctx->pc = 0x52e62cu;
    // NOP
}
