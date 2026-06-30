#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168B88
// Address: 0x168b88 - 0x168c60
void sub_00168B88_0x168b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168B88_0x168b88");
#endif

    switch (ctx->pc) {
        case 0x168bc8u: goto label_168bc8;
        case 0x168c14u: goto label_168c14;
        case 0x168c30u: goto label_168c30;
        case 0x168c38u: goto label_168c38;
        default: break;
    }

    ctx->pc = 0x168b88u;

    // 0x168b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168b8c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x168b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b90: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x168b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b98: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x168b98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x168b9c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x168b9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ba0: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x168ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x168ba4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x168ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ba8: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x168ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x168bac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x168bacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bb4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x168bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bb8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x168bb8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x168bbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168bc0: 0xc05a390  jal         func_168E40
    ctx->pc = 0x168BC0u;
    SET_GPR_U32(ctx, 31, 0x168BC8u);
    ctx->pc = 0x168BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168BC0u;
            // 0x168bc4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168E40u;
    if (runtime->hasFunction(0x168E40u)) {
        auto targetFn = runtime->lookupFunction(0x168E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BC8u; }
        if (ctx->pc != 0x168BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168E40_0x168e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BC8u; }
        if (ctx->pc != 0x168BC8u) { return; }
    }
    ctx->pc = 0x168BC8u;
label_168bc8:
    // 0x168bc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x168BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168BCCu;
            // 0x168bd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168BD4u;
    // 0x168bd4: 0x0  nop
    ctx->pc = 0x168bd4u;
    // NOP
    // 0x168bd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x168bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168be0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168be4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168be8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x168be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x168becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168bf0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x168bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x168bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168bf8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x168bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bfc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x168bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x168c00: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x168c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x168c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x168c08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x168c0c: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x168C0Cu;
    SET_GPR_U32(ctx, 31, 0x168C14u);
    ctx->pc = 0x168C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C0Cu;
            // 0x168c10: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C14u; }
        if (ctx->pc != 0x168C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C14u; }
        if (ctx->pc != 0x168C14u) { return; }
    }
    ctx->pc = 0x168C14u;
label_168c14:
    // 0x168c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x168c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c20: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x168c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c24: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x168c24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c28: 0xc05a318  jal         func_168C60
    ctx->pc = 0x168C28u;
    SET_GPR_U32(ctx, 31, 0x168C30u);
    ctx->pc = 0x168C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C28u;
            // 0x168c2c: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168C60u;
    if (runtime->hasFunction(0x168C60u)) {
        auto targetFn = runtime->lookupFunction(0x168C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C30u; }
        if (ctx->pc != 0x168C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168C60_0x168c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C30u; }
        if (ctx->pc != 0x168C30u) { return; }
    }
    ctx->pc = 0x168C30u;
label_168c30:
    // 0x168c30: 0xc05adca  jal         func_16B728
    ctx->pc = 0x168C30u;
    SET_GPR_U32(ctx, 31, 0x168C38u);
    ctx->pc = 0x168C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C30u;
            // 0x168c34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C38u; }
        if (ctx->pc != 0x168C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C38u; }
        if (ctx->pc != 0x168C38u) { return; }
    }
    ctx->pc = 0x168C38u;
label_168c38:
    // 0x168c38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168c3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168c40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168c48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x168c48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168c4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x168c4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168c50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x168c50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x168c54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168c58: 0x3e00008  jr          $ra
    ctx->pc = 0x168C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C58u;
            // 0x168c5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168C60u;
}
