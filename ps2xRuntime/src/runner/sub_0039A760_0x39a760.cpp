#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039A760
// Address: 0x39a760 - 0x39a7c0
void sub_0039A760_0x39a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A760_0x39a760");
#endif

    switch (ctx->pc) {
        case 0x39a7a0u: goto label_39a7a0;
        default: break;
    }

    ctx->pc = 0x39a760u;

    // 0x39a760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39a764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39a768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39a76c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a770: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x39A770u;
    {
        const bool branch_taken_0x39a770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a770) {
            ctx->pc = 0x39A774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A770u;
            // 0x39a774: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A7A4u;
            goto label_39a7a4;
        }
    }
    ctx->pc = 0x39A778u;
    // 0x39a778: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39a778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x39a77c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x39a77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x39a780: 0x24428308  addiu       $v0, $v0, -0x7CF8
    ctx->pc = 0x39a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935304));
    // 0x39a784: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x39a784u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x39a788: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39a788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x39a78c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x39a790: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39A790u;
    {
        const bool branch_taken_0x39a790 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x39A794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A790u;
            // 0x39a794: 0xac406490  sw          $zero, 0x6490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a790) {
            ctx->pc = 0x39A7A0u;
            goto label_39a7a0;
        }
    }
    ctx->pc = 0x39A798u;
    // 0x39a798: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x39A798u;
    SET_GPR_U32(ctx, 31, 0x39A7A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A7A0u; }
        if (ctx->pc != 0x39A7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A7A0u; }
        if (ctx->pc != 0x39A7A0u) { return; }
    }
    ctx->pc = 0x39A7A0u;
label_39a7a0:
    // 0x39a7a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39a7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a7a4:
    // 0x39a7a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39a7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a7a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x39A7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A7ACu;
            // 0x39a7b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39A7B4u;
    // 0x39a7b4: 0x0  nop
    ctx->pc = 0x39a7b4u;
    // NOP
    // 0x39a7b8: 0x0  nop
    ctx->pc = 0x39a7b8u;
    // NOP
    // 0x39a7bc: 0x0  nop
    ctx->pc = 0x39a7bcu;
    // NOP
}
