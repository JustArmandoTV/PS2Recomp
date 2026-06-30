#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00265610
// Address: 0x265610 - 0x265e30
void sub_00265610_0x265610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265610_0x265610");
#endif

    switch (ctx->pc) {
        case 0x265becu: goto label_265bec;
        default: break;
    }

    ctx->pc = 0x265610u;

    // 0x265610: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x265610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x265614: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x265614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x265618: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x265618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x26561c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26561cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x265620: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x265620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x265624: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x265624u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26562c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26562cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265634: 0x672825  or          $a1, $v1, $a3
    ctx->pc = 0x265634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x265638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x265638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26563c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x26563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x265640: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x265640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265644: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x265644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265648: 0x10a30143  beq         $a1, $v1, . + 4 + (0x143 << 2)
    ctx->pc = 0x265648u;
    {
        const bool branch_taken_0x265648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x26564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265648u;
            // 0x26564c: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265648) {
            ctx->pc = 0x265B58u;
            goto label_265b58;
        }
    }
    ctx->pc = 0x265650u;
    // 0x265650: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x265650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x265654: 0x10a300b6  beq         $a1, $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x265654u;
    {
        const bool branch_taken_0x265654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x265658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265654u;
            // 0x265658: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265654) {
            ctx->pc = 0x265930u;
            goto label_265930;
        }
    }
    ctx->pc = 0x26565Cu;
    // 0x26565c: 0x10a300b0  beq         $a1, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x26565Cu;
    {
        const bool branch_taken_0x26565c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x26565c) {
            ctx->pc = 0x265920u;
            goto label_265920;
        }
    }
    ctx->pc = 0x265664u;
    // 0x265664: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x265664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x265668: 0x10a30075  beq         $a1, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x265668u;
    {
        const bool branch_taken_0x265668 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x26566Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265668u;
            // 0x26566c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265668) {
            ctx->pc = 0x265840u;
            goto label_265840;
        }
    }
    ctx->pc = 0x265670u;
    // 0x265670: 0x10a30051  beq         $a1, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x265670u;
    {
        const bool branch_taken_0x265670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x265670) {
            ctx->pc = 0x2657B8u;
            goto label_2657b8;
        }
    }
    ctx->pc = 0x265678u;
    // 0x265678: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x265678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26567c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26567Cu;
    {
        const bool branch_taken_0x26567c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x26567c) {
            ctx->pc = 0x265698u;
            goto label_265698;
        }
    }
    ctx->pc = 0x265684u;
    // 0x265684: 0x10a001e2  beqz        $a1, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x265684u;
    {
        const bool branch_taken_0x265684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x265684) {
            ctx->pc = 0x265E10u;
            goto label_265e10;
        }
    }
    ctx->pc = 0x26568Cu;
    // 0x26568c: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x26568Cu;
    {
        const bool branch_taken_0x26568c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26568c) {
            ctx->pc = 0x265E10u;
            goto label_265e10;
        }
    }
    ctx->pc = 0x265694u;
    // 0x265694: 0x0  nop
    ctx->pc = 0x265694u;
    // NOP
label_265698:
    // 0x265698: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x265698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x26569c: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x26569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2656a0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2656a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2656a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2656a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2656a8: 0x0  nop
    ctx->pc = 0x2656a8u;
    // NOP
    // 0x2656ac: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2656acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2656b0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2656b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2656b4: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x2656b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2656b8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2656b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2656bc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2656bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2656c0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2656c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2656c4: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x2656c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2656c8: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2656c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2656cc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2656ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2656d0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2656d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2656d4: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2656d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2656d8: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x2656d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2656dc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2656dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2656e0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2656e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2656e4: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2656e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2656e8: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2656e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2656ec: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x2656ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2656f0: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x2656f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2656f4: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x2656f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2656f8: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2656f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2656fc: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2656fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x265700: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x265700u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x265704: 0x46072882  mul.s       $f2, $f5, $f7
    ctx->pc = 0x265704u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x265708: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x265708u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x26570c: 0x460618dc  madd.s      $f3, $f3, $f6
    ctx->pc = 0x26570cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x265710: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x265710u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x265714: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x265714u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x265718: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x26571c: 0x4606305c  madd.s      $f1, $f6, $f6
    ctx->pc = 0x26571cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x265720: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x265720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265724: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x265724u;
    {
        const bool branch_taken_0x265724 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x265724) {
            ctx->pc = 0x265750u;
            goto label_265750;
        }
    }
    ctx->pc = 0x26572Cu;
    // 0x26572c: 0xe6050000  swc1        $f5, 0x0($s0)
    ctx->pc = 0x26572cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x265730: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x265730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265734: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x265734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x265738: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x265738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26573c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x26573cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x265740: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x265740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265744: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x265744u;
    {
        const bool branch_taken_0x265744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265744u;
            // 0x265748: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x265744) {
            ctx->pc = 0x265790u;
            goto label_265790;
        }
    }
    ctx->pc = 0x26574Cu;
    // 0x26574c: 0x0  nop
    ctx->pc = 0x26574cu;
    // NOP
