#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027A890
// Address: 0x27a890 - 0x27ad60
void sub_0027A890_0x27a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A890_0x27a890");
#endif

    switch (ctx->pc) {
        case 0x27ab3cu: goto label_27ab3c;
        case 0x27ac18u: goto label_27ac18;
        case 0x27ac40u: goto label_27ac40;
        default: break;
    }

    ctx->pc = 0x27a890u;

    // 0x27a890: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x27a894: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x27a894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x27a898: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27a898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27a89c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x27a89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x27a8a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27a8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27a8a4: 0x44825000  mtc1        $v0, $f10
    ctx->pc = 0x27a8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x27a8a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27a8ac: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x27a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x27a8b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27a8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27a8b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27a8b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27a8bc: 0x344220c5  ori         $v0, $v0, 0x20C5
    ctx->pc = 0x27a8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8389);
    // 0x27a8c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a8c4: 0x24630350  addiu       $v1, $v1, 0x350
    ctx->pc = 0x27a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
    // 0x27a8c8: 0xc4b10010  lwc1        $f17, 0x10($a1)
    ctx->pc = 0x27a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x27a8cc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x27a8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a8d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27a8d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8d8: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x27a8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27a8dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27a8dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8e0: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x27a8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a8e4: 0xc4b00014  lwc1        $f16, 0x14($a1)
    ctx->pc = 0x27a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x27a8e8: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x27a8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27a8ec: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x27a8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27a8f0: 0x460089c1  sub.s       $f7, $f17, $f0
    ctx->pc = 0x27a8f0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[17], ctx->f[0]);
    // 0x27a8f4: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x27a8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a8f8: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x27a8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27a8fc: 0xc4ae0018  lwc1        $f14, 0x18($a1)
    ctx->pc = 0x27a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x27a900: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x27a900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a904: 0xc4ad0028  lwc1        $f13, 0x28($a1)
    ctx->pc = 0x27a904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27a908: 0x46068181  sub.s       $f6, $f16, $f6
    ctx->pc = 0x27a908u;
    ctx->f[6] = FPU_SUB_S(ctx->f[16], ctx->f[6]);
    // 0x27a90c: 0x461018c1  sub.s       $f3, $f3, $f16
    ctx->pc = 0x27a90cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[16]);
    // 0x27a910: 0x46100001  sub.s       $f0, $f0, $f16
    ctx->pc = 0x27a910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[16]);
    // 0x27a914: 0x460e6c01  sub.s       $f16, $f13, $f14
    ctx->pc = 0x27a914u;
    ctx->f[16] = FPU_SUB_S(ctx->f[13], ctx->f[14]);
    // 0x27a918: 0x46057141  sub.s       $f5, $f14, $f5
    ctx->pc = 0x27a918u;
    ctx->f[5] = FPU_SUB_S(ctx->f[14], ctx->f[5]);
    // 0x27a91c: 0x46112101  sub.s       $f4, $f4, $f17
    ctx->pc = 0x27a91cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[17]);
    // 0x27a920: 0x460e1081  sub.s       $f2, $f2, $f14
    ctx->pc = 0x27a920u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x27a924: 0x46043b82  mul.s       $f14, $f7, $f4
    ctx->pc = 0x27a924u;
    ctx->f[14] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x27a928: 0x46033342  mul.s       $f13, $f6, $f3
    ctx->pc = 0x27a928u;
    ctx->f[13] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x27a92c: 0xc4cc0004  lwc1        $f12, 0x4($a2)
    ctx->pc = 0x27a92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27a930: 0x46110841  sub.s       $f1, $f1, $f17
    ctx->pc = 0x27a930u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[17]);
    // 0x27a934: 0x460d7018  adda.s      $f14, $f13
    ctx->pc = 0x27a934u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[13]);
    // 0x27a938: 0x46022c5c  madd.s      $f17, $f5, $f2
    ctx->pc = 0x27a938u;
    ctx->f[17] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x27a93c: 0x46116342  mul.s       $f13, $f12, $f17
    ctx->pc = 0x27a93cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[17]);
    // 0x27a940: 0x46013b82  mul.s       $f14, $f7, $f1
    ctx->pc = 0x27a940u;
    ctx->f[14] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x27a944: 0x46003302  mul.s       $f12, $f6, $f0
    ctx->pc = 0x27a944u;
    ctx->f[12] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x27a948: 0x460c7018  adda.s      $f14, $f12
    ctx->pc = 0x27a948u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[12]);
    // 0x27a94c: 0xc4cf0008  lwc1        $f15, 0x8($a2)
    ctx->pc = 0x27a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x27a950: 0x46102b9c  madd.s      $f14, $f5, $f16
    ctx->pc = 0x27a950u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[16]));
    // 0x27a954: 0xc4cb0000  lwc1        $f11, 0x0($a2)
    ctx->pc = 0x27a954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x27a958: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x27a958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x27a95c: 0xc4690004  lwc1        $f9, 0x4($v1)
    ctx->pc = 0x27a95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x27a960: 0x460f7302  mul.s       $f12, $f14, $f15
    ctx->pc = 0x27a960u;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[15]);
    // 0x27a964: 0x460d6341  sub.s       $f13, $f12, $f13
    ctx->pc = 0x27a964u;
    ctx->f[13] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x27a968: 0x460f881a  mula.s      $f17, $f15
    ctx->pc = 0x27a968u;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[15]);
    // 0x27a96c: 0x460e5b1d  msub.s      $f12, $f11, $f14
    ctx->pc = 0x27a96cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[14]));
    // 0x27a970: 0x460d4201  sub.s       $f8, $f8, $f13
    ctx->pc = 0x27a970u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[13]);
    // 0x27a974: 0x460d52c0  add.s       $f11, $f10, $f13
    ctx->pc = 0x27a974u;
    ctx->f[11] = FPU_ADD_S(ctx->f[10], ctx->f[13]);
    // 0x27a978: 0x460c4201  sub.s       $f8, $f8, $f12
    ctx->pc = 0x27a978u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[12]);
    // 0x27a97c: 0x46084834  c.lt.s      $f9, $f8
    ctx->pc = 0x27a97cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a980: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27A980u;
    {
        const bool branch_taken_0x27a980 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A980u;
            // 0x27a984: 0x460c5280  add.s       $f10, $f10, $f12 (Delay Slot)
        ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a980) {
            ctx->pc = 0x27A990u;
            goto label_27a990;
        }
    }
    ctx->pc = 0x27A988u;
    // 0x27a988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A988u;
    {
        const bool branch_taken_0x27a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A988u;
            // 0x27a98c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a988) {
            ctx->pc = 0x27A994u;
            goto label_27a994;
        }
    }
    ctx->pc = 0x27A990u;
