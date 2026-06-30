#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D54E0
// Address: 0x3d54e0 - 0x3d5af0
void sub_003D54E0_0x3d54e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D54E0_0x3d54e0");
#endif

    switch (ctx->pc) {
        case 0x3d5510u: goto label_3d5510;
        case 0x3d554cu: goto label_3d554c;
        case 0x3d5558u: goto label_3d5558;
        case 0x3d55d4u: goto label_3d55d4;
        case 0x3d55e0u: goto label_3d55e0;
        case 0x3d5670u: goto label_3d5670;
        case 0x3d5688u: goto label_3d5688;
        case 0x3d5694u: goto label_3d5694;
        case 0x3d5728u: goto label_3d5728;
        case 0x3d5734u: goto label_3d5734;
        case 0x3d57acu: goto label_3d57ac;
        case 0x3d57b8u: goto label_3d57b8;
        case 0x3d5830u: goto label_3d5830;
        case 0x3d583cu: goto label_3d583c;
        case 0x3d58c4u: goto label_3d58c4;
        case 0x3d58d0u: goto label_3d58d0;
        case 0x3d5948u: goto label_3d5948;
        case 0x3d5954u: goto label_3d5954;
        case 0x3d59ccu: goto label_3d59cc;
        case 0x3d59d8u: goto label_3d59d8;
        case 0x3d5a50u: goto label_3d5a50;
        case 0x3d5a5cu: goto label_3d5a5c;
        default: break;
    }

    ctx->pc = 0x3d54e0u;

    // 0x3d54e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d54e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d54e4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3d54e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3d54e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d54e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3d54ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d54ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3d54f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d54f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3d54f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d54f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3d54f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d54f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d54fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d54fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d5504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5508: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3D5508u;
    SET_GPR_U32(ctx, 31, 0x3D5510u);
    ctx->pc = 0x3D550Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5508u;
            // 0x3d550c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5510u; }
        if (ctx->pc != 0x3D5510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5510u; }
        if (ctx->pc != 0x3D5510u) { return; }
    }
    ctx->pc = 0x3D5510u;
label_3d5510:
    // 0x3d5510: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3d5510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d5514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d5514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5518: 0x0  nop
    ctx->pc = 0x3d5518u;
    // NOP
    // 0x3d551c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d551cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d5520: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3d5520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3d5524: 0x0  nop
    ctx->pc = 0x3d5524u;
    // NOP
    // 0x3d5528: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x3d5528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x3d552c: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x3d552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d5530: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x3d5530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x3d5534: 0xc6340024  lwc1        $f20, 0x24($s1)
    ctx->pc = 0x3d5534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3d5538: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x3d5538u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d553c: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
    ctx->pc = 0x3D553Cu;
    {
        const bool branch_taken_0x3d553c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d553c) {
            ctx->pc = 0x3D5540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D553Cu;
            // 0x3d5540: 0xc634001c  lwc1        $f20, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D55CCu;
            goto label_3d55cc;
        }
    }
    ctx->pc = 0x3D5544u;
    // 0x3d5544: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D5544u;
    SET_GPR_U32(ctx, 31, 0x3D554Cu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D554Cu; }
        if (ctx->pc != 0x3D554Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D554Cu; }
        if (ctx->pc != 0x3D554Cu) { return; }
    }
    ctx->pc = 0x3D554Cu;
label_3d554c:
    // 0x3d554c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d5550: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D5550u;
    SET_GPR_U32(ctx, 31, 0x3D5558u);
    ctx->pc = 0x3D5554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5550u;
            // 0x3d5554: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5558u; }
        if (ctx->pc != 0x3D5558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5558u; }
        if (ctx->pc != 0x3D5558u) { return; }
    }
    ctx->pc = 0x3D5558u;
label_3d5558:
    // 0x3d5558: 0x522025  or          $a0, $v0, $s2
    ctx->pc = 0x3d5558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3d555c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3d555cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3d5560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d5560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5564: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3d5564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x3d5568: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d5568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d556c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D556Cu;
    {
        const bool branch_taken_0x3d556c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3D5570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D556Cu;
            // 0x3d5570: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d556c) {
            ctx->pc = 0x3D5580u;
            goto label_3d5580;
        }
    }
    ctx->pc = 0x3D5574u;
    // 0x3d5574: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d5574u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5578: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D5578u;
    {
        const bool branch_taken_0x3d5578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D557Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5578u;
            // 0x3d557c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5578) {
            ctx->pc = 0x3D559Cu;
            goto label_3d559c;
        }
    }
    ctx->pc = 0x3D5580u;
