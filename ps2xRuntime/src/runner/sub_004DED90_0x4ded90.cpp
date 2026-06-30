#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DED90
// Address: 0x4ded90 - 0x4dedf0
void sub_004DED90_0x4ded90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DED90_0x4ded90");
#endif

    switch (ctx->pc) {
        case 0x4dedd0u: goto label_4dedd0;
        default: break;
    }

    ctx->pc = 0x4ded90u;

    // 0x4ded90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ded90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ded94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ded94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ded98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ded98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ded9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ded9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4deda0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4DEDA0u;
    {
        const bool branch_taken_0x4deda0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4deda0) {
            ctx->pc = 0x4DEDA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEDA0u;
            // 0x4deda4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DEDD4u;
            goto label_4dedd4;
        }
    }
    ctx->pc = 0x4DEDA8u;
    // 0x4deda8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4deda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4dedac: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4dedacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4dedb0: 0x24423058  addiu       $v0, $v0, 0x3058
    ctx->pc = 0x4dedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12376));
    // 0x4dedb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4dedb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4dedb8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4dedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4dedbc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4dedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4dedc0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DEDC0u;
    {
        const bool branch_taken_0x4dedc0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4DEDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEDC0u;
            // 0x4dedc4: 0xac40aa78  sw          $zero, -0x5588($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dedc0) {
            ctx->pc = 0x4DEDD0u;
            goto label_4dedd0;
        }
    }
    ctx->pc = 0x4DEDC8u;
    // 0x4dedc8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DEDC8u;
    SET_GPR_U32(ctx, 31, 0x4DEDD0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEDD0u; }
        if (ctx->pc != 0x4DEDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEDD0u; }
        if (ctx->pc != 0x4DEDD0u) { return; }
    }
    ctx->pc = 0x4DEDD0u;
label_4dedd0:
    // 0x4dedd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4dedd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dedd4:
    // 0x4dedd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dedd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dedd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dedd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4deddc: 0x3e00008  jr          $ra
    ctx->pc = 0x4DEDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DEDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEDDCu;
            // 0x4dede0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DEDE4u;
    // 0x4dede4: 0x0  nop
    ctx->pc = 0x4dede4u;
    // NOP
    // 0x4dede8: 0x0  nop
    ctx->pc = 0x4dede8u;
    // NOP
    // 0x4dedec: 0x0  nop
    ctx->pc = 0x4dedecu;
    // NOP
}
