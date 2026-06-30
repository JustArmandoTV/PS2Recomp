#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00378410
// Address: 0x378410 - 0x3786b0
void sub_00378410_0x378410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378410_0x378410");
#endif

    switch (ctx->pc) {
        case 0x378474u: goto label_378474;
        case 0x3784f8u: goto label_3784f8;
        case 0x378500u: goto label_378500;
        case 0x37850cu: goto label_37850c;
        default: break;
    }

    ctx->pc = 0x378410u;

    // 0x378410: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x378410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x378414: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x378414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x378418: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x378418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x37841c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x37841cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x378420: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x378420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x378424: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x378424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x378428: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x378428u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37842c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x378430: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x378430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378434: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x378434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x378438: 0x26a500a4  addiu       $a1, $s5, 0xA4
    ctx->pc = 0x378438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 164));
    // 0x37843c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x378440: 0x26a60094  addiu       $a2, $s5, 0x94
    ctx->pc = 0x378440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 148));
    // 0x378444: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x378444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x378448: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x378448u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x37844c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x37844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x378450: 0x8c920058  lw          $s2, 0x58($a0)
    ctx->pc = 0x378450u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x378454: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x378454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x378458: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x378458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x37845c: 0x32510380  andi        $s1, $s2, 0x380
    ctx->pc = 0x37845cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)896);
    // 0x378460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378464: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x378464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x378468: 0x245301a4  addiu       $s3, $v0, 0x1A4
    ctx->pc = 0x378468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x37846c: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x37846Cu;
    SET_GPR_U32(ctx, 31, 0x378474u);
    ctx->pc = 0x378470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37846Cu;
            // 0x378470: 0x245001f0  addiu       $s0, $v0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378474u; }
        if (ctx->pc != 0x378474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378474u; }
        if (ctx->pc != 0x378474u) { return; }
    }
    ctx->pc = 0x378474u;
label_378474:
    // 0x378474: 0x32430038  andi        $v1, $s2, 0x38
    ctx->pc = 0x378474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)56);
    // 0x378478: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x378478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x37847c: 0x50620027  beql        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x37847Cu;
    {
        const bool branch_taken_0x37847c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37847c) {
            ctx->pc = 0x378480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37847Cu;
            // 0x378480: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37851Cu;
            goto label_37851c;
        }
    }
    ctx->pc = 0x378484u;
    // 0x378484: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x378484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x378488: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x378488u;
    {
        const bool branch_taken_0x378488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x378488) {
            ctx->pc = 0x37848Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378488u;
            // 0x37848c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3784ECu;
            goto label_3784ec;
        }
    }
    ctx->pc = 0x378490u;
    // 0x378490: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x378490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x378494: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x378494u;
    {
        const bool branch_taken_0x378494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x378494) {
            ctx->pc = 0x378498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378494u;
            // 0x378498: 0xc6600008  lwc1        $f0, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3784DCu;
            goto label_3784dc;
        }
    }
    ctx->pc = 0x37849Cu;
    // 0x37849c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x37849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3784a0: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3784A0u;
    {
        const bool branch_taken_0x3784a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3784a0) {
            ctx->pc = 0x3784A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3784A0u;
            // 0x3784a4: 0xc6600004  lwc1        $f0, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3784CCu;
            goto label_3784cc;
        }
    }
    ctx->pc = 0x3784A8u;
    // 0x3784a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3784a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3784ac: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3784ACu;
    {
        const bool branch_taken_0x3784ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3784ac) {
            ctx->pc = 0x3784B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3784ACu;
            // 0x3784b0: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3784BCu;
            goto label_3784bc;
        }
    }
    ctx->pc = 0x3784B4u;
    // 0x3784b4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3784B4u;
    {
        const bool branch_taken_0x3784b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3784B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3784B4u;
            // 0x3784b8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3784b4) {
            ctx->pc = 0x37852Cu;
            goto label_37852c;
        }
    }
    ctx->pc = 0x3784BCu;
