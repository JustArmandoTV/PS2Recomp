#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00455770
// Address: 0x455770 - 0x4557d0
void sub_00455770_0x455770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00455770_0x455770");
#endif

    switch (ctx->pc) {
        case 0x4557b0u: goto label_4557b0;
        default: break;
    }

    ctx->pc = 0x455770u;

    // 0x455770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x455770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x455774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x455774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x455778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x455778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45577c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x45577cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455780: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x455780u;
    {
        const bool branch_taken_0x455780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x455780) {
            ctx->pc = 0x455784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x455780u;
            // 0x455784: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4557B4u;
            goto label_4557b4;
        }
    }
    ctx->pc = 0x455788u;
    // 0x455788: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x455788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x45578c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x45578cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x455790: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x455790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x455794: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x455794u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x455798: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x455798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x45579c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45579cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4557a0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4557A0u;
    {
        const bool branch_taken_0x4557a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4557A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4557A0u;
            // 0x4557a4: 0xac4075b8  sw          $zero, 0x75B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4557a0) {
            ctx->pc = 0x4557B0u;
            goto label_4557b0;
        }
    }
    ctx->pc = 0x4557A8u;
    // 0x4557a8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4557A8u;
    SET_GPR_U32(ctx, 31, 0x4557B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4557B0u; }
        if (ctx->pc != 0x4557B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4557B0u; }
        if (ctx->pc != 0x4557B0u) { return; }
    }
    ctx->pc = 0x4557B0u;
label_4557b0:
    // 0x4557b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4557b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4557b4:
    // 0x4557b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4557b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4557b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4557b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4557bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4557BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4557C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4557BCu;
            // 0x4557c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4557C4u;
    // 0x4557c4: 0x0  nop
    ctx->pc = 0x4557c4u;
    // NOP
    // 0x4557c8: 0x0  nop
    ctx->pc = 0x4557c8u;
    // NOP
    // 0x4557cc: 0x0  nop
    ctx->pc = 0x4557ccu;
    // NOP
}
