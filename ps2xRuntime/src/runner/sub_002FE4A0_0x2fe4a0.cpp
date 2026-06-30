#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE4A0
// Address: 0x2fe4a0 - 0x2fe6d0
void sub_002FE4A0_0x2fe4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE4A0_0x2fe4a0");
#endif

    switch (ctx->pc) {
        case 0x2fe500u: goto label_2fe500;
        case 0x2fe52cu: goto label_2fe52c;
        case 0x2fe544u: goto label_2fe544;
        case 0x2fe568u: goto label_2fe568;
        case 0x2fe594u: goto label_2fe594;
        case 0x2fe5a8u: goto label_2fe5a8;
        case 0x2fe5d0u: goto label_2fe5d0;
        case 0x2fe5e8u: goto label_2fe5e8;
        case 0x2fe60cu: goto label_2fe60c;
        case 0x2fe638u: goto label_2fe638;
        case 0x2fe64cu: goto label_2fe64c;
        case 0x2fe664u: goto label_2fe664;
        case 0x2fe674u: goto label_2fe674;
        case 0x2fe6a0u: goto label_2fe6a0;
        default: break;
    }

    ctx->pc = 0x2fe4a0u;

    // 0x2fe4a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fe4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fe4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe4a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2fe4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2fe4ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2fe4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2fe4b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fe4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fe4b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2fe4b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fe4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fe4bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe4c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe4c4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2fe4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2fe4c8: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x2fe4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2fe4cc: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2fe4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2fe4d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2fe4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe4d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2fe4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fe4d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2fe4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fe4dc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2fe4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2fe4e0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2fe4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2fe4e4: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x2fe4e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2fe4e8: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x2fe4e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fe4ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fe4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fe4f0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x2fe4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2fe4f4: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2fe4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fe4f8: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x2FE4F8u;
    SET_GPR_U32(ctx, 31, 0x2FE500u);
    ctx->pc = 0x2FE4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE4F8u;
            // 0x2fe4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE500u; }
        if (ctx->pc != 0x2FE500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE500u; }
        if (ctx->pc != 0x2FE500u) { return; }
    }
    ctx->pc = 0x2FE500u;
label_2fe500:
    // 0x2fe500: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x2fe500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2fe504: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2fe504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2fe508: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2FE508u;
    {
        const bool branch_taken_0x2fe508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe508) {
            ctx->pc = 0x2FE50Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE508u;
            // 0x2fe50c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE5B0u;
            goto label_2fe5b0;
        }
    }
    ctx->pc = 0x2FE510u;
    // 0x2fe510: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2fe510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2fe514: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2fe514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fe518: 0x8c44e380  lw          $a0, -0x1C80($v0)
    ctx->pc = 0x2fe518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960000)));
    // 0x2fe51c: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x2fe51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe520: 0x8e90001c  lw          $s0, 0x1C($s4)
    ctx->pc = 0x2fe520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x2fe524: 0xc04e33c  jal         func_138CF0
    ctx->pc = 0x2FE524u;
    SET_GPR_U32(ctx, 31, 0x2FE52Cu);
    ctx->pc = 0x2FE528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE524u;
            // 0x2fe528: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138CF0u;
    if (runtime->hasFunction(0x138CF0u)) {
        auto targetFn = runtime->lookupFunction(0x138CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE52Cu; }
        if (ctx->pc != 0x2FE52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138CF0_0x138cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE52Cu; }
        if (ctx->pc != 0x2FE52Cu) { return; }
    }
    ctx->pc = 0x2FE52Cu;
label_2fe52c:
    // 0x2fe52c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2fe52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2fe530: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2fe530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fe534: 0x8c44e384  lw          $a0, -0x1C7C($v0)
    ctx->pc = 0x2fe534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960004)));
    // 0x2fe538: 0xc68c0044  lwc1        $f12, 0x44($s4)
    ctx->pc = 0x2fe538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe53c: 0xc04e33c  jal         func_138CF0
    ctx->pc = 0x2FE53Cu;
    SET_GPR_U32(ctx, 31, 0x2FE544u);
    ctx->pc = 0x2FE540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE53Cu;
            // 0x2fe540: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138CF0u;
    if (runtime->hasFunction(0x138CF0u)) {
        auto targetFn = runtime->lookupFunction(0x138CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE544u; }
        if (ctx->pc != 0x2FE544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138CF0_0x138cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE544u; }
        if (ctx->pc != 0x2FE544u) { return; }
    }
    ctx->pc = 0x2FE544u;
