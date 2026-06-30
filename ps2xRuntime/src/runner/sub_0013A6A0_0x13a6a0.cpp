#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A6A0
// Address: 0x13a6a0 - 0x13b300
void sub_0013A6A0_0x13a6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A6A0_0x13a6a0");
#endif

    switch (ctx->pc) {
        case 0x13a6c8u: goto label_13a6c8;
        default: break;
    }

    ctx->pc = 0x13a6a0u;

    // 0x13a6a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13a6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13a6a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13a6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13a6a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13a6ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13a6b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13a6b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a6b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a6b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13a6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a6bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13a6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a6c0: 0xc04e8c8  jal         func_13A320
    ctx->pc = 0x13A6C0u;
    SET_GPR_U32(ctx, 31, 0x13A6C8u);
    ctx->pc = 0x13A6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A6C0u;
            // 0x13a6c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A320u;
    if (runtime->hasFunction(0x13A320u)) {
        auto targetFn = runtime->lookupFunction(0x13A320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6C8u; }
        if (ctx->pc != 0x13A6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A320_0x13a320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6C8u; }
        if (ctx->pc != 0x13A6C8u) { return; }
    }
    ctx->pc = 0x13A6C8u;
label_13a6c8:
    // 0x13a6c8: 0x3244013f  andi        $a0, $s2, 0x13F
    ctx->pc = 0x13a6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)319);
    // 0x13a6cc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13a6d0: 0x5083027e  beql        $a0, $v1, . + 4 + (0x27E << 2)
    ctx->pc = 0x13A6D0u;
    {
        const bool branch_taken_0x13a6d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a6d0) {
            ctx->pc = 0x13A6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A6D0u;
            // 0x13a6d4: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B0CCu;
            goto label_13b0cc;
        }
    }
    ctx->pc = 0x13A6D8u;
    // 0x13a6d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13a6dc: 0x508301fa  beql        $a0, $v1, . + 4 + (0x1FA << 2)
    ctx->pc = 0x13A6DCu;
    {
        const bool branch_taken_0x13a6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a6dc) {
            ctx->pc = 0x13A6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A6DCu;
            // 0x13a6e0: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AEC8u;
            goto label_13aec8;
        }
    }
    ctx->pc = 0x13A6E4u;
    // 0x13a6e4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x13a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13a6e8: 0x50830171  beql        $a0, $v1, . + 4 + (0x171 << 2)
    ctx->pc = 0x13A6E8u;
    {
        const bool branch_taken_0x13a6e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a6e8) {
            ctx->pc = 0x13A6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A6E8u;
            // 0x13a6ec: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13ACB0u;
            goto label_13acb0;
        }
    }
    ctx->pc = 0x13A6F0u;
    // 0x13a6f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13a6f4: 0x508300ed  beql        $a0, $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x13A6F4u;
    {
        const bool branch_taken_0x13a6f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a6f4) {
            ctx->pc = 0x13A6F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A6F4u;
            // 0x13a6f8: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AAACu;
            goto label_13aaac;
        }
    }
    ctx->pc = 0x13A6FCu;
    // 0x13a6fc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x13a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13a700: 0x508300b6  beql        $a0, $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x13A700u;
    {
        const bool branch_taken_0x13a700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a700) {
            ctx->pc = 0x13A704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A700u;
            // 0x13a704: 0xc603000c  lwc1        $f3, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A9DCu;
            goto label_13a9dc;
        }
    }
    ctx->pc = 0x13A708u;
    // 0x13a708: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13a708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a70c: 0x50830055  beql        $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x13A70Cu;
    {
        const bool branch_taken_0x13a70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a70c) {
            ctx->pc = 0x13A710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A70Cu;
            // 0x13a710: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A864u;
            goto label_13a864;
        }
    }
    ctx->pc = 0x13A714u;
    // 0x13a714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13a714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a718: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A718u;
    {
        const bool branch_taken_0x13a718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a718) {
            ctx->pc = 0x13A71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A718u;
            // 0x13a71c: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A728u;
            goto label_13a728;
        }
    }
    ctx->pc = 0x13A720u;
    // 0x13a720: 0x100002f0  b           . + 4 + (0x2F0 << 2)
    ctx->pc = 0x13A720u;
    {
        const bool branch_taken_0x13a720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A720u;
            // 0x13a724: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a720) {
            ctx->pc = 0x13B2E4u;
            goto label_13b2e4;
        }
    }
    ctx->pc = 0x13A728u;