label_27a990:
    // 0x27a990: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27a990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a994:
    // 0x27a994: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x27a994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x27a998: 0x460b4034  c.lt.s      $f8, $f11
    ctx->pc = 0x27a998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a99c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27A99Cu;
    {
        const bool branch_taken_0x27a99c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A99Cu;
            // 0x27a9a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a99c) {
            ctx->pc = 0x27A9A8u;
            goto label_27a9a8;
        }
    }
    ctx->pc = 0x27A9A4u;
    // 0x27a9a4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x27a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27a9a8:
    // 0x27a9a8: 0xc4680008  lwc1        $f8, 0x8($v1)
    ctx->pc = 0x27a9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x27a9ac: 0x460a4034  c.lt.s      $f8, $f10
    ctx->pc = 0x27a9acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a9b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27A9B0u;
    {
        const bool branch_taken_0x27a9b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A9B0u;
            // 0x27a9b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9b0) {
            ctx->pc = 0x27A9BCu;
            goto label_27a9bc;
        }
    }
    ctx->pc = 0x27A9B8u;
    // 0x27a9b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27a9bc:
    // 0x27a9bc: 0xc469000c  lwc1        $f9, 0xC($v1)
    ctx->pc = 0x27a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x27a9c0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x27a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x27a9c4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x27a9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x27a9c8: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x27a9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x27a9cc: 0x0  nop
    ctx->pc = 0x27a9ccu;
    // NOP
    // 0x27a9d0: 0x46084834  c.lt.s      $f9, $f8
    ctx->pc = 0x27a9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a9d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x27A9D4u;
    {
        const bool branch_taken_0x27a9d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A9D4u;
            // 0x27a9d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9d4) {
            ctx->pc = 0x27A9E0u;
            goto label_27a9e0;
        }
    }
    ctx->pc = 0x27A9DCu;
    // 0x27a9dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x27a9dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a9e0:
    // 0x27a9e0: 0x871025  or          $v0, $a0, $a3
    ctx->pc = 0x27a9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x27a9e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x27a9e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27a9e8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x27a9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x27a9ec: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x27a9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x27a9f0: 0x27a30098  addiu       $v1, $sp, 0x98
    ctx->pc = 0x27a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x27a9f4: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x27a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x27a9f8: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x27a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x27a9fc: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x27a9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x27aa00: 0xe4480000  swc1        $f8, 0x0($v0)
    ctx->pc = 0x27aa00u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27aa04: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x27aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x27aa08: 0x3043000e  andi        $v1, $v0, 0xE
    ctx->pc = 0x27aa08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x27aa0c: 0x3862000e  xori        $v0, $v1, 0xE
    ctx->pc = 0x27aa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14);
    // 0x27aa10: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27aa10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27aa14: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x27AA14u;
    {
        const bool branch_taken_0x27aa14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aa14) {
            ctx->pc = 0x27AAE8u;
            goto label_27aae8;
        }
    }
    ctx->pc = 0x27AA1Cu;
    // 0x27aa1c: 0x4610181a  mula.s      $f3, $f16
    ctx->pc = 0x27aa1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[16]);
    // 0x27aa20: 0x4600121d  msub.s      $f8, $f2, $f0
    ctx->pc = 0x27aa20u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x27aa24: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x27aa24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27aa28: 0x4610209d  msub.s      $f2, $f4, $f16
    ctx->pc = 0x27aa28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[16]));
    // 0x27aa2c: 0xe6480000  swc1        $f8, 0x0($s2)
    ctx->pc = 0x27aa2cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x27aa30: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x27aa30u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x27aa34: 0x4601181d  msub.s      $f0, $f3, $f1
    ctx->pc = 0x27aa34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x27aa38: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x27aa38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x27aa3c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x27aa3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x27aa40: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x27aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x27aa44: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x27aa44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27aa48: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x27aa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aa4c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27aa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aa50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27aa50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27aa54: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x27aa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x27aa58: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x27aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aa5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27aa5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27aa60: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x27aa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x27aa64: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27aa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aa68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27aa68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27aa6c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x27aa6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x27aa70: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x27aa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aa74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27aa74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27aa78: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x27aa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x27aa7c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x27aa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27aa80: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x27aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aa84: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aa88: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x27aa88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x27aa8c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x27aa8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x27aa90: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x27aa90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x27aa94: 0x4605001c  madd.s      $f0, $f0, $f5
    ctx->pc = 0x27aa94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
    // 0x27aa98: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x27aa98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27aa9c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x27AA9Cu;
    {
        const bool branch_taken_0x27aa9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA9Cu;
            // 0x27aaa0: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa9c) {
            ctx->pc = 0x27AAD8u;
            goto label_27aad8;
        }
    }
    ctx->pc = 0x27AAA4u;
    // 0x27aaa4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aaa8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x27aaa8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27aaac: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x27aaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x27aab0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x27aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aab4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x27aab4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27aab8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x27aab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x27aabc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27aabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aac0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x27aac0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27aac4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x27aac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x27aac8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x27aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aacc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x27aaccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27aad0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27AAD0u;
    {
        const bool branch_taken_0x27aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AAD0u;
            // 0x27aad4: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aad0) {
            ctx->pc = 0x27AAE0u;
            goto label_27aae0;
        }
    }
    ctx->pc = 0x27AAD8u;
