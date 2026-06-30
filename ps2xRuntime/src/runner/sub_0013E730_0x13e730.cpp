#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E730
// Address: 0x13e730 - 0x13ea10
void sub_0013E730_0x13e730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E730_0x13e730");
#endif

    switch (ctx->pc) {
        case 0x13e778u: goto label_13e778;
        case 0x13e788u: goto label_13e788;
        case 0x13e7acu: goto label_13e7ac;
        case 0x13e7c8u: goto label_13e7c8;
        default: break;
    }

    ctx->pc = 0x13e730u;

    // 0x13e730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13e730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13e734: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13e738: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13e738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13e73c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13e73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13e740: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13e740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e744: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13e744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13e748: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x13e748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x13e74c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13e74cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13e750: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13e750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e754: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13e754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e758: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x13e758u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x13e75c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13e760: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13e760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13e764: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x13e764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x13e768: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x13e768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x13e76c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x13e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e770: 0xc04f72c  jal         func_13DCB0
    ctx->pc = 0x13E770u;
    SET_GPR_U32(ctx, 31, 0x13E778u);
    ctx->pc = 0x13E774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E770u;
            // 0x13e774: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DCB0u;
    if (runtime->hasFunction(0x13DCB0u)) {
        auto targetFn = runtime->lookupFunction(0x13DCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E778u; }
        if (ctx->pc != 0x13E778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DCB0_0x13dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E778u; }
        if (ctx->pc != 0x13E778u) { return; }
    }
    ctx->pc = 0x13E778u;
label_13e778:
    // 0x13e778: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x13e778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13e77c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x13e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13e780: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x13E780u;
    SET_GPR_U32(ctx, 31, 0x13E788u);
    ctx->pc = 0x13E784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E780u;
            // 0x13e784: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E788u; }
        if (ctx->pc != 0x13E788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E788u; }
        if (ctx->pc != 0x13E788u) { return; }
    }
    ctx->pc = 0x13E788u;
label_13e788:
    // 0x13e788: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13e788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e78c: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x13e78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x13e790: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13E790u;
    {
        const bool branch_taken_0x13e790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e790) {
            ctx->pc = 0x13E794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E790u;
            // 0x13e794: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E7CCu;
            goto label_13e7cc;
        }
    }
    ctx->pc = 0x13E798u;
    // 0x13e798: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x13e798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e79c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x13e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x13e7a0: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x13e7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13e7a4: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x13E7A4u;
    SET_GPR_U32(ctx, 31, 0x13E7ACu);
    ctx->pc = 0x13E7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7A4u;
            // 0x13e7a8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E7ACu; }
        if (ctx->pc != 0x13E7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E7ACu; }
        if (ctx->pc != 0x13E7ACu) { return; }
    }
    ctx->pc = 0x13E7ACu;
label_13e7ac:
    // 0x13e7ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E7ACu;
    {
        const bool branch_taken_0x13e7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e7ac) {
            ctx->pc = 0x13E7C8u;
            goto label_13e7c8;
        }
    }
    ctx->pc = 0x13E7B4u;
    // 0x13e7b4: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x13e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e7b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13e7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7c0: 0xc04f854  jal         func_13E150
    ctx->pc = 0x13E7C0u;
    SET_GPR_U32(ctx, 31, 0x13E7C8u);
    ctx->pc = 0x13E7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7C0u;
            // 0x13e7c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E150u;
    if (runtime->hasFunction(0x13E150u)) {
        auto targetFn = runtime->lookupFunction(0x13E150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E7C8u; }
        if (ctx->pc != 0x13E7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E150_0x13e150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E7C8u; }
        if (ctx->pc != 0x13E7C8u) { return; }
    }
    ctx->pc = 0x13E7C8u;
