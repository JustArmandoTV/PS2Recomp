#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004310C0
// Address: 0x4310c0 - 0x431120
void sub_004310C0_0x4310c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004310C0_0x4310c0");
#endif

    switch (ctx->pc) {
        case 0x431100u: goto label_431100;
        default: break;
    }

    ctx->pc = 0x4310c0u;

    // 0x4310c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4310c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4310c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4310c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4310c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4310c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4310cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4310ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4310d0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4310D0u;
    {
        const bool branch_taken_0x4310d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4310d0) {
            ctx->pc = 0x4310D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4310D0u;
            // 0x4310d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431104u;
            goto label_431104;
        }
    }
    ctx->pc = 0x4310D8u;
    // 0x4310d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4310d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4310dc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4310dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4310e0: 0x2442c7d8  addiu       $v0, $v0, -0x3828
    ctx->pc = 0x4310e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952920));
    // 0x4310e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4310e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4310e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4310e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4310ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4310ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4310f0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4310F0u;
    {
        const bool branch_taken_0x4310f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4310F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4310F0u;
            // 0x4310f4: 0xac4074e8  sw          $zero, 0x74E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4310f0) {
            ctx->pc = 0x431100u;
            goto label_431100;
        }
    }
    ctx->pc = 0x4310F8u;
    // 0x4310f8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4310F8u;
    SET_GPR_U32(ctx, 31, 0x431100u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431100u; }
        if (ctx->pc != 0x431100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431100u; }
        if (ctx->pc != 0x431100u) { return; }
    }
    ctx->pc = 0x431100u;
label_431100:
    // 0x431100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x431100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_431104:
    // 0x431104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x431104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x431108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x431108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43110c: 0x3e00008  jr          $ra
    ctx->pc = 0x43110Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43110Cu;
            // 0x431110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x431114u;
    // 0x431114: 0x0  nop
    ctx->pc = 0x431114u;
    // NOP
    // 0x431118: 0x0  nop
    ctx->pc = 0x431118u;
    // NOP
    // 0x43111c: 0x0  nop
    ctx->pc = 0x43111cu;
    // NOP
}
