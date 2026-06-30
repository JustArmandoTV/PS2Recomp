#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292280
// Address: 0x292280 - 0x2924a0
void sub_00292280_0x292280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292280_0x292280");
#endif

    switch (ctx->pc) {
        case 0x292314u: goto label_292314;
        default: break;
    }

    ctx->pc = 0x292280u;

    // 0x292280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x292280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x292284: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x292284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x292288: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x292288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29228c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x29228cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x292290: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x292290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x292294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292298: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x292298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29229c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29229cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2922a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2922a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2922a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2922a8: 0x58180  sll         $s0, $a1, 6
    ctx->pc = 0x2922a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2922ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2922acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2922b0: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x2922b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2922b4: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2922b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2922b8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2922b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2922bc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2922bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2922c0: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x2922c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2922c4: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2922c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2922c8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2922c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2922cc: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x2922ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x2922d0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2922d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2922d4: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x2922d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2922d8: 0x4601151c  madd.s      $f20, $f2, $f1
    ctx->pc = 0x2922d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x2922dc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2922dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2922e0: 0x45010063  bc1t        . + 4 + (0x63 << 2)
    ctx->pc = 0x2922E0u;
    {
        const bool branch_taken_0x2922e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2922E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2922E0u;
            // 0x2922e4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922e0) {
            ctx->pc = 0x292470u;
            goto label_292470;
        }
    }
    ctx->pc = 0x2922E8u;
    // 0x2922e8: 0x460ca034  c.lt.s      $f20, $f12
    ctx->pc = 0x2922e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2922ec: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x2922ECu;
    {
        const bool branch_taken_0x2922ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2922ec) {
            ctx->pc = 0x292470u;
            goto label_292470;
        }
    }
    ctx->pc = 0x2922F4u;
    // 0x2922f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2922f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2922f8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2922f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2922fc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2922fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x292300: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x292300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x292304: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292304u;
    {
        const bool branch_taken_0x292304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292304u;
            // 0x292308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292304) {
            ctx->pc = 0x292318u;
            goto label_292318;
        }
    }
    ctx->pc = 0x29230Cu;
    // 0x29230c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x29230Cu;
    SET_GPR_U32(ctx, 31, 0x292314u);
    ctx->pc = 0x292310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29230Cu;
            // 0x292310: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292314u; }
        if (ctx->pc != 0x292314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292314u; }
        if (ctx->pc != 0x292314u) { return; }
    }
    ctx->pc = 0x292314u;
label_292314:
    // 0x292314: 0x0  nop
    ctx->pc = 0x292314u;
    // NOP
label_292318:
    // 0x292318: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x292318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29231c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29231cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x292320: 0x4600a0c7  neg.s       $f3, $f20
    ctx->pc = 0x292320u;
    ctx->f[3] = FPU_NEG_S(ctx->f[20]);
    // 0x292324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x292324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292328: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x292328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29232c: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x29232cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x292330: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x292330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x292334: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x292334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292338: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x292338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29233c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x29233cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x292340: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x292340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x292344: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x292344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292348: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x292348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x29234c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x29234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292350: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x292350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x292354: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x292354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292358: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x292358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x29235c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x29235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292360: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x292360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x292364: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x292364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292368: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x292368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x29236c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x29236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292370: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x292370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x292374: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x292374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292378: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x292378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x29237c: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x29237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292380: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x292380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x292384: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x292384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292388: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x292388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x29238c: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x29238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292390: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x292390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x292394: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x292394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292398: 0xe461002c  swc1        $f1, 0x2C($v1)
    ctx->pc = 0x292398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x29239c: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x29239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2923a0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x2923a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x2923a4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2923a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2923a8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2923a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2923ac: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2923acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2923b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2923b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2923b4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2923b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2923b8: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2923b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2923bc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2923bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2923c0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2923c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2923c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2923c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2923c8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2923c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2923cc: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2923ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2923d0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2923d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2923d4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2923d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2923d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2923d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2923dc: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2923dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2923e0: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x2923e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2923e4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2923e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2923e8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2923e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2923ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2923ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2923f0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2923f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2923f4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2923f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2923f8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2923f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2923fc: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2923fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292400: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x292400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x292404: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x292404u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x292408: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x292408u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x29240c: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x29240cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x292410: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x292410u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292414: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x292414u;
    {
        const bool branch_taken_0x292414 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x292418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292414u;
            // 0x292418: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292414) {
            ctx->pc = 0x292438u;
            goto label_292438;
        }
    }
    ctx->pc = 0x29241Cu;
    // 0x29241c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29241cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292420: 0x0  nop
    ctx->pc = 0x292420u;
    // NOP
    // 0x292424: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x292424u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x292428: 0x0  nop
    ctx->pc = 0x292428u;
    // NOP
    // 0x29242c: 0x0  nop
    ctx->pc = 0x29242cu;
    // NOP
    // 0x292430: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x292430u;
    {
        const bool branch_taken_0x292430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292430) {
            ctx->pc = 0x292438u;
            goto label_292438;
        }
    }
    ctx->pc = 0x292438u;
label_292438:
    // 0x292438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29243c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x29243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292440: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x292440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x292444: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x292444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x292448: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x292448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29244c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29244cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x292450: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x292450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x292454: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x292454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292458: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x292458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29245c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x29245cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x292460: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x292460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292464: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x292464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x292468: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x292468u;
    {
        const bool branch_taken_0x292468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29246Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292468u;
            // 0x29246c: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292468) {
            ctx->pc = 0x292478u;
            goto label_292478;
        }
    }
    ctx->pc = 0x292470u;
label_292470:
    // 0x292470: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x292470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292474: 0x0  nop
    ctx->pc = 0x292474u;
    // NOP
label_292478:
    // 0x292478: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x292478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29247c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x29247cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292480: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x292480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x292484: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x292484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292488: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x292488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29248c: 0x3e00008  jr          $ra
    ctx->pc = 0x29248Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29248Cu;
            // 0x292490: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x292494u;
    // 0x292494: 0x0  nop
    ctx->pc = 0x292494u;
    // NOP
    // 0x292498: 0x0  nop
    ctx->pc = 0x292498u;
    // NOP
    // 0x29249c: 0x0  nop
    ctx->pc = 0x29249cu;
    // NOP
}
