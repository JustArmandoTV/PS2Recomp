#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2980
// Address: 0x1b2980 - 0x1b2a18
void sub_001B2980_0x1b2980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2980_0x1b2980");
#endif

    switch (ctx->pc) {
        case 0x1b29a8u: goto label_1b29a8;
        case 0x1b29bcu: goto label_1b29bc;
        case 0x1b29dcu: goto label_1b29dc;
        case 0x1b29f0u: goto label_1b29f0;
        default: break;
    }

    ctx->pc = 0x1b2980u;

    // 0x1b2980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b298c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b298cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2990: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b2994: 0x8e020a20  lw          $v0, 0xA20($s0)
    ctx->pc = 0x1b2994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2592)));
    // 0x1b2998: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2998u;
    {
        const bool branch_taken_0x1b2998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b2998) {
            ctx->pc = 0x1B299Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2998u;
            // 0x1b299c: 0x8e060a24  lw          $a2, 0xA24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B29C8u;
            goto label_1b29c8;
        }
    }
    ctx->pc = 0x1B29A0u;
    // 0x1b29a0: 0xc069764  jal         func_1A5D90
    ctx->pc = 0x1B29A0u;
    SET_GPR_U32(ctx, 31, 0x1B29A8u);
    ctx->pc = 0x1B29A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29A0u;
            // 0x1b29a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D90u;
    if (runtime->hasFunction(0x1A5D90u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29A8u; }
        if (ctx->pc != 0x1B29A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D90_0x1a5d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29A8u; }
        if (ctx->pc != 0x1B29A8u) { return; }
    }
    ctx->pc = 0x1B29A8u;
label_1b29a8:
    // 0x1b29a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B29A8u;
    {
        const bool branch_taken_0x1b29a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b29a8) {
            ctx->pc = 0x1B29ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29A8u;
            // 0x1b29ac: 0x8e060a24  lw          $a2, 0xA24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B29C8u;
            goto label_1b29c8;
        }
    }
    ctx->pc = 0x1B29B0u;
    // 0x1b29b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b29b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29b4: 0xc06975c  jal         func_1A5D70
    ctx->pc = 0x1B29B4u;
    SET_GPR_U32(ctx, 31, 0x1B29BCu);
    ctx->pc = 0x1B29B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29B4u;
            // 0x1b29b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D70u;
    if (runtime->hasFunction(0x1A5D70u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29BCu; }
        if (ctx->pc != 0x1B29BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D70_0x1a5d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29BCu; }
        if (ctx->pc != 0x1B29BCu) { return; }
    }
    ctx->pc = 0x1B29BCu;
label_1b29bc:
    // 0x1b29bc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B29BCu;
    {
        const bool branch_taken_0x1b29bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b29bc) {
            ctx->pc = 0x1B29C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29BCu;
            // 0x1b29c0: 0xae000a20  sw          $zero, 0xA20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B29C4u;
            goto label_1b29c4;
        }
    }
    ctx->pc = 0x1B29C4u;
label_1b29c4:
    // 0x1b29c4: 0x8e060a24  lw          $a2, 0xA24($s0)
    ctx->pc = 0x1b29c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2596)));
label_1b29c8:
    // 0x1b29c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b29c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b29cc: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B29CCu;
    {
        const bool branch_taken_0x1b29cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B29D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29CCu;
            // 0x1b29d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29cc) {
            ctx->pc = 0x1B2A04u;
            goto label_1b2a04;
        }
    }
    ctx->pc = 0x1B29D4u;
    // 0x1b29d4: 0xc069764  jal         func_1A5D90
    ctx->pc = 0x1B29D4u;
    SET_GPR_U32(ctx, 31, 0x1B29DCu);
    ctx->pc = 0x1B29D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29D4u;
            // 0x1b29d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D90u;
    if (runtime->hasFunction(0x1A5D90u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29DCu; }
        if (ctx->pc != 0x1B29DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D90_0x1a5d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29DCu; }
        if (ctx->pc != 0x1B29DCu) { return; }
    }
    ctx->pc = 0x1B29DCu;
label_1b29dc:
    // 0x1b29dc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B29DCu;
    {
        const bool branch_taken_0x1b29dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b29dc) {
            ctx->pc = 0x1B29E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29DCu;
            // 0x1b29e0: 0x8e060a24  lw          $a2, 0xA24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2A00u;
            goto label_1b2a00;
        }
    }
    ctx->pc = 0x1B29E4u;
    // 0x1b29e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b29e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29e8: 0xc06975c  jal         func_1A5D70
    ctx->pc = 0x1B29E8u;
    SET_GPR_U32(ctx, 31, 0x1B29F0u);
    ctx->pc = 0x1B29ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29E8u;
            // 0x1b29ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D70u;
    if (runtime->hasFunction(0x1A5D70u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29F0u; }
        if (ctx->pc != 0x1B29F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D70_0x1a5d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29F0u; }
        if (ctx->pc != 0x1B29F0u) { return; }
    }
    ctx->pc = 0x1B29F0u;
label_1b29f0:
    // 0x1b29f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B29F0u;
    {
        const bool branch_taken_0x1b29f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b29f0) {
            ctx->pc = 0x1B29F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29F0u;
            // 0x1b29f4: 0x8e060a24  lw          $a2, 0xA24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2A00u;
            goto label_1b2a00;
        }
    }
    ctx->pc = 0x1B29F8u;
    // 0x1b29f8: 0xae000a24  sw          $zero, 0xA24($s0)
    ctx->pc = 0x1b29f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2596), GPR_U32(ctx, 0));
    // 0x1b29fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b29fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2a00:
    // 0x1b2a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2a04:
    // 0x1b2a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2a08: 0x8c850a20  lw          $a1, 0xA20($a0)
    ctx->pc = 0x1b2a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2592)));
    // 0x1b2a0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2a10: 0x806d49e  j           func_1B5278
    ctx->pc = 0x1B2A10u;
    ctx->pc = 0x1B2A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A10u;
            // 0x1b2a14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5278u;
    {
        auto targetFn = runtime->lookupFunction(0x1B5278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B2A18u;
}
