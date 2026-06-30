#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027F970
// Address: 0x27f970 - 0x27fb00
void sub_0027F970_0x27f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F970_0x27f970");
#endif

    switch (ctx->pc) {
        case 0x27f9c0u: goto label_27f9c0;
        case 0x27f9dcu: goto label_27f9dc;
        case 0x27fa14u: goto label_27fa14;
        default: break;
    }

    ctx->pc = 0x27f970u;

    // 0x27f970: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27f970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27f974: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27f974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27f978: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x27f97c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27f97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x27f980: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x27f980u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f984: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27f984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x27f988: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x27f988u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f98c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27f990: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x27f990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f994: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27f994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27f998: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27f998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f99c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27f99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27f9a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27f9a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27f9a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27f9a8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x27f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x27f9ac: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27f9acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27f9b0: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x27F9B0u;
    {
        const bool branch_taken_0x27f9b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9B0u;
            // 0x27f9b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9b0) {
            ctx->pc = 0x27FAC8u;
            goto label_27fac8;
        }
    }
    ctx->pc = 0x27F9B8u;
    // 0x27f9b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27f9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f9bc: 0x0  nop
    ctx->pc = 0x27f9bcu;
    // NOP
label_27f9c0:
    // 0x27f9c0: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x27f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
    // 0x27f9c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27f9c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27f9c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27f9cc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x27f9ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f9d0: 0x265100b0  addiu       $s1, $s2, 0xB0
    ctx->pc = 0x27f9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x27f9d4: 0xc0a3f04  jal         func_28FC10
    ctx->pc = 0x27F9D4u;
    SET_GPR_U32(ctx, 31, 0x27F9DCu);
    ctx->pc = 0x27F9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9D4u;
            // 0x27f9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28FC10u;
    if (runtime->hasFunction(0x28FC10u)) {
        auto targetFn = runtime->lookupFunction(0x28FC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9DCu; }
        if (ctx->pc != 0x27F9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028FC10_0x28fc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9DCu; }
        if (ctx->pc != 0x27F9DCu) { return; }
    }
    ctx->pc = 0x27F9DCu;
label_27f9dc:
    // 0x27f9dc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x27f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27f9e0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x27f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27f9e4: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x27f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x27f9e8: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x27f9e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27f9ec: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x27F9ECu;
    {
        const bool branch_taken_0x27f9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27f9ec) {
            ctx->pc = 0x27FA48u;
            goto label_27fa48;
        }
    }
    ctx->pc = 0x27F9F4u;
    // 0x27f9f4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x27f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x27f9f8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x27f9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x27f9fc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x27f9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x27fa00: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x27fa00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x27fa04: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FA04u;
    {
        const bool branch_taken_0x27fa04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x27FA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA04u;
            // 0x27fa08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa04) {
            ctx->pc = 0x27FA18u;
            goto label_27fa18;
        }
    }
    ctx->pc = 0x27FA0Cu;
    // 0x27fa0c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x27FA0Cu;
    SET_GPR_U32(ctx, 31, 0x27FA14u);
    ctx->pc = 0x27FA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA0Cu;
            // 0x27fa10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA14u; }
        if (ctx->pc != 0x27FA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA14u; }
        if (ctx->pc != 0x27FA14u) { return; }
    }
    ctx->pc = 0x27FA14u;
label_27fa14:
    // 0x27fa14: 0x0  nop
    ctx->pc = 0x27fa14u;
    // NOP
label_27fa18:
    // 0x27fa18: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x27fa18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x27fa1c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x27fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27fa20: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x27fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27fa24: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x27fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x27fa28: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x27fa28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27fa2c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x27fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27fa30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27fa34: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x27fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x27fa38: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x27fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27fa3c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x27fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x27fa40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x27fa40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x27fa44: 0x0  nop
    ctx->pc = 0x27fa44u;
    // NOP
label_27fa48:
    // 0x27fa48: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27fa4c: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x27fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fa50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27fa50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27fa54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27fa54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fa58: 0x0  nop
    ctx->pc = 0x27fa58u;
    // NOP
    // 0x27fa5c: 0xe6210040  swc1        $f1, 0x40($s1)
    ctx->pc = 0x27fa5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x27fa60: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x27fa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fa64: 0xe6210044  swc1        $f1, 0x44($s1)
    ctx->pc = 0x27fa64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x27fa68: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x27fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fa6c: 0xe6210048  swc1        $f1, 0x48($s1)
    ctx->pc = 0x27fa6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x27fa70: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x27fa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fa74: 0xe621004c  swc1        $f1, 0x4C($s1)
    ctx->pc = 0x27fa74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x27fa78: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x27fa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fa7c: 0xe6210060  swc1        $f1, 0x60($s1)
    ctx->pc = 0x27fa7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x27fa80: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x27fa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fa84: 0xe6210064  swc1        $f1, 0x64($s1)
    ctx->pc = 0x27fa84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x27fa88: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x27fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fa8c: 0xe6210068  swc1        $f1, 0x68($s1)
    ctx->pc = 0x27fa8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x27fa90: 0xc621007c  lwc1        $f1, 0x7C($s1)
    ctx->pc = 0x27fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fa94: 0xe621006c  swc1        $f1, 0x6C($s1)
    ctx->pc = 0x27fa94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x27fa98: 0xe634004c  swc1        $f20, 0x4C($s1)
    ctx->pc = 0x27fa98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x27fa9c: 0x8ec30018  lw          $v1, 0x18($s6)
    ctx->pc = 0x27fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x27faa0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x27faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27faa4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x27faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27faa8: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x27faa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x27faac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27faacu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27fab0: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x27fab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x27fab4: 0x8ec30050  lw          $v1, 0x50($s6)
    ctx->pc = 0x27fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x27fab8: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x27fab8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27fabc: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x27FABCu;
    {
        const bool branch_taken_0x27fabc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FABCu;
            // 0x27fac0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fabc) {
            ctx->pc = 0x27F9C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27f9c0;
        }
    }
    ctx->pc = 0x27FAC4u;
    // 0x27fac4: 0x0  nop
    ctx->pc = 0x27fac4u;
    // NOP
label_27fac8:
    // 0x27fac8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27fac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27facc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27faccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27fad0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27fad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27fad4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27fad4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27fad8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27fad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27fadc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27fadcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fae0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27fae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27fae4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27fae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fae8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27fae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27faec: 0x3e00008  jr          $ra
    ctx->pc = 0x27FAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FAECu;
            // 0x27faf0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27FAF4u;
    // 0x27faf4: 0x0  nop
    ctx->pc = 0x27faf4u;
    // NOP
    // 0x27faf8: 0x0  nop
    ctx->pc = 0x27faf8u;
    // NOP
    // 0x27fafc: 0x0  nop
    ctx->pc = 0x27fafcu;
    // NOP
}