label_2fe544:
    // 0x2fe544: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2fe544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fe548: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2fe548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2fe54c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2fe54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2fe550: 0x8c65e380  lw          $a1, -0x1C80($v1)
    ctx->pc = 0x2fe550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960000)));
    // 0x2fe554: 0xc68c0050  lwc1        $f12, 0x50($s4)
    ctx->pc = 0x2fe554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe558: 0x8c46e384  lw          $a2, -0x1C7C($v0)
    ctx->pc = 0x2fe558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960004)));
    // 0x2fe55c: 0x8ce70028  lw          $a3, 0x28($a3)
    ctx->pc = 0x2fe55cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x2fe560: 0xc04e38c  jal         func_138E30
    ctx->pc = 0x2FE560u;
    SET_GPR_U32(ctx, 31, 0x2FE568u);
    ctx->pc = 0x2FE564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE560u;
            // 0x2fe564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138E30u;
    if (runtime->hasFunction(0x138E30u)) {
        auto targetFn = runtime->lookupFunction(0x138E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE568u; }
        if (ctx->pc != 0x2FE568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138E30_0x138e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE568u; }
        if (ctx->pc != 0x2FE568u) { return; }
    }
    ctx->pc = 0x2FE568u;
label_2fe568:
    // 0x2fe568: 0xc6810050  lwc1        $f1, 0x50($s4)
    ctx->pc = 0x2fe568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe56c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fe56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fe570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe574: 0x0  nop
    ctx->pc = 0x2fe574u;
    // NOP
    // 0x2fe578: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fe578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe57c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2FE57Cu;
    {
        const bool branch_taken_0x2fe57c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fe57c) {
            ctx->pc = 0x2FE580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE57Cu;
            // 0x2fe580: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE59Cu;
            goto label_2fe59c;
        }
    }
    ctx->pc = 0x2FE584u;
    // 0x2fe584: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2fe584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2fe588: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x2fe588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe58c: 0xc0554a4  jal         func_155290
    ctx->pc = 0x2FE58Cu;
    SET_GPR_U32(ctx, 31, 0x2FE594u);
    ctx->pc = 0x2FE590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE58Cu;
            // 0x2fe590: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155290u;
    if (runtime->hasFunction(0x155290u)) {
        auto targetFn = runtime->lookupFunction(0x155290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE594u; }
        if (ctx->pc != 0x2FE594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155290_0x155290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE594u; }
        if (ctx->pc != 0x2FE594u) { return; }
    }
    ctx->pc = 0x2FE594u;
label_2fe594:
    // 0x2fe594: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2FE594u;
    {
        const bool branch_taken_0x2fe594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE594u;
            // 0x2fe598: 0x8e830020  lw          $v1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe594) {
            ctx->pc = 0x2FE678u;
            goto label_2fe678;
        }
    }
    ctx->pc = 0x2FE59Cu;
label_2fe59c:
    // 0x2fe59c: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x2fe59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe5a0: 0xc0554a4  jal         func_155290
    ctx->pc = 0x2FE5A0u;
    SET_GPR_U32(ctx, 31, 0x2FE5A8u);
    ctx->pc = 0x2FE5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE5A0u;
            // 0x2fe5a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155290u;
    if (runtime->hasFunction(0x155290u)) {
        auto targetFn = runtime->lookupFunction(0x155290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5A8u; }
        if (ctx->pc != 0x2FE5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155290_0x155290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5A8u; }
        if (ctx->pc != 0x2FE5A8u) { return; }
    }
    ctx->pc = 0x2FE5A8u;
label_2fe5a8:
    // 0x2fe5a8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2FE5A8u;
    {
        const bool branch_taken_0x2fe5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe5a8) {
            ctx->pc = 0x2FE674u;
            goto label_2fe674;
        }
    }
    ctx->pc = 0x2FE5B0u;