label_3784bc:
    // 0x3784bc: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x3784bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3784c0: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x3784c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3784c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3784C4u;
    {
        const bool branch_taken_0x3784c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3784C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3784C4u;
            // 0x3784c8: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3784c4) {
            ctx->pc = 0x37853Cu;
            goto label_37853c;
        }
    }
    ctx->pc = 0x3784CCu;
label_3784cc:
    // 0x3784cc: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x3784ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3784d0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x3784d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3784d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3784D4u;
    {
        const bool branch_taken_0x3784d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3784D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3784D4u;
            // 0x3784d8: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3784d4) {
            ctx->pc = 0x37853Cu;
            goto label_37853c;
        }
    }
    ctx->pc = 0x3784DCu;
label_3784dc:
    // 0x3784dc: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x3784dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3784e0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3784e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3784e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3784E4u;
    {
        const bool branch_taken_0x3784e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3784E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3784E4u;
            // 0x3784e8: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3784e4) {
            ctx->pc = 0x37853Cu;
            goto label_37853c;
        }
    }
    ctx->pc = 0x3784ECu;
label_3784ec:
    // 0x3784ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3784ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3784f0: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x3784F0u;
    SET_GPR_U32(ctx, 31, 0x3784F8u);
    ctx->pc = 0x3784F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3784F0u;
            // 0x3784f4: 0x26a500a4  addiu       $a1, $s5, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3784F8u; }
        if (ctx->pc != 0x3784F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3784F8u; }
        if (ctx->pc != 0x3784F8u) { return; }
    }
    ctx->pc = 0x3784F8u;
label_3784f8:
    // 0x3784f8: 0xc04cb2c  jal         func_132CB0
    ctx->pc = 0x3784F8u;
    SET_GPR_U32(ctx, 31, 0x378500u);
    ctx->pc = 0x3784FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3784F8u;
            // 0x3784fc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132CB0u;
    if (runtime->hasFunction(0x132CB0u)) {
        auto targetFn = runtime->lookupFunction(0x132CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378500u; }
        if (ctx->pc != 0x378500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132CB0_0x132cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378500u; }
        if (ctx->pc != 0x378500u) { return; }
    }
    ctx->pc = 0x378500u;
label_378500:
    // 0x378500: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x378500u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x378504: 0xc04cb2c  jal         func_132CB0
    ctx->pc = 0x378504u;
    SET_GPR_U32(ctx, 31, 0x37850Cu);
    ctx->pc = 0x378508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378504u;
            // 0x378508: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132CB0u;
    if (runtime->hasFunction(0x132CB0u)) {
        auto targetFn = runtime->lookupFunction(0x132CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37850Cu; }
        if (ctx->pc != 0x37850Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132CB0_0x132cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37850Cu; }
        if (ctx->pc != 0x37850Cu) { return; }
    }
    ctx->pc = 0x37850Cu;
label_37850c:
    // 0x37850c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37850cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x378510: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x378510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x378514: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x378514u;
    {
        const bool branch_taken_0x378514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378514u;
            // 0x378518: 0x46000047  neg.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378514) {
            ctx->pc = 0x37853Cu;
            goto label_37853c;
        }
    }
    ctx->pc = 0x37851Cu;
label_37851c:
    // 0x37851c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x37851cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x378520: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x378520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x378524: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x378524u;
    {
        const bool branch_taken_0x378524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378524u;
            // 0x378528: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378524) {
            ctx->pc = 0x37853Cu;
            goto label_37853c;
        }
    }
    ctx->pc = 0x37852Cu;