label_27aad8:
    // 0x27aad8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x27aad8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27aadc: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x27aadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_27aae0:
    // 0x27aae0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x27AAE0u;
    {
        const bool branch_taken_0x27aae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AAE0u;
            // 0x27aae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aae0) {
            ctx->pc = 0x27AD38u;
            goto label_27ad38;
        }
    }
    ctx->pc = 0x27AAE8u;
label_27aae8:
    // 0x27aae8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x27aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x27aaec: 0x244202e0  addiu       $v0, $v0, 0x2E0
    ctx->pc = 0x27aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x27aaf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27aaf4: 0x80510000  lb          $s1, 0x0($v0)
    ctx->pc = 0x27aaf4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27aaf8: 0x621003b  bgez        $s1, . + 4 + (0x3B << 2)
    ctx->pc = 0x27AAF8u;
    {
        const bool branch_taken_0x27aaf8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x27AAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AAF8u;
            // 0x27aafc: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aaf8) {
            ctx->pc = 0x27ABE8u;
            goto label_27abe8;
        }
    }
    ctx->pc = 0x27AB00u;
    // 0x27ab00: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x27ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x27ab04: 0x244202f2  addiu       $v0, $v0, 0x2F2
    ctx->pc = 0x27ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 754));
    // 0x27ab08: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x27ab08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27ab0c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x27ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27ab10: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x27ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x27ab14: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x27ab14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27ab18: 0x244202f0  addiu       $v0, $v0, 0x2F0
    ctx->pc = 0x27ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x27ab1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27ab20: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27ab20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ab24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27ab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27ab2c: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x27ab2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x27ab30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27ab34: 0xc09e998  jal         func_27A660
    ctx->pc = 0x27AB34u;
    SET_GPR_U32(ctx, 31, 0x27AB3Cu);
    ctx->pc = 0x27AB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB34u;
            // 0x27ab38: 0x2623021  addu        $a2, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A660u;
    if (runtime->hasFunction(0x27A660u)) {
        auto targetFn = runtime->lookupFunction(0x27A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB3Cu; }
        if (ctx->pc != 0x27AB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A660_0x27a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB3Cu; }
        if (ctx->pc != 0x27AB3Cu) { return; }
    }
    ctx->pc = 0x27AB3Cu;