label_3d5580:
    // 0x3d5580: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3d5580u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3d5584: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3d5584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3d5588: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d5588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d558c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d558cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5590: 0x0  nop
    ctx->pc = 0x3d5590u;
    // NOP
    // 0x3d5594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d5594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d5598: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d5598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d559c:
    // 0x3d559c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d559cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3d55a0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x3d55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x3d55a4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x3d55a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x3d55a8: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3d55a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3d55ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d55acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d55b0: 0x0  nop
    ctx->pc = 0x3d55b0u;
    // NOP
    // 0x3d55b4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3d55b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3d55b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d55b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d55bc: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3d55bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d55c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d55c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d55c4: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x3d55c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x3d55c8: 0xc634001c  lwc1        $f20, 0x1C($s1)
    ctx->pc = 0x3d55c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d55cc:
    // 0x3d55cc: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D55CCu;
    SET_GPR_U32(ctx, 31, 0x3D55D4u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D55D4u; }
        if (ctx->pc != 0x3D55D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D55D4u; }
        if (ctx->pc != 0x3D55D4u) { return; }
    }
    ctx->pc = 0x3D55D4u;
label_3d55d4:
    // 0x3d55d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d55d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d55d8: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D55D8u;
    SET_GPR_U32(ctx, 31, 0x3D55E0u);
    ctx->pc = 0x3D55DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D55D8u;
            // 0x3d55dc: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D55E0u; }
        if (ctx->pc != 0x3D55E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D55E0u; }
        if (ctx->pc != 0x3D55E0u) { return; }
    }
    ctx->pc = 0x3D55E0u;
label_3d55e0:
    // 0x3d55e0: 0x522025  or          $a0, $v0, $s2
    ctx->pc = 0x3d55e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3d55e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3d55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3d55e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d55e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d55ec: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3d55ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x3d55f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d55f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d55f4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D55F4u;
    {
        const bool branch_taken_0x3d55f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3D55F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D55F4u;
            // 0x3d55f8: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d55f4) {
            ctx->pc = 0x3D5608u;
            goto label_3d5608;
        }
    }
    ctx->pc = 0x3D55FCu;
    // 0x3d55fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d55fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5600: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D5600u;
    {
        const bool branch_taken_0x3d5600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5600u;
            // 0x3d5604: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5600) {
            ctx->pc = 0x3D5624u;
            goto label_3d5624;
        }
    }
    ctx->pc = 0x3D5608u;
label_3d5608:
    // 0x3d5608: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3d5608u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3d560c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3d560cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3d5610: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d5610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d5614: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d5614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5618: 0x0  nop
    ctx->pc = 0x3d5618u;
    // NOP
    // 0x3d561c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d561cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d5620: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d5620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d5624:
    // 0x3d5624: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d5624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3d5628: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x3d5628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x3d562c: 0x3446b717  ori         $a2, $v0, 0xB717
    ctx->pc = 0x3d562cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x3d5630: 0x92250005  lbu         $a1, 0x5($s1)
    ctx->pc = 0x3d5630u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x3d5634: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d5634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d5638: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x3d5638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3d563c: 0x24429870  addiu       $v0, $v0, -0x6790
    ctx->pc = 0x3d563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940784));
    // 0x3d5640: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3d5640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3d5644: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3d5644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3d5648: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d5648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d564c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d564cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d5650: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3d5650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d5654: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3d5654u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5658: 0x0  nop
    ctx->pc = 0x3d5658u;
    // NOP
    // 0x3d565c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3d565cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3d5660: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d5660u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d5664: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x3d5664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5668: 0xc04cb6c  jal         func_132DB0
    ctx->pc = 0x3D5668u;
    SET_GPR_U32(ctx, 31, 0x3D5670u);
    ctx->pc = 0x3D566Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5668u;
            // 0x3d566c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DB0u;
    if (runtime->hasFunction(0x132DB0u)) {
        auto targetFn = runtime->lookupFunction(0x132DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5670u; }
        if (ctx->pc != 0x3D5670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DB0_0x132db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5670u; }
        if (ctx->pc != 0x3D5670u) { return; }
    }
    ctx->pc = 0x3D5670u;