label_37852c:
    // 0x37852c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x37852cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x378530: 0x0  nop
    ctx->pc = 0x378530u;
    // NOP
    // 0x378534: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x378534u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x378538: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x378538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_37853c:
    // 0x37853c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37853cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x378540: 0xc440c060  lwc1        $f0, -0x3FA0($v0)
    ctx->pc = 0x378540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378544: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x378544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378548: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x378548u;
    {
        const bool branch_taken_0x378548 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x378548) {
            ctx->pc = 0x37854Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378548u;
            // 0x37854c: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378558u;
            goto label_378558;
        }
    }
    ctx->pc = 0x378550u;
    // 0x378550: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x378550u;
    {
        const bool branch_taken_0x378550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378550u;
            // 0x378554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378550) {
            ctx->pc = 0x37867Cu;
            goto label_37867c;
        }
    }
    ctx->pc = 0x378558u;
label_378558:
    // 0x378558: 0x52220016  beql        $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x378558u;
    {
        const bool branch_taken_0x378558 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x378558) {
            ctx->pc = 0x37855Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378558u;
            // 0x37855c: 0xc6a200ac  lwc1        $f2, 0xAC($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3785B4u;
            goto label_3785b4;
        }
    }
    ctx->pc = 0x378560u;
    // 0x378560: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x378560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x378564: 0x1222001d  beq         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x378564u;
    {
        const bool branch_taken_0x378564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x378564) {
            ctx->pc = 0x3785DCu;
            goto label_3785dc;
        }
    }
    ctx->pc = 0x37856Cu;
    // 0x37856c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x37856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x378570: 0x5222000b  beql        $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x378570u;
    {
        const bool branch_taken_0x378570 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x378570) {
            ctx->pc = 0x378574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378570u;
            // 0x378574: 0xc6a000a0  lwc1        $f0, 0xA0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3785A0u;
            goto label_3785a0;
        }
    }
    ctx->pc = 0x378578u;
    // 0x378578: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x378578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37857c: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37857Cu;
    {
        const bool branch_taken_0x37857c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x37857c) {
            ctx->pc = 0x378580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37857Cu;
            // 0x378580: 0xc6a000a0  lwc1        $f0, 0xA0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x37858Cu;
            goto label_37858c;
        }
    }
    ctx->pc = 0x378584u;
    // 0x378584: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x378584u;
    {
        const bool branch_taken_0x378584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378584u;
            // 0x378588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378584) {
            ctx->pc = 0x3785D4u;
            goto label_3785d4;
        }
    }
    ctx->pc = 0x37858Cu;
label_37858c:
    // 0x37858c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x37858cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378590: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x378590u;
    {
        const bool branch_taken_0x378590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x378590) {
            ctx->pc = 0x3785DCu;
            goto label_3785dc;
        }
    }
    ctx->pc = 0x378598u;
    // 0x378598: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x378598u;
    {
        const bool branch_taken_0x378598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378598u;
            // 0x37859c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378598) {
            ctx->pc = 0x37867Cu;
            goto label_37867c;
        }
    }
    ctx->pc = 0x3785A0u;
label_3785a0:
    // 0x3785a0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3785a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3785a4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x3785A4u;
    {
        const bool branch_taken_0x3785a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3785a4) {
            ctx->pc = 0x3785DCu;
            goto label_3785dc;
        }
    }
    ctx->pc = 0x3785ACu;
    // 0x3785ac: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3785ACu;
    {
        const bool branch_taken_0x3785ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3785B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3785ACu;
            // 0x3785b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3785ac) {
            ctx->pc = 0x37867Cu;
            goto label_37867c;
        }
    }
    ctx->pc = 0x3785B4u;
label_3785b4:
    // 0x3785b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3785b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3785b8: 0xc6a1009c  lwc1        $f1, 0x9C($s5)
    ctx->pc = 0x3785b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3785bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3785bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3785c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3785c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3785c4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3785c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3785c8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3785c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3785cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3785CCu;
    {
        const bool branch_taken_0x3785cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3785D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3785CCu;
            // 0x3785d0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3785cc) {
            ctx->pc = 0x3785DCu;
            goto label_3785dc;
        }
    }
    ctx->pc = 0x3785D4u;
