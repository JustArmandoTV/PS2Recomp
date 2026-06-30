#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00318310
// Address: 0x318310 - 0x318410
void sub_00318310_0x318310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318310_0x318310");
#endif

    switch (ctx->pc) {
        case 0x318368u: goto label_318368;
        case 0x318388u: goto label_318388;
        case 0x318394u: goto label_318394;
        case 0x3183c8u: goto label_3183c8;
        default: break;
    }

    ctx->pc = 0x318310u;

    // 0x318310: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x318310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x318314: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x318314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x318318: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x318318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x31831c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x31831cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x318320: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x318320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x318324: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x318324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x318328: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x318328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31832c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31832cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x318330: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x318330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318334: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x318334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x318338: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x318338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31833c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x31833cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x318340: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x318340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x318344: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x318344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318348: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x318348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x31834c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x31834cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x318350: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x318350u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x318354: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x318354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x318358: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x318358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31835c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31835cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x318360: 0xc04cc90  jal         func_133240
    ctx->pc = 0x318360u;
    SET_GPR_U32(ctx, 31, 0x318368u);
    ctx->pc = 0x318364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318360u;
            // 0x318364: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318368u; }
        if (ctx->pc != 0x318368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318368u; }
        if (ctx->pc != 0x318368u) { return; }
    }
    ctx->pc = 0x318368u;
label_318368:
    // 0x318368: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x318368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x31836c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31836cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318370: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x318370u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x318374: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x318374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x318378: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x318378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x31837c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31837cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x318380: 0xc04cc90  jal         func_133240
    ctx->pc = 0x318380u;
    SET_GPR_U32(ctx, 31, 0x318388u);
    ctx->pc = 0x318384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318380u;
            // 0x318384: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318388u; }
        if (ctx->pc != 0x318388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318388u; }
        if (ctx->pc != 0x318388u) { return; }
    }
    ctx->pc = 0x318388u;
label_318388:
    // 0x318388: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x318388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31838c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x31838Cu;
    SET_GPR_U32(ctx, 31, 0x318394u);
    ctx->pc = 0x318390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31838Cu;
            // 0x318390: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318394u; }
        if (ctx->pc != 0x318394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318394u; }
        if (ctx->pc != 0x318394u) { return; }
    }
    ctx->pc = 0x318394u;
label_318394:
    // 0x318394: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x318394u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x318398: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x318398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31839c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x31839cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3183a0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3183a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3183a4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x3183a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3183a8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x3183a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3183ac: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3183acu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x3183b0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3183b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3183b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3183b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3183b8: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x3183b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3183bc: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x3183bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3183c0: 0xc04cc08  jal         func_133020
    ctx->pc = 0x3183C0u;
    SET_GPR_U32(ctx, 31, 0x3183C8u);
    ctx->pc = 0x3183C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3183C0u;
            // 0x3183c4: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3183C8u; }
        if (ctx->pc != 0x3183C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3183C8u; }
        if (ctx->pc != 0x3183C8u) { return; }
    }
    ctx->pc = 0x3183C8u;
label_3183c8:
    // 0x3183c8: 0x0  nop
    ctx->pc = 0x3183c8u;
    // NOP
    // 0x3183cc: 0x0  nop
    ctx->pc = 0x3183ccu;
    // NOP
    // 0x3183d0: 0x46140083  div.s       $f2, $f0, $f20
    ctx->pc = 0x3183d0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[20];
    // 0x3183d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3183d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3183d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3183d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3183dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3183dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3183e0: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x3183e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3183e4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3183e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3183e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3183e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3183ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3183ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3183f0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3183f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3183f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3183f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3183f8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x3183f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3183fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3183FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3183FCu;
            // 0x318400: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x318404u;
    // 0x318404: 0x0  nop
    ctx->pc = 0x318404u;
    // NOP
    // 0x318408: 0x0  nop
    ctx->pc = 0x318408u;
    // NOP
    // 0x31840c: 0x0  nop
    ctx->pc = 0x31840cu;
    // NOP
}
