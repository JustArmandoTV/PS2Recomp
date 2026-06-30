#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131020
// Address: 0x131020 - 0x1314c0
void sub_00131020_0x131020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131020_0x131020");
#endif

    switch (ctx->pc) {
        case 0x131070u: goto label_131070;
        case 0x131080u: goto label_131080;
        default: break;
    }

    ctx->pc = 0x131020u;

    // 0x131020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x131020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x131024: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x131024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131028: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x131028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13102c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13102cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x131030: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x131030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x131034: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x131034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x131038: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x131038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13103c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13103cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131040: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x131040u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x131044: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x131044u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x131048: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x131048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13104c: 0xc45655d4  lwc1        $f22, 0x55D4($v0)
    ctx->pc = 0x13104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x131050: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x131050u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x131054: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x131054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x131058: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x131058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13105c: 0xc45555d0  lwc1        $f21, 0x55D0($v0)
    ctx->pc = 0x13105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x131060: 0xc46d0004  lwc1        $f13, 0x4($v1)
    ctx->pc = 0x131060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x131064: 0xc46e0008  lwc1        $f14, 0x8($v1)
    ctx->pc = 0x131064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x131068: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x131068u;
    SET_GPR_U32(ctx, 31, 0x131070u);
    ctx->pc = 0x13106Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131068u;
            // 0x13106c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131070u; }
        if (ctx->pc != 0x131070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131070u; }
        if (ctx->pc != 0x131070u) { return; }
    }
    ctx->pc = 0x131070u;
label_131070:
    // 0x131070: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x131070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131074: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x131074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x131078: 0xc04cca0  jal         func_133280
    ctx->pc = 0x131078u;
    SET_GPR_U32(ctx, 31, 0x131080u);
    ctx->pc = 0x13107Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131078u;
            // 0x13107c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131080u; }
        if (ctx->pc != 0x131080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131080u; }
        if (ctx->pc != 0x131080u) { return; }
    }
    ctx->pc = 0x131080u;
label_131080:
    // 0x131080: 0x4600b087  neg.s       $f2, $f22
    ctx->pc = 0x131080u;
    ctx->f[2] = FPU_NEG_S(ctx->f[22]);
    // 0x131084: 0x46141040  add.s       $f1, $f2, $f20
    ctx->pc = 0x131084u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x131088: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x131088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13108c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13108cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131090: 0x45020103  bc1fl       . + 4 + (0x103 << 2)
    ctx->pc = 0x131090u;
    {
        const bool branch_taken_0x131090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131090) {
            ctx->pc = 0x131094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131090u;
            // 0x131094: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x131098u;
    // 0x131098: 0x4600a8c7  neg.s       $f3, $f21
    ctx->pc = 0x131098u;
    ctx->f[3] = FPU_NEG_S(ctx->f[21]);
    // 0x13109c: 0x46141841  sub.s       $f1, $f3, $f20
    ctx->pc = 0x13109cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x1310a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1310a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1310a4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1310A4u;
    {
        const bool branch_taken_0x1310a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1310a4) {
            ctx->pc = 0x1310A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1310A4u;
            // 0x1310a8: 0x46141041  sub.s       $f1, $f2, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1310B8u;
            goto label_1310b8;
        }
    }
    ctx->pc = 0x1310ACu;
    // 0x1310ac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1310acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1310b0: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1310B0u;
    {
        const bool branch_taken_0x1310b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1310b0) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x1310B8u;
label_1310b8:
    // 0x1310b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1310b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1310bc: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1310BCu;
    {
        const bool branch_taken_0x1310bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1310bc) {
            ctx->pc = 0x1310C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1310BCu;
            // 0x1310c0: 0x46141840  add.s       $f1, $f3, $f20 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1310CCu;
            goto label_1310cc;
        }
    }
    ctx->pc = 0x1310C4u;
    // 0x1310c4: 0x36100104  ori         $s0, $s0, 0x104
    ctx->pc = 0x1310c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)260);
    // 0x1310c8: 0x46141840  add.s       $f1, $f3, $f20
    ctx->pc = 0x1310c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_1310cc:
    // 0x1310cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1310ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1310d0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1310D0u;
    {
        const bool branch_taken_0x1310d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1310d0) {
            ctx->pc = 0x1310D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1310D0u;
            // 0x1310d4: 0x8f838160  lw          $v1, -0x7EA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1310E0u;
            goto label_1310e0;
        }
    }
    ctx->pc = 0x1310D8u;
    // 0x1310d8: 0x36100208  ori         $s0, $s0, 0x208
    ctx->pc = 0x1310d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)520);
    // 0x1310dc: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x1310dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
