#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016BE60
// Address: 0x16be60 - 0x16bf20
void sub_0016BE60_0x16be60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BE60_0x16be60");
#endif

    switch (ctx->pc) {
        case 0x16bea8u: goto label_16bea8;
        case 0x16bec0u: goto label_16bec0;
        case 0x16bef4u: goto label_16bef4;
        case 0x16bf04u: goto label_16bf04;
        default: break;
    }

    ctx->pc = 0x16be60u;

    // 0x16be60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16be60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16be64: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x16be64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16be68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16be6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16be6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16be70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16be74: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x16be74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16be78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16be7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be80: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16BE80u;
    {
        const bool branch_taken_0x16be80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE80u;
            // 0x16be84: 0x8c820094  lw          $v0, 0x94($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be80) {
            ctx->pc = 0x16BEA0u;
            goto label_16bea0;
        }
    }
    ctx->pc = 0x16BE88u;
    // 0x16be88: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16be88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16be8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16be8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16be90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16be90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16be94: 0x24843c98  addiu       $a0, $a0, 0x3C98
    ctx->pc = 0x16be94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15512));
    // 0x16be98: 0x8059f4e  j           func_167D38
    ctx->pc = 0x16BE98u;
    ctx->pc = 0x16BE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE98u;
            // 0x16be9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16BEA0u;
label_16bea0:
    // 0x16bea0: 0xc060054  jal         func_180150
    ctx->pc = 0x16BEA0u;
    SET_GPR_U32(ctx, 31, 0x16BEA8u);
    ctx->pc = 0x16BEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BEA0u;
            // 0x16bea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180150u;
    if (runtime->hasFunction(0x180150u)) {
        auto targetFn = runtime->lookupFunction(0x180150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEA8u; }
        if (ctx->pc != 0x16BEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180150_0x180150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEA8u; }
        if (ctx->pc != 0x16BEA8u) { return; }
    }
    ctx->pc = 0x16BEA8u;
label_16bea8:
    // 0x16bea8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16beac: 0x24843cc8  addiu       $a0, $a0, 0x3CC8
    ctx->pc = 0x16beacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15560));
    // 0x16beb0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BEB0u;
    {
        const bool branch_taken_0x16beb0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16BEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BEB0u;
            // 0x16beb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16beb0) {
            ctx->pc = 0x16BEC0u;
            goto label_16bec0;
        }
    }
    ctx->pc = 0x16BEB8u;
    // 0x16beb8: 0xc059f6c  jal         func_167DB0
    ctx->pc = 0x16BEB8u;
    SET_GPR_U32(ctx, 31, 0x16BEC0u);
    ctx->pc = 0x167DB0u;
    if (runtime->hasFunction(0x167DB0u)) {
        auto targetFn = runtime->lookupFunction(0x167DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEC0u; }
        if (ctx->pc != 0x16BEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DB0_0x167db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEC0u; }
        if (ctx->pc != 0x16BEC0u) { return; }
    }
    ctx->pc = 0x16BEC0u;
label_16bec0:
    // 0x16bec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bec4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16bec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bec8: 0x3e00008  jr          $ra
    ctx->pc = 0x16BEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BEC8u;
            // 0x16becc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BED0u;
    // 0x16bed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16bed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bedc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16bedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16bee0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16bee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16bee8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16bee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16beec: 0xc0599de  jal         func_166778
    ctx->pc = 0x16BEECu;
    SET_GPR_U32(ctx, 31, 0x16BEF4u);
    ctx->pc = 0x16BEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BEECu;
            // 0x16bef0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEF4u; }
        if (ctx->pc != 0x16BEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEF4u; }
        if (ctx->pc != 0x16BEF4u) { return; }
    }
    ctx->pc = 0x16BEF4u;
label_16bef4:
    // 0x16bef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bef8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16bef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16befc: 0xc05afc8  jal         func_16BF20
    ctx->pc = 0x16BEFCu;
    SET_GPR_U32(ctx, 31, 0x16BF04u);
    ctx->pc = 0x16BF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BEFCu;
            // 0x16bf00: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BF20u;
    if (runtime->hasFunction(0x16BF20u)) {
        auto targetFn = runtime->lookupFunction(0x16BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF04u; }
        if (ctx->pc != 0x16BF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BF20_0x16bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF04u; }
        if (ctx->pc != 0x16BF04u) { return; }
    }
    ctx->pc = 0x16BF04u;
label_16bf04:
    // 0x16bf04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16bf08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bf0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16bf0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bf10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16bf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16bf14: 0x80599e0  j           func_166780
    ctx->pc = 0x16BF14u;
    ctx->pc = 0x16BF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF14u;
            // 0x16bf18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16BF1Cu;
    // 0x16bf1c: 0x0  nop
    ctx->pc = 0x16bf1cu;
    // NOP
}