label_27ab3c:
    // 0x27ab3c: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x27ab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ab40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27ab44: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x27ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ab48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27ab48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ab4c: 0x0  nop
    ctx->pc = 0x27ab4cu;
    // NOP
    // 0x27ab50: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x27ab50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x27ab54: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x27ab54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x27ab58: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x27ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ab5c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x27ab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ab60: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x27ab60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x27ab64: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x27ab64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x27ab68: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x27ab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ab6c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x27ab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ab70: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x27ab70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x27ab74: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x27ab74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x27ab78: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x27ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ab7c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x27ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ab80: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x27ab80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x27ab84: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x27ab84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x27ab88: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x27ab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ab8c: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x27ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27ab90: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x27ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27ab94: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ab98: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x27ab98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x27ab9c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x27ab9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x27aba0: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x27aba0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x27aba4: 0x4604209c  madd.s      $f2, $f4, $f4
    ctx->pc = 0x27aba4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x27aba8: 0x46020084  c1          0x20084
    ctx->pc = 0x27aba8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x27abac: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x27abacu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x27abb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27abb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27abb4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x27abb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x27abb8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x27abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27abbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27abbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27abc0: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x27abc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x27abc4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27abc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27abc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27abc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27abcc: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x27abccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x27abd0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x27abd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27abd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27abd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27abd8: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x27abd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x27abdc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x27ABDCu;
    {
        const bool branch_taken_0x27abdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ABE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ABDCu;
            // 0x27abe0: 0xe6420010  swc1        $f2, 0x10($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27abdc) {
            ctx->pc = 0x27AD30u;
            goto label_27ad30;
        }
    }
    ctx->pc = 0x27ABE4u;
    // 0x27abe4: 0x0  nop
    ctx->pc = 0x27abe4u;
    // NOP