label_3d5670:
    // 0x3d5670: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d5670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d5674: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3d5674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3d5678: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x3D5678u;
    {
        const bool branch_taken_0x3d5678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5678) {
            ctx->pc = 0x3D567Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5678u;
            // 0x3d567c: 0xc6340050  lwc1        $f20, 0x50($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5720u;
            goto label_3d5720;
        }
    }
    ctx->pc = 0x3D5680u;
    // 0x3d5680: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D5680u;
    SET_GPR_U32(ctx, 31, 0x3D5688u);
    ctx->pc = 0x3D5684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5680u;
            // 0x3d5684: 0xc6340050  lwc1        $f20, 0x50($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5688u; }
        if (ctx->pc != 0x3D5688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5688u; }
        if (ctx->pc != 0x3D5688u) { return; }
    }
    ctx->pc = 0x3D5688u;
label_3d5688:
    // 0x3d5688: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d5688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d568c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D568Cu;
    SET_GPR_U32(ctx, 31, 0x3D5694u);
    ctx->pc = 0x3D5690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D568Cu;
            // 0x3d5690: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5694u; }
        if (ctx->pc != 0x3D5694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5694u; }
        if (ctx->pc != 0x3D5694u) { return; }
    }
    ctx->pc = 0x3D5694u;
label_3d5694:
    // 0x3d5694: 0x522025  or          $a0, $v0, $s2
    ctx->pc = 0x3d5694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3d5698: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3d5698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3d569c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d569cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d56a0: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3d56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x3d56a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d56a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d56a8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D56A8u;
    {
        const bool branch_taken_0x3d56a8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3D56ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D56A8u;
            // 0x3d56ac: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d56a8) {
            ctx->pc = 0x3D56BCu;
            goto label_3d56bc;
        }
    }
    ctx->pc = 0x3D56B0u;
    // 0x3d56b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d56b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d56b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D56B4u;
    {
        const bool branch_taken_0x3d56b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D56B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D56B4u;
            // 0x3d56b8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d56b4) {
            ctx->pc = 0x3D56D8u;
            goto label_3d56d8;
        }
    }
    ctx->pc = 0x3D56BCu;
label_3d56bc:
    // 0x3d56bc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3d56bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3d56c0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3d56c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3d56c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d56c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d56c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d56c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d56cc: 0x0  nop
    ctx->pc = 0x3d56ccu;
    // NOP
    // 0x3d56d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d56d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d56d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d56d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d56d8:
    // 0x3d56d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d56d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3d56dc: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x3d56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x3d56e0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x3d56e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x3d56e4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3d56e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3d56e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d56e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d56ec: 0x0  nop
    ctx->pc = 0x3d56ecu;
    // NOP
    // 0x3d56f0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3d56f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3d56f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d56f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d56f8: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x3d56f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d56fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d56fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d5700: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3d5700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x3d5704: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x3d5704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5708: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d5708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d570c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x3d570cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x3d5710: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x3d5710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5714: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d5714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d5718: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x3D5718u;
    {
        const bool branch_taken_0x3d5718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5718u;
            // 0x3d571c: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5718) {
            ctx->pc = 0x3D58ACu;
            goto label_3d58ac;
        }
    }
    ctx->pc = 0x3D5720u;
label_3d5720:
    // 0x3d5720: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D5720u;
    SET_GPR_U32(ctx, 31, 0x3D5728u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5728u; }
        if (ctx->pc != 0x3D5728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5728u; }
        if (ctx->pc != 0x3D5728u) { return; }
    }
    ctx->pc = 0x3D5728u;
label_3d5728:
    // 0x3d5728: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d5728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d572c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D572Cu;
    SET_GPR_U32(ctx, 31, 0x3D5734u);
    ctx->pc = 0x3D5730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D572Cu;
            // 0x3d5730: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5734u; }
        if (ctx->pc != 0x3D5734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5734u; }
        if (ctx->pc != 0x3D5734u) { return; }
    }
    ctx->pc = 0x3D5734u;