label_265750:
    // 0x265750: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x265750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x265754: 0x460100c4  c1          0x100C4
    ctx->pc = 0x265754u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x265758: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x265758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26575c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x26575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265760: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x265760u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x265764: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x265764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x265768: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x265768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x26576c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x26576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265770: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x265770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x265774: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x265774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x265778: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x265778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26577c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26577cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x265780: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x265780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x265784: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x265784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265788: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x265788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26578c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x26578cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_265790:
    // 0x265790: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x265790u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x265794: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x265794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265798: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x265798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x26579c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x26579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2657a0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2657a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2657a4: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x2657a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2657a8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2657a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2657ac: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x2657acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2657b0: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x2657B0u;
    {
        const bool branch_taken_0x2657b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2657B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2657B0u;
            // 0x2657b4: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657b0) {
            ctx->pc = 0x265E10u;
            goto label_265e10;
        }
    }
    ctx->pc = 0x2657B8u;
label_2657b8:
    // 0x2657b8: 0xc6860000  lwc1        $f6, 0x0($s4)
    ctx->pc = 0x2657b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2657bc: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x2657bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2657c0: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x2657c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2657c4: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2657c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2657c8: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2657c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2657cc: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x2657ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2657d0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2657d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2657d4: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x2657d4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x2657d8: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x2657d8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2657dc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2657dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2657e0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2657e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2657e4: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x2657e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2657e8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2657e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2657ec: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2657ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2657f0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2657f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2657f4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x2657f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2657f8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2657f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2657fc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2657fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265800: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x265800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265804: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x265804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265808: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x265808u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x26580c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x26580cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x265810: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x265810u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x265814: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x265814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x265818: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x265818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x26581c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x26581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265820: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x265820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x265824: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x265824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265828: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x265828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x26582c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x26582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265830: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x265830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x265834: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x265834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265838: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x265838u;
    {
        const bool branch_taken_0x265838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26583Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265838u;
            // 0x26583c: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x265838) {
            ctx->pc = 0x265E10u;
            goto label_265e10;
        }
    }
    ctx->pc = 0x265840u;
label_265840:
    // 0x265840: 0xc6660000  lwc1        $f6, 0x0($s3)
    ctx->pc = 0x265840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x265844: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x265844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x265848: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x265848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26584c: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x26584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265850: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x265850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265854: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x265854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265858: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x265858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26585c: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x26585cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x265860: 0x46032141  sub.s       $f5, $f4, $f3
    ctx->pc = 0x265860u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x265864: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x265864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x265868: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x265868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26586c: 0x46011101  sub.s       $f4, $f2, $f1
    ctx->pc = 0x26586cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x265870: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x265870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x265874: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x265874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265878: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x265878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x26587c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x26587cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265880: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x265880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x265884: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x265884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265888: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x265888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26588c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x26588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265890: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x265890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265894: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x265894u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x265898: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x265898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x26589c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x26589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2658a0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2658a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2658a4: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x2658a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2658a8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2658a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2658ac: 0x460408dc  madd.s      $f3, $f1, $f4
    ctx->pc = 0x2658acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x2658b0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2658b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2658b4: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2658b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x2658b8: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2658b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2658bc: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2658bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2658c0: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2658c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2658c4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2658c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2658c8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2658c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2658cc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2658ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2658d0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2658d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2658d4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2658d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2658d8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2658d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2658dc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2658dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2658e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2658e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2658e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2658e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2658e8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2658e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2658ec: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2658ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2658f0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2658f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2658f4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2658f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2658f8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2658f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2658fc: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2658fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x265900: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x265900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265904: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x265904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265908: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x265908u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x26590c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x26590cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x265910: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x265910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x265914: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x265914u;
    {
        const bool branch_taken_0x265914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265914u;
            // 0x265918: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x265914) {
            ctx->pc = 0x265E10u;
            goto label_265e10;
        }
    }
    ctx->pc = 0x26591Cu;
    // 0x26591c: 0x0  nop
    ctx->pc = 0x26591cu;
    // NOP
