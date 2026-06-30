#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103980
// Address: 0x103980 - 0x1039f0
void sub_00103980_0x103980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103980_0x103980");
#endif

    switch (ctx->pc) {
        case 0x1039b0u: goto label_1039b0;
        case 0x1039c0u: goto label_1039c0;
        case 0x1039c8u: goto label_1039c8;
        default: break;
    }

    ctx->pc = 0x103980u;

    // 0x103980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103984: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10398c: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x10398cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x103990: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x103990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x103994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x103994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103998: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x103998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10399c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1039a0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1039a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1039a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1039A4u;
    {
        const bool branch_taken_0x1039a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1039A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1039A4u;
            // 0x1039a8: 0x3c120063  lui         $s2, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039a4) {
            ctx->pc = 0x1039D8u;
            goto label_1039d8;
        }
    }
    ctx->pc = 0x1039ACu;
    // 0x1039ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1039acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1039b0:
    // 0x1039b0: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1039B0u;
    {
        const bool branch_taken_0x1039b0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1039b0) {
            ctx->pc = 0x1039C8u;
            goto label_1039c8;
        }
    }
    ctx->pc = 0x1039B8u;
    // 0x1039b8: 0xc043c12  jal         func_10F048
    ctx->pc = 0x1039B8u;
    SET_GPR_U32(ctx, 31, 0x1039C0u);
    ctx->pc = 0x1039BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1039B8u;
            // 0x1039bc: 0x2644e5c0  addiu       $a0, $s2, -0x1A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039C0u; }
        if (ctx->pc != 0x1039C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039C0u; }
        if (ctx->pc != 0x1039C0u) { return; }
    }
    ctx->pc = 0x1039C0u;
label_1039c0:
    // 0x1039c0: 0xc041046  jal         func_104118
    ctx->pc = 0x1039C0u;
    SET_GPR_U32(ctx, 31, 0x1039C8u);
    ctx->pc = 0x1039C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1039C0u;
            // 0x1039c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104118u;
    if (runtime->hasFunction(0x104118u)) {
        auto targetFn = runtime->lookupFunction(0x104118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039C8u; }
        if (ctx->pc != 0x1039C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104118_0x104118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039C8u; }
        if (ctx->pc != 0x1039C8u) { return; }
    }
    ctx->pc = 0x1039C8u;
label_1039c8:
    // 0x1039c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1039c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1039cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1039ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1039d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1039D0u;
    {
        const bool branch_taken_0x1039d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1039D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1039D0u;
            // 0x1039d4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039d0) {
            ctx->pc = 0x1039B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1039b0;
        }
    }
    ctx->pc = 0x1039D8u;
label_1039d8:
    // 0x1039d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1039d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1039dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1039dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1039e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1039e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1039e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1039e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1039e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1039E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1039ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1039E8u;
            // 0x1039ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1039F0u;
}
