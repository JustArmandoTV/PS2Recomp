#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C83D0
// Address: 0x4c83d0 - 0x4c8430
void sub_004C83D0_0x4c83d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C83D0_0x4c83d0");
#endif

    switch (ctx->pc) {
        case 0x4c8410u: goto label_4c8410;
        default: break;
    }

    ctx->pc = 0x4c83d0u;

    // 0x4c83d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c83d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c83d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c83d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c83d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c83d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c83dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c83dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c83e0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4C83E0u;
    {
        const bool branch_taken_0x4c83e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c83e0) {
            ctx->pc = 0x4C83E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C83E0u;
            // 0x4c83e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C8414u;
            goto label_4c8414;
        }
    }
    ctx->pc = 0x4C83E8u;
    // 0x4c83e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c83ec: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4c83ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4c83f0: 0x24421930  addiu       $v0, $v0, 0x1930
    ctx->pc = 0x4c83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6448));
    // 0x4c83f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4c83f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4c83f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c83f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c83fc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4c8400: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C8400u;
    {
        const bool branch_taken_0x4c8400 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4C8404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8400u;
            // 0x4c8404: 0xac40aa08  sw          $zero, -0x55F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8400) {
            ctx->pc = 0x4C8410u;
            goto label_4c8410;
        }
    }
    ctx->pc = 0x4C8408u;
    // 0x4c8408: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C8408u;
    SET_GPR_U32(ctx, 31, 0x4C8410u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8410u; }
        if (ctx->pc != 0x4C8410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8410u; }
        if (ctx->pc != 0x4C8410u) { return; }
    }
    ctx->pc = 0x4C8410u;
label_4c8410:
    // 0x4c8410: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c8410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c8414:
    // 0x4c8414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c8414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c8418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c8418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c841c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C841Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C841Cu;
            // 0x4c8420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C8424u;
    // 0x4c8424: 0x0  nop
    ctx->pc = 0x4c8424u;
    // NOP
    // 0x4c8428: 0x0  nop
    ctx->pc = 0x4c8428u;
    // NOP
    // 0x4c842c: 0x0  nop
    ctx->pc = 0x4c842cu;
    // NOP
}