label_13a728:
    // 0x13a728: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13a728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a72c: 0x50200019  beql        $at, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x13A72Cu;
    {
        const bool branch_taken_0x13a72c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a72c) {
            ctx->pc = 0x13A730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A72Cu;
            // 0x13a730: 0xc603000c  lwc1        $f3, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A794u;
            goto label_13a794;
        }
    }
    ctx->pc = 0x13A734u;
    // 0x13a734: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13a734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13a738: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a73c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13a740: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a744: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a744u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a748: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a74c: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x13a750: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x13a750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a754: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a758: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a75c: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13a75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13a760: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x13a760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a764: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a768: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a76c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13a76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13a770: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x13a770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a774: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a778: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a77c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13a77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x13a780: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x13a780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a784: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a788: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a78c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x13a78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x13a790: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x13a790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13a794:
    // 0x13a794: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13a794u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a798: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x13a798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a79c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x13A79Cu;
    {
        const bool branch_taken_0x13a79c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A79Cu;
            // 0x13a7a0: 0xc6020008  lwc1        $f2, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a79c) {
            ctx->pc = 0x13A7ECu;
            goto label_13a7ec;
        }
    }
    ctx->pc = 0x13A7A4u;
    // 0x13a7a4: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13a7a8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a7ac: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13a7b0: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a7b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a7b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a7bc: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13a7bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13a7c0: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13a7c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13a7c4: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13a7c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13a7c8: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a7cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a7d0: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13a7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13a7d4: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a7d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13a7d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13a7dc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13a7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13a7e0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a7e4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13a7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13a7e8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13a7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13a7ec:
    // 0x13a7ec: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13a7ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a7f0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13A7F0u;
    {
        const bool branch_taken_0x13a7f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A7F0u;
            // 0x13a7f4: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a7f0) {
            ctx->pc = 0x13A828u;
            goto label_13a828;
        }
    }
    ctx->pc = 0x13A7F8u;
    // 0x13a7f8: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13a7fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a804: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13a804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13a808: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a80c: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a810: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a814: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13A814u;
    {
        const bool branch_taken_0x13a814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A814u;
            // 0x13a818: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a814) {
            ctx->pc = 0x13A820u;
            goto label_13a820;
        }
    }
    ctx->pc = 0x13A81Cu;
    // 0x13a81c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13a81cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13a820:
    // 0x13a820: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13a820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13a824: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13a824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13a828:
    // 0x13a828: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13a828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a82c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x13a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a830: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x13a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a834: 0x102002aa  beqz        $at, . + 4 + (0x2AA << 2)
    ctx->pc = 0x13A834u;
    {
        const bool branch_taken_0x13a834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A834u;
            // 0x13a838: 0xc6020020  lwc1        $f2, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a834) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13A83Cu;
    // 0x13a83c: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13a840: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a844: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13a844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13a848: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a84c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a854: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x13a854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x13a858: 0xe4610034  swc1        $f1, 0x34($v1)
    ctx->pc = 0x13a858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x13a85c: 0x100002a0  b           . + 4 + (0x2A0 << 2)
    ctx->pc = 0x13A85Cu;
    {
        const bool branch_taken_0x13a85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A85Cu;
            // 0x13a860: 0xe4620038  swc1        $f2, 0x38($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a85c) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13A864u;
label_13a864:
    // 0x13a864: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13a864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a868: 0x50200019  beql        $at, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x13A868u;
    {
        const bool branch_taken_0x13a868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a868) {
            ctx->pc = 0x13A86Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A868u;
            // 0x13a86c: 0xc603000c  lwc1        $f3, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A8D0u;
            goto label_13a8d0;
        }
    }
    ctx->pc = 0x13A870u;
    // 0x13a870: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13a870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13a874: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a878: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13a878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13a87c: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a880: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a884: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a888: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x13a88c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x13a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a890: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a894: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a898: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13a898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13a89c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x13a89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a8a0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a8a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a8a8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13a8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13a8ac: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x13a8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a8b0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a8b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a8b8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13a8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x13a8bc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x13a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a8c0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a8c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a8c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a8c8: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x13a8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x13a8cc: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x13a8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13a8d0:
    // 0x13a8d0: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13a8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a8d4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x13a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a8d8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x13A8D8u;
    {
        const bool branch_taken_0x13a8d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A8D8u;
            // 0x13a8dc: 0xc6020008  lwc1        $f2, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8d8) {
            ctx->pc = 0x13A928u;
            goto label_13a928;
        }
    }
    ctx->pc = 0x13A8E0u;
    // 0x13a8e0: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13a8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13a8e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a8e8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13a8ec: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a8f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a8f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a8f8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13a8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13a8fc: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13a8fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13a900: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13a900u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13a904: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a908: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a90c: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13a90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13a910: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a914: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13a914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13a918: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13a918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13a91c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a920: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13a920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13a924: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13a924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13a928:
    // 0x13a928: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13a928u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a92c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13A92Cu;
    {
        const bool branch_taken_0x13a92c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A92Cu;
            // 0x13a930: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a92c) {
            ctx->pc = 0x13A964u;
            goto label_13a964;
        }
    }
    ctx->pc = 0x13A934u;
    // 0x13a934: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13a934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13a938: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a93c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a940: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13a940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13a944: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a948: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a94c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a950: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13A950u;
    {
        const bool branch_taken_0x13a950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A950u;
            // 0x13a954: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a950) {
            ctx->pc = 0x13A95Cu;
            goto label_13a95c;
        }
    }
    ctx->pc = 0x13A958u;
    // 0x13a958: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13a958u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13a95c:
    // 0x13a95c: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13a95cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13a960: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13a960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13a964:
    // 0x13a964: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13a964u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a968: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x13a968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a96c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x13a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a970: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13A970u;
    {
        const bool branch_taken_0x13a970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A970u;
            // 0x13a974: 0xc6020020  lwc1        $f2, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a970) {
            ctx->pc = 0x13A99Cu;
            goto label_13a99c;
        }
    }
    ctx->pc = 0x13A978u;
    // 0x13a978: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13a978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13a97c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a980: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13a984: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a988: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a98c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a990: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x13a990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13a994: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x13a994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13a998: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x13a998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_13a99c:
    // 0x13a99c: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13a99cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a9a0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x13a9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a9a4: 0x1020024e  beqz        $at, . + 4 + (0x24E << 2)
    ctx->pc = 0x13A9A4u;
    {
        const bool branch_taken_0x13a9a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A9A4u;
            // 0x13a9a8: 0xc6010028  lwc1        $f1, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9a4) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13A9ACu;
    // 0x13a9ac: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13a9b0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13a9b4: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x13a9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13a9b8: 0x2484504c  addiu       $a0, $a0, 0x504C
    ctx->pc = 0x13a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20556));
    // 0x13a9bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a9c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13a9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13a9c4: 0x24635050  addiu       $v1, $v1, 0x5050
    ctx->pc = 0x13a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20560));
    // 0x13a9c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13a9cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13a9d0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x13a9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13a9d4: 0x10000242  b           . + 4 + (0x242 << 2)
    ctx->pc = 0x13A9D4u;
    {
        const bool branch_taken_0x13a9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A9D4u;
            // 0x13a9d8: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9d4) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13A9DCu;
label_13a9dc:
    // 0x13a9dc: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13a9dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a9e0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x13a9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a9e4: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x13A9E4u;
    {
        const bool branch_taken_0x13a9e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A9E4u;
            // 0x13a9e8: 0xc6020008  lwc1        $f2, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9e4) {
            ctx->pc = 0x13AA34u;
            goto label_13aa34;
        }
    }
    ctx->pc = 0x13A9ECu;
    // 0x13a9ec: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13a9f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a9f4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13a9f8: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a9fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13aa00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13aa04: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13aa04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13aa08: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13aa08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13aa0c: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13aa0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13aa10: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13aa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13aa14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13aa14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13aa18: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13aa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13aa1c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13aa20: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13aa20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13aa24: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13aa24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13aa28: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13aa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13aa2c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13aa2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13aa30: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13aa30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13aa34:
    // 0x13aa34: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13aa34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13aa38: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13AA38u;
    {
        const bool branch_taken_0x13aa38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AA38u;
            // 0x13aa3c: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa38) {
            ctx->pc = 0x13AA70u;
            goto label_13aa70;
        }
    }
    ctx->pc = 0x13AA40u;
    // 0x13aa40: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13aa44: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13aa48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13aa48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13aa4c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13aa50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13aa50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13aa54: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13aa58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13aa5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13AA5Cu;
    {
        const bool branch_taken_0x13aa5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AA5Cu;
            // 0x13aa60: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa5c) {
            ctx->pc = 0x13AA68u;
            goto label_13aa68;
        }
    }
    ctx->pc = 0x13AA64u;
    // 0x13aa64: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13aa64u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13aa68:
    // 0x13aa68: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13aa68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13aa6c: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13aa6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13aa70:
    // 0x13aa70: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13aa70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13aa74: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x13aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13aa78: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x13aa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13aa7c: 0x10200218  beqz        $at, . + 4 + (0x218 << 2)
    ctx->pc = 0x13AA7Cu;
    {
        const bool branch_taken_0x13aa7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AA7Cu;
            // 0x13aa80: 0xc602001c  lwc1        $f2, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa7c) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13AA84u;
    // 0x13aa84: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13aa88: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13aa8c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13aa90: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13aa94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13aa98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13aa9c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x13aa9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x13aaa0: 0xe4610034  swc1        $f1, 0x34($v1)
    ctx->pc = 0x13aaa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x13aaa4: 0x1000020e  b           . + 4 + (0x20E << 2)
    ctx->pc = 0x13AAA4u;
    {
        const bool branch_taken_0x13aaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AAA4u;
            // 0x13aaa8: 0xe4620038  swc1        $f2, 0x38($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aaa4) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13AAACu;
label_13aaac:
    // 0x13aaac: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13aaacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13aab0: 0x50200019  beql        $at, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x13AAB0u;
    {
        const bool branch_taken_0x13aab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aab0) {
            ctx->pc = 0x13AAB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AAB0u;
            // 0x13aab4: 0xc603000c  lwc1        $f3, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AB18u;
            goto label_13ab18;
        }
    }
    ctx->pc = 0x13AAB8u;
    // 0x13aab8: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13aabc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13aac0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13aac4: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13aac8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13aacc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13aad0: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x13aad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x13aad4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x13aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13aad8: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13aad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13aadc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13aadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13aae0: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13aae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13aae4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x13aae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13aae8: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13aaec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13aaecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13aaf0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13aaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13aaf4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x13aaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13aaf8: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13aafc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13aafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ab00: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13ab00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x13ab04: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x13ab04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ab08: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13ab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ab0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ab0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ab10: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x13ab10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x13ab14: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x13ab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13ab18:
    // 0x13ab18: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13ab18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ab1c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x13ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ab20: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x13AB20u;
    {
        const bool branch_taken_0x13ab20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AB20u;
            // 0x13ab24: 0xc6020008  lwc1        $f2, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab20) {
            ctx->pc = 0x13AB70u;
            goto label_13ab70;
        }
    }
    ctx->pc = 0x13AB28u;
    // 0x13ab28: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13ab2c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ab30: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13ab34: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13ab38: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13ab3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13ab40: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13ab40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13ab44: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13ab44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13ab48: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13ab48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13ab4c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13ab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ab50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ab50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ab54: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13ab54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13ab58: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ab5c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13ab5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13ab60: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13ab60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13ab64: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ab68: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13ab68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13ab6c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13ab6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13ab70:
    // 0x13ab70: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13ab70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ab74: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13AB74u;
    {
        const bool branch_taken_0x13ab74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AB74u;
            // 0x13ab78: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab74) {
            ctx->pc = 0x13ABACu;
            goto label_13abac;
        }
    }
    ctx->pc = 0x13AB7Cu;
    // 0x13ab7c: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13ab80: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ab84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13ab84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ab88: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13ab8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13ab8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ab90: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13ab94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13ab94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13ab98: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13AB98u;
    {
        const bool branch_taken_0x13ab98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AB98u;
            // 0x13ab9c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab98) {
            ctx->pc = 0x13ABA4u;
            goto label_13aba4;
        }
    }
    ctx->pc = 0x13ABA0u;
    // 0x13aba0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13aba0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13aba4:
    // 0x13aba4: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13aba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13aba8: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13aba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13abac:
    // 0x13abac: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13abacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13abb0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x13abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13abb4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x13abb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13abb8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13ABB8u;
    {
        const bool branch_taken_0x13abb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ABBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ABB8u;
            // 0x13abbc: 0xc6020020  lwc1        $f2, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13abb8) {
            ctx->pc = 0x13ABE4u;
            goto label_13abe4;
        }
    }
    ctx->pc = 0x13ABC0u;
    // 0x13abc0: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13abc4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13abc8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13abcc: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13abccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13abd0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13abd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13abd8: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x13abd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13abdc: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x13abdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13abe0: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x13abe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_13abe4:
    // 0x13abe4: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13abe4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13abe8: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x13abe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13abec: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x13abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13abf0: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13ABF0u;
    {
        const bool branch_taken_0x13abf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ABF0u;
            // 0x13abf4: 0xc602002c  lwc1        $f2, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13abf0) {
            ctx->pc = 0x13AC34u;
            goto label_13ac34;
        }
    }
    ctx->pc = 0x13ABF8u;
    // 0x13abf8: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13abfc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13abfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13ac00: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13ac04: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13ac08: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x13ac08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13ac0c: 0x24a55018  addiu       $a1, $a1, 0x5018
    ctx->pc = 0x13ac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20504));
    // 0x13ac10: 0x2484501c  addiu       $a0, $a0, 0x501C
    ctx->pc = 0x13ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20508));
    // 0x13ac14: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ac18: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13ac18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13ac1c: 0x24635020  addiu       $v1, $v1, 0x5020
    ctx->pc = 0x13ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20512));
    // 0x13ac20: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13ac24: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13ac28: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x13ac28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13ac2c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x13ac2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13ac30: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x13ac30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13ac34:
    // 0x13ac34: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13ac34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ac38: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x13ac38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x13ac3c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x13AC3Cu;
    {
        const bool branch_taken_0x13ac3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AC3Cu;
            // 0x13ac40: 0x8e070034  lw          $a3, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac3c) {
            ctx->pc = 0x13AC70u;
            goto label_13ac70;
        }
    }
    ctx->pc = 0x13AC44u;
    // 0x13ac44: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13ac48: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13ac4c: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x13ac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13ac50: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x13ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
    // 0x13ac54: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ac58: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13ac5c: 0x24635042  addiu       $v1, $v1, 0x5042
    ctx->pc = 0x13ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20546));
    // 0x13ac60: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13ac64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13ac68: 0xa4860000  sh          $a2, 0x0($a0)
    ctx->pc = 0x13ac68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x13ac6c: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x13ac6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_13ac70:
    // 0x13ac70: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13ac70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ac74: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x13ac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ac78: 0x10200199  beqz        $at, . + 4 + (0x199 << 2)
    ctx->pc = 0x13AC78u;
    {
        const bool branch_taken_0x13ac78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AC78u;
            // 0x13ac7c: 0xc601003c  lwc1        $f1, 0x3C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac78) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13AC80u;
    // 0x13ac80: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13ac84: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13ac88: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x13ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13ac8c: 0x2484504c  addiu       $a0, $a0, 0x504C
    ctx->pc = 0x13ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20556));
    // 0x13ac90: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ac94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13ac94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13ac98: 0x24635050  addiu       $v1, $v1, 0x5050
    ctx->pc = 0x13ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20560));
    // 0x13ac9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13aca0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13aca4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x13aca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13aca8: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x13ACA8u;
    {
        const bool branch_taken_0x13aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ACA8u;
            // 0x13acac: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aca8) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13ACB0u;
label_13acb0:
    // 0x13acb0: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13acb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13acb4: 0x50200019  beql        $at, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x13ACB4u;
    {
        const bool branch_taken_0x13acb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13acb4) {
            ctx->pc = 0x13ACB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13ACB4u;
            // 0x13acb8: 0xc603000c  lwc1        $f3, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AD1Cu;
            goto label_13ad1c;
        }
    }
    ctx->pc = 0x13ACBCu;
    // 0x13acbc: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13acc0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13acc4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13acc8: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13accc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13acccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13acd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13acd4: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x13acd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x13acd8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x13acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13acdc: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13acdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ace0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ace0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ace4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13ace4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13ace8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x13ace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13acec: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13acf0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13acf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13acf4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13acf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13acf8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x13acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13acfc: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13acfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ad00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ad04: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13ad04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x13ad08: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x13ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ad0c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ad10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ad14: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x13ad14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x13ad18: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x13ad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13ad1c:
    // 0x13ad1c: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13ad1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ad20: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x13ad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ad24: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x13AD24u;
    {
        const bool branch_taken_0x13ad24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AD24u;
            // 0x13ad28: 0xc6020008  lwc1        $f2, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad24) {
            ctx->pc = 0x13AD74u;
            goto label_13ad74;
        }
    }
    ctx->pc = 0x13AD2Cu;
    // 0x13ad2c: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13ad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13ad30: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ad34: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13ad38: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13ad3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13ad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13ad40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13ad44: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13ad44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13ad48: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13ad48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13ad4c: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13ad4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13ad50: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13ad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ad54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ad58: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13ad58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13ad5c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13ad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad60: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13ad60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13ad64: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13ad64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13ad68: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad6c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13ad6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13ad70: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13ad70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13ad74:
    // 0x13ad74: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13ad74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ad78: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13AD78u;
    {
        const bool branch_taken_0x13ad78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AD78u;
            // 0x13ad7c: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad78) {
            ctx->pc = 0x13ADB0u;
            goto label_13adb0;
        }
    }
    ctx->pc = 0x13AD80u;
    // 0x13ad80: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13ad84: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ad88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13ad88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ad8c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13ad90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13ad90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ad94: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13ad98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13ad98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13ad9c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13AD9Cu;
    {
        const bool branch_taken_0x13ad9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13ADA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AD9Cu;
            // 0x13ada0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad9c) {
            ctx->pc = 0x13ADA8u;
            goto label_13ada8;
        }
    }
    ctx->pc = 0x13ADA4u;
    // 0x13ada4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13ada4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13ada8:
    // 0x13ada8: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13ada8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13adac: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13adacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13adb0:
    // 0x13adb0: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13adb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13adb4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x13adb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13adb8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x13adb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13adbc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13ADBCu;
    {
        const bool branch_taken_0x13adbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ADC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ADBCu;
            // 0x13adc0: 0xc6020020  lwc1        $f2, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adbc) {
            ctx->pc = 0x13ADE8u;
            goto label_13ade8;
        }
    }
    ctx->pc = 0x13ADC4u;
    // 0x13adc4: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13adc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13adc8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13adcc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13adccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13add0: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13add0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13add4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13add4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13add8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13add8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13addc: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x13addcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13ade0: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x13ade0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13ade4: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x13ade4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_13ade8:
    // 0x13ade8: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13ade8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13adec: 0x8e0a002c  lw          $t2, 0x2C($s0)
    ctx->pc = 0x13adecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13adf0: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x13adf0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x13adf4: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x13adf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13adf8: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x13ADF8u;
    {
        const bool branch_taken_0x13adf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ADFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ADF8u;
            // 0x13adfc: 0x8e0b0030  lw          $t3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adf8) {
            ctx->pc = 0x13AE4Cu;
            goto label_13ae4c;
        }
    }
    ctx->pc = 0x13AE00u;
    // 0x13ae00: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13ae04: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13ae04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13ae08: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13ae0c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13ae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13ae10: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x13ae10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13ae14: 0x24a5503c  addiu       $a1, $a1, 0x503C
    ctx->pc = 0x13ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20540));
    // 0x13ae18: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ae1c: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x13ae1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x13ae20: 0x24845030  addiu       $a0, $a0, 0x5030
    ctx->pc = 0x13ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20528));
    // 0x13ae24: 0x24635034  addiu       $v1, $v1, 0x5034
    ctx->pc = 0x13ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20532));
    // 0x13ae28: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x13ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x13ae2c: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x13ae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x13ae30: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x13ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13ae34: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x13ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x13ae38: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ae3c: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x13ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x13ae40: 0x24635038  addiu       $v1, $v1, 0x5038
    ctx->pc = 0x13ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20536));
    // 0x13ae44: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x13ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13ae48: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x13ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
