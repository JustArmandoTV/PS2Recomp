#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030F680
// Address: 0x30f680 - 0x30f7d0
void sub_0030F680_0x30f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F680_0x30f680");
#endif

    switch (ctx->pc) {
        case 0x30f6f8u: goto label_30f6f8;
        case 0x30f708u: goto label_30f708;
        case 0x30f750u: goto label_30f750;
        case 0x30f774u: goto label_30f774;
        case 0x30f790u: goto label_30f790;
        case 0x30f7a0u: goto label_30f7a0;
        default: break;
    }

    ctx->pc = 0x30f680u;

    // 0x30f680: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30f684: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30f684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30f688: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x30f688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x30f68c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30f690: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30f690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x30f694: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30f694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30f698: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30f698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30f69c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x30f69cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f6a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30f6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30f6a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30f6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f6a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30f6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30f6ac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x30f6acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f6b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30f6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30f6b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30f6b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30f6b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30f6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f6bc: 0xc460f400  lwc1        $f0, -0xC00($v1)
    ctx->pc = 0x30f6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f6c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30f6c4: 0xc442f404  lwc1        $f2, -0xBFC($v0)
    ctx->pc = 0x30f6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f6c8: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x30f6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x30f6cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30f6ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x30f6d0: 0x261200d8  addiu       $s2, $s0, 0xD8
    ctx->pc = 0x30f6d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    // 0x30f6d4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30f6d8: 0xc461f408  lwc1        $f1, -0xBF8($v1)
    ctx->pc = 0x30f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f6dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30f6e0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x30f6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x30f6e4: 0xc440f40c  lwc1        $f0, -0xBF4($v0)
    ctx->pc = 0x30f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f6e8: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x30f6e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x30f6ec: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x30f6ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x30f6f0: 0xc04cc90  jal         func_133240
    ctx->pc = 0x30F6F0u;
    SET_GPR_U32(ctx, 31, 0x30F6F8u);
    ctx->pc = 0x30F6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F6F0u;
            // 0x30f6f4: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F6F8u; }
        if (ctx->pc != 0x30F6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F6F8u; }
        if (ctx->pc != 0x30F6F8u) { return; }
    }
    ctx->pc = 0x30F6F8u;
label_30f6f8:
    // 0x30f6f8: 0x86110066  lh          $s1, 0x66($s0)
    ctx->pc = 0x30f6f8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x30f6fc: 0x1a200020  blez        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x30F6FCu;
    {
        const bool branch_taken_0x30f6fc = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x30f6fc) {
            ctx->pc = 0x30F780u;
            goto label_30f780;
        }
    }
    ctx->pc = 0x30F704u;
    // 0x30f704: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x30f704u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_30f708:
    // 0x30f708: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x30f708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x30f70c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x30f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x30f710: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x30f710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30f714: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x30f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30f718: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30f718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f71c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f720: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x30f720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30f724: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x30f724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30f728: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x30f728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30f72c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x30f72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x30f730: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x30f730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x30f734: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30f734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30f738: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30f738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f73c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f740: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f744: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30f744u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30f748: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x30F748u;
    SET_GPR_U32(ctx, 31, 0x30F750u);
    ctx->pc = 0x30F74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F748u;
            // 0x30f74c: 0x242a821  addu        $s5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F750u; }
        if (ctx->pc != 0x30F750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F750u; }
        if (ctx->pc != 0x30F750u) { return; }
    }
    ctx->pc = 0x30F750u;
label_30f750:
    // 0x30f750: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x30f750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30f754: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30f754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f758: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30f758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30f75c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x30f75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f764: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f768: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30f768u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30f76c: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x30F76Cu;
    SET_GPR_U32(ctx, 31, 0x30F774u);
    ctx->pc = 0x30F770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F76Cu;
            // 0x30f770: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F774u; }
        if (ctx->pc != 0x30F774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F774u; }
        if (ctx->pc != 0x30F774u) { return; }
    }
    ctx->pc = 0x30F774u;
label_30f774:
    // 0x30f774: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x30f774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x30f778: 0x1e20ffe3  bgtz        $s1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x30F778u;
    {
        const bool branch_taken_0x30f778 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x30F77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F778u;
            // 0x30f77c: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f778) {
            ctx->pc = 0x30F708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f708;
        }
    }
    ctx->pc = 0x30F780u;
label_30f780:
    // 0x30f780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30f780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f784: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30f784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f788: 0xc04cafc  jal         func_132BF0
    ctx->pc = 0x30F788u;
    SET_GPR_U32(ctx, 31, 0x30F790u);
    ctx->pc = 0x30F78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F788u;
            // 0x30f78c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F790u; }
        if (ctx->pc != 0x30F790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F790u; }
        if (ctx->pc != 0x30F790u) { return; }
    }
    ctx->pc = 0x30F790u;
label_30f790:
    // 0x30f790: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x30f790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x30f794: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30f794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f798: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x30F798u;
    SET_GPR_U32(ctx, 31, 0x30F7A0u);
    ctx->pc = 0x30F79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F798u;
            // 0x30f79c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7A0u; }
        if (ctx->pc != 0x30F7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7A0u; }
        if (ctx->pc != 0x30F7A0u) { return; }
    }
    ctx->pc = 0x30F7A0u;
label_30f7a0:
    // 0x30f7a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x30f7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30f7a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30f7a8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30f7a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30f7ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30f7acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30f7b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30f7b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f7b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30f7b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f7b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30f7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f7bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30f7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x30F7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F7C0u;
            // 0x30f7c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F7C8u;
    // 0x30f7c8: 0x0  nop
    ctx->pc = 0x30f7c8u;
    // NOP
    // 0x30f7cc: 0x0  nop
    ctx->pc = 0x30f7ccu;
    // NOP
}
