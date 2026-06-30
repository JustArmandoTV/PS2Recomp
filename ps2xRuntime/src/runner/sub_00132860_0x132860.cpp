#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132860
// Address: 0x132860 - 0x132990
void sub_00132860_0x132860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132860_0x132860");
#endif

    switch (ctx->pc) {
        case 0x1328b8u: goto label_1328b8;
        case 0x1328e8u: goto label_1328e8;
        case 0x132918u: goto label_132918;
        default: break;
    }

    ctx->pc = 0x132860u;

    // 0x132860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x132860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x132864: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x132864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x132868: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x132868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13286c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x132870: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x132870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132874: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x132874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x132878: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x132878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13287c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x13287cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x132880: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x132880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132884: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x132884u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x132888: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x132888u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13288c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13288Cu;
    {
        const bool branch_taken_0x13288c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x132890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13288Cu;
            // 0x132890: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13288c) {
            ctx->pc = 0x1328A8u;
            goto label_1328a8;
        }
    }
    ctx->pc = 0x132894u;
    // 0x132894: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x132894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x132898: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x132898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13289c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x13289cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1328a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1328A0u;
    {
        const bool branch_taken_0x1328a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1328a0) {
            ctx->pc = 0x1328C0u;
            goto label_1328c0;
        }
    }
    ctx->pc = 0x1328A8u;
label_1328a8:
    // 0x1328a8: 0x52043  sra         $a0, $a1, 1
    ctx->pc = 0x1328a8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1328ac: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1328acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1328b0: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x1328B0u;
    SET_GPR_U32(ctx, 31, 0x1328B8u);
    ctx->pc = 0x1328B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1328B0u;
            // 0x1328b4: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328B8u; }
        if (ctx->pc != 0x1328B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328B8u; }
        if (ctx->pc != 0x1328B8u) { return; }
    }
    ctx->pc = 0x1328B8u;
label_1328b8:
    // 0x1328b8: 0xc7b5005c  lwc1        $f21, 0x5C($sp)
    ctx->pc = 0x1328b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1328bc: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x1328bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1328c0:
    // 0x1328c0: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1328C0u;
    {
        const bool branch_taken_0x1328c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1328c0) {
            ctx->pc = 0x1328C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1328C0u;
            // 0x1328c4: 0x112043  sra         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1328DCu;
            goto label_1328dc;
        }
    }
    ctx->pc = 0x1328C8u;
    // 0x1328c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1328c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1328cc: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1328ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1328d0: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x1328d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1328d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1328D4u;
    {
        const bool branch_taken_0x1328d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1328d4) {
            ctx->pc = 0x1328F0u;
            goto label_1328f0;
        }
    }
    ctx->pc = 0x1328DCu;
label_1328dc:
    // 0x1328dc: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1328dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1328e0: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x1328E0u;
    SET_GPR_U32(ctx, 31, 0x1328E8u);
    ctx->pc = 0x1328E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1328E0u;
            // 0x1328e4: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328E8u; }
        if (ctx->pc != 0x1328E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328E8u; }
        if (ctx->pc != 0x1328E8u) { return; }
    }
    ctx->pc = 0x1328E8u;
label_1328e8:
    // 0x1328e8: 0xc7b7005c  lwc1        $f23, 0x5C($sp)
    ctx->pc = 0x1328e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1328ec: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x1328ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1328f0:
    // 0x1328f0: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1328F0u;
    {
        const bool branch_taken_0x1328f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1328f0) {
            ctx->pc = 0x1328F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1328F0u;
            // 0x1328f4: 0x102043  sra         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13290Cu;
            goto label_13290c;
        }
    }
    ctx->pc = 0x1328F8u;
    // 0x1328f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1328f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1328fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1328fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x132900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132904: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x132904u;
    {
        const bool branch_taken_0x132904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132904u;
            // 0x132908: 0x46170882  mul.s       $f2, $f1, $f23 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132904) {
            ctx->pc = 0x132924u;
            goto label_132924;
        }
    }
    ctx->pc = 0x13290Cu;
label_13290c:
    // 0x13290c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x13290cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x132910: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x132910u;
    SET_GPR_U32(ctx, 31, 0x132918u);
    ctx->pc = 0x132914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132910u;
            // 0x132914: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132918u; }
        if (ctx->pc != 0x132918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132918u; }
        if (ctx->pc != 0x132918u) { return; }
    }
    ctx->pc = 0x132918u;
label_132918:
    // 0x132918: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x132918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13291c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x13291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132920: 0x46170882  mul.s       $f2, $f1, $f23
    ctx->pc = 0x132920u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_132924:
    // 0x132924: 0x46160102  mul.s       $f4, $f0, $f22
    ctx->pc = 0x132924u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x132928: 0x461700c2  mul.s       $f3, $f0, $f23
    ctx->pc = 0x132928u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x13292c: 0x4615201a  mula.s      $f4, $f21
    ctx->pc = 0x13292cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x132930: 0x4614101d  msub.s      $f0, $f2, $f20
    ctx->pc = 0x132930u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x132934: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x132934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x132938: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x132938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x13293c: 0x4615081a  mula.s      $f1, $f21
    ctx->pc = 0x13293cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x132940: 0x4614181c  madd.s      $f0, $f3, $f20
    ctx->pc = 0x132940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
    // 0x132944: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x132944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x132948: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x132948u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x13294c: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x13294cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x132950: 0x4615005c  madd.s      $f1, $f0, $f21
    ctx->pc = 0x132950u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
    // 0x132954: 0x4615101a  mula.s      $f2, $f21
    ctx->pc = 0x132954u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x132958: 0x4614201c  madd.s      $f0, $f4, $f20
    ctx->pc = 0x132958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[20]));
    // 0x13295c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x13295cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x132960: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x132960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x132964: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x132964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132968: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x132968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x13296c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13296cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132970: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x132970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x132974: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x132974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132978: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x132978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13297c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13297cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132980: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x132980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x132984: 0x3e00008  jr          $ra
    ctx->pc = 0x132984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132984u;
            // 0x132988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13298Cu;
    // 0x13298c: 0x0  nop
    ctx->pc = 0x13298cu;
    // NOP
}