label_13ae4c:
    // 0x13ae4c: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13ae4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ae50: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x13ae50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x13ae54: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x13AE54u;
    {
        const bool branch_taken_0x13ae54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AE54u;
            // 0x13ae58: 0x8e070038  lw          $a3, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae54) {
            ctx->pc = 0x13AE88u;
            goto label_13ae88;
        }
    }
    ctx->pc = 0x13AE5Cu;
    // 0x13ae5c: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13ae60: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13ae64: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x13ae64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13ae68: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x13ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
    // 0x13ae6c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ae70: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13ae74: 0x24635042  addiu       $v1, $v1, 0x5042
    ctx->pc = 0x13ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20546));
    // 0x13ae78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13ae7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13ae80: 0xa4860000  sh          $a2, 0x0($a0)
    ctx->pc = 0x13ae80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x13ae84: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x13ae84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_13ae88:
    // 0x13ae88: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13ae88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ae8c: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x13ae8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ae90: 0x10200113  beqz        $at, . + 4 + (0x113 << 2)
    ctx->pc = 0x13AE90u;
    {
        const bool branch_taken_0x13ae90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AE90u;
            // 0x13ae94: 0xc6010040  lwc1        $f1, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae90) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13AE98u;
    // 0x13ae98: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13ae9c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13ae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13aea0: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x13aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13aea4: 0x2484504c  addiu       $a0, $a0, 0x504C
    ctx->pc = 0x13aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20556));
    // 0x13aea8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13aeac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13aeb0: 0x24635050  addiu       $v1, $v1, 0x5050
    ctx->pc = 0x13aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20560));
    // 0x13aeb4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13aeb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13aebc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x13aebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13aec0: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x13AEC0u;
    {
        const bool branch_taken_0x13aec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AEC0u;
            // 0x13aec4: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aec0) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13AEC8u;
label_13aec8:
    // 0x13aec8: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13aec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13aecc: 0x50200019  beql        $at, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x13AECCu;
    {
        const bool branch_taken_0x13aecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aecc) {
            ctx->pc = 0x13AED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13AECCu;
            // 0x13aed0: 0xc603000c  lwc1        $f3, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13AF34u;
            goto label_13af34;
        }
    }
    ctx->pc = 0x13AED4u;
    // 0x13aed4: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13aed8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13aedc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13aee0: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13aee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13aee4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13aee8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13aeec: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x13aeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x13aef0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x13aef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13aef4: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13aef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13aef8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13aef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13aefc: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13aefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13af00: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x13af00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13af04: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13af04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13af08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13af08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13af0c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13af0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13af10: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x13af10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13af14: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13af14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13af18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13af18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13af1c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13af1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x13af20: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x13af20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13af24: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13af24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13af28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13af28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13af2c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x13af2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x13af30: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x13af30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13af34:
    // 0x13af34: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13af34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13af38: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x13af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13af3c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x13AF3Cu;
    {
        const bool branch_taken_0x13af3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AF3Cu;
            // 0x13af40: 0xc6020008  lwc1        $f2, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af3c) {
            ctx->pc = 0x13AF8Cu;
            goto label_13af8c;
        }
    }
    ctx->pc = 0x13AF44u;
    // 0x13af44: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13af44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13af48: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13af48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13af4c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13af50: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13af50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13af54: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13af54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13af58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13af58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13af5c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13af5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13af60: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13af60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13af64: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13af64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13af68: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13af6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13af6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13af70: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13af70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13af74: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13af74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13af78: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13af78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13af7c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13af7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13af80: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13af80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13af84: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13af84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13af88: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13af88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13af8c:
    // 0x13af8c: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13af8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13af90: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13AF90u;
    {
        const bool branch_taken_0x13af90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AF90u;
            // 0x13af94: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af90) {
            ctx->pc = 0x13AFC8u;
            goto label_13afc8;
        }
    }
    ctx->pc = 0x13AF98u;
    // 0x13af98: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13af98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13af9c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13afa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13afa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13afa4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13afa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13afa8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13afa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13afac: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13afacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13afb0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13afb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13AFB4u;
    {
        const bool branch_taken_0x13afb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFB4u;
            // 0x13afb8: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afb4) {
            ctx->pc = 0x13AFC0u;
            goto label_13afc0;
        }
    }
    ctx->pc = 0x13AFBCu;
    // 0x13afbc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13afbcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13afc0:
    // 0x13afc0: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13afc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13afc4: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13afc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13afc8:
    // 0x13afc8: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13afc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13afcc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x13afccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13afd0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x13afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13afd4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13AFD4u;
    {
        const bool branch_taken_0x13afd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFD4u;
            // 0x13afd8: 0xc6020020  lwc1        $f2, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afd4) {
            ctx->pc = 0x13B000u;
            goto label_13b000;
        }
    }
    ctx->pc = 0x13AFDCu;
    // 0x13afdc: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13afe0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13afe4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13afe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13afe8: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13afec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13afecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13aff0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13aff4: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x13aff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13aff8: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x13aff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13affc: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x13affcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_13b000:
    // 0x13b000: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13b000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b004: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x13b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b008: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x13b008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b00c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13B00Cu;
    {
        const bool branch_taken_0x13b00c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B00Cu;
            // 0x13b010: 0xc602002c  lwc1        $f2, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b00c) {
            ctx->pc = 0x13B050u;
            goto label_13b050;
        }
    }
    ctx->pc = 0x13B014u;
    // 0x13b014: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13b014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13b018: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13b018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13b01c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13b020: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13b020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13b024: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x13b024u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13b028: 0x24a55018  addiu       $a1, $a1, 0x5018
    ctx->pc = 0x13b028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20504));
    // 0x13b02c: 0x2484501c  addiu       $a0, $a0, 0x501C
    ctx->pc = 0x13b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20508));
    // 0x13b030: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b034: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13b034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13b038: 0x24635020  addiu       $v1, $v1, 0x5020
    ctx->pc = 0x13b038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20512));
    // 0x13b03c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13b040: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13b040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13b044: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x13b044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13b048: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x13b048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13b04c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x13b04cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13b050:
    // 0x13b050: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13b050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b054: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x13b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b058: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x13B058u;
    {
        const bool branch_taken_0x13b058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B058u;
            // 0x13b05c: 0xc6010034  lwc1        $f1, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b058) {
            ctx->pc = 0x13B08Cu;
            goto label_13b08c;
        }
    }
    ctx->pc = 0x13B060u;
    // 0x13b060: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13b060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13b064: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13b064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13b068: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x13b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13b06c: 0x24845044  addiu       $a0, $a0, 0x5044
    ctx->pc = 0x13b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20548));
    // 0x13b070: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b074: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13b074u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13b078: 0x24635048  addiu       $v1, $v1, 0x5048
    ctx->pc = 0x13b078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20552));
    // 0x13b07c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13b080: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b084: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x13b084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13b088: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x13b088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13b08c:
    // 0x13b08c: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13b08cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b090: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x13b090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b094: 0x10200092  beqz        $at, . + 4 + (0x92 << 2)
    ctx->pc = 0x13B094u;
    {
        const bool branch_taken_0x13b094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B094u;
            // 0x13b098: 0xc601003c  lwc1        $f1, 0x3C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b094) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13B09Cu;
    // 0x13b09c: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13b0a0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13b0a4: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x13b0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13b0a8: 0x2484504c  addiu       $a0, $a0, 0x504C
    ctx->pc = 0x13b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20556));
    // 0x13b0ac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b0b0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13b0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13b0b4: 0x24635050  addiu       $v1, $v1, 0x5050
    ctx->pc = 0x13b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20560));
    // 0x13b0b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13b0bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b0c0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x13b0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13b0c4: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x13B0C4u;
    {
        const bool branch_taken_0x13b0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B0C4u;
            // 0x13b0c8: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0c4) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13B0CCu;
label_13b0cc:
    // 0x13b0cc: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13b0ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b0d0: 0x50200019  beql        $at, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x13B0D0u;
    {
        const bool branch_taken_0x13b0d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b0d0) {
            ctx->pc = 0x13B0D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B0D0u;
            // 0x13b0d4: 0xc603000c  lwc1        $f3, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B138u;
            goto label_13b138;
        }
    }
    ctx->pc = 0x13B0D8u;
    // 0x13b0d8: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13b0dc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b0e0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13b0e4: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b0e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13b0ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b0f0: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x13b0f4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x13b0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b0f8: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b0fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b0fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b100: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13b100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13b104: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x13b104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b108: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b10c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b110: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13b110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13b114: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x13b114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b118: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b11c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b11cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b120: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13b120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x13b124: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x13b124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b128: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b12c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b12cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b130: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x13b130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x13b134: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x13b134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13b138:
    // 0x13b138: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13b138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b13c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x13b13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b140: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x13B140u;
    {
        const bool branch_taken_0x13b140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B140u;
            // 0x13b144: 0xc6020008  lwc1        $f2, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b140) {
            ctx->pc = 0x13B190u;
            goto label_13b190;
        }
    }
    ctx->pc = 0x13B148u;
    // 0x13b148: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13b148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13b14c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b150: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13b150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13b154: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b158: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13b158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13b15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b160: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x13b160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13b164: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x13b164u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13b168: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x13b168u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13b16c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b170: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13b170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b174: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13b174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13b178: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b17c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13b17cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13b180: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13b180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13b184: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13b184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b188: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x13b188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13b18c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13b18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13b190:
    // 0x13b190: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13b190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b194: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13B194u;
    {
        const bool branch_taken_0x13b194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B194u;
            // 0x13b198: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b194) {
            ctx->pc = 0x13B1CCu;
            goto label_13b1cc;
        }
    }
    ctx->pc = 0x13B19Cu;
    // 0x13b19c: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13b1a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b1a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b1a8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13b1ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b1acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b1b0: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b1b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13b1b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B1B8u;
    {
        const bool branch_taken_0x13b1b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B1B8u;
            // 0x13b1bc: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1b8) {
            ctx->pc = 0x13B1C4u;
            goto label_13b1c4;
        }
    }
    ctx->pc = 0x13B1C0u;
    // 0x13b1c0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b1c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b1c4:
    // 0x13b1c4: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x13b1c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13b1c8: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x13b1c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13b1cc:
    // 0x13b1cc: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13b1ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b1d0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x13b1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b1d4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x13b1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b1d8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13B1D8u;
    {
        const bool branch_taken_0x13b1d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B1D8u;
            // 0x13b1dc: 0xc6020020  lwc1        $f2, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1d8) {
            ctx->pc = 0x13B204u;
            goto label_13b204;
        }
    }
    ctx->pc = 0x13B1E0u;
    // 0x13b1e0: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x13b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13b1e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b1e8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x13b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13b1ec: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13b1f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13b1f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b1f8: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x13b1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13b1fc: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x13b1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13b200: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x13b200u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_13b204:
    // 0x13b204: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13b204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b208: 0x8e0a002c  lw          $t2, 0x2C($s0)
    ctx->pc = 0x13b208u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13b20c: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x13b20cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x13b210: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x13b210u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13b214: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x13B214u;
    {
        const bool branch_taken_0x13b214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B214u;
            // 0x13b218: 0x8e0b0030  lw          $t3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b214) {
            ctx->pc = 0x13B268u;
            goto label_13b268;
        }
    }
    ctx->pc = 0x13B21Cu;
    // 0x13b21c: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13b220: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13b220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13b224: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13b224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13b228: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13b228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13b22c: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x13b22cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13b230: 0x24a5503c  addiu       $a1, $a1, 0x503C
    ctx->pc = 0x13b230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20540));
    // 0x13b234: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b238: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x13b238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x13b23c: 0x24845030  addiu       $a0, $a0, 0x5030
    ctx->pc = 0x13b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20528));
    // 0x13b240: 0x24635034  addiu       $v1, $v1, 0x5034
    ctx->pc = 0x13b240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20532));
    // 0x13b244: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x13b244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x13b248: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x13b248u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x13b24c: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x13b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13b250: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x13b250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x13b254: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b258: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x13b258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x13b25c: 0x24635038  addiu       $v1, $v1, 0x5038
    ctx->pc = 0x13b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20536));
    // 0x13b260: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x13b260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13b264: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x13b264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
