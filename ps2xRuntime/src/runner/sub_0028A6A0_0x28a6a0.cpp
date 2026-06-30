#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028A6A0
// Address: 0x28a6a0 - 0x28a790
void sub_0028A6A0_0x28a6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A6A0_0x28a6a0");
#endif

    switch (ctx->pc) {
        case 0x28a6e0u: goto label_28a6e0;
        case 0x28a6f4u: goto label_28a6f4;
        case 0x28a718u: goto label_28a718;
        case 0x28a768u: goto label_28a768;
        default: break;
    }

    ctx->pc = 0x28a6a0u;

    // 0x28a6a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28a6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28a6a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28a6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28a6a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28a6ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28a6b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28a6b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28a6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28a6b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28a6b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28a6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28a6c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28a6c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28a6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28a6c8: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A6C8u;
    {
        const bool branch_taken_0x28a6c8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x28A6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A6C8u;
            // 0x28a6cc: 0x58043  sra         $s0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6c8) {
            ctx->pc = 0x28A6D8u;
            goto label_28a6d8;
        }
    }
    ctx->pc = 0x28A6D0u;
    // 0x28a6d0: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x28a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28a6d4: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x28a6d4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_28a6d8:
    // 0x28a6d8: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28A6D8u;
    {
        const bool branch_taken_0x28a6d8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x28a6d8) {
            ctx->pc = 0x28A700u;
            goto label_28a700;
        }
    }
    ctx->pc = 0x28A6E0u;
label_28a6e0:
    // 0x28a6e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28a6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28a6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6ec: 0xc0a2be0  jal         func_28AF80
    ctx->pc = 0x28A6ECu;
    SET_GPR_U32(ctx, 31, 0x28A6F4u);
    ctx->pc = 0x28A6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A6ECu;
            // 0x28a6f0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AF80u;
    if (runtime->hasFunction(0x28AF80u)) {
        auto targetFn = runtime->lookupFunction(0x28AF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A6F4u; }
        if (ctx->pc != 0x28A6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028AF80_0x28af80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A6F4u; }
        if (ctx->pc != 0x28A6F4u) { return; }
    }
    ctx->pc = 0x28A6F4u;
label_28a6f4:
    // 0x28a6f4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x28a6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x28a6f8: 0x1e00fff9  bgtz        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28A6F8u;
    {
        const bool branch_taken_0x28a6f8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x28a6f8) {
            ctx->pc = 0x28A6E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a6e0;
        }
    }
    ctx->pc = 0x28A700u;
label_28a700:
    // 0x28a700: 0x1a60001b  blez        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x28A700u;
    {
        const bool branch_taken_0x28a700 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x28a700) {
            ctx->pc = 0x28A770u;
            goto label_28a770;
        }
    }
    ctx->pc = 0x28A708u;
    // 0x28a708: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x28a708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x28a70c: 0x27b0006c  addiu       $s0, $sp, 0x6C
    ctx->pc = 0x28a70cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x28a710: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x28a710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x28a714: 0x0  nop
    ctx->pc = 0x28a714u;
    // NOP
label_28a718:
    // 0x28a718: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x28a718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x28a71c: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x28a71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a720: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x28a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x28a724: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x28a724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a728: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28a728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a72c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28a72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a730: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28a730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a734: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28a734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a738: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x28a738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28a73c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28a73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28a740: 0x8e22fff8  lw          $v0, -0x8($s1)
    ctx->pc = 0x28a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
    // 0x28a744: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x28a744u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x28a748: 0xc620fffc  lwc1        $f0, -0x4($s1)
    ctx->pc = 0x28a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a74c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x28a74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x28a750: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x28a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x28a754: 0xae22fff8  sw          $v0, -0x8($s1)
    ctx->pc = 0x28a754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 2));
    // 0x28a758: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x28a758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a75c: 0xe620fffc  swc1        $f0, -0x4($s1)
    ctx->pc = 0x28a75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), bits); }
    // 0x28a760: 0xc0a2be0  jal         func_28AF80
    ctx->pc = 0x28A760u;
    SET_GPR_U32(ctx, 31, 0x28A768u);
    ctx->pc = 0x28A764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A760u;
            // 0x28a764: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AF80u;
    if (runtime->hasFunction(0x28AF80u)) {
        auto targetFn = runtime->lookupFunction(0x28AF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A768u; }
        if (ctx->pc != 0x28A768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028AF80_0x28af80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A768u; }
        if (ctx->pc != 0x28A768u) { return; }
    }
    ctx->pc = 0x28A768u;
label_28a768:
    // 0x28a768: 0x1e60ffeb  bgtz        $s3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x28A768u;
    {
        const bool branch_taken_0x28a768 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x28a768) {
            ctx->pc = 0x28A718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a718;
        }
    }
    ctx->pc = 0x28A770u;
label_28a770:
    // 0x28a770: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28a770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a774: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28a774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a778: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28a778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a77c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28a77cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28a780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28a784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a788: 0x3e00008  jr          $ra
    ctx->pc = 0x28A788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A788u;
            // 0x28a78c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A790u;
}
