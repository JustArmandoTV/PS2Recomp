#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C76B8
// Address: 0x1c76b8 - 0x1c78b0
void sub_001C76B8_0x1c76b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C76B8_0x1c76b8");
#endif

    switch (ctx->pc) {
        case 0x1c7718u: goto label_1c7718;
        case 0x1c7758u: goto label_1c7758;
        case 0x1c776cu: goto label_1c776c;
        case 0x1c7798u: goto label_1c7798;
        case 0x1c77b8u: goto label_1c77b8;
        case 0x1c77c0u: goto label_1c77c0;
        case 0x1c77f8u: goto label_1c77f8;
        case 0x1c7838u: goto label_1c7838;
        default: break;
    }

    ctx->pc = 0x1c76b8u;

    // 0x1c76b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c76b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c76bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c76c0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c76c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c76c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c76c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c76c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c76cc: 0x26710800  addiu       $s1, $s3, 0x800
    ctx->pc = 0x1c76ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 2048));
    // 0x1c76d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c76d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c76d4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c76d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c76d8: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1c76d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x1c76dc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1c76dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1c76e0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1c76e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c76e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c76e8: 0x25120001  addiu       $s2, $t0, 0x1
    ctx->pc = 0x1c76e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c76ec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c76ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c76f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c76f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76f4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c76f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1c76f8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1c76f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c76fc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1c76fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1c7700: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x1c7700u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7704: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1c7704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1c7708: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1c7708u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c770c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1c770cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1c7710: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1c7710u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7714: 0x0  nop
    ctx->pc = 0x1c7714u;
    // NOP
label_1c7718:
    // 0x1c7718: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x1c7718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1c771c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C771Cu;
    {
        const bool branch_taken_0x1c771c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C771Cu;
            // 0x1c7720: 0x2713023  subu        $a2, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c771c) {
            ctx->pc = 0x1C7744u;
            goto label_1c7744;
        }
    }
    ctx->pc = 0x1C7724u;
    // 0x1c7724: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1c7724u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7728: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1c7728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c772c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7730: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1c7730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c7734: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1c7734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c7738: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x1c7738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1c773c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C773Cu;
    {
        const bool branch_taken_0x1c773c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c773c) {
            ctx->pc = 0x1C77B8u;
            goto label_1c77b8;
        }
    }
    ctx->pc = 0x1C7744u;
label_1c7744:
    // 0x1c7744: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c7744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7748: 0x24c60800  addiu       $a2, $a2, 0x800
    ctx->pc = 0x1c7748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x1c774c: 0x2668023  subu        $s0, $s3, $a2
    ctx->pc = 0x1c774cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1c7750: 0xc04a508  jal         func_129420
    ctx->pc = 0x1C7750u;
    SET_GPR_U32(ctx, 31, 0x1C7758u);
    ctx->pc = 0x1C7754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7750u;
            // 0x1c7754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7758u; }
        if (ctx->pc != 0x1C7758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7758u; }
        if (ctx->pc != 0x1C7758u) { return; }
    }
    ctx->pc = 0x1C7758u;
label_1c7758:
    // 0x1c7758: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c7758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c775c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c775cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7760: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7764: 0xc071180  jal         func_1C4600
    ctx->pc = 0x1C7764u;
    SET_GPR_U32(ctx, 31, 0x1C776Cu);
    ctx->pc = 0x1C7768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7764u;
            // 0x1c7768: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4600u;
    if (runtime->hasFunction(0x1C4600u)) {
        auto targetFn = runtime->lookupFunction(0x1C4600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C776Cu; }
        if (ctx->pc != 0x1C776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4600_0x1c4600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C776Cu; }
        if (ctx->pc != 0x1C776Cu) { return; }
    }
    ctx->pc = 0x1C776Cu;