label_1310e0:
    // 0x1310e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1310e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1310e4: 0x10620077  beq         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1310E4u;
    {
        const bool branch_taken_0x1310e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1310e4) {
            ctx->pc = 0x1312C4u;
            goto label_1312c4;
        }
    }
    ctx->pc = 0x1310ECu;
    // 0x1310ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1310ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1310f0: 0xc4424ee0  lwc1        $f2, 0x4EE0($v0)
    ctx->pc = 0x1310f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1310f4: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x1310f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1310f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1310f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1310fc: 0xc4414ee4  lwc1        $f1, 0x4EE4($v0)
    ctx->pc = 0x1310fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131100: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x131100u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131104: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x131104u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x131108: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x131108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13110c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x13110Cu;
    {
        const bool branch_taken_0x13110c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13110c) {
            ctx->pc = 0x131110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13110Cu;
            // 0x131110: 0x4600a147  neg.s       $f5, $f20 (Delay Slot)
        ctx->f[5] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13111Cu;
            goto label_13111c;
        }
    }
    ctx->pc = 0x131114u;
    // 0x131114: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x131114u;
    {
        const bool branch_taken_0x131114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131114u;
            // 0x131118: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131114) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x13111Cu;
label_13111c:
    // 0x13111c: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x13111cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131120: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x131120u;
    {
        const bool branch_taken_0x131120 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131120) {
            ctx->pc = 0x13112Cu;
            goto label_13112c;
        }
    }
    ctx->pc = 0x131128u;
    // 0x131128: 0x36101000  ori         $s0, $s0, 0x1000
    ctx->pc = 0x131128u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4096);
label_13112c:
    // 0x13112c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13112cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x131130: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x131130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x131134: 0xc4414eec  lwc1        $f1, 0x4EEC($v0)
    ctx->pc = 0x131134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131138: 0xc4624ee8  lwc1        $f2, 0x4EE8($v1)
    ctx->pc = 0x131138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13113c: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x13113cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131140: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x131140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x131144: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x131144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131148: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x131148u;
    {
        const bool branch_taken_0x131148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131148) {
            ctx->pc = 0x131158u;
            goto label_131158;
        }
    }
    ctx->pc = 0x131150u;
    // 0x131150: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x131150u;
    {
        const bool branch_taken_0x131150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131150u;
            // 0x131154: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131150) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x131158u;
label_131158:
    // 0x131158: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x131158u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13115c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13115Cu;
    {
        const bool branch_taken_0x13115c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13115c) {
            ctx->pc = 0x131168u;
            goto label_131168;
        }
    }
    ctx->pc = 0x131164u;
    // 0x131164: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x131164u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
label_131168:
    // 0x131168: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x131168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13116c: 0xc4424ed0  lwc1        $f2, 0x4ED0($v0)
    ctx->pc = 0x13116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131170: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x131170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131174: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x131174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x131178: 0xc4414ed4  lwc1        $f1, 0x4ED4($v0)
    ctx->pc = 0x131178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13117c: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x13117cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131180: 0x4602205c  madd.s      $f1, $f4, $f2
    ctx->pc = 0x131180u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x131184: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x131184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131188: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x131188u;
    {
        const bool branch_taken_0x131188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131188) {
            ctx->pc = 0x131198u;
            goto label_131198;
        }
    }
    ctx->pc = 0x131190u;
    // 0x131190: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x131190u;
    {
        const bool branch_taken_0x131190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131190u;
            // 0x131194: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131190) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x131198u;
label_131198:
    // 0x131198: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x131198u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13119c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13119Cu;
    {
        const bool branch_taken_0x13119c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13119c) {
            ctx->pc = 0x1311A8u;
            goto label_1311a8;
        }
    }
    ctx->pc = 0x1311A4u;
    // 0x1311a4: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x1311a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
label_1311a8:
    // 0x1311a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1311a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1311ac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1311acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1311b0: 0xc4414edc  lwc1        $f1, 0x4EDC($v0)
    ctx->pc = 0x1311b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1311b4: 0xc4624ed8  lwc1        $f2, 0x4ED8($v1)
    ctx->pc = 0x1311b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1311b8: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x1311b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1311bc: 0x4602205c  madd.s      $f1, $f4, $f2
    ctx->pc = 0x1311bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x1311c0: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x1311c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1311c4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1311C4u;
    {
        const bool branch_taken_0x1311c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1311c4) {
            ctx->pc = 0x1311D4u;
            goto label_1311d4;
        }
    }
    ctx->pc = 0x1311CCu;
    // 0x1311cc: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1311CCu;
    {
        const bool branch_taken_0x1311cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1311D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1311CCu;
            // 0x1311d0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311cc) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x1311D4u;
label_1311d4:
    // 0x1311d4: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x1311d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1311d8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1311D8u;
    {
        const bool branch_taken_0x1311d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1311d8) {
            ctx->pc = 0x1311E4u;
            goto label_1311e4;
        }
    }
    ctx->pc = 0x1311E0u;
    // 0x1311e0: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x1311e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