label_3d5734:
    // 0x3d5734: 0x522025  or          $a0, $v0, $s2
    ctx->pc = 0x3d5734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3d5738: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3d5738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3d573c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d573cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5740: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3d5740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x3d5744: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d5744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d5748: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D5748u;
    {
        const bool branch_taken_0x3d5748 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3D574Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5748u;
            // 0x3d574c: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5748) {
            ctx->pc = 0x3D575Cu;
            goto label_3d575c;
        }
    }
    ctx->pc = 0x3D5750u;
    // 0x3d5750: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d5750u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5754: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D5754u;
    {
        const bool branch_taken_0x3d5754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5754u;
            // 0x3d5758: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5754) {
            ctx->pc = 0x3D5778u;
            goto label_3d5778;
        }
    }
    ctx->pc = 0x3D575Cu;
label_3d575c:
    // 0x3d575c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3d575cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3d5760: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3d5760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3d5764: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d5764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d5768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d5768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d576c: 0x0  nop
    ctx->pc = 0x3d576cu;
    // NOP
    // 0x3d5770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d5770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d5774: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d5774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d5778:
    // 0x3d5778: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d5778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3d577c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x3d577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x3d5780: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x3d5780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x3d5784: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3d5784u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3d5788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d5788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d578c: 0x0  nop
    ctx->pc = 0x3d578cu;
    // NOP
    // 0x3d5790: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3d5790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3d5794: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d5794u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d5798: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x3d5798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d579c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d579cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d57a0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3d57a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x3d57a4: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D57A4u;
    SET_GPR_U32(ctx, 31, 0x3D57ACu);
    ctx->pc = 0x3D57A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D57A4u;
            // 0x3d57a8: 0xc6340054  lwc1        $f20, 0x54($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D57ACu; }
        if (ctx->pc != 0x3D57ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D57ACu; }
        if (ctx->pc != 0x3D57ACu) { return; }
    }
    ctx->pc = 0x3D57ACu;
label_3d57ac:
    // 0x3d57ac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d57acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d57b0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D57B0u;
    SET_GPR_U32(ctx, 31, 0x3D57B8u);
    ctx->pc = 0x3D57B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D57B0u;
            // 0x3d57b4: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D57B8u; }
        if (ctx->pc != 0x3D57B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D57B8u; }
        if (ctx->pc != 0x3D57B8u) { return; }
    }
    ctx->pc = 0x3D57B8u;
label_3d57b8:
    // 0x3d57b8: 0x522025  or          $a0, $v0, $s2
    ctx->pc = 0x3d57b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3d57bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3d57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3d57c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d57c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d57c4: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3d57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x3d57c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d57c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d57cc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D57CCu;
    {
        const bool branch_taken_0x3d57cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3D57D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D57CCu;
            // 0x3d57d0: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d57cc) {
            ctx->pc = 0x3D57E0u;
            goto label_3d57e0;
        }
    }
    ctx->pc = 0x3D57D4u;
    // 0x3d57d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d57d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d57d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D57D8u;
    {
        const bool branch_taken_0x3d57d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D57DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D57D8u;
            // 0x3d57dc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d57d8) {
            ctx->pc = 0x3D57FCu;
            goto label_3d57fc;
        }
    }
    ctx->pc = 0x3D57E0u;
label_3d57e0:
    // 0x3d57e0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3d57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3d57e4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3d57e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3d57e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d57e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d57ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d57ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d57f0: 0x0  nop
    ctx->pc = 0x3d57f0u;
    // NOP
    // 0x3d57f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d57f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d57f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d57f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d57fc:
    // 0x3d57fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d57fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3d5800: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x3d5800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x3d5804: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x3d5804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x3d5808: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3d5808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3d580c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d580cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5810: 0x0  nop
    ctx->pc = 0x3d5810u;
    // NOP
    // 0x3d5814: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3d5814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3d5818: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d5818u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d581c: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x3d581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5820: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d5820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d5824: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x3d5824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x3d5828: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D5828u;
    SET_GPR_U32(ctx, 31, 0x3D5830u);
    ctx->pc = 0x3D582Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5828u;
            // 0x3d582c: 0xc6340058  lwc1        $f20, 0x58($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5830u; }
        if (ctx->pc != 0x3D5830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5830u; }
        if (ctx->pc != 0x3D5830u) { return; }
    }
    ctx->pc = 0x3D5830u;