label_13b268:
    // 0x13b268: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13b268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b26c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x13b26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b270: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x13B270u;
    {
        const bool branch_taken_0x13b270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B270u;
            // 0x13b274: 0xc6010038  lwc1        $f1, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b270) {
            ctx->pc = 0x13B2A4u;
            goto label_13b2a4;
        }
    }
    ctx->pc = 0x13B278u;
    // 0x13b278: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13b278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13b27c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13b280: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x13b280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13b284: 0x24845044  addiu       $a0, $a0, 0x5044
    ctx->pc = 0x13b284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20548));
    // 0x13b288: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b28c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13b290: 0x24635048  addiu       $v1, $v1, 0x5048
    ctx->pc = 0x13b290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20552));
    // 0x13b294: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13b294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13b298: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b29c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x13b29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13b2a0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x13b2a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13b2a4:
    // 0x13b2a4: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x13b2a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b2a8: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x13b2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b2ac: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x13B2ACu;
    {
        const bool branch_taken_0x13b2ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B2ACu;
            // 0x13b2b0: 0xc6010040  lwc1        $f1, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2ac) {
            ctx->pc = 0x13B2E0u;
            goto label_13b2e0;
        }
    }
    ctx->pc = 0x13B2B4u;
    // 0x13b2b4: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x13b2b8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13b2bc: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x13b2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13b2c0: 0x2484504c  addiu       $a0, $a0, 0x504C
    ctx->pc = 0x13b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20556));
    // 0x13b2c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13b2c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13b2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13b2cc: 0x24635050  addiu       $v1, $v1, 0x5050
    ctx->pc = 0x13b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20560));
    // 0x13b2d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13b2d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b2d8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x13b2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13b2dc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x13b2dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13b2e0:
    // 0x13b2e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13b2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13b2e4:
    // 0x13b2e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b2e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b2e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b2ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13B2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B2F0u;
            // 0x13b2f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B2F8u;
    // 0x13b2f8: 0x0  nop
    ctx->pc = 0x13b2f8u;
    // NOP
    // 0x13b2fc: 0x0  nop
    ctx->pc = 0x13b2fcu;
    // NOP
}