label_265920:
    // 0x265920: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x265920u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265924: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x265924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265928: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x265928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26592c: 0x0  nop
    ctx->pc = 0x26592cu;
    // NOP
label_265930:
    // 0x265930: 0xc6670024  lwc1        $f7, 0x24($s3)
    ctx->pc = 0x265930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x265934: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x265934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x265938: 0xc6680020  lwc1        $f8, 0x20($s3)
    ctx->pc = 0x265938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x26593c: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x26593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265940: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x265940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265944: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x265944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265948: 0xc6660028  lwc1        $f6, 0x28($s3)
    ctx->pc = 0x265948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26594c: 0x46053a41  sub.s       $f9, $f7, $f5
    ctx->pc = 0x26594cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x265950: 0x46014281  sub.s       $f10, $f8, $f1
    ctx->pc = 0x265950u;
    ctx->f[10] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x265954: 0x46081941  sub.s       $f5, $f3, $f8
    ctx->pc = 0x265954u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x265958: 0xc6640018  lwc1        $f4, 0x18($s3)
    ctx->pc = 0x265958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26595c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x26595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265960: 0x460710c1  sub.s       $f3, $f2, $f7
    ctx->pc = 0x265960u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x265964: 0x46043101  sub.s       $f4, $f6, $f4
    ctx->pc = 0x265964u;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x265968: 0x46060881  sub.s       $f2, $f1, $f6
    ctx->pc = 0x265968u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x26596c: 0x4602481a  mula.s      $f9, $f2
    ctx->pc = 0x26596cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x265970: 0x4603205d  msub.s      $f1, $f4, $f3
    ctx->pc = 0x265970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x265974: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x265974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x265978: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x265978u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x26597c: 0x4602505d  msub.s      $f1, $f10, $f2
    ctx->pc = 0x26597cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[2]));
    // 0x265980: 0x4603501a  mula.s      $f10, $f3
    ctx->pc = 0x265980u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x265984: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x265984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x265988: 0x4605485d  msub.s      $f1, $f9, $f5
    ctx->pc = 0x265988u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[5]));
    // 0x26598c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x26598cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x265990: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x265990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x265994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x265994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x265998: 0xc6070004  lwc1        $f7, 0x4($s0)
    ctx->pc = 0x265998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x26599c: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x26599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2659a0: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x2659a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2659a4: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x2659a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2659a8: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x2659a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2659ac: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2659acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2659b0: 0x4605285c  madd.s      $f1, $f5, $f5
    ctx->pc = 0x2659b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x2659b4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2659b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2659b8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2659B8u;
    {
        const bool branch_taken_0x2659b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2659BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2659B8u;
            // 0x2659bc: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659b8) {
            ctx->pc = 0x2659E0u;
            goto label_2659e0;
        }
    }
    ctx->pc = 0x2659C0u;
    // 0x2659c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2659c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2659c4: 0x0  nop
    ctx->pc = 0x2659c4u;
    // NOP
    // 0x2659c8: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x2659c8u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x2659cc: 0x0  nop
    ctx->pc = 0x2659ccu;
    // NOP
    // 0x2659d0: 0x0  nop
    ctx->pc = 0x2659d0u;
    // NOP
    // 0x2659d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2659D4u;
    {
        const bool branch_taken_0x2659d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2659d4) {
            ctx->pc = 0x2659E0u;
            goto label_2659e0;
        }
    }
    ctx->pc = 0x2659DCu;
    // 0x2659dc: 0x0  nop
    ctx->pc = 0x2659dcu;
    // NOP
