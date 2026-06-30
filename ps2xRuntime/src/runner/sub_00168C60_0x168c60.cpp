#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168C60
// Address: 0x168c60 - 0x168d28
void sub_00168C60_0x168c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168C60_0x168c60");
#endif

    switch (ctx->pc) {
        case 0x168c90u: goto label_168c90;
        case 0x168cdcu: goto label_168cdc;
        case 0x168cf8u: goto label_168cf8;
        case 0x168d00u: goto label_168d00;
        default: break;
    }

    ctx->pc = 0x168c60u;

    // 0x168c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168c64: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x168c64u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x168c68: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x168c68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x168c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c70: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x168c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x168c74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x168c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c78: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x168c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x168c7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x168c7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c80: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x168c80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x168c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168c88: 0xc05a390  jal         func_168E40
    ctx->pc = 0x168C88u;
    SET_GPR_U32(ctx, 31, 0x168C90u);
    ctx->pc = 0x168C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C88u;
            // 0x168c8c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168E40u;
    if (runtime->hasFunction(0x168E40u)) {
        auto targetFn = runtime->lookupFunction(0x168E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C90u; }
        if (ctx->pc != 0x168C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168E40_0x168e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C90u; }
        if (ctx->pc != 0x168C90u) { return; }
    }
    ctx->pc = 0x168C90u;
label_168c90:
    // 0x168c90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168c94: 0x3e00008  jr          $ra
    ctx->pc = 0x168C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C94u;
            // 0x168c98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168C9Cu;
    // 0x168c9c: 0x0  nop
    ctx->pc = 0x168c9cu;
    // NOP
    // 0x168ca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x168ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168ca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168cb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x168cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x168cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168cb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x168cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x168cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168cc0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x168cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cc4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x168cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x168cc8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x168cc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ccc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x168cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x168cd0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x168cd4: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x168CD4u;
    SET_GPR_U32(ctx, 31, 0x168CDCu);
    ctx->pc = 0x168CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168CD4u;
            // 0x168cd8: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168CDCu; }
        if (ctx->pc != 0x168CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168CDCu; }
        if (ctx->pc != 0x168CDCu) { return; }
    }
    ctx->pc = 0x168CDCu;
label_168cdc:
    // 0x168cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ce0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ce4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x168ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ce8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x168ce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cec: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x168cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cf0: 0xc05a34a  jal         func_168D28
    ctx->pc = 0x168CF0u;
    SET_GPR_U32(ctx, 31, 0x168CF8u);
    ctx->pc = 0x168CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168CF0u;
            // 0x168cf4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168D28u;
    if (runtime->hasFunction(0x168D28u)) {
        auto targetFn = runtime->lookupFunction(0x168D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168CF8u; }
        if (ctx->pc != 0x168CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168D28_0x168d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168CF8u; }
        if (ctx->pc != 0x168CF8u) { return; }
    }
    ctx->pc = 0x168CF8u;
label_168cf8:
    // 0x168cf8: 0xc05adca  jal         func_16B728
    ctx->pc = 0x168CF8u;
    SET_GPR_U32(ctx, 31, 0x168D00u);
    ctx->pc = 0x168CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168CF8u;
            // 0x168cfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D00u; }
        if (ctx->pc != 0x168D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D00u; }
        if (ctx->pc != 0x168D00u) { return; }
    }
    ctx->pc = 0x168D00u;
label_168d00:
    // 0x168d00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168d04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168d10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x168d10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168d14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x168d14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168d18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x168d18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x168d1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168d20: 0x3e00008  jr          $ra
    ctx->pc = 0x168D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168D20u;
            // 0x168d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168D28u;
}