label_3d5830:
    // 0x3d5830: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d5830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d5834: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D5834u;
    SET_GPR_U32(ctx, 31, 0x3D583Cu);
    ctx->pc = 0x3D5838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5834u;
            // 0x3d5838: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D583Cu; }
        if (ctx->pc != 0x3D583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D583Cu; }
        if (ctx->pc != 0x3D583Cu) { return; }
    }
    ctx->pc = 0x3D583Cu;
label_3d583c:
    // 0x3d583c: 0x522025  or          $a0, $v0, $s2
    ctx->pc = 0x3d583cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3d5840: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3d5840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3d5844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d5844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5848: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3d5848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x3d584c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d584cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d5850: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D5850u;
    {
        const bool branch_taken_0x3d5850 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3D5854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5850u;
            // 0x3d5854: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5850) {
            ctx->pc = 0x3D5864u;
            goto label_3d5864;
        }
    }
    ctx->pc = 0x3D5858u;
    // 0x3d5858: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d5858u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d585c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D585Cu;
    {
        const bool branch_taken_0x3d585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D585Cu;
            // 0x3d5860: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d585c) {
            ctx->pc = 0x3D5880u;
            goto label_3d5880;
        }
    }
    ctx->pc = 0x3D5864u;
label_3d5864:
    // 0x3d5864: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3d5864u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3d5868: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3d5868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3d586c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d586cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d5870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d5870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5874: 0x0  nop
    ctx->pc = 0x3d5874u;
    // NOP
    // 0x3d5878: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d5878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d587c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d587cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d5880:
    // 0x3d5880: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d5880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3d5884: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x3d5884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x3d5888: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x3d5888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x3d588c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3d588cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3d5890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d5890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5894: 0x0  nop
    ctx->pc = 0x3d5894u;
    // NOP
    // 0x3d5898: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3d5898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3d589c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d589cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d58a0: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x3d58a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d58a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d58a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d58a8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x3d58a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_3d58ac:
    // 0x3d58ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d58acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d58b0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3d58b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3d58b4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3D58B4u;
    {
        const bool branch_taken_0x3d58b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d58b4) {
            ctx->pc = 0x3D58B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D58B4u;
            // 0x3d58b8: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5930u;
            goto label_3d5930;
        }
    }
    ctx->pc = 0x3D58BCu;
    // 0x3d58bc: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D58BCu;
    SET_GPR_U32(ctx, 31, 0x3D58C4u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D58C4u; }
        if (ctx->pc != 0x3D58C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D58C4u; }
        if (ctx->pc != 0x3D58C4u) { return; }
    }
    ctx->pc = 0x3D58C4u;
label_3d58c4:
    // 0x3d58c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d58c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d58c8: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D58C8u;
    SET_GPR_U32(ctx, 31, 0x3D58D0u);
    ctx->pc = 0x3D58CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D58C8u;
            // 0x3d58cc: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D58D0u; }
        if (ctx->pc != 0x3D58D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D58D0u; }
        if (ctx->pc != 0x3D58D0u) { return; }
    }
    ctx->pc = 0x3D58D0u;
label_3d58d0:
    // 0x3d58d0: 0x521825  or          $v1, $v0, $s2
    ctx->pc = 0x3d58d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3d58d4: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x3d58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x3d58d8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3d58d8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3d58dc: 0x1010  mfhi        $v0
    ctx->pc = 0x3d58dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3d58e0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D58E0u;
    {
        const bool branch_taken_0x3d58e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3d58e0) {
            ctx->pc = 0x3D58E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D58E0u;
            // 0x3d58e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D58F4u;
            goto label_3d58f4;
        }
    }
    ctx->pc = 0x3D58E8u;
    // 0x3d58e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d58e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d58ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D58ECu;
    {
        const bool branch_taken_0x3d58ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D58F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D58ECu;
            // 0x3d58f0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d58ec) {
            ctx->pc = 0x3D590Cu;
            goto label_3d590c;
        }
    }
    ctx->pc = 0x3D58F4u;