label_2659e0:
    // 0x2659e0: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x2659e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2659e4: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2659e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2659e8: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2659e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2659ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2659ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2659f0: 0x46043102  mul.s       $f4, $f6, $f4
    ctx->pc = 0x2659f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x2659f4: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x2659f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x2659f8: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x2659f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2659fc: 0x4602289c  madd.s      $f2, $f5, $f2
    ctx->pc = 0x2659fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x265a00: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x265a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265a04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x265A04u;
    {
        const bool branch_taken_0x265a04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x265A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265A04u;
            // 0x265a08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a04) {
            ctx->pc = 0x265A10u;
            goto label_265a10;
        }
    }
    ctx->pc = 0x265A0Cu;
    // 0x265a0c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x265a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_265a10:
    // 0x265a10: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x265A10u;
    {
        const bool branch_taken_0x265a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265A10u;
            // 0x265a14: 0x46003047  neg.s       $f1, $f6 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a10) {
            ctx->pc = 0x265A40u;
            goto label_265a40;
        }
    }
    ctx->pc = 0x265A18u;
    // 0x265a18: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x265a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x265a1c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x265a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265a20: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x265a20u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x265a24: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x265a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x265a28: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x265a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265a2c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x265a2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x265a30: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x265a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x265a34: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x265a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265a38: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x265a38u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x265a3c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x265a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_265a40:
    // 0x265a40: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x265a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x265a44: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x265a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265a48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x265a48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x265a4c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x265a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x265a50: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x265a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265a54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x265a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x265a58: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x265a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x265a5c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x265a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265a60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x265a60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x265a64: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x265a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x265a68: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x265a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265a6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x265a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x265a70: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x265a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x265a74: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x265a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265a78: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x265a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265a7c: 0xc6870000  lwc1        $f7, 0x0($s4)
    ctx->pc = 0x265a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x265a80: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x265a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x265a84: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x265a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265a88: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x265a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x265a8c: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x265a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x265a90: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x265a90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x265a94: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x265a94u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x265a98: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x265a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265a9c: 0x46043881  sub.s       $f2, $f7, $f4
    ctx->pc = 0x265a9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x265aa0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x265aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265aa4: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x265aa4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x265aa8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x265aa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x265aac: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x265aacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x265ab0: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x265AB0u;
    {
        const bool branch_taken_0x265ab0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x265AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265AB0u;
            // 0x265ab4: 0x460008dc  madd.s      $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ab0) {
            ctx->pc = 0x265AE0u;
            goto label_265ae0;
        }
    }
    ctx->pc = 0x265AB8u;
    // 0x265ab8: 0xe6270000  swc1        $f7, 0x0($s1)
    ctx->pc = 0x265ab8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x265abc: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x265abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265ac0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x265ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x265ac4: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x265ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265ac8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x265ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x265acc: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x265accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265ad0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x265ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x265ad4: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x265AD4u;
    {
        const bool branch_taken_0x265ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265AD4u;
            // 0x265ad8: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ad4) {
            ctx->pc = 0x265E10u;
            goto label_265e10;
        }
    }
    ctx->pc = 0x265ADCu;
    // 0x265adc: 0x0  nop
    ctx->pc = 0x265adcu;
    // NOP
label_265ae0:
    // 0x265ae0: 0xe6270000  swc1        $f7, 0x0($s1)
    ctx->pc = 0x265ae0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x265ae4: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x265ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265ae8: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x265ae8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x265aec: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x265aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x265af0: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x265af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265af4: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x265af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x265af8: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x265af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265afc: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x265afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x265b00: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x265b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265b04: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x265b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265b08: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x265b08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x265b0c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x265b0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x265b10: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x265b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x265b14: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x265b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265b18: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x265b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265b1c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x265b1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x265b20: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x265b20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x265b24: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x265b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x265b28: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x265b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265b2c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x265b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265b30: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x265b30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x265b34: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x265b34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x265b38: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x265b38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x265b3c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x265b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265b40: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x265b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265b44: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x265b44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x265b48: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x265b48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x265b4c: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x265b4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x265b50: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x265B50u;
    {
        const bool branch_taken_0x265b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265B50u;
            // 0x265b54: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b50) {
            ctx->pc = 0x265E10u;
            goto label_265e10;
        }
    }
    ctx->pc = 0x265B58u;