label_1c776c:
    // 0x1c776c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7770: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C7770u;
    {
        const bool branch_taken_0x1c7770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c7770) {
            ctx->pc = 0x1C7774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7770u;
            // 0x1c7774: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C77A0u;
            goto label_1c77a0;
        }
    }
    ctx->pc = 0x1C7778u;
    // 0x1c7778: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1c7778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1c777c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1c777cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1c7780: 0x24a4bff8  addiu       $a0, $a1, -0x4008
    ctx->pc = 0x1c7780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950904));
    // 0x1c7784: 0x2405032c  addiu       $a1, $zero, 0x32C
    ctx->pc = 0x1c7784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 812));
    // 0x1c7788: 0x2466c030  addiu       $a2, $v1, -0x3FD0
    ctx->pc = 0x1c7788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950960));
    // 0x1c778c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c778cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7790: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C7790u;
    SET_GPR_U32(ctx, 31, 0x1C7798u);
    ctx->pc = 0x1C7794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7790u;
            // 0x1c7794: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7798u; }
        if (ctx->pc != 0x1C7798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7798u; }
        if (ctx->pc != 0x1C7798u) { return; }
    }
    ctx->pc = 0x1C7798u;
label_1c7798:
    // 0x1c7798: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C7798u;
    {
        const bool branch_taken_0x1c7798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C779Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7798u;
            // 0x1c779c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7798) {
            ctx->pc = 0x1C7880u;
            goto label_1c7880;
        }
    }
    ctx->pc = 0x1C77A0u;
label_1c77a0:
    // 0x1c77a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c77a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c77a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c77a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c77a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c77acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77b0: 0xc071332  jal         func_1C4CC8
    ctx->pc = 0x1C77B0u;
    SET_GPR_U32(ctx, 31, 0x1C77B8u);
    ctx->pc = 0x1C77B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77B0u;
            // 0x1c77b4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4CC8u;
    if (runtime->hasFunction(0x1C4CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1C4CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77B8u; }
        if (ctx->pc != 0x1C77B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4CC8_0x1c4cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77B8u; }
        if (ctx->pc != 0x1C77B8u) { return; }
    }
    ctx->pc = 0x1C77B8u;
label_1c77b8:
    // 0x1c77b8: 0xc07154c  jal         func_1C5530
    ctx->pc = 0x1C77B8u;
    SET_GPR_U32(ctx, 31, 0x1C77C0u);
    ctx->pc = 0x1C77BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77B8u;
            // 0x1c77bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5530u;
    if (runtime->hasFunction(0x1C5530u)) {
        auto targetFn = runtime->lookupFunction(0x1C5530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77C0u; }
        if (ctx->pc != 0x1C77C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5530_0x1c5530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77C0u; }
        if (ctx->pc != 0x1C77C0u) { return; }
    }
    ctx->pc = 0x1C77C0u;
label_1c77c0:
    // 0x1c77c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c77c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77c4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1c77c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c77c8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1c77c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c77cc: 0x5444001c  bnel        $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C77CCu;
    {
        const bool branch_taken_0x1c77cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c77cc) {
            ctx->pc = 0x1C77D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77CCu;
            // 0x1c77d0: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7840u;
            goto label_1c7840;
        }
    }
    ctx->pc = 0x1C77D4u;
    // 0x1c77d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c77d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77d8: 0x52a5000a  beql        $s5, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C77D8u;
    {
        const bool branch_taken_0x1c77d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c77d8) {
            ctx->pc = 0x1C77DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77D8u;
            // 0x1c77dc: 0xafb50004  sw          $s5, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7804u;
            goto label_1c7804;
        }
    }
    ctx->pc = 0x1C77E0u;
    // 0x1c77e0: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x1c77e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c77e4: 0x14de0017  bne         $a2, $fp, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C77E4u;
    {
        const bool branch_taken_0x1c77e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 30));
        ctx->pc = 0x1C77E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77E4u;
            // 0x1c77e8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77e4) {
            ctx->pc = 0x1C7844u;
            goto label_1c7844;
        }
    }
    ctx->pc = 0x1C77ECu;
    // 0x1c77ec: 0x2604000a  addiu       $a0, $s0, 0xA
    ctx->pc = 0x1c77ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x1c77f0: 0xc071a9c  jal         func_1C6A70
    ctx->pc = 0x1C77F0u;
    SET_GPR_U32(ctx, 31, 0x1C77F8u);
    ctx->pc = 0x1C77F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77F0u;
            // 0x1c77f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A70u;
    if (runtime->hasFunction(0x1C6A70u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77F8u; }
        if (ctx->pc != 0x1C77F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6A70_0x1c6a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77F8u; }
        if (ctx->pc != 0x1C77F8u) { return; }
    }
    ctx->pc = 0x1C77F8u;
