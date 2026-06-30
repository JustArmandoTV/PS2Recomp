#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034E8D0
// Address: 0x34e8d0 - 0x34e930
void sub_0034E8D0_0x34e8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E8D0_0x34e8d0");
#endif

    switch (ctx->pc) {
        case 0x34e910u: goto label_34e910;
        default: break;
    }

    ctx->pc = 0x34e8d0u;

    // 0x34e8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34e8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e8dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34e8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8e0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x34E8E0u;
    {
        const bool branch_taken_0x34e8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e8e0) {
            ctx->pc = 0x34E8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E8E0u;
            // 0x34e8e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E914u;
            goto label_34e914;
        }
    }
    ctx->pc = 0x34E8E8u;
    // 0x34e8e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34e8ec: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x34e8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x34e8f0: 0x24425b70  addiu       $v0, $v0, 0x5B70
    ctx->pc = 0x34e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23408));
    // 0x34e8f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34e8f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x34e8f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x34e8fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34e900: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34E900u;
    {
        const bool branch_taken_0x34e900 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x34E904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E900u;
            // 0x34e904: 0xac403fd0  sw          $zero, 0x3FD0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e900) {
            ctx->pc = 0x34E910u;
            goto label_34e910;
        }
    }
    ctx->pc = 0x34E908u;
    // 0x34e908: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x34E908u;
    SET_GPR_U32(ctx, 31, 0x34E910u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E910u; }
        if (ctx->pc != 0x34E910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E910u; }
        if (ctx->pc != 0x34E910u) { return; }
    }
    ctx->pc = 0x34E910u;
label_34e910:
    // 0x34e910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34e910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34e914:
    // 0x34e914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34e914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e91c: 0x3e00008  jr          $ra
    ctx->pc = 0x34E91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E91Cu;
            // 0x34e920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E924u;
    // 0x34e924: 0x0  nop
    ctx->pc = 0x34e924u;
    // NOP
    // 0x34e928: 0x0  nop
    ctx->pc = 0x34e928u;
    // NOP
    // 0x34e92c: 0x0  nop
    ctx->pc = 0x34e92cu;
    // NOP
}