label_265b58:
    // 0x265b58: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x265b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x265b5c: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x265b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265b60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x265b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b64: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x265b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265b68: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x265b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x265b6c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x265b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x265b70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265b70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265b74: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x265b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x265b78: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x265b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265b7c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x265b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265b80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265b84: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x265b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x265b88: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x265b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265b8c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x265b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265b90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265b90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265b94: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x265b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x265b98: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x265b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265b9c: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x265b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265ba0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265ba4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x265ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x265ba8: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x265ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265bac: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x265bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265bb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265bb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265bb4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x265bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x265bb8: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x265bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265bbc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x265bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265bc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265bc4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x265bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x265bc8: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x265bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265bcc: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x265bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265bd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265bd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265bd4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x265bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x265bd8: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x265bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265bdc: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x265bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265be0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265be0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265be4: 0xc09e8e8  jal         func_27A3A0
    ctx->pc = 0x265BE4u;
    SET_GPR_U32(ctx, 31, 0x265BECu);
    ctx->pc = 0x265BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265BE4u;
            // 0x265be8: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A3A0u;
    if (runtime->hasFunction(0x27A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x27A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265BECu; }
        if (ctx->pc != 0x265BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A3A0_0x27a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265BECu; }
        if (ctx->pc != 0x265BECu) { return; }
    }
    ctx->pc = 0x265BECu;
label_265bec:
    // 0x265bec: 0xc7a600a8  lwc1        $f6, 0xA8($sp)
    ctx->pc = 0x265becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x265bf0: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x265bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x265bf4: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x265bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265bf8: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x265bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x265bfc: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x265bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x265c00: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x265c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265c04: 0xc7a70094  lwc1        $f7, 0x94($sp)
    ctx->pc = 0x265c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x265c08: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x265c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265c0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x265c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x265c10: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x265c10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x265c14: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x265c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x265c18: 0x0  nop
    ctx->pc = 0x265c18u;
    // NOP
    // 0x265c1c: 0x4605021d  msub.s      $f8, $f0, $f5
    ctx->pc = 0x265c1cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
    // 0x265c20: 0x4607001a  mula.s      $f0, $f7
    ctx->pc = 0x265c20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x265c24: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x265c24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x265c28: 0x4605181a  mula.s      $f3, $f5
    ctx->pc = 0x265c28u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x265c2c: 0x4607301d  msub.s      $f0, $f6, $f7
    ctx->pc = 0x265c2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[7]));
    // 0x265c30: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x265c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x265c34: 0xe6080004  swc1        $f8, 0x4($s0)
    ctx->pc = 0x265c34u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x265c38: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x265c38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x265c3c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x265c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x265c40: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x265c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265c44: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x265c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265c48: 0xc7a900a4  lwc1        $f9, 0xA4($sp)
    ctx->pc = 0x265c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x265c4c: 0xc7aa0094  lwc1        $f10, 0x94($sp)
    ctx->pc = 0x265c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x265c50: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x265c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265c54: 0xc7a80098  lwc1        $f8, 0x98($sp)
    ctx->pc = 0x265c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x265c58: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x265c58u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x265c5c: 0x4602109c  madd.s      $f2, $f2, $f2
    ctx->pc = 0x265c5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x265c60: 0x4609481a  mula.s      $f9, $f9
    ctx->pc = 0x265c60u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x265c64: 0x460a501c  madd.s      $f0, $f10, $f10
    ctx->pc = 0x265c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x265c68: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x265c68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x265c6c: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x265c6cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x265c70: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x265c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x265c74: 0x4608401c  madd.s      $f0, $f8, $f8
    ctx->pc = 0x265c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
    // 0x265c78: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x265c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x265c7c: 0xc6070004  lwc1        $f7, 0x4($s0)
    ctx->pc = 0x265c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x265c80: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x265c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x265c84: 0x460630c2  mul.s       $f3, $f6, $f6
    ctx->pc = 0x265c84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x265c88: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x265c88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x265c8c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x265c8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x265c90: 0x4605289c  madd.s      $f2, $f5, $f5
    ctx->pc = 0x265c90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x265c94: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x265c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x265c98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x265c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x265c9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x265c9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265ca0: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x265CA0u;
    {
        const bool branch_taken_0x265ca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x265ca0) {
            ctx->pc = 0x265D88u;
            goto label_265d88;
        }
    }
    ctx->pc = 0x265CA8u;
    // 0x265ca8: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x265ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265cac: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x265cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265cb0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x265cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265cb4: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x265cb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x265cb8: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x265cb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x265cbc: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x265cbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x265cc0: 0x4600281c  madd.s      $f0, $f5, $f0
    ctx->pc = 0x265cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
    // 0x265cc4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x265cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265cc8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x265CC8u;
    {
        const bool branch_taken_0x265cc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x265CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265CC8u;
            // 0x265ccc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265cc8) {
            ctx->pc = 0x265CD4u;
            goto label_265cd4;
        }
    }
    ctx->pc = 0x265CD0u;
    // 0x265cd0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x265cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_265cd4:
    // 0x265cd4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x265CD4u;
    {
        const bool branch_taken_0x265cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265CD4u;
            // 0x265cd8: 0x46003007  neg.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265cd4) {
            ctx->pc = 0x265D08u;
            goto label_265d08;
        }
    }
    ctx->pc = 0x265CDCu;
    // 0x265cdc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x265cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x265ce0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x265ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265ce4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x265ce4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x265ce8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x265ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x265cec: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x265cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265cf0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x265cf0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x265cf4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x265cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x265cf8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x265cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265cfc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x265cfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x265d00: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x265d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x265d04: 0x0  nop
    ctx->pc = 0x265d04u;
    // NOP