label_3d58f4:
    // 0x3d58f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d58f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d58f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d58f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d58fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d58fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5900: 0x0  nop
    ctx->pc = 0x3d5900u;
    // NOP
    // 0x3d5904: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3d5904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3d5908: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d5908u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d590c:
    // 0x3d590c: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3d590cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x3d5910: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3d5910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x3d5914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d5914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5918: 0x0  nop
    ctx->pc = 0x3d5918u;
    // NOP
    // 0x3d591c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d591cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3d5920: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d5920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d5924: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3d5924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3d5928: 0x0  nop
    ctx->pc = 0x3d5928u;
    // NOP
    // 0x3d592c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x3d592cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_3d5930:
    // 0x3d5930: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3d5930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3d5934: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3d5934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5938: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3d5938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3d593c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3d593cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3d5940: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D5940u;
    SET_GPR_U32(ctx, 31, 0x3D5948u);
    ctx->pc = 0x3D5944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5940u;
            // 0x3d5944: 0xc6340038  lwc1        $f20, 0x38($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5948u; }
        if (ctx->pc != 0x3D5948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5948u; }
        if (ctx->pc != 0x3D5948u) { return; }
    }
    ctx->pc = 0x3D5948u;
label_3d5948:
    // 0x3d5948: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d5948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d594c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D594Cu;
    SET_GPR_U32(ctx, 31, 0x3D5954u);
    ctx->pc = 0x3D5950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D594Cu;
            // 0x3d5950: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5954u; }
        if (ctx->pc != 0x3D5954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5954u; }
        if (ctx->pc != 0x3D5954u) { return; }
    }
    ctx->pc = 0x3D5954u;
label_3d5954:
    // 0x3d5954: 0x522025  or          $a0, $v0, $s2
    ctx->pc = 0x3d5954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3d5958: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3d5958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3d595c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d595cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5960: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3d5960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x3d5964: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d5964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d5968: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D5968u;
    {
        const bool branch_taken_0x3d5968 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3D596Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5968u;
            // 0x3d596c: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5968) {
            ctx->pc = 0x3D597Cu;
            goto label_3d597c;
        }
    }
    ctx->pc = 0x3D5970u;
    // 0x3d5970: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d5970u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5974: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D5974u;
    {
        const bool branch_taken_0x3d5974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5974u;
            // 0x3d5978: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5974) {
            ctx->pc = 0x3D5998u;
            goto label_3d5998;
        }
    }
    ctx->pc = 0x3D597Cu;
label_3d597c:
    // 0x3d597c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3d597cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3d5980: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3d5980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3d5984: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d5984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d5988: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d5988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d598c: 0x0  nop
    ctx->pc = 0x3d598cu;
    // NOP
    // 0x3d5990: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d5990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d5994: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d5994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d5998:
    // 0x3d5998: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d5998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3d599c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x3d599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x3d59a0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x3d59a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x3d59a4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3d59a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3d59a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d59a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d59ac: 0x0  nop
    ctx->pc = 0x3d59acu;
    // NOP
    // 0x3d59b0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3d59b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3d59b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d59b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d59b8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3d59b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d59bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d59bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d59c0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3d59c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3d59c4: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D59C4u;
    SET_GPR_U32(ctx, 31, 0x3D59CCu);
    ctx->pc = 0x3D59C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D59C4u;
            // 0x3d59c8: 0xc634003c  lwc1        $f20, 0x3C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D59CCu; }
        if (ctx->pc != 0x3D59CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D59CCu; }
        if (ctx->pc != 0x3D59CCu) { return; }
    }
    ctx->pc = 0x3D59CCu;
label_3d59cc:
    // 0x3d59cc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d59ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d59d0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D59D0u;
    SET_GPR_U32(ctx, 31, 0x3D59D8u);
    ctx->pc = 0x3D59D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D59D0u;
            // 0x3d59d4: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D59D8u; }
        if (ctx->pc != 0x3D59D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D59D8u; }
        if (ctx->pc != 0x3D59D8u) { return; }
    }
    ctx->pc = 0x3D59D8u;
