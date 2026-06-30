#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047E190
// Address: 0x47e190 - 0x47e1f0
void sub_0047E190_0x47e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E190_0x47e190");
#endif

    switch (ctx->pc) {
        case 0x47e1d0u: goto label_47e1d0;
        default: break;
    }

    ctx->pc = 0x47e190u;

    // 0x47e190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47e190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47e194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47e194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47e198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47e198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47e19c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47e19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e1a0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x47E1A0u;
    {
        const bool branch_taken_0x47e1a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e1a0) {
            ctx->pc = 0x47E1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47E1A0u;
            // 0x47e1a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47E1D4u;
            goto label_47e1d4;
        }
    }
    ctx->pc = 0x47E1A8u;
    // 0x47e1a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x47e1ac: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x47e1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x47e1b0: 0x2442ee00  addiu       $v0, $v0, -0x1200
    ctx->pc = 0x47e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x47e1b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x47e1b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x47e1b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x47e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x47e1bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x47e1c0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47E1C0u;
    {
        const bool branch_taken_0x47e1c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x47E1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E1C0u;
            // 0x47e1c4: 0xac407778  sw          $zero, 0x7778($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e1c0) {
            ctx->pc = 0x47E1D0u;
            goto label_47e1d0;
        }
    }
    ctx->pc = 0x47E1C8u;
    // 0x47e1c8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x47E1C8u;
    SET_GPR_U32(ctx, 31, 0x47E1D0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E1D0u; }
        if (ctx->pc != 0x47E1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47E1D0u; }
        if (ctx->pc != 0x47E1D0u) { return; }
    }
    ctx->pc = 0x47E1D0u;
label_47e1d0:
    // 0x47e1d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47e1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e1d4:
    // 0x47e1d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47e1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47e1d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47e1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47e1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x47E1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47E1DCu;
            // 0x47e1e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47E1E4u;
    // 0x47e1e4: 0x0  nop
    ctx->pc = 0x47e1e4u;
    // NOP
    // 0x47e1e8: 0x0  nop
    ctx->pc = 0x47e1e8u;
    // NOP
    // 0x47e1ec: 0x0  nop
    ctx->pc = 0x47e1ecu;
    // NOP
}