label_1311e4:
    // 0x1311e4: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1311E4u;
    {
        const bool branch_taken_0x1311e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1311e4) {
            ctx->pc = 0x1311E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1311E4u;
            // 0x1311e8: 0x3202003e  andi        $v0, $s0, 0x3E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)62);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1311F4u;
            goto label_1311f4;
        }
    }
    ctx->pc = 0x1311ECu;
    // 0x1311ec: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1311ECu;
    {
        const bool branch_taken_0x1311ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1311F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1311ECu;
            // 0x1311f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311ec) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x1311F4u;
label_1311f4:
    // 0x1311f4: 0x544000aa  bnel        $v0, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x1311F4u;
    {
        const bool branch_taken_0x1311f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1311f4) {
            ctx->pc = 0x1311F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1311F4u;
            // 0x1311f8: 0x3202003e  andi        $v0, $s0, 0x3E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)62);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x1311FCu;
    // 0x1311fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1311fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x131200: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x131200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x131204: 0xc4414ef4  lwc1        $f1, 0x4EF4($v0)
    ctx->pc = 0x131204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131208: 0xc4624ef0  lwc1        $f2, 0x4EF0($v1)
    ctx->pc = 0x131208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13120c: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x13120cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131210: 0x4602205c  madd.s      $f1, $f4, $f2
    ctx->pc = 0x131210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x131214: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x131214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131218: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x131218u;
    {
        const bool branch_taken_0x131218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131218) {
            ctx->pc = 0x131228u;
            goto label_131228;
        }
    }
    ctx->pc = 0x131220u;
    // 0x131220: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x131220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x131224: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x131224u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_131228:
    // 0x131228: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x131228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13122c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13122cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x131230: 0xc4414efc  lwc1        $f1, 0x4EFC($v0)
    ctx->pc = 0x131230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131234: 0xc4624ef8  lwc1        $f2, 0x4EF8($v1)
    ctx->pc = 0x131234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131238: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x131238u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13123c: 0x4602205c  madd.s      $f1, $f4, $f2
    ctx->pc = 0x13123cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x131240: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x131240u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131244: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x131244u;
    {
        const bool branch_taken_0x131244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131244) {
            ctx->pc = 0x131254u;
            goto label_131254;
        }
    }
    ctx->pc = 0x13124Cu;
    // 0x13124c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x13124cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x131250: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x131250u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_131254:
    // 0x131254: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x131254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x131258: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x131258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13125c: 0xc4414f04  lwc1        $f1, 0x4F04($v0)
    ctx->pc = 0x13125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131260: 0xc4624f00  lwc1        $f2, 0x4F00($v1)
    ctx->pc = 0x131260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131264: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x131264u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131268: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x131268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x13126c: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x13126cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131270: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x131270u;
    {
        const bool branch_taken_0x131270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131270) {
            ctx->pc = 0x131280u;
            goto label_131280;
        }
    }
    ctx->pc = 0x131278u;
    // 0x131278: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x131278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x13127c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x13127cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_131280:
    // 0x131280: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x131280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x131284: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x131284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x131288: 0xc4414f0c  lwc1        $f1, 0x4F0C($v0)
    ctx->pc = 0x131288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13128c: 0xc4624f08  lwc1        $f2, 0x4F08($v1)
    ctx->pc = 0x13128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131290: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x131290u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131294: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x131294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x131298: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x131298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13129c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x13129Cu;
    {
        const bool branch_taken_0x13129c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13129c) {
            ctx->pc = 0x1312A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13129Cu;
            // 0x1312a0: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1312B0u;
            goto label_1312b0;
        }
    }
    ctx->pc = 0x1312A4u;
    // 0x1312a4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1312a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1312a8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1312a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1312ac: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1312acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_1312b0:
    // 0x1312b0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1312b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1312b4: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1312B4u;
    {
        const bool branch_taken_0x1312b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1312b4) {
            ctx->pc = 0x13149Cu;
            goto label_13149c;
        }
    }
    ctx->pc = 0x1312BCu;
    // 0x1312bc: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1312BCu;
    {
        const bool branch_taken_0x1312bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1312BCu;
            // 0x1312c0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312bc) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x1312C4u;
label_1312c4:
    // 0x1312c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1312c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1312c8: 0xc4414ed0  lwc1        $f1, 0x4ED0($v0)
    ctx->pc = 0x1312c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1312cc: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x1312ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1312d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1312d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1312d4: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x1312d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1312d8: 0xc4404ed4  lwc1        $f0, 0x4ED4($v0)
    ctx->pc = 0x1312d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1312dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1312dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1312e0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1312e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1312e4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1312E4u;
    {
        const bool branch_taken_0x1312e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1312e4) {
            ctx->pc = 0x1312E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1312E4u;
            // 0x1312e8: 0x4600a0c7  neg.s       $f3, $f20 (Delay Slot)
        ctx->f[3] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1312F4u;
            goto label_1312f4;
        }
    }
    ctx->pc = 0x1312ECu;
    // 0x1312ec: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1312ECu;
    {
        const bool branch_taken_0x1312ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1312ECu;
            // 0x1312f0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312ec) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x1312F4u;
label_1312f4:
    // 0x1312f4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1312f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1312f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1312F8u;
    {
        const bool branch_taken_0x1312f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1312f8) {
            ctx->pc = 0x131304u;
            goto label_131304;
        }
    }
    ctx->pc = 0x131300u;
    // 0x131300: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x131300u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
