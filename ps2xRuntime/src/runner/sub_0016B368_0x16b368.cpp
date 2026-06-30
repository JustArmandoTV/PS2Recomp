#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B368
// Address: 0x16b368 - 0x16b3b8
void sub_0016B368_0x16b368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B368_0x16b368");
#endif

    switch (ctx->pc) {
        case 0x16b394u: goto label_16b394;
        case 0x16b39cu: goto label_16b39c;
        case 0x16b3a4u: goto label_16b3a4;
        default: break;
    }

    ctx->pc = 0x16b368u;

    // 0x16b368: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16b368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b36c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16b370: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16b374: 0x8c4276b0  lw          $v0, 0x76B0($v0)
    ctx->pc = 0x16b374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30384)));
    // 0x16b378: 0x3e00008  jr          $ra
    ctx->pc = 0x16B378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B378u;
            // 0x16b37c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B380u;
    // 0x16b380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b388: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b38c: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16B38Cu;
    SET_GPR_U32(ctx, 31, 0x16B394u);
    ctx->pc = 0x16B390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B38Cu;
            // 0x16b390: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B394u; }
        if (ctx->pc != 0x16B394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B394u; }
        if (ctx->pc != 0x16B394u) { return; }
    }
    ctx->pc = 0x16B394u;
label_16b394:
    // 0x16b394: 0xc05acee  jal         func_16B3B8
    ctx->pc = 0x16B394u;
    SET_GPR_U32(ctx, 31, 0x16B39Cu);
    ctx->pc = 0x16B398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B394u;
            // 0x16b398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B3B8u;
    if (runtime->hasFunction(0x16B3B8u)) {
        auto targetFn = runtime->lookupFunction(0x16B3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B39Cu; }
        if (ctx->pc != 0x16B39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B3B8_0x16b3b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B39Cu; }
        if (ctx->pc != 0x16B39Cu) { return; }
    }
    ctx->pc = 0x16B39Cu;
label_16b39c:
    // 0x16b39c: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16B39Cu;
    SET_GPR_U32(ctx, 31, 0x16B3A4u);
    ctx->pc = 0x16B3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B39Cu;
            // 0x16b3a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3A4u; }
        if (ctx->pc != 0x16B3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3A4u; }
        if (ctx->pc != 0x16B3A4u) { return; }
    }
    ctx->pc = 0x16B3A4u;
label_16b3a4:
    // 0x16b3a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b3a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x16B3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3B0u;
            // 0x16b3b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B3B8u;
}
