#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016BF20
// Address: 0x16bf20 - 0x16c018
void sub_0016BF20_0x16bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BF20_0x16bf20");
#endif

    switch (ctx->pc) {
        case 0x16bf5cu: goto label_16bf5c;
        case 0x16bf7cu: goto label_16bf7c;
        case 0x16bf98u: goto label_16bf98;
        case 0x16bfb0u: goto label_16bfb0;
        case 0x16bfc0u: goto label_16bfc0;
        case 0x16bfd0u: goto label_16bfd0;
        case 0x16bffcu: goto label_16bffc;
        case 0x16c004u: goto label_16c004;
        default: break;
    }

    ctx->pc = 0x16bf20u;

    // 0x16bf20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16bf24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16bf24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf28: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x16bf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16bf2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16bf2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf30: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x16bf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x16bf34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16bf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x16bf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16bf3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf40: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16bf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16bf44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16bf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16BF48u;
    {
        const bool branch_taken_0x16bf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF48u;
            // 0x16bf4c: 0x8c520094  lw          $s2, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf48) {
            ctx->pc = 0x16BF68u;
            goto label_16bf68;
        }
    }
    ctx->pc = 0x16BF50u;
    // 0x16bf50: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16bf50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16bf54: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16BF54u;
    SET_GPR_U32(ctx, 31, 0x16BF5Cu);
    ctx->pc = 0x16BF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF54u;
            // 0x16bf58: 0x24843ce8  addiu       $a0, $a0, 0x3CE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF5Cu; }
        if (ctx->pc != 0x16BF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF5Cu; }
        if (ctx->pc != 0x16BF5Cu) { return; }
    }
    ctx->pc = 0x16BF5Cu;
label_16bf5c:
    // 0x16bf5c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x16BF5Cu;
    {
        const bool branch_taken_0x16bf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF5Cu;
            // 0x16bf60: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf5c) {
            ctx->pc = 0x16BFD4u;
            goto label_16bfd4;
        }
    }
    ctx->pc = 0x16BF64u;
    // 0x16bf64: 0x0  nop
    ctx->pc = 0x16bf64u;
    // NOP
label_16bf68:
    // 0x16bf68: 0x8c4600b0  lw          $a2, 0xB0($v0)
    ctx->pc = 0x16bf68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x16bf6c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x16bf6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16bf70: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x16bf70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x16bf74: 0xc05ac40  jal         func_16B100
    ctx->pc = 0x16BF74u;
    SET_GPR_U32(ctx, 31, 0x16BF7Cu);
    ctx->pc = 0x16BF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF74u;
            // 0x16bf78: 0x27a90018  addiu       $t1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B100u;
    if (runtime->hasFunction(0x16B100u)) {
        auto targetFn = runtime->lookupFunction(0x16B100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF7Cu; }
        if (ctx->pc != 0x16BF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B100_0x16b100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF7Cu; }
        if (ctx->pc != 0x16BF7Cu) { return; }
    }
    ctx->pc = 0x16BF7Cu;
label_16bf7c:
    // 0x16bf7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16bf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16bf84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf88: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16BF88u;
    {
        const bool branch_taken_0x16bf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF88u;
            // 0x16bf8c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf88) {
            ctx->pc = 0x16BFB8u;
            goto label_16bfb8;
        }
    }
    ctx->pc = 0x16BF90u;
    // 0x16bf90: 0xc05accc  jal         func_16B330
    ctx->pc = 0x16BF90u;
    SET_GPR_U32(ctx, 31, 0x16BF98u);
    ctx->pc = 0x16B330u;
    if (runtime->hasFunction(0x16B330u)) {
        auto targetFn = runtime->lookupFunction(0x16B330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF98u; }
        if (ctx->pc != 0x16BF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B330_0x16b330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF98u; }
        if (ctx->pc != 0x16BF98u) { return; }
    }
    ctx->pc = 0x16BF98u;