label_13e7c8:
    // 0x13e7c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13e7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13e7cc:
    // 0x13e7cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13e7d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13e7d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e7d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13e7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e7d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13e7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x13E7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7DCu;
            // 0x13e7e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E7E4u;
    // 0x13e7e4: 0x0  nop
    ctx->pc = 0x13e7e4u;
    // NOP
    // 0x13e7e8: 0x0  nop
    ctx->pc = 0x13e7e8u;
    // NOP
    // 0x13e7ec: 0x0  nop
    ctx->pc = 0x13e7ecu;
    // NOP
    // 0x13e7f0: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x13e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x13e7f4: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x13e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x13e7f8: 0x8c44a000  lw          $a0, -0x6000($v0)
    ctx->pc = 0x13e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x13e7fc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x13e7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13e800: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x13E800u;
    {
        const bool branch_taken_0x13e800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13e800) {
            ctx->pc = 0x13E804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E800u;
            // 0x13e804: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E848u;
            goto label_13e848;
        }
    }
    ctx->pc = 0x13E808u;
    // 0x13e808: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e80c: 0x94425744  lhu         $v0, 0x5744($v0)
    ctx->pc = 0x13e80cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22340)));
    // 0x13e810: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E810u;
    {
        const bool branch_taken_0x13e810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e810) {
            ctx->pc = 0x13E814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E810u;
            // 0x13e814: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E830u;
            goto label_13e830;
        }
    }
    ctx->pc = 0x13E818u;
    // 0x13e818: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x13e818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13e81c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13e820: 0xac433c10  sw          $v1, 0x3C10($v0)
    ctx->pc = 0x13e820u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 15376), GPR_U32(ctx, 3)); // MMIO: 0x10003c10
    // 0x13e824: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e828: 0xa4405744  sh          $zero, 0x5744($v0)
    ctx->pc = 0x13e828u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22340), (uint16_t)GPR_U32(ctx, 0));
    // 0x13e82c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13e82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_13e830:
    // 0x13e830: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e834: 0xa443573c  sh          $v1, 0x573C($v0)
    ctx->pc = 0x13e834u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22332), (uint16_t)GPR_U32(ctx, 3));
    // 0x13e838: 0xf  sync
    ctx->pc = 0x13e838u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x13e83c: 0x42000038  ei
    ctx->pc = 0x13e83cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x13e840: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x13E840u;
    {
        const bool branch_taken_0x13e840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E840u;
            // 0x13e844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e840) {
            ctx->pc = 0x13E938u;
            goto label_13e938;
        }
    }
    ctx->pc = 0x13E848u;
label_13e848:
    // 0x13e848: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13e848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13e84c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x13E84Cu;
    {
        const bool branch_taken_0x13e84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e84c) {
            ctx->pc = 0x13E92Cu;
            goto label_13e92c;
        }
    }
    ctx->pc = 0x13E854u;
    // 0x13e854: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e858: 0x94425744  lhu         $v0, 0x5744($v0)
    ctx->pc = 0x13e858u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22340)));
    // 0x13e85c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E85Cu;
    {
        const bool branch_taken_0x13e85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e85c) {
            ctx->pc = 0x13E860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E85Cu;
            // 0x13e860: 0x41c02  srl         $v1, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E87Cu;
            goto label_13e87c;
        }
    }
    ctx->pc = 0x13E864u;
    // 0x13e864: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e868: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x13e868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13e86c: 0xa4405744  sh          $zero, 0x5744($v0)
    ctx->pc = 0x13e86cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22340), (uint16_t)GPR_U32(ctx, 0));
    // 0x13e870: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13e870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13e874: 0xac433c10  sw          $v1, 0x3C10($v0)
    ctx->pc = 0x13e874u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 15376), GPR_U32(ctx, 3)); // MMIO: 0x10003c10
    // 0x13e878: 0x41c02  srl         $v1, $a0, 16
    ctx->pc = 0x13e878u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_13e87c:
    // 0x13e87c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e880: 0x306401ff  andi        $a0, $v1, 0x1FF
    ctx->pc = 0x13e880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x13e884: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x13e884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x13e888: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E888u;
    {
        const bool branch_taken_0x13e888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E888u;
            // 0x13e88c: 0xa444573c  sh          $a0, 0x573C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 22332), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e888) {
            ctx->pc = 0x13E8A0u;
            goto label_13e8a0;
        }
    }
    ctx->pc = 0x13E890u;
    // 0x13e890: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x13e890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x13e894: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e898: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13E898u;
    {
        const bool branch_taken_0x13e898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E898u;
            // 0x13e89c: 0xa4435740  sh          $v1, 0x5740($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 22336), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e898) {
            ctx->pc = 0x13E8C0u;
            goto label_13e8c0;
        }
    }
    ctx->pc = 0x13E8A0u;
