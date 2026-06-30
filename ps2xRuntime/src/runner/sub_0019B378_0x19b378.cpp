#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B378
// Address: 0x19b378 - 0x19b3d8
void sub_0019B378_0x19b378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B378_0x19b378");
#endif

    switch (ctx->pc) {
        case 0x19b39cu: goto label_19b39c;
        case 0x19b3b4u: goto label_19b3b4;
        case 0x19b3ccu: goto label_19b3cc;
        default: break;
    }

    ctx->pc = 0x19b378u;

    // 0x19b378: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x19b378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x19b37c: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x19b37cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
    // 0x19b380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b384: 0x24e78fd0  addiu       $a3, $a3, -0x7030
    ctx->pc = 0x19b384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938576));
    // 0x19b388: 0x24a52210  addiu       $a1, $a1, 0x2210
    ctx->pc = 0x19b388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8720));
    // 0x19b38c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b394: 0xc068620  jal         func_1A1880
    ctx->pc = 0x19B394u;
    SET_GPR_U32(ctx, 31, 0x19B39Cu);
    ctx->pc = 0x19B398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B394u;
            // 0x19b398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1880u;
    if (runtime->hasFunction(0x1A1880u)) {
        auto targetFn = runtime->lookupFunction(0x1A1880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B39Cu; }
        if (ctx->pc != 0x19B39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1880_0x1a1880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B39Cu; }
        if (ctx->pc != 0x19B39Cu) { return; }
    }
    ctx->pc = 0x19B39Cu;
label_19b39c:
    // 0x19b39c: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x19b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x19b3a0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x19b3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x19b3a4: 0x24842228  addiu       $a0, $a0, 0x2228
    ctx->pc = 0x19b3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8744));
    // 0x19b3a8: 0x24c68fe8  addiu       $a2, $a2, -0x7018
    ctx->pc = 0x19b3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938600));
    // 0x19b3ac: 0xc068650  jal         func_1A1940
    ctx->pc = 0x19B3ACu;
    SET_GPR_U32(ctx, 31, 0x19B3B4u);
    ctx->pc = 0x19B3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B3ACu;
            // 0x19b3b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1940u;
    if (runtime->hasFunction(0x1A1940u)) {
        auto targetFn = runtime->lookupFunction(0x1A1940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3B4u; }
        if (ctx->pc != 0x19B3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1940_0x1a1940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3B4u; }
        if (ctx->pc != 0x19B3B4u) { return; }
    }
    ctx->pc = 0x19B3B4u;
label_19b3b4:
    // 0x19b3b4: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x19b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x19b3b8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x19b3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x19b3bc: 0x24842288  addiu       $a0, $a0, 0x2288
    ctx->pc = 0x19b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8840));
    // 0x19b3c0: 0x24c69000  addiu       $a2, $a2, -0x7000
    ctx->pc = 0x19b3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938624));
    // 0x19b3c4: 0xc06863a  jal         func_1A18E8
    ctx->pc = 0x19B3C4u;
    SET_GPR_U32(ctx, 31, 0x19B3CCu);
    ctx->pc = 0x19B3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B3C4u;
            // 0x19b3c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A18E8u;
    if (runtime->hasFunction(0x1A18E8u)) {
        auto targetFn = runtime->lookupFunction(0x1A18E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3CCu; }
        if (ctx->pc != 0x19B3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A18E8_0x1a18e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3CCu; }
        if (ctx->pc != 0x19B3CCu) { return; }
    }
    ctx->pc = 0x19B3CCu;
label_19b3cc:
    // 0x19b3cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b3d0: 0x8068666  j           func_1A1998
    ctx->pc = 0x19B3D0u;
    ctx->pc = 0x19B3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B3D0u;
            // 0x19b3d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1998u;
    {
        auto targetFn = runtime->lookupFunction(0x1A1998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19B3D8u;
}