label_16bf98:
    // 0x16bf98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16bf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf9c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x16bf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bfa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16bfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bfa4: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x16bfa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16bfa8: 0xc060054  jal         func_180150
    ctx->pc = 0x16BFA8u;
    SET_GPR_U32(ctx, 31, 0x16BFB0u);
    ctx->pc = 0x16BFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFA8u;
            // 0x16bfac: 0x8fa80018  lw          $t0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180150u;
    if (runtime->hasFunction(0x180150u)) {
        auto targetFn = runtime->lookupFunction(0x180150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFB0u; }
        if (ctx->pc != 0x16BFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180150_0x180150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFB0u; }
        if (ctx->pc != 0x16BFB0u) { return; }
    }
    ctx->pc = 0x16BFB0u;
label_16bfb0:
    // 0x16bfb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16BFB0u;
    {
        const bool branch_taken_0x16bfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFB0u;
            // 0x16bfb4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfb0) {
            ctx->pc = 0x16BFD4u;
            goto label_16bfd4;
        }
    }
    ctx->pc = 0x16BFB8u;
label_16bfb8:
    // 0x16bfb8: 0xc059fd4  jal         func_167F50
    ctx->pc = 0x16BFB8u;
    SET_GPR_U32(ctx, 31, 0x16BFC0u);
    ctx->pc = 0x167F50u;
    if (runtime->hasFunction(0x167F50u)) {
        auto targetFn = runtime->lookupFunction(0x167F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFC0u; }
        if (ctx->pc != 0x16BFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167F50_0x167f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFC0u; }
        if (ctx->pc != 0x16BFC0u) { return; }
    }
    ctx->pc = 0x16BFC0u;
label_16bfc0:
    // 0x16bfc0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16bfc4: 0x24843d18  addiu       $a0, $a0, 0x3D18
    ctx->pc = 0x16bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15640));
    // 0x16bfc8: 0xc059f6c  jal         func_167DB0
    ctx->pc = 0x16BFC8u;
    SET_GPR_U32(ctx, 31, 0x16BFD0u);
    ctx->pc = 0x16BFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFC8u;
            // 0x16bfcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167DB0u;
    if (runtime->hasFunction(0x167DB0u)) {
        auto targetFn = runtime->lookupFunction(0x167DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFD0u; }
        if (ctx->pc != 0x16BFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DB0_0x167db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFD0u; }
        if (ctx->pc != 0x16BFD0u) { return; }
    }
    ctx->pc = 0x16BFD0u;
label_16bfd0:
    // 0x16bfd0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x16bfd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16bfd4:
    // 0x16bfd4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x16bfd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16bfd8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x16bfd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bfdc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16bfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16bfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x16BFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFE0u;
            // 0x16bfe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BFE8u;
    // 0x16bfe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bfec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16bfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bff0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16bff4: 0xc0599de  jal         func_166778
    ctx->pc = 0x16BFF4u;
    SET_GPR_U32(ctx, 31, 0x16BFFCu);
    ctx->pc = 0x16BFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFF4u;
            // 0x16bff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFFCu; }
        if (ctx->pc != 0x16BFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFFCu; }
        if (ctx->pc != 0x16BFFCu) { return; }
    }
    ctx->pc = 0x16BFFCu;
label_16bffc:
    // 0x16bffc: 0xc05b006  jal         func_16C018
    ctx->pc = 0x16BFFCu;
    SET_GPR_U32(ctx, 31, 0x16C004u);
    ctx->pc = 0x16C000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFFCu;
            // 0x16c000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C018u;
    if (runtime->hasFunction(0x16C018u)) {
        auto targetFn = runtime->lookupFunction(0x16C018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C004u; }
        if (ctx->pc != 0x16C004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C018_0x16c018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C004u; }
        if (ctx->pc != 0x16C004u) { return; }
    }
    ctx->pc = 0x16C004u;
label_16c004:
    // 0x16c004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c008: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16c008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c00c: 0x80599e0  j           func_166780
    ctx->pc = 0x16C00Cu;
    ctx->pc = 0x16C010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C00Cu;
            // 0x16c010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C014u;
    // 0x16c014: 0x0  nop
    ctx->pc = 0x16c014u;
    // NOP
}
