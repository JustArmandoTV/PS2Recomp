#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D7BF0
// Address: 0x4d7bf0 - 0x4d7c50
void sub_004D7BF0_0x4d7bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7BF0_0x4d7bf0");
#endif

    switch (ctx->pc) {
        case 0x4d7c30u: goto label_4d7c30;
        default: break;
    }

    ctx->pc = 0x4d7bf0u;

    // 0x4d7bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d7bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d7bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d7bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d7bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d7bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d7bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d7bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7c00: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4D7C00u;
    {
        const bool branch_taken_0x4d7c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7c00) {
            ctx->pc = 0x4D7C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7C00u;
            // 0x4d7c04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D7C34u;
            goto label_4d7c34;
        }
    }
    ctx->pc = 0x4D7C08u;
    // 0x4d7c08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d7c0c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4d7c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4d7c10: 0x24422938  addiu       $v0, $v0, 0x2938
    ctx->pc = 0x4d7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10552));
    // 0x4d7c14: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4d7c14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4d7c18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d7c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d7c1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d7c20: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D7C20u;
    {
        const bool branch_taken_0x4d7c20 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4D7C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7C20u;
            // 0x4d7c24: 0xac401d98  sw          $zero, 0x1D98($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 7576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7c20) {
            ctx->pc = 0x4D7C30u;
            goto label_4d7c30;
        }
    }
    ctx->pc = 0x4D7C28u;
    // 0x4d7c28: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D7C28u;
    SET_GPR_U32(ctx, 31, 0x4D7C30u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7C30u; }
        if (ctx->pc != 0x4D7C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7C30u; }
        if (ctx->pc != 0x4D7C30u) { return; }
    }
    ctx->pc = 0x4D7C30u;
label_4d7c30:
    // 0x4d7c30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d7c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d7c34:
    // 0x4d7c34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d7c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7c38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d7c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7C3Cu;
            // 0x4d7c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7C44u;
    // 0x4d7c44: 0x0  nop
    ctx->pc = 0x4d7c44u;
    // NOP
    // 0x4d7c48: 0x0  nop
    ctx->pc = 0x4d7c48u;
    // NOP
    // 0x4d7c4c: 0x0  nop
    ctx->pc = 0x4d7c4cu;
    // NOP
}