label_13e8a0:
    // 0x13e8a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13e8a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e8a8: 0x94635738  lhu         $v1, 0x5738($v1)
    ctx->pc = 0x13e8a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22328)));
    // 0x13e8ac: 0x9444573c  lhu         $a0, 0x573C($v0)
    ctx->pc = 0x13e8acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22332)));
    // 0x13e8b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13e8b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e8b8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x13e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e8bc: 0xa4435740  sh          $v1, 0x5740($v0)
    ctx->pc = 0x13e8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22336), (uint16_t)GPR_U32(ctx, 3));
label_13e8c0:
    // 0x13e8c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13e8c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e8c8: 0x9463573e  lhu         $v1, 0x573E($v1)
    ctx->pc = 0x13e8c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22334)));
    // 0x13e8cc: 0x84425740  lh          $v0, 0x5740($v0)
    ctx->pc = 0x13e8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22336)));
    // 0x13e8d0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13e8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e8d4: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E8D4u;
    {
        const bool branch_taken_0x13e8d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e8d4) {
            ctx->pc = 0x13E8D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E8D4u;
            // 0x13e8d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E8F0u;
            goto label_13e8f0;
        }
    }
    ctx->pc = 0x13E8DCu;
    // 0x13e8dc: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x13e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x13e8e0: 0x8c43a000  lw          $v1, -0x6000($v0)
    ctx->pc = 0x13e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x13e8e4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x13e8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x13e8e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E8E8u;
    {
        const bool branch_taken_0x13e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E8E8u;
            // 0x13e8ec: 0xac43a000  sw          $v1, -0x6000($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8e8) {
            ctx->pc = 0x13E8F8u;
            goto label_13e8f8;
        }
    }
    ctx->pc = 0x13E8F0u;
label_13e8f0:
    // 0x13e8f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e8f4: 0xa4435742  sh          $v1, 0x5742($v0)
    ctx->pc = 0x13e8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22338), (uint16_t)GPR_U32(ctx, 3));
label_13e8f8:
    // 0x13e8f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e8fc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13e900: 0x9445573a  lhu         $a1, 0x573A($v0)
    ctx->pc = 0x13e900u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22330)));
    // 0x13e904: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13e904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13e908: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13e908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13e90c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e910: 0xa485573a  sh          $a1, 0x573A($a0)
    ctx->pc = 0x13e910u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22330), (uint16_t)GPR_U32(ctx, 5));
    // 0x13e914: 0x94425738  lhu         $v0, 0x5738($v0)
    ctx->pc = 0x13e914u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22328)));
    // 0x13e918: 0x9463573a  lhu         $v1, 0x573A($v1)
    ctx->pc = 0x13e918u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22330)));
    // 0x13e91c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E91Cu;
    {
        const bool branch_taken_0x13e91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13e91c) {
            ctx->pc = 0x13E92Cu;
            goto label_13e92c;
        }
    }
    ctx->pc = 0x13E924u;
    // 0x13e924: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e928: 0xa440573a  sh          $zero, 0x573A($v0)
    ctx->pc = 0x13e928u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22330), (uint16_t)GPR_U32(ctx, 0));
label_13e92c:
    // 0x13e92c: 0xf  sync
    ctx->pc = 0x13e92cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x13e930: 0x42000038  ei
    ctx->pc = 0x13e930u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x13e934: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e938:
    // 0x13e938: 0x3e00008  jr          $ra
    ctx->pc = 0x13E938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E940u;
    // 0x13e940: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13e940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13e944: 0x8c433c00  lw          $v1, 0x3C00($v0)
    ctx->pc = 0x13e944u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 15360))); // MMIO: 0x10003c00
    // 0x13e948: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x13e948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x13e94c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x13E94Cu;
    {
        const bool branch_taken_0x13e94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E94Cu;
            // 0x13e950: 0x8c443c30  lw          $a0, 0x3C30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 15408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e94c) {
            ctx->pc = 0x13E9F8u;
            goto label_13e9f8;
        }
    }
    ctx->pc = 0x13E954u;
    // 0x13e954: 0xac403c30  sw          $zero, 0x3C30($v0)
    ctx->pc = 0x13e954u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 15408), GPR_U32(ctx, 0)); // MMIO: 0x10003c30
    // 0x13e958: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x13e958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x13e95c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E95Cu;
    {
        const bool branch_taken_0x13e95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e95c) {
            ctx->pc = 0x13E960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E95Cu;
            // 0x13e960: 0x30837fff  andi        $v1, $a0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E970u;
            goto label_13e970;
        }
    }
    ctx->pc = 0x13E964u;
    // 0x13e964: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e968: 0xa4405740  sh          $zero, 0x5740($v0)
    ctx->pc = 0x13e968u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22336), (uint16_t)GPR_U32(ctx, 0));
    // 0x13e96c: 0x30837fff  andi        $v1, $a0, 0x7FFF
    ctx->pc = 0x13e96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