label_3d59d8:
    // 0x3d59d8: 0x522025  or          $a0, $v0, $s2
    ctx->pc = 0x3d59d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3d59dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3d59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3d59e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d59e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d59e4: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3d59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x3d59e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d59e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d59ec: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D59ECu;
    {
        const bool branch_taken_0x3d59ec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3D59F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D59ECu;
            // 0x3d59f0: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d59ec) {
            ctx->pc = 0x3D5A00u;
            goto label_3d5a00;
        }
    }
    ctx->pc = 0x3D59F4u;
    // 0x3d59f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d59f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d59f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D59F8u;
    {
        const bool branch_taken_0x3d59f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D59FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D59F8u;
            // 0x3d59fc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d59f8) {
            ctx->pc = 0x3D5A1Cu;
            goto label_3d5a1c;
        }
    }
    ctx->pc = 0x3D5A00u;
label_3d5a00:
    // 0x3d5a00: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3d5a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3d5a04: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3d5a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3d5a08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d5a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d5a0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d5a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5a10: 0x0  nop
    ctx->pc = 0x3d5a10u;
    // NOP
    // 0x3d5a14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d5a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d5a18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d5a18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d5a1c:
    // 0x3d5a1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d5a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3d5a20: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x3d5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x3d5a24: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x3d5a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x3d5a28: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3d5a28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3d5a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d5a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5a30: 0x0  nop
    ctx->pc = 0x3d5a30u;
    // NOP
    // 0x3d5a34: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3d5a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3d5a38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d5a38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d5a3c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3d5a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5a40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d5a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d5a44: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3d5a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3d5a48: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D5A48u;
    SET_GPR_U32(ctx, 31, 0x3D5A50u);
    ctx->pc = 0x3D5A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5A48u;
            // 0x3d5a4c: 0xc6340040  lwc1        $f20, 0x40($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5A50u; }
        if (ctx->pc != 0x3D5A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5A50u; }
        if (ctx->pc != 0x3D5A50u) { return; }
    }
    ctx->pc = 0x3D5A50u;
label_3d5a50:
    // 0x3d5a50: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d5a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d5a54: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3D5A54u;
    SET_GPR_U32(ctx, 31, 0x3D5A5Cu);
    ctx->pc = 0x3D5A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5A54u;
            // 0x3d5a58: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5A5Cu; }
        if (ctx->pc != 0x3D5A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5A5Cu; }
        if (ctx->pc != 0x3D5A5Cu) { return; }
    }
    ctx->pc = 0x3D5A5Cu;
label_3d5a5c:
    // 0x3d5a5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3d5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3d5a60: 0x512825  or          $a1, $v0, $s1
    ctx->pc = 0x3d5a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x3d5a64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d5a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5a68: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x3d5a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
    // 0x3d5a6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d5a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d5a70: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D5A70u;
    {
        const bool branch_taken_0x3d5a70 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3D5A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5A70u;
            // 0x3d5a74: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5a70) {
            ctx->pc = 0x3D5A84u;
            goto label_3d5a84;
        }
    }
    ctx->pc = 0x3D5A78u;
    // 0x3d5a78: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3d5a78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5a7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D5A7Cu;
    {
        const bool branch_taken_0x3d5a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5A7Cu;
            // 0x3d5a80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5a7c) {
            ctx->pc = 0x3D5AA0u;
            goto label_3d5aa0;
        }
    }
    ctx->pc = 0x3D5A84u;
label_3d5a84:
    // 0x3d5a84: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x3d5a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3d5a88: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3d5a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3d5a8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d5a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d5a90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d5a90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5a94: 0x0  nop
    ctx->pc = 0x3d5a94u;
    // NOP
    // 0x3d5a98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d5a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d5a9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d5a9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d5aa0:
    // 0x3d5aa0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d5aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3d5aa4: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x3d5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
    // 0x3d5aa8: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x3d5aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x3d5aac: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3d5aacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3d5ab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d5ab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5ab4: 0x0  nop
    ctx->pc = 0x3d5ab4u;
    // NOP
    // 0x3d5ab8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3d5ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3d5abc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d5abcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d5ac0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3d5ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5ac4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d5ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d5ac8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3d5ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3d5acc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d5accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d5ad0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d5ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3d5ad4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d5ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d5ad8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d5ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d5adc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d5adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d5ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5AE0u;
            // 0x3d5ae4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D5AE8u;
    // 0x3d5ae8: 0x0  nop
    ctx->pc = 0x3d5ae8u;
    // NOP
    // 0x3d5aec: 0x0  nop
    ctx->pc = 0x3d5aecu;
    // NOP
}
