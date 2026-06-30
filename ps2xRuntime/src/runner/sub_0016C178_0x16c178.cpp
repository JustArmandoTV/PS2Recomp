#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C178
// Address: 0x16c178 - 0x16c1f8
void sub_0016C178_0x16c178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C178_0x16c178");
#endif

    switch (ctx->pc) {
        case 0x16c1c4u: goto label_16c1c4;
        case 0x16c1d8u: goto label_16c1d8;
        default: break;
    }

    ctx->pc = 0x16c178u;

    // 0x16c178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c17c: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x16c17cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x16c180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c188: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x16c188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x16c18c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c190: 0x805b07e  j           func_16C1F8
    ctx->pc = 0x16C190u;
    ctx->pc = 0x16C194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C190u;
            // 0x16c194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C1F8u;
    if (runtime->hasFunction(0x16C1F8u)) {
        auto targetFn = runtime->lookupFunction(0x16C1F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016C1F8_0x16c1f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C198u;
    // 0x16c198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16c19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c1a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c1a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16c1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16c1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16c1b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16c1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16c1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16c1b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16c1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16c1bc: 0xc0599de  jal         func_166778
    ctx->pc = 0x16C1BCu;
    SET_GPR_U32(ctx, 31, 0x16C1C4u);
    ctx->pc = 0x16C1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C1BCu;
            // 0x16c1c0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1C4u; }
        if (ctx->pc != 0x16C1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1C4u; }
        if (ctx->pc != 0x16C1C4u) { return; }
    }
    ctx->pc = 0x16C1C4u;
label_16c1c4:
    // 0x16c1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16c1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16c1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1d0: 0xc05b07e  jal         func_16C1F8
    ctx->pc = 0x16C1D0u;
    SET_GPR_U32(ctx, 31, 0x16C1D8u);
    ctx->pc = 0x16C1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C1D0u;
            // 0x16c1d4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C1F8u;
    if (runtime->hasFunction(0x16C1F8u)) {
        auto targetFn = runtime->lookupFunction(0x16C1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1D8u; }
        if (ctx->pc != 0x16C1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C1F8_0x16c1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1D8u; }
        if (ctx->pc != 0x16C1D8u) { return; }
    }
    ctx->pc = 0x16C1D8u;
label_16c1d8:
    // 0x16c1d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c1dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c1dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c1e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c1e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c1e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16c1e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c1e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c1ec: 0x80599e0  j           func_166780
    ctx->pc = 0x16C1ECu;
    ctx->pc = 0x16C1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C1ECu;
            // 0x16c1f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C1F4u;
    // 0x16c1f4: 0x0  nop
    ctx->pc = 0x16c1f4u;
    // NOP
}
