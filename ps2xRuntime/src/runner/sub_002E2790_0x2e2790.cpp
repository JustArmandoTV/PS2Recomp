#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E2790
// Address: 0x2e2790 - 0x2e28b0
void sub_002E2790_0x2e2790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2790_0x2e2790");
#endif

    switch (ctx->pc) {
        case 0x2e27fcu: goto label_2e27fc;
        case 0x2e2818u: goto label_2e2818;
        case 0x2e2864u: goto label_2e2864;
        case 0x2e2880u: goto label_2e2880;
        default: break;
    }

    ctx->pc = 0x2e2790u;

    // 0x2e2790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e2790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e2794: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2e2794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e2798: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e279c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2e279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e27a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e27a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e27a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e27a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e27a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e27a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e27ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e27acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27b0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2e27b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e27b4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2e27b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27b8: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x2e27b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x2e27bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e27bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e27c0: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x2e27c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x2e27c4: 0xa4860054  sh          $a2, 0x54($a0)
    ctx->pc = 0x2e27c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 6));
    // 0x2e27c8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2e27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2e27cc: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x2e27ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2e27d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e27d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e27d4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2e27d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e27d8: 0xa4820052  sh          $v0, 0x52($a0)
    ctx->pc = 0x2e27d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e27dc: 0xa4900050  sh          $s0, 0x50($a0)
    ctx->pc = 0x2e27dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 16));
    // 0x2e27e0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2e27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2e27e4: 0x94830052  lhu         $v1, 0x52($a0)
    ctx->pc = 0x2e27e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x2e27e8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e27ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e27ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e27f0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2e27f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e27f4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E27F4u;
    SET_GPR_U32(ctx, 31, 0x2E27FCu);
    ctx->pc = 0x2E27F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E27F4u;
            // 0x2e27f8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E27FCu; }
        if (ctx->pc != 0x2E27FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E27FCu; }
        if (ctx->pc != 0x2E27FCu) { return; }
    }
    ctx->pc = 0x2E27FCu;
label_2e27fc:
    // 0x2e27fc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2e27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e2800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e2800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2804: 0x96230052  lhu         $v1, 0x52($s1)
    ctx->pc = 0x2e2804u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2e2808: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e2808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e280c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e280cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2810: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E2810u;
    SET_GPR_U32(ctx, 31, 0x2E2818u);
    ctx->pc = 0x2E2814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2810u;
            // 0x2e2814: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2818u; }
        if (ctx->pc != 0x2E2818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2818u; }
        if (ctx->pc != 0x2E2818u) { return; }
    }
    ctx->pc = 0x2E2818u;
label_2e2818:
    // 0x2e2818: 0x3a020002  xori        $v0, $s0, 0x2
    ctx->pc = 0x2e2818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
    // 0x2e281c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e281cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e2820: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2820u;
    {
        const bool branch_taken_0x2e2820 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e2820) {
            ctx->pc = 0x2E2824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2820u;
            // 0x2e2824: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E2834u;
            goto label_2e2834;
        }
    }
    ctx->pc = 0x2E2828u;
    // 0x2e2828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e282c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E282Cu;
    {
        const bool branch_taken_0x2e282c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E282Cu;
            // 0x2e2830: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e282c) {
            ctx->pc = 0x2E284Cu;
            goto label_2e284c;
        }
    }
    ctx->pc = 0x2E2834u;
label_2e2834:
    // 0x2e2834: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e2834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e2838: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e2838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e283c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e283cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2840: 0x0  nop
    ctx->pc = 0x2e2840u;
    // NOP
    // 0x2e2844: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e2844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e2848: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e2848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e284c:
    // 0x2e284c: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x2e284cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2e2850: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2e2850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e2854: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x2e2854u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e2858: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2e2858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e285c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x2e285cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x2e2860: 0x109100  sll         $s2, $s0, 4
    ctx->pc = 0x2e2860u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2e2864:
    // 0x2e2864: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2e2864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e2868: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2e2868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e286c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e286cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e2870: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e2870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e2874: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e2874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e2878: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E2878u;
    SET_GPR_U32(ctx, 31, 0x2E2880u);
    ctx->pc = 0x2E287Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2878u;
            // 0x2e287c: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2880u; }
        if (ctx->pc != 0x2E2880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2880u; }
        if (ctx->pc != 0x2E2880u) { return; }
    }
    ctx->pc = 0x2E2880u;
label_2e2880:
    // 0x2e2880: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x2e2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2884: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e2884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e2888: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x2e2888u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x2e288c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e288cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e2890: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E2890u;
    {
        const bool branch_taken_0x2e2890 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2890u;
            // 0x2e2894: 0xe6200048  swc1        $f0, 0x48($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2890) {
            ctx->pc = 0x2E2864u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e2864;
        }
    }
    ctx->pc = 0x2E2898u;
    // 0x2e2898: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e2898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e289c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e289cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e28a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e28a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e28a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e28a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e28a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E28A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E28ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E28A8u;
            // 0x2e28ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E28B0u;
}