label_27abe8:
    // 0x27abe8: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x27abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x27abec: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x27abecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x27abf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27abf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abf4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x27abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x27abf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27abf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abfc: 0x244202f2  addiu       $v0, $v0, 0x2F2
    ctx->pc = 0x27abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 754));
    // 0x27ac00: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x27ac00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27ac04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x27ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27ac08: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27ac08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ac0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27ac10: 0xc09e998  jal         func_27A660
    ctx->pc = 0x27AC10u;
    SET_GPR_U32(ctx, 31, 0x27AC18u);
    ctx->pc = 0x27AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC10u;
            // 0x27ac14: 0x2623021  addu        $a2, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A660u;
    if (runtime->hasFunction(0x27A660u)) {
        auto targetFn = runtime->lookupFunction(0x27A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC18u; }
        if (ctx->pc != 0x27AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A660_0x27a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC18u; }
        if (ctx->pc != 0x27AC18u) { return; }
    }
    ctx->pc = 0x27AC18u;
label_27ac18:
    // 0x27ac18: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x27ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x27ac1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27ac1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac20: 0x244202f0  addiu       $v0, $v0, 0x2F0
    ctx->pc = 0x27ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x27ac24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27ac24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x27ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27ac2c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x27ac2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27ac30: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27ac30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ac34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27ac38: 0xc09e998  jal         func_27A660
    ctx->pc = 0x27AC38u;
    SET_GPR_U32(ctx, 31, 0x27AC40u);
    ctx->pc = 0x27AC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC38u;
            // 0x27ac3c: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A660u;
    if (runtime->hasFunction(0x27A660u)) {
        auto targetFn = runtime->lookupFunction(0x27A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC40u; }
        if (ctx->pc != 0x27AC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A660_0x27a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC40u; }
        if (ctx->pc != 0x27AC40u) { return; }
    }
    ctx->pc = 0x27AC40u;