label_2fe5b0:
    // 0x2fe5b0: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2FE5B0u;
    {
        const bool branch_taken_0x2fe5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe5b0) {
            ctx->pc = 0x2FE5B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE5B0u;
            // 0x2fe5b4: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE654u;
            goto label_2fe654;
        }
    }
    ctx->pc = 0x2FE5B8u;
    // 0x2fe5b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2fe5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2fe5bc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2fe5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fe5c0: 0x8c44e380  lw          $a0, -0x1C80($v0)
    ctx->pc = 0x2fe5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960000)));
    // 0x2fe5c4: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x2fe5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe5c8: 0xc04e33c  jal         func_138CF0
    ctx->pc = 0x2FE5C8u;
    SET_GPR_U32(ctx, 31, 0x2FE5D0u);
    ctx->pc = 0x2FE5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE5C8u;
            // 0x2fe5cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138CF0u;
    if (runtime->hasFunction(0x138CF0u)) {
        auto targetFn = runtime->lookupFunction(0x138CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5D0u; }
        if (ctx->pc != 0x2FE5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138CF0_0x138cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5D0u; }
        if (ctx->pc != 0x2FE5D0u) { return; }
    }
    ctx->pc = 0x2FE5D0u;
label_2fe5d0:
    // 0x2fe5d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2fe5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2fe5d4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2fe5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fe5d8: 0x8c44e384  lw          $a0, -0x1C7C($v0)
    ctx->pc = 0x2fe5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960004)));
    // 0x2fe5dc: 0xc68c0040  lwc1        $f12, 0x40($s4)
    ctx->pc = 0x2fe5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe5e0: 0xc04e33c  jal         func_138CF0
    ctx->pc = 0x2FE5E0u;
    SET_GPR_U32(ctx, 31, 0x2FE5E8u);
    ctx->pc = 0x2FE5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE5E0u;
            // 0x2fe5e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138CF0u;
    if (runtime->hasFunction(0x138CF0u)) {
        auto targetFn = runtime->lookupFunction(0x138CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5E8u; }
        if (ctx->pc != 0x2FE5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138CF0_0x138cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5E8u; }
        if (ctx->pc != 0x2FE5E8u) { return; }
    }
    ctx->pc = 0x2FE5E8u;
label_2fe5e8:
    // 0x2fe5e8: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2fe5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fe5ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2fe5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2fe5f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2fe5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2fe5f4: 0x8c65e380  lw          $a1, -0x1C80($v1)
    ctx->pc = 0x2fe5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960000)));
    // 0x2fe5f8: 0xc68c0048  lwc1        $f12, 0x48($s4)
    ctx->pc = 0x2fe5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe5fc: 0x8c46e384  lw          $a2, -0x1C7C($v0)
    ctx->pc = 0x2fe5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960004)));
    // 0x2fe600: 0x8ce70028  lw          $a3, 0x28($a3)
    ctx->pc = 0x2fe600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x2fe604: 0xc04e38c  jal         func_138E30
    ctx->pc = 0x2FE604u;
    SET_GPR_U32(ctx, 31, 0x2FE60Cu);
    ctx->pc = 0x2FE608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE604u;
            // 0x2fe608: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138E30u;
    if (runtime->hasFunction(0x138E30u)) {
        auto targetFn = runtime->lookupFunction(0x138E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE60Cu; }
        if (ctx->pc != 0x2FE60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138E30_0x138e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE60Cu; }
        if (ctx->pc != 0x2FE60Cu) { return; }
    }
    ctx->pc = 0x2FE60Cu;
label_2fe60c:
    // 0x2fe60c: 0xc6810048  lwc1        $f1, 0x48($s4)
    ctx->pc = 0x2fe60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe610: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fe610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fe614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe618: 0x0  nop
    ctx->pc = 0x2fe618u;
    // NOP
    // 0x2fe61c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fe61cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe620: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2FE620u;
    {
        const bool branch_taken_0x2fe620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fe620) {
            ctx->pc = 0x2FE624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE620u;
            // 0x2fe624: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE640u;
            goto label_2fe640;
        }
    }
    ctx->pc = 0x2FE628u;
    // 0x2fe628: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2fe628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2fe62c: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x2fe62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe630: 0xc0554a4  jal         func_155290
    ctx->pc = 0x2FE630u;
    SET_GPR_U32(ctx, 31, 0x2FE638u);
    ctx->pc = 0x2FE634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE630u;
            // 0x2fe634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155290u;
    if (runtime->hasFunction(0x155290u)) {
        auto targetFn = runtime->lookupFunction(0x155290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE638u; }
        if (ctx->pc != 0x2FE638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155290_0x155290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE638u; }
        if (ctx->pc != 0x2FE638u) { return; }
    }
    ctx->pc = 0x2FE638u;