label_1c77f8:
    // 0x1c77f8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C77F8u;
    {
        const bool branch_taken_0x1c77f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c77f8) {
            ctx->pc = 0x1C77FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77F8u;
            // 0x1c77fc: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7840u;
            goto label_1c7840;
        }
    }
    ctx->pc = 0x1C7800u;
    // 0x1c7800: 0xafb50004  sw          $s5, 0x4($sp)
    ctx->pc = 0x1c7800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
label_1c7804:
    // 0x1c7804: 0x25e9021  addu        $s2, $s2, $fp
    ctx->pc = 0x1c7804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x1c7808: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1c7808u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c780c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C780Cu;
    {
        const bool branch_taken_0x1c780c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C780Cu;
            // 0x1c7810: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c780c) {
            ctx->pc = 0x1C7820u;
            goto label_1c7820;
        }
    }
    ctx->pc = 0x1C7814u;
    // 0x1c7814: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C7814u;
    {
        const bool branch_taken_0x1c7814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7814u;
            // 0x1c7818: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7814) {
            ctx->pc = 0x1C787Cu;
            goto label_1c787c;
        }
    }
    ctx->pc = 0x1C781Cu;
    // 0x1c781c: 0x0  nop
    ctx->pc = 0x1c781cu;
    // NOP
label_1c7820:
    // 0x1c7820: 0x3aa20001  xori        $v0, $s5, 0x1
    ctx->pc = 0x1c7820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
    // 0x1c7824: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x1c7824u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x1c7828: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1c7828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1c782c: 0x2445c040  addiu       $a1, $v0, -0x3FC0
    ctx->pc = 0x1c782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950976));
    // 0x1c7830: 0xc071b1a  jal         func_1C6C68
    ctx->pc = 0x1C7830u;
    SET_GPR_U32(ctx, 31, 0x1C7838u);
    ctx->pc = 0x1C7834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7830u;
            // 0x1c7834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6C68u;
    if (runtime->hasFunction(0x1C6C68u)) {
        auto targetFn = runtime->lookupFunction(0x1C6C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7838u; }
        if (ctx->pc != 0x1C7838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6C68_0x1c6c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7838u; }
        if (ctx->pc != 0x1C7838u) { return; }
    }
    ctx->pc = 0x1C7838u;
label_1c7838:
    // 0x1c7838: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x1c7838u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c783c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1c783cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7840:
    // 0x1c7840: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1c7840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1c7844:
    // 0x1c7844: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1c7844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1c7848: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c7848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c784c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1c784cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7850: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1c7850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1c7854: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c7854u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1c7858: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c7858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c785c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1c785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c7860: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c7860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c7864: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1c7864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c7868: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1c7868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1c786c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1c786cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c7870: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1C7870u;
    {
        const bool branch_taken_0x1c7870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7870u;
            // 0x1c7874: 0x24510008  addiu       $s1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7870) {
            ctx->pc = 0x1C7718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7718;
        }
    }
    ctx->pc = 0x1C7878u;
    // 0x1c7878: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c7878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c787c:
    // 0x1c787c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c787cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7880:
    // 0x1c7880: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c7880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c7884: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c7884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7888: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c7888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c788c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c788cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7890: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c7890u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c7894: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1c7894u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7898: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1c7898u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c789c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1c789cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c78a0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c78a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c78a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C78A4u;
            // 0x1c78a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C78ACu;
    // 0x1c78ac: 0x0  nop
    ctx->pc = 0x1c78acu;
    // NOP
}