label_27ac40:
    // 0x27ac40: 0xc6890000  lwc1        $f9, 0x0($s4)
    ctx->pc = 0x27ac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x27ac44: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x27ac44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ac48: 0xc6880004  lwc1        $f8, 0x4($s4)
    ctx->pc = 0x27ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x27ac4c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x27ac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ac50: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x27ac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27ac54: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x27ac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ac58: 0xc6870008  lwc1        $f7, 0x8($s4)
    ctx->pc = 0x27ac58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27ac5c: 0x46014ac1  sub.s       $f11, $f9, $f1
    ctx->pc = 0x27ac5cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x27ac60: 0x46004281  sub.s       $f10, $f8, $f0
    ctx->pc = 0x27ac60u;
    ctx->f[10] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x27ac64: 0xc686000c  lwc1        $f6, 0xC($s4)
    ctx->pc = 0x27ac64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27ac68: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x27ac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ac6c: 0x46034a41  sub.s       $f9, $f9, $f3
    ctx->pc = 0x27ac6cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
    // 0x27ac70: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x27ac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27ac74: 0x460138c1  sub.s       $f3, $f7, $f1
    ctx->pc = 0x27ac74u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x27ac78: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x27ac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27ac7c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x27ac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ac80: 0x46024201  sub.s       $f8, $f8, $f2
    ctx->pc = 0x27ac80u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x27ac84: 0x460b5842  mul.s       $f1, $f11, $f11
    ctx->pc = 0x27ac84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x27ac88: 0x46003081  sub.s       $f2, $f6, $f0
    ctx->pc = 0x27ac88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x27ac8c: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x27ac8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x27ac90: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x27ac90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27ac94: 0x46053941  sub.s       $f5, $f7, $f5
    ctx->pc = 0x27ac94u;
    ctx->f[5] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x27ac98: 0x46043101  sub.s       $f4, $f6, $f4
    ctx->pc = 0x27ac98u;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x27ac9c: 0x46094842  mul.s       $f1, $f9, $f9
    ctx->pc = 0x27ac9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x27aca0: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x27aca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x27aca4: 0x4605299c  madd.s      $f6, $f5, $f5
    ctx->pc = 0x27aca4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x27aca8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x27aca8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27acac: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x27acacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x27acb0: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x27acb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27acb4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x27ACB4u;
    {
        const bool branch_taken_0x27acb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27ACB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ACB4u;
            // 0x27acb8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27acb4) {
            ctx->pc = 0x27ACF8u;
            goto label_27acf8;
        }
    }
    ctx->pc = 0x27ACBCu;
    // 0x27acbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27acbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27acc0: 0x0  nop
    ctx->pc = 0x27acc0u;
    // NOP
    // 0x27acc4: 0x46060096  rsqrt.s     $f2, $f0, $f6
    ctx->pc = 0x27acc4u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[0]);
    // 0x27acc8: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x27acc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x27accc: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x27acccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x27acd0: 0x460b1002  mul.s       $f0, $f2, $f11
    ctx->pc = 0x27acd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x27acd4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x27acd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x27acd8: 0x460a1002  mul.s       $f0, $f2, $f10
    ctx->pc = 0x27acd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x27acdc: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x27acdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x27ace0: 0x46051042  mul.s       $f1, $f2, $f5
    ctx->pc = 0x27ace0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x27ace4: 0x46041002  mul.s       $f0, $f2, $f4
    ctx->pc = 0x27ace4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x27ace8: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x27ace8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x27acec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27ACECu;
    {
        const bool branch_taken_0x27acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ACF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ACECu;
            // 0x27acf0: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27acec) {
            ctx->pc = 0x27AD30u;
            goto label_27ad30;
        }
    }
    ctx->pc = 0x27ACF4u;
    // 0x27acf4: 0x0  nop
    ctx->pc = 0x27acf4u;
    // NOP
label_27acf8:
    // 0x27acf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27acfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27acfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ad00: 0x0  nop
    ctx->pc = 0x27ad00u;
    // NOP
    // 0x27ad04: 0x46000916  rsqrt.s     $f4, $f1, $f0
    ctx->pc = 0x27ad04u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[1]);
    // 0x27ad08: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27ad08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27ad0c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x27ad0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x27ad10: 0x46092002  mul.s       $f0, $f4, $f9
    ctx->pc = 0x27ad10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x27ad14: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x27ad14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x27ad18: 0x46082002  mul.s       $f0, $f4, $f8
    ctx->pc = 0x27ad18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x27ad1c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x27ad1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x27ad20: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x27ad20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x27ad24: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x27ad24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x27ad28: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x27ad28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x27ad2c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x27ad2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_27ad30:
    // 0x27ad30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ad34: 0x0  nop
    ctx->pc = 0x27ad34u;
    // NOP
label_27ad38:
    // 0x27ad38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27ad38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27ad3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27ad3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ad40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27ad40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ad44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ad44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ad48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ad48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ad4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ad4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ad50: 0x3e00008  jr          $ra
    ctx->pc = 0x27AD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD50u;
            // 0x27ad54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AD58u;
    // 0x27ad58: 0x0  nop
    ctx->pc = 0x27ad58u;
    // NOP
    // 0x27ad5c: 0x0  nop
    ctx->pc = 0x27ad5cu;
    // NOP
}