label_3785d4:
    // 0x3785d4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3785D4u;
    {
        const bool branch_taken_0x3785d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3785D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3785D4u;
            // 0x3785d8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3785d4) {
            ctx->pc = 0x378680u;
            goto label_378680;
        }
    }
    ctx->pc = 0x3785DCu;
label_3785dc:
    // 0x3785dc: 0x0  nop
    ctx->pc = 0x3785dcu;
    // NOP
    // 0x3785e0: 0x0  nop
    ctx->pc = 0x3785e0u;
    // NOP
    // 0x3785e4: 0x4601a083  div.s       $f2, $f20, $f1
    ctx->pc = 0x3785e4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[2] = ctx->f[20] / ctx->f[1];
    // 0x3785e8: 0xc6a100b0  lwc1        $f1, 0xB0($s5)
    ctx->pc = 0x3785e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3785ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3785ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3785f0: 0x0  nop
    ctx->pc = 0x3785f0u;
    // NOP
    // 0x3785f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3785f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3785f8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3785f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3785fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3785fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378600: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x378600u;
    {
        const bool branch_taken_0x378600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x378600) {
            ctx->pc = 0x378604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378600u;
            // 0x378604: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378610u;
            goto label_378610;
        }
    }
    ctx->pc = 0x378608u;
    // 0x378608: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x378608u;
    {
        const bool branch_taken_0x378608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37860Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378608u;
            // 0x37860c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378608) {
            ctx->pc = 0x378628u;
            goto label_378628;
        }
    }
    ctx->pc = 0x378610u;
label_378610:
    // 0x378610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378614: 0x0  nop
    ctx->pc = 0x378614u;
    // NOP
    // 0x378618: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x378618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37861c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x37861Cu;
    {
        const bool branch_taken_0x37861c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37861c) {
            ctx->pc = 0x378620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37861Cu;
            // 0x378620: 0x3c02437f  lui         $v0, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37862Cu;
            goto label_37862c;
        }
    }
    ctx->pc = 0x378624u;
    // 0x378624: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x378624u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_378628:
    // 0x378628: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x378628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_37862c:
    // 0x37862c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37862cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378630: 0x0  nop
    ctx->pc = 0x378630u;
    // NOP
    // 0x378634: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x378634u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x378638: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x378638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x37863c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37863cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378640: 0x0  nop
    ctx->pc = 0x378640u;
    // NOP
    // 0x378644: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x378644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378648: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x378648u;
    {
        const bool branch_taken_0x378648 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37864Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378648u;
            // 0x37864c: 0xe6940000  swc1        $f20, 0x0($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378648) {
            ctx->pc = 0x378660u;
            goto label_378660;
        }
    }
    ctx->pc = 0x378650u;
    // 0x378650: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x378650u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x378654: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x378654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x378658: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x378658u;
    {
        const bool branch_taken_0x378658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37865Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378658u;
            // 0x37865c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378658) {
            ctx->pc = 0x37867Cu;
            goto label_37867c;
        }
    }
    ctx->pc = 0x378660u;
label_378660:
    // 0x378660: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x378660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x378664: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x378668: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x378668u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37866c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37866cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x378670: 0x0  nop
    ctx->pc = 0x378670u;
    // NOP
    // 0x378674: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x378674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x378678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x378678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37867c:
    // 0x37867c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x37867cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_378680:
    // 0x378680: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x378680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x378684: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x378684u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x378688: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x378688u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37868c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37868cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x378690: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x378690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378694: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x378694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378698: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x378698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37869c: 0x3e00008  jr          $ra
    ctx->pc = 0x37869Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3786A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37869Cu;
            // 0x3786a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3786A4u;
    // 0x3786a4: 0x0  nop
    ctx->pc = 0x3786a4u;
    // NOP
    // 0x3786a8: 0x0  nop
    ctx->pc = 0x3786a8u;
    // NOP
    // 0x3786ac: 0x0  nop
    ctx->pc = 0x3786acu;
    // NOP
}