label_131304:
    // 0x131304: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x131304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x131308: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x131308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13130c: 0xc4614ed8  lwc1        $f1, 0x4ED8($v1)
    ctx->pc = 0x13130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131310: 0xc4404edc  lwc1        $f0, 0x4EDC($v0)
    ctx->pc = 0x131310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131314: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x131314u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x131318: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x131318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13131c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x13131cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131320: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x131320u;
    {
        const bool branch_taken_0x131320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131320) {
            ctx->pc = 0x131330u;
            goto label_131330;
        }
    }
    ctx->pc = 0x131328u;
    // 0x131328: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x131328u;
    {
        const bool branch_taken_0x131328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13132Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131328u;
            // 0x13132c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131328) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x131330u;
label_131330:
    // 0x131330: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x131330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131334: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x131334u;
    {
        const bool branch_taken_0x131334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131334) {
            ctx->pc = 0x131340u;
            goto label_131340;
        }
    }
    ctx->pc = 0x13133Cu;
    // 0x13133c: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x13133cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
label_131340:
    // 0x131340: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x131340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x131344: 0xc4414ee0  lwc1        $f1, 0x4EE0($v0)
    ctx->pc = 0x131344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131348: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x131348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13134c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x131350: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x131350u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x131354: 0xc4404ee4  lwc1        $f0, 0x4EE4($v0)
    ctx->pc = 0x131354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131358: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x131358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13135c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x13135cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131360: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x131360u;
    {
        const bool branch_taken_0x131360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131360) {
            ctx->pc = 0x131370u;
            goto label_131370;
        }
    }
    ctx->pc = 0x131368u;
    // 0x131368: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x131368u;
    {
        const bool branch_taken_0x131368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131368u;
            // 0x13136c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131368) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x131370u;
label_131370:
    // 0x131370: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x131370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131374: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x131374u;
    {
        const bool branch_taken_0x131374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131374) {
            ctx->pc = 0x131380u;
            goto label_131380;
        }
    }
    ctx->pc = 0x13137Cu;
    // 0x13137c: 0x36101000  ori         $s0, $s0, 0x1000
    ctx->pc = 0x13137cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4096);
label_131380:
    // 0x131380: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x131380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x131384: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x131384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x131388: 0xc4614ee8  lwc1        $f1, 0x4EE8($v1)
    ctx->pc = 0x131388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13138c: 0xc4404eec  lwc1        $f0, 0x4EEC($v0)
    ctx->pc = 0x13138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131390: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x131390u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x131394: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x131394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x131398: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x131398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13139c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13139Cu;
    {
        const bool branch_taken_0x13139c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13139c) {
            ctx->pc = 0x1313ACu;
            goto label_1313ac;
        }
    }
    ctx->pc = 0x1313A4u;
    // 0x1313a4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1313A4u;
    {
        const bool branch_taken_0x1313a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1313A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1313A4u;
            // 0x1313a8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313a4) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x1313ACu;
label_1313ac:
    // 0x1313ac: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1313acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1313b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1313B0u;
    {
        const bool branch_taken_0x1313b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1313b0) {
            ctx->pc = 0x1313BCu;
            goto label_1313bc;
        }
    }
    ctx->pc = 0x1313B8u;
    // 0x1313b8: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x1313b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
