#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DCA90
// Address: 0x4dca90 - 0x4dcaf0
void sub_004DCA90_0x4dca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCA90_0x4dca90");
#endif

    switch (ctx->pc) {
        case 0x4dcad0u: goto label_4dcad0;
        default: break;
    }

    ctx->pc = 0x4dca90u;

    // 0x4dca90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4dca94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4dca98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4dca9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dca9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dcaa0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4DCAA0u;
    {
        const bool branch_taken_0x4dcaa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dcaa0) {
            ctx->pc = 0x4DCAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCAA0u;
            // 0x4dcaa4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DCAD4u;
            goto label_4dcad4;
        }
    }
    ctx->pc = 0x4DCAA8u;
    // 0x4dcaa8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dcaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4dcaac: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4dcaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4dcab0: 0x24422d18  addiu       $v0, $v0, 0x2D18
    ctx->pc = 0x4dcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11544));
    // 0x4dcab4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4dcab4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4dcab8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4dcab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4dcabc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4dcabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4dcac0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DCAC0u;
    {
        const bool branch_taken_0x4dcac0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4DCAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCAC0u;
            // 0x4dcac4: 0xac4064b0  sw          $zero, 0x64B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25776), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcac0) {
            ctx->pc = 0x4DCAD0u;
            goto label_4dcad0;
        }
    }
    ctx->pc = 0x4DCAC8u;
    // 0x4dcac8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DCAC8u;
    SET_GPR_U32(ctx, 31, 0x4DCAD0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCAD0u; }
        if (ctx->pc != 0x4DCAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCAD0u; }
        if (ctx->pc != 0x4DCAD0u) { return; }
    }
    ctx->pc = 0x4DCAD0u;
label_4dcad0:
    // 0x4dcad0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4dcad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dcad4:
    // 0x4dcad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dcad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dcad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dcad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dcadc: 0x3e00008  jr          $ra
    ctx->pc = 0x4DCADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCADCu;
            // 0x4dcae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DCAE4u;
    // 0x4dcae4: 0x0  nop
    ctx->pc = 0x4dcae4u;
    // NOP
    // 0x4dcae8: 0x0  nop
    ctx->pc = 0x4dcae8u;
    // NOP
    // 0x4dcaec: 0x0  nop
    ctx->pc = 0x4dcaecu;
    // NOP
}