label_2fe638:
    // 0x2fe638: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2FE638u;
    {
        const bool branch_taken_0x2fe638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe638) {
            ctx->pc = 0x2FE674u;
            goto label_2fe674;
        }
    }
    ctx->pc = 0x2FE640u;
label_2fe640:
    // 0x2fe640: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x2fe640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe644: 0xc0554a4  jal         func_155290
    ctx->pc = 0x2FE644u;
    SET_GPR_U32(ctx, 31, 0x2FE64Cu);
    ctx->pc = 0x2FE648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE644u;
            // 0x2fe648: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155290u;
    if (runtime->hasFunction(0x155290u)) {
        auto targetFn = runtime->lookupFunction(0x155290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE64Cu; }
        if (ctx->pc != 0x2FE64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155290_0x155290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE64Cu; }
        if (ctx->pc != 0x2FE64Cu) { return; }
    }
    ctx->pc = 0x2FE64Cu;
label_2fe64c:
    // 0x2fe64c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FE64Cu;
    {
        const bool branch_taken_0x2fe64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe64c) {
            ctx->pc = 0x2FE674u;
            goto label_2fe674;
        }
    }
    ctx->pc = 0x2FE654u;
label_2fe654:
    // 0x2fe654: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x2fe654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe658: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fe658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe65c: 0xc04e33c  jal         func_138CF0
    ctx->pc = 0x2FE65Cu;
    SET_GPR_U32(ctx, 31, 0x2FE664u);
    ctx->pc = 0x2FE660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE65Cu;
            // 0x2fe660: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138CF0u;
    if (runtime->hasFunction(0x138CF0u)) {
        auto targetFn = runtime->lookupFunction(0x138CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE664u; }
        if (ctx->pc != 0x2FE664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138CF0_0x138cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE664u; }
        if (ctx->pc != 0x2FE664u) { return; }
    }
    ctx->pc = 0x2FE664u;
label_2fe664:
    // 0x2fe664: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2fe664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2fe668: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x2fe668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe66c: 0xc0554a4  jal         func_155290
    ctx->pc = 0x2FE66Cu;
    SET_GPR_U32(ctx, 31, 0x2FE674u);
    ctx->pc = 0x2FE670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE66Cu;
            // 0x2fe670: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155290u;
    if (runtime->hasFunction(0x155290u)) {
        auto targetFn = runtime->lookupFunction(0x155290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE674u; }
        if (ctx->pc != 0x2FE674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155290_0x155290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE674u; }
        if (ctx->pc != 0x2FE674u) { return; }
    }
    ctx->pc = 0x2FE674u;
label_2fe674:
    // 0x2fe674: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x2fe674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2fe678:
    // 0x2fe678: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2fe678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2fe67c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FE67Cu;
    {
        const bool branch_taken_0x2fe67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe67c) {
            ctx->pc = 0x2FE680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE67Cu;
            // 0x2fe680: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE6A4u;
            goto label_2fe6a4;
        }
    }
    ctx->pc = 0x2FE684u;
    // 0x2fe684: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2fe684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fe688: 0xc68c0048  lwc1        $f12, 0x48($s4)
    ctx->pc = 0x2fe688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe68c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fe68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe690: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fe690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe694: 0x8c470028  lw          $a3, 0x28($v0)
    ctx->pc = 0x2fe694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2fe698: 0xc04e38c  jal         func_138E30
    ctx->pc = 0x2FE698u;
    SET_GPR_U32(ctx, 31, 0x2FE6A0u);
    ctx->pc = 0x2FE69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE698u;
            // 0x2fe69c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138E30u;
    if (runtime->hasFunction(0x138E30u)) {
        auto targetFn = runtime->lookupFunction(0x138E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6A0u; }
        if (ctx->pc != 0x2FE6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138E30_0x138e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6A0u; }
        if (ctx->pc != 0x2FE6A0u) { return; }
    }
    ctx->pc = 0x2FE6A0u;
label_2fe6a0:
    // 0x2fe6a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fe6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fe6a4:
    // 0x2fe6a4: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x2fe6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
    // 0x2fe6a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2fe6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fe6ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2fe6acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fe6b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fe6b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fe6b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fe6b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe6b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE6C0u;
            // 0x2fe6c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE6C8u;
    // 0x2fe6c8: 0x0  nop
    ctx->pc = 0x2fe6c8u;
    // NOP
    // 0x2fe6cc: 0x0  nop
    ctx->pc = 0x2fe6ccu;
    // NOP
}