label_1313bc:
    // 0x1313bc: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1313BCu;
    {
        const bool branch_taken_0x1313bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1313bc) {
            ctx->pc = 0x1313C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1313BCu;
            // 0x1313c0: 0x3202003e  andi        $v0, $s0, 0x3E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)62);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1313CCu;
            goto label_1313cc;
        }
    }
    ctx->pc = 0x1313C4u;
    // 0x1313c4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1313C4u;
    {
        const bool branch_taken_0x1313c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1313C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1313C4u;
            // 0x1313c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313c4) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x1313CCu;
label_1313cc:
    // 0x1313cc: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1313CCu;
    {
        const bool branch_taken_0x1313cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1313cc) {
            ctx->pc = 0x13149Cu;
            goto label_13149c;
        }
    }
    ctx->pc = 0x1313D4u;
    // 0x1313d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1313d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1313d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1313d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1313dc: 0xc4614ef0  lwc1        $f1, 0x4EF0($v1)
    ctx->pc = 0x1313dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1313e0: 0xc4404ef4  lwc1        $f0, 0x4EF4($v0)
    ctx->pc = 0x1313e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1313e4: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x1313e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1313e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1313e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1313ec: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1313ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1313f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1313F0u;
    {
        const bool branch_taken_0x1313f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1313f0) {
            ctx->pc = 0x131400u;
            goto label_131400;
        }
    }
    ctx->pc = 0x1313F8u;
    // 0x1313f8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1313f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1313fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1313fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_131400:
    // 0x131400: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x131400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x131404: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x131404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x131408: 0xc4614ef8  lwc1        $f1, 0x4EF8($v1)
    ctx->pc = 0x131408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13140c: 0xc4404efc  lwc1        $f0, 0x4EFC($v0)
    ctx->pc = 0x13140cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131410: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x131410u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x131414: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x131414u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x131418: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x131418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13141c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13141Cu;
    {
        const bool branch_taken_0x13141c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13141c) {
            ctx->pc = 0x13142Cu;
            goto label_13142c;
        }
    }
    ctx->pc = 0x131424u;
    // 0x131424: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x131424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x131428: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x131428u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_13142c:
    // 0x13142c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13142cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x131430: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x131430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x131434: 0xc4614f00  lwc1        $f1, 0x4F00($v1)
    ctx->pc = 0x131434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131438: 0xc4404f04  lwc1        $f0, 0x4F04($v0)
    ctx->pc = 0x131438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13143c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x13143cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x131440: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x131440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x131444: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x131444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131448: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x131448u;
    {
        const bool branch_taken_0x131448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131448) {
            ctx->pc = 0x131458u;
            goto label_131458;
        }
    }
    ctx->pc = 0x131450u;
    // 0x131450: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x131450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x131454: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x131454u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_131458:
    // 0x131458: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x131458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13145c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13145cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x131460: 0xc4614f08  lwc1        $f1, 0x4F08($v1)
    ctx->pc = 0x131460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131464: 0xc4404f0c  lwc1        $f0, 0x4F0C($v0)
    ctx->pc = 0x131464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131468: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x131468u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x13146c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13146cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x131470: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x131470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131474: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x131474u;
    {
        const bool branch_taken_0x131474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131474) {
            ctx->pc = 0x131478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131474u;
            // 0x131478: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131488u;
            goto label_131488;
        }
    }
    ctx->pc = 0x13147Cu;
    // 0x13147c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x13147cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x131480: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x131480u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x131484: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x131484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_131488:
    // 0x131488: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x131488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x13148c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13148Cu;
    {
        const bool branch_taken_0x13148c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13148c) {
            ctx->pc = 0x13149Cu;
            goto label_13149c;
        }
    }
    ctx->pc = 0x131494u;
    // 0x131494: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x131494u;
    {
        const bool branch_taken_0x131494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131494u;
            // 0x131498: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131494) {
            ctx->pc = 0x1314A0u;
            goto label_1314a0;
        }
    }
    ctx->pc = 0x13149Cu;
label_13149c:
    // 0x13149c: 0x3202003e  andi        $v0, $s0, 0x3E
    ctx->pc = 0x13149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)62);
label_1314a0:
    // 0x1314a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1314a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1314a4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1314a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1314a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1314a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1314ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1314acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1314b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1314b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1314b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1314b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1314b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1314B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1314BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1314B8u;
            // 0x1314bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1314C0u;
}