label_13e970:
    // 0x13e970: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e974: 0xa443573e  sh          $v1, 0x573E($v0)
    ctx->pc = 0x13e974u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22334), (uint16_t)GPR_U32(ctx, 3));
    // 0x13e978: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e97c: 0x94425742  lhu         $v0, 0x5742($v0)
    ctx->pc = 0x13e97cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22338)));
    // 0x13e980: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13E980u;
    {
        const bool branch_taken_0x13e980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e980) {
            ctx->pc = 0x13E9BCu;
            goto label_13e9bc;
        }
    }
    ctx->pc = 0x13E988u;
    // 0x13e988: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13e988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13e98c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e990: 0x9463573e  lhu         $v1, 0x573E($v1)
    ctx->pc = 0x13e990u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22334)));
    // 0x13e994: 0x84425740  lh          $v0, 0x5740($v0)
    ctx->pc = 0x13e994u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22336)));
    // 0x13e998: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13e998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e99c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E99Cu;
    {
        const bool branch_taken_0x13e99c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e99c) {
            ctx->pc = 0x13E9BCu;
            goto label_13e9bc;
        }
    }
    ctx->pc = 0x13E9A4u;
    // 0x13e9a4: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x13e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
    // 0x13e9a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e9ac: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x13e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x13e9b0: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x13e9b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x13e9b4: 0xac64a000  sw          $a0, -0x6000($v1)
    ctx->pc = 0x13e9b4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720), GPR_U32(ctx, 4)); // MMIO: 0x1000a000
    // 0x13e9b8: 0xa4405742  sh          $zero, 0x5742($v0)
    ctx->pc = 0x13e9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22338), (uint16_t)GPR_U32(ctx, 0));
label_13e9bc:
    // 0x13e9bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13e9c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e9c4: 0x9463573c  lhu         $v1, 0x573C($v1)
    ctx->pc = 0x13e9c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22332)));
    // 0x13e9c8: 0x9442573e  lhu         $v0, 0x573E($v0)
    ctx->pc = 0x13e9c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22334)));
    // 0x13e9cc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13e9ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13e9d0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E9D0u;
    {
        const bool branch_taken_0x13e9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e9d0) {
            ctx->pc = 0x13E9D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E9D0u;
            // 0x13e9d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E9F0u;
            goto label_13e9f0;
        }
    }
    ctx->pc = 0x13E9D8u;
    // 0x13e9d8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x13e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13e9dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13e9e0: 0xac433c10  sw          $v1, 0x3C10($v0)
    ctx->pc = 0x13e9e0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 15376), GPR_U32(ctx, 3)); // MMIO: 0x10003c10
    // 0x13e9e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e9e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E9E8u;
    {
        const bool branch_taken_0x13e9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E9E8u;
            // 0x13e9ec: 0xa4405744  sh          $zero, 0x5744($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 22340), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9e8) {
            ctx->pc = 0x13E9F8u;
            goto label_13e9f8;
        }
    }
    ctx->pc = 0x13E9F0u;
label_13e9f0:
    // 0x13e9f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13e9f4: 0xa4435744  sh          $v1, 0x5744($v0)
    ctx->pc = 0x13e9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22340), (uint16_t)GPR_U32(ctx, 3));
label_13e9f8:
    // 0x13e9f8: 0xf  sync
    ctx->pc = 0x13e9f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x13e9fc: 0x42000038  ei
    ctx->pc = 0x13e9fcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x13ea00: 0x3e00008  jr          $ra
    ctx->pc = 0x13EA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA00u;
            // 0x13ea04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EA08u;
    // 0x13ea08: 0x0  nop
    ctx->pc = 0x13ea08u;
    // NOP
    // 0x13ea0c: 0x0  nop
    ctx->pc = 0x13ea0cu;
    // NOP
}