label_265d08:
    // 0x265d08: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x265d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d0c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x265d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265d10: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x265d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265d14: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x265d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x265d18: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x265d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x265d1c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x265d1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x265d20: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x265d20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x265d24: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x265d24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x265d28: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x265d28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265d2c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x265D2Cu;
    {
        const bool branch_taken_0x265d2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x265D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265D2Cu;
            // 0x265d30: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d2c) {
            ctx->pc = 0x265D50u;
            goto label_265d50;
        }
    }
    ctx->pc = 0x265D34u;
    // 0x265d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x265d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x265d38: 0x0  nop
    ctx->pc = 0x265d38u;
    // NOP
    // 0x265d3c: 0x460100d6  rsqrt.s     $f3, $f0, $f1
    ctx->pc = 0x265d3cu;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
    // 0x265d40: 0x0  nop
    ctx->pc = 0x265d40u;
    // NOP
    // 0x265d44: 0x0  nop
    ctx->pc = 0x265d44u;
    // NOP
    // 0x265d48: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x265D48u;
    {
        const bool branch_taken_0x265d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d48) {
            ctx->pc = 0x265D50u;
            goto label_265d50;
        }
    }
    ctx->pc = 0x265D50u;
label_265d50:
    // 0x265d50: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x265d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d54: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265d58: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x265d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x265d5c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x265d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d60: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265d64: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x265d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x265d68: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x265d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d6c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265d70: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x265d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x265d74: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x265d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d78: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265d7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x265D7Cu;
    {
        const bool branch_taken_0x265d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265D7Cu;
            // 0x265d80: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d7c) {
            ctx->pc = 0x265DA8u;
            goto label_265da8;
        }
    }
    ctx->pc = 0x265D84u;
    // 0x265d84: 0x0  nop
    ctx->pc = 0x265d84u;
    // NOP
label_265d88:
    // 0x265d88: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x265d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d8c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x265d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x265d90: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x265d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d94: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x265d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x265d98: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x265d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d9c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x265d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x265da0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x265da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265da4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x265da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_265da8:
    // 0x265da8: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x265da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265dac: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x265dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265db0: 0xc6070004  lwc1        $f7, 0x4($s0)
    ctx->pc = 0x265db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x265db4: 0xc6860000  lwc1        $f6, 0x0($s4)
    ctx->pc = 0x265db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x265db8: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x265db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x265dbc: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x265dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265dc0: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x265dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265dc4: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x265dc4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x265dc8: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x265dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x265dcc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x265dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265dd0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x265dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265dd4: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x265dd4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x265dd8: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x265dd8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x265ddc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x265ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x265de0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x265de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265de4: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x265de4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x265de8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x265de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x265dec: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x265decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265df0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x265df0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x265df4: 0x46072018  adda.s      $f4, $f7
    ctx->pc = 0x265df4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x265df8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x265df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x265dfc: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x265dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265e00: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x265e00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x265e04: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x265e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x265e08: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x265e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x265e0c: 0x0  nop
    ctx->pc = 0x265e0cu;
    // NOP
label_265e10:
    // 0x265e10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x265e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265e14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x265e14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265e18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x265e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265e1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x265e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265e20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265e24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265e28: 0x3e00008  jr          $ra
    ctx->pc = 0x265E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265E28u;
            // 0x265e2c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265E30u;
}
