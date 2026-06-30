#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011A2F0
// Address: 0x11a2f0 - 0x11ae80
void sub_0011A2F0_0x11a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A2F0_0x11a2f0");
#endif

    switch (ctx->pc) {
        case 0x11a338u: goto label_11a338;
        case 0x11a430u: goto label_11a430;
        case 0x11a530u: goto label_11a530;
        case 0x11a5a8u: goto label_11a5a8;
        case 0x11a5e0u: goto label_11a5e0;
        case 0x11a5e4u: goto label_11a5e4;
        case 0x11a654u: goto label_11a654;
        case 0x11a680u: goto label_11a680;
        case 0x11a700u: goto label_11a700;
        case 0x11a704u: goto label_11a704;
        case 0x11a72cu: goto label_11a72c;
        case 0x11a730u: goto label_11a730;
        case 0x11a7a4u: goto label_11a7a4;
        case 0x11a80cu: goto label_11a80c;
        case 0x11a874u: goto label_11a874;
        case 0x11a93cu: goto label_11a93c;
        case 0x11a9e8u: goto label_11a9e8;
        case 0x11a9ecu: goto label_11a9ec;
        case 0x11a9f8u: goto label_11a9f8;
        case 0x11a9fcu: goto label_11a9fc;
        case 0x11aba4u: goto label_11aba4;
        default: break;
    }

    ctx->pc = 0x11a2f0u;

label_11a2f0:
    // 0x11a2f0: 0x440d6000  mfc1        $t5, $f12
    ctx->pc = 0x11a2f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x11a2f4: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11a2f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11a2f8: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11a2f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11a2fc: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x11a2fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x11a300: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x11a300u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x11a304: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x11a304u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x11a308: 0x14f782a  slt         $t7, $t2, $t7
    ctx->pc = 0x11a308u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11a30c: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A30Cu;
    {
        const bool branch_taken_0x11a30c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A30Cu;
            // 0x11a310: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a30c) {
            ctx->pc = 0x11A31Cu;
            goto label_11a31c;
        }
    }
    ctx->pc = 0x11A314u;
    // 0x11a314: 0x3e00008  jr          $ra
    ctx->pc = 0x11A314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A314u;
            // 0x11a318: 0xc5e0f70c  lwc1        $f0, -0x8F4($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294965004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A31Cu;
label_11a31c:
    // 0x11a31c: 0x5a10008  bgez        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A31Cu;
    {
        const bool branch_taken_0x11a31c = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x11A320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A31Cu;
            // 0x11a320: 0x3c0e004a  lui         $t6, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a31c) {
            ctx->pc = 0x11A340u;
            goto label_11a340;
        }
    }
    ctx->pc = 0x11A324u;
    // 0x11a324: 0x460c6041  sub.s       $f1, $f12, $f12
    ctx->pc = 0x11a324u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11a328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11a328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a32c: 0x0  nop
    ctx->pc = 0x11a32cu;
    // NOP
    // 0x11a330: 0x0  nop
    ctx->pc = 0x11a330u;
    // NOP
    // 0x11a334: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11a334u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_11a338:
    // 0x11a338: 0x3e00008  jr          $ra
    ctx->pc = 0x11A338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A340u;
label_11a340:
    // 0x11a340: 0x1aa5824  and         $t3, $t5, $t2
    ctx->pc = 0x11a340u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x11a344: 0xd65c3  sra         $t4, $t5, 23
    ctx->pc = 0x11a344u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 13), 23));
    // 0x11a348: 0x35cefb20  ori         $t6, $t6, 0xFB20
    ctx->pc = 0x11a348u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)64288);
    // 0x11a34c: 0x16e7021  addu        $t6, $t3, $t6
    ctx->pc = 0x11a34cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x11a350: 0x3c0d0080  lui         $t5, 0x80
    ctx->pc = 0x11a350u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)128 << 16));
    // 0x11a354: 0x1cd4824  and         $t1, $t6, $t5
    ctx->pc = 0x11a354u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x11a358: 0x3c0f3f80  lui         $t7, 0x3F80
    ctx->pc = 0x11a358u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
    // 0x11a35c: 0x12f7826  xor         $t7, $t1, $t7
    ctx->pc = 0x11a35cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 15));
    // 0x11a360: 0x256e000f  addiu       $t6, $t3, 0xF
    ctx->pc = 0x11a360u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 15));
    // 0x11a364: 0x16f6825  or          $t5, $t3, $t7
    ctx->pc = 0x11a364u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) | GPR_U64(ctx, 15));
    // 0x11a368: 0x1ca7024  and         $t6, $t6, $t2
    ctx->pc = 0x11a368u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 10));
    // 0x11a36c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a36cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a370: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x11a370u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a374: 0x25eff710  addiu       $t7, $t7, -0x8F0
    ctx->pc = 0x11a374u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965008));
    // 0x11a378: 0x258cff81  addiu       $t4, $t4, -0x7F
    ctx->pc = 0x11a378u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967169));
    // 0x11a37c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a380: 0x29ce0010  slti        $t6, $t6, 0x10
    ctx->pc = 0x11a380u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x11a384: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x11a384u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11a388: 0x97dc3  sra         $t7, $t1, 23
    ctx->pc = 0x11a388u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 9), 23));
    // 0x11a38c: 0x11c0002b  beqz        $t6, . + 4 + (0x2B << 2)
    ctx->pc = 0x11A38Cu;
    {
        const bool branch_taken_0x11a38c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A38Cu;
            // 0x11a390: 0x18f6021  addu        $t4, $t4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a38c) {
            ctx->pc = 0x11A43Cu;
            goto label_11a43c;
        }
    }
    ctx->pc = 0x11A394u;
    // 0x11a394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11a394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a398: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x11a398u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a39c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x11A39Cu;
    {
        const bool branch_taken_0x11a39c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A39Cu;
            // 0x11a3a0: 0x3c0d0063  lui         $t5, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a39c) {
            ctx->pc = 0x11A3D4u;
            goto label_11a3d4;
        }
    }
    ctx->pc = 0x11A3A4u;
    // 0x11a3a4: 0x1180ffe4  beqz        $t4, . + 4 + (-0x1C << 2)
    ctx->pc = 0x11A3A4u;
    {
        const bool branch_taken_0x11a3a4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3A4u;
            // 0x11a3a8: 0x3c0d0063  lui         $t5, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3a4) {
            ctx->pc = 0x11A338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a338;
        }
    }
    ctx->pc = 0x11A3ACu;
    // 0x11a3ac: 0x448c3000  mtc1        $t4, $f6
    ctx->pc = 0x11a3acu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11a3b0: 0x25adf714  addiu       $t5, $t5, -0x8EC
    ctx->pc = 0x11a3b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965012));
    // 0x11a3b4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a3b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a3b8: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x11a3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x11a3bc: 0x25eff718  addiu       $t7, $t7, -0x8E8
    ctx->pc = 0x11a3bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965016));
    // 0x11a3c0: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11a3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a3c4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a3c8: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x11a3c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11a3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11A3CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3CCu;
            // 0x11a3d0: 0x4601301c  madd.s      $f0, $f6, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A3D4u;
label_11a3d4:
    // 0x11a3d4: 0x460c6082  mul.s       $f2, $f12, $f12
    ctx->pc = 0x11a3d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x11a3d8: 0x25adf71c  addiu       $t5, $t5, -0x8E4
    ctx->pc = 0x11a3d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965020));
    // 0x11a3dc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a3dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a3e0: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x11a3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a3e4: 0x25eff720  addiu       $t7, $t7, -0x8E0
    ctx->pc = 0x11a3e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965024));
    // 0x11a3e8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a3ec: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x11a3ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x11a3f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a3f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a3f4: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A3F4u;
    {
        const bool branch_taken_0x11a3f4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3F4u;
            // 0x11a3f8: 0x46001082  mul.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3f4) {
            ctx->pc = 0x11A404u;
            goto label_11a404;
        }
    }
    ctx->pc = 0x11A3FCu;
    // 0x11a3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x11A3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3FCu;
            // 0x11a400: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A404u;
label_11a404:
    // 0x11a404: 0x448c3000  mtc1        $t4, $f6
    ctx->pc = 0x11a404u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11a408: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a408u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11a40c: 0x25adf718  addiu       $t5, $t5, -0x8E8
    ctx->pc = 0x11a40cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965016));
    // 0x11a410: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a410u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a414: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x11a414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x11a418: 0x25eff714  addiu       $t7, $t7, -0x8EC
    ctx->pc = 0x11a418u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965012));
    // 0x11a41c: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11a41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a420: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a424: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11a424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11a428: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x11a428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x11a42c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x11a42cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_11a430:
    // 0x11a430: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x11a430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11a434: 0x3e00008  jr          $ra
    ctx->pc = 0x11A434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A434u;
            // 0x11a438: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A43Cu;
label_11a43c:
    // 0x11a43c: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a43cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11a440: 0x448c3000  mtc1        $t4, $f6
    ctx->pc = 0x11a440u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11a444: 0x25adf724  addiu       $t5, $t5, -0x8DC
    ctx->pc = 0x11a444u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965028));
    // 0x11a448: 0x3c0effcf  lui         $t6, 0xFFCF
    ctx->pc = 0x11a448u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65487 << 16));
    // 0x11a44c: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11a44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a450: 0x3c0f0035  lui         $t7, 0x35
    ctx->pc = 0x11a450u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)53 << 16));
    // 0x11a454: 0x35ce5c30  ori         $t6, $t6, 0x5C30
    ctx->pc = 0x11a454u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)23600);
    // 0x11a458: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x11a458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x11a45c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11a45cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11a460: 0x35efc288  ori         $t7, $t7, 0xC288
    ctx->pc = 0x11a460u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)49800);
    // 0x11a464: 0x1eb7823  subu        $t7, $t7, $t3
    ctx->pc = 0x11a464u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x11a468: 0x16e4821  addu        $t1, $t3, $t6
    ctx->pc = 0x11a468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x11a46c: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x11a46cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x11a470: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a470u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11a474: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a474u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a478: 0x25adf72c  addiu       $t5, $t5, -0x8D4
    ctx->pc = 0x11a478u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965036));
    // 0x11a47c: 0x0  nop
    ctx->pc = 0x11a47cu;
    // NOP
    // 0x11a480: 0x0  nop
    ctx->pc = 0x11a480u;
    // NOP
    // 0x11a484: 0x460061c3  div.s       $f7, $f12, $f0
    ctx->pc = 0x11a484u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[7] = ctx->f[12] / ctx->f[0];
    // 0x11a488: 0x25eff728  addiu       $t7, $t7, -0x8D8
    ctx->pc = 0x11a488u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965032));
    // 0x11a48c: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x11a48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a490: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a490u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11a494: 0x25adf734  addiu       $t5, $t5, -0x8CC
    ctx->pc = 0x11a494u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965044));
    // 0x11a498: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x11a498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a49c: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a49cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11a4a0: 0x46073942  mul.s       $f5, $f7, $f7
    ctx->pc = 0x11a4a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x11a4a4: 0x25adf73c  addiu       $t5, $t5, -0x8C4
    ctx->pc = 0x11a4a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965052));
    // 0x11a4a8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a4ac: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a4acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a4b0: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x11a4b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x11a4b4: 0x25eff730  addiu       $t7, $t7, -0x8D0
    ctx->pc = 0x11a4b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965040));
    // 0x11a4b8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a4bc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a4bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a4c0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11a4c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11a4c4: 0x25eff738  addiu       $t7, $t7, -0x8C8
    ctx->pc = 0x11a4c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965048));
    // 0x11a4c8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11a4c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11a4cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a4ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a4d0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11a4d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11a4d4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11a4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11a4d8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a4dc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11a4dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11a4e0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a4e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a4e4: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x11a4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a4e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a4e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a4ec: 0x25eff740  addiu       $t7, $t7, -0x8C0
    ctx->pc = 0x11a4ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965056));
    // 0x11a4f0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11a4f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11a4f4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11a4f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11a4f8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a4fc: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x11a4fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11a500: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a504: 0x19200018  blez        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x11A504u;
    {
        const bool branch_taken_0x11a504 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x11A508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A504u;
            // 0x11a508: 0x4600289c  madd.s      $f2, $f5, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a504) {
            ctx->pc = 0x11A568u;
            goto label_11a568;
        }
    }
    ctx->pc = 0x11A50Cu;
    // 0x11a50c: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a50cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11a510: 0x25adf720  addiu       $t5, $t5, -0x8E0
    ctx->pc = 0x11a510u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965024));
    // 0x11a514: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11a514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a518: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11a518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11a51c: 0x15800006  bnez        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A51Cu;
    {
        const bool branch_taken_0x11a51c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A51Cu;
            // 0x11a520: 0x460c00c2  mul.s       $f3, $f0, $f12 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a51c) {
            ctx->pc = 0x11A538u;
            goto label_11a538;
        }
    }
    ctx->pc = 0x11A524u;
    // 0x11a524: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x11a524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11a528: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x11a528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x11a52c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x11a52cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_11a530:
    // 0x11a530: 0x3e00008  jr          $ra
    ctx->pc = 0x11A530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A530u;
            // 0x11a534: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A538u;
label_11a538:
    // 0x11a538: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x11a538u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11a53c: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a53cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11a540: 0x25adf718  addiu       $t5, $t5, -0x8E8
    ctx->pc = 0x11a540u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965016));
    // 0x11a544: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a544u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a548: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11a548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a54c: 0x25eff714  addiu       $t7, $t7, -0x8EC
    ctx->pc = 0x11a54cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965012));
    // 0x11a550: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a554: 0x4602381a  mula.s      $f7, $f2
    ctx->pc = 0x11a554u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x11a558: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x11a558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x11a55c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x11a55cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x11a560: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x11A560u;
    {
        const bool branch_taken_0x11a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A560u;
            // 0x11a564: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a560) {
            ctx->pc = 0x11A430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a430;
        }
    }
    ctx->pc = 0x11A568u;
label_11a568:
    // 0x11a568: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A568u;
    {
        const bool branch_taken_0x11a568 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A568u;
            // 0x11a56c: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a568) {
            ctx->pc = 0x11A578u;
            goto label_11a578;
        }
    }
    ctx->pc = 0x11A570u;
    // 0x11a570: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x11A570u;
    {
        const bool branch_taken_0x11a570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A570u;
            // 0x11a574: 0x46003802  mul.s       $f0, $f7, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a570) {
            ctx->pc = 0x11A530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a530;
        }
    }
    ctx->pc = 0x11A578u;
label_11a578:
    // 0x11a578: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a578u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11a57c: 0x25adf718  addiu       $t5, $t5, -0x8E8
    ctx->pc = 0x11a57cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965016));
    // 0x11a580: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a580u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a584: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x11a584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a588: 0x25eff714  addiu       $t7, $t7, -0x8EC
    ctx->pc = 0x11a588u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965012));
    // 0x11a58c: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x11a58cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x11a590: 0x4601301d  msub.s      $f0, $f6, $f1
    ctx->pc = 0x11a590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
    // 0x11a594: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a598: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x11a598u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x11a59c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x11a59cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11a5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11A5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5A0u;
            // 0x11a5a4: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A5A8u;
label_11a5a8:
    // 0x11a5a8: 0x440d6000  mfc1        $t5, $f12
    ctx->pc = 0x11a5a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x11a5ac: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11a5acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11a5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a5b4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11a5b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11a5b8: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x11a5b8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x11a5bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a5c0: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x11a5c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x11a5c4: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x11a5c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x11a5c8: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x11a5c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x11a5cc: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x11a5ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11a5d0: 0x16f782a  slt         $t7, $t3, $t7
    ctx->pc = 0x11a5d0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11a5d4: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A5D4u;
    {
        const bool branch_taken_0x11a5d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5D4u;
            // 0x11a5d8: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5d4) {
            ctx->pc = 0x11A5F4u;
            goto label_11a5f4;
        }
    }
    ctx->pc = 0x11A5DCu;
    // 0x11a5dc: 0xc5e0f75c  lwc1        $f0, -0x8A4($t7)
    ctx->pc = 0x11a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294965084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a5e0:
    // 0x11a5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11a5e4:
    // 0x11a5e4: 0xc7b5000c  lwc1        $f21, 0xC($sp)
    ctx->pc = 0x11a5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11a5e8: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x11a5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11A5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5ECu;
            // 0x11a5f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A5F4u;
label_11a5f4:
    // 0x11a5f4: 0x5a10008  bgez        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A5F4u;
    {
        const bool branch_taken_0x11a5f4 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x11A5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5F4u;
            // 0x11a5f8: 0xd7dc3  sra         $t7, $t5, 23 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 13), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5f4) {
            ctx->pc = 0x11A618u;
            goto label_11a618;
        }
    }
    ctx->pc = 0x11A5FCu;
    // 0x11a5fc: 0x460c6041  sub.s       $f1, $f12, $f12
    ctx->pc = 0x11a5fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11a600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11a600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a604: 0x0  nop
    ctx->pc = 0x11a604u;
    // NOP
    // 0x11a608: 0x0  nop
    ctx->pc = 0x11a608u;
    // NOP
    // 0x11a60c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11a60cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x11a610: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x11A610u;
    {
        const bool branch_taken_0x11a610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A610u;
            // 0x11a614: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a610) {
            ctx->pc = 0x11A5E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a5e4;
        }
    }
    ctx->pc = 0x11A618u;
label_11a618:
    // 0x11a618: 0x1ab6024  and         $t4, $t5, $t3
    ctx->pc = 0x11a618u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x11a61c: 0x25efff81  addiu       $t7, $t7, -0x7F
    ctx->pc = 0x11a61cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967169));
    // 0x11a620: 0x240e007f  addiu       $t6, $zero, 0x7F
    ctx->pc = 0x11a620u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x11a624: 0xf6fc2  srl         $t5, $t7, 31
    ctx->pc = 0x11a624u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x11a628: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x11a628u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x11a62c: 0x1cd7023  subu        $t6, $t6, $t5
    ctx->pc = 0x11a62cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x11a630: 0x448fa800  mtc1        $t7, $f21
    ctx->pc = 0x11a630u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11a634: 0xe75c0  sll         $t6, $t6, 23
    ctx->pc = 0x11a634u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 23));
    // 0x11a638: 0x18e6825  or          $t5, $t4, $t6
    ctx->pc = 0x11a638u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x11a63c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a63cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a640: 0x448d6000  mtc1        $t5, $f12
    ctx->pc = 0x11a640u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a644: 0x25eff760  addiu       $t7, $t7, -0x8A0
    ctx->pc = 0x11a644u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965088));
    // 0x11a648: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x11a648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x11a64c: 0xc0468bc  jal         func_11A2F0
    ctx->pc = 0x11A64Cu;
    SET_GPR_U32(ctx, 31, 0x11A654u);
    ctx->pc = 0x11A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A64Cu;
            // 0x11a650: 0xc5f40000  lwc1        $f20, 0x0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A2F0u;
    goto label_11a2f0;
    ctx->pc = 0x11A654u;
label_11a654:
    // 0x11a654: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a654u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a658: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x11a658u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x11a65c: 0x25eff764  addiu       $t7, $t7, -0x89C
    ctx->pc = 0x11a65cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965092));
    // 0x11a660: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a664: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11a664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a668: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a668u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a66c: 0x25eff768  addiu       $t7, $t7, -0x898
    ctx->pc = 0x11a66cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965096));
    // 0x11a670: 0x4600a018  adda.s      $f20, $f0
    ctx->pc = 0x11a670u;
    ctx->f[31] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x11a674: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a678: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x11A678u;
    {
        const bool branch_taken_0x11a678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A678u;
            // 0x11a67c: 0x4600a81c  madd.s      $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a678) {
            ctx->pc = 0x11A5E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a5e0;
        }
    }
    ctx->pc = 0x11A680u;
label_11a680:
    // 0x11a680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a684: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11a684u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11a688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11a688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11a68c: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a68cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11a690: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x11a690u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x11a694: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11a694u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11a698: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x11a698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11a69c: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x11a69cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x11a6a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11a6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11a6a4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11a6a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x11a6a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a6ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11a6acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x11a6b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11a6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11a6b4: 0x25adf7f8  addiu       $t5, $t5, -0x808
    ctx->pc = 0x11a6b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965240));
    // 0x11a6b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11a6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11a6bc: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11a6bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11a6c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11a6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11a6c4: 0x44116800  mfc1        $s1, $f13
    ctx->pc = 0x11a6c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x11a6c8: 0x44126000  mfc1        $s2, $f12
    ctx->pc = 0x11a6c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x11a6cc: 0x22e8024  and         $s0, $s1, $t6
    ctx->pc = 0x11a6ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 14));
    // 0x11a6d0: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11a6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a6d4: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11a6d4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a6d8: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x11A6D8u;
    {
        const bool branch_taken_0x11a6d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6D8u;
            // 0x11a6dc: 0x24e9824  and         $s3, $s2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6d8) {
            ctx->pc = 0x11A72Cu;
            goto label_11a72c;
        }
    }
    ctx->pc = 0x11A6E0u;
    // 0x11a6e0: 0x6410007  bgez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A6E0u;
    {
        const bool branch_taken_0x11a6e0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x11A6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6E0u;
            // 0x11a6e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6e0) {
            ctx->pc = 0x11A700u;
            goto label_11a700;
        }
    }
    ctx->pc = 0x11A6E8u;
    // 0x11a6e8: 0x3c0f4b7f  lui         $t7, 0x4B7F
    ctx->pc = 0x11a6e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19327 << 16));
    // 0x11a6ec: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11a6ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11a6f0: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11a6f0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a6f4: 0x11e001d3  beqz        $t7, . + 4 + (0x1D3 << 2)
    ctx->pc = 0x11A6F4u;
    {
        const bool branch_taken_0x11a6f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6F4u;
            // 0x11a6f8: 0x3c0f3f7f  lui         $t7, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6f4) {
            ctx->pc = 0x11AE44u;
            goto label_11ae44;
        }
    }
    ctx->pc = 0x11A6FCu;
    // 0x11a6fc: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x11a6fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11a700:
    // 0x11a700: 0x3c0f3f80  lui         $t7, 0x3F80
    ctx->pc = 0x11a700u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
label_11a704:
    // 0x11a704: 0x560f0013  bnel        $s0, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x11A704u;
    {
        const bool branch_taken_0x11a704 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x11a704) {
            ctx->pc = 0x11A708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A704u;
            // 0x11a708: 0x3c0f4000  lui         $t7, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A754u;
            goto label_11a754;
        }
    }
    ctx->pc = 0x11A70Cu;
    // 0x11a70c: 0x6210007  bgez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A70Cu;
    {
        const bool branch_taken_0x11a70c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11A710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A70Cu;
            // 0x11a710: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a70c) {
            ctx->pc = 0x11A72Cu;
            goto label_11a72c;
        }
    }
    ctx->pc = 0x11A714u;
    // 0x11a714: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11a714u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11a718: 0x25cef7f8  addiu       $t6, $t6, -0x808
    ctx->pc = 0x11a718u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965240));
    // 0x11a71c: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11a71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a720: 0x0  nop
    ctx->pc = 0x11a720u;
    // NOP
    // 0x11a724: 0x0  nop
    ctx->pc = 0x11a724u;
    // NOP
    // 0x11a728: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x11a728u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
label_11a72c:
    // 0x11a72c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a72cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11a730:
    // 0x11a730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11a730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a734: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11a734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a738: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11a738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11a73c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11a73cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a740: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11a740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11a744: 0xc7b50034  lwc1        $f21, 0x34($sp)
    ctx->pc = 0x11a744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11a748: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x11a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a74c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A74Cu;
            // 0x11a750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A754u;
label_11a754:
    // 0x11a754: 0x162f0003  bne         $s1, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A754u;
    {
        const bool branch_taken_0x11a754 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x11A758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A754u;
            // 0x11a758: 0x3c0f3f00  lui         $t7, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a754) {
            ctx->pc = 0x11A764u;
            goto label_11a764;
        }
    }
    ctx->pc = 0x11A75Cu;
    // 0x11a75c: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x11A75Cu;
    {
        const bool branch_taken_0x11a75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A75Cu;
            // 0x11a760: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a75c) {
            ctx->pc = 0x11A72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a72c;
        }
    }
    ctx->pc = 0x11A764u;
label_11a764:
    // 0x11a764: 0x162f000d  bne         $s1, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x11A764u;
    {
        const bool branch_taken_0x11a764 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        if (branch_taken_0x11a764) {
            ctx->pc = 0x11A79Cu;
            goto label_11a79c;
        }
    }
    ctx->pc = 0x11A76Cu;
    // 0x11a76c: 0x640000b  bltz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x11A76Cu;
    {
        const bool branch_taken_0x11a76c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11A770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A76Cu;
            // 0x11a770: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a76c) {
            ctx->pc = 0x11A79Cu;
            goto label_11a79c;
        }
    }
    ctx->pc = 0x11A774u;
    // 0x11a774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11a778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a77c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11a77cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a780: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11a780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11a784: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11a784u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a788: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11a788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11a78c: 0xc7b50034  lwc1        $f21, 0x34($sp)
    ctx->pc = 0x11a78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11a790: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x11a790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a794: 0x8046c86  j           func_11B218
    ctx->pc = 0x11A794u;
    ctx->pc = 0x11A798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A794u;
            // 0x11a798: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B218u;
    if (runtime->hasFunction(0x11B218u)) {
        auto targetFn = runtime->lookupFunction(0x11B218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0011B218_0x11b218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11A79Cu;
label_11a79c:
    // 0x11a79c: 0xc047740  jal         func_11DD00
    ctx->pc = 0x11A79Cu;
    SET_GPR_U32(ctx, 31, 0x11A7A4u);
    ctx->pc = 0x11A7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A79Cu;
            // 0x11a7a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7A4u; }
        if (ctx->pc != 0x11A7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7A4u; }
        if (ctx->pc != 0x11A7A4u) { return; }
    }
    ctx->pc = 0x11A7A4u;
label_11a7a4:
    // 0x11a7a4: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x11a7a4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x11a7a8: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11a7a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11a7ac: 0x1d3782a  slt         $t7, $t6, $s3
    ctx->pc = 0x11a7acu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x11a7b0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A7B0u;
    {
        const bool branch_taken_0x11a7b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7B0u;
            // 0x11a7b4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7b0) {
            ctx->pc = 0x11A7C4u;
            goto label_11a7c4;
        }
    }
    ctx->pc = 0x11A7B8u;
    // 0x11a7b8: 0x3c0d3f80  lui         $t5, 0x3F80
    ctx->pc = 0x11a7b8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16256 << 16));
    // 0x11a7bc: 0x166d001a  bne         $s3, $t5, . + 4 + (0x1A << 2)
    ctx->pc = 0x11A7BCu;
    {
        const bool branch_taken_0x11a7bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 13));
        ctx->pc = 0x11A7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7BCu;
            // 0x11a7c0: 0x1247c2  srl         $t0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7bc) {
            ctx->pc = 0x11A828u;
            goto label_11a828;
        }
    }
    ctx->pc = 0x11A7C4u;
label_11a7c4:
    // 0x11a7c4: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A7C4u;
    {
        const bool branch_taken_0x11a7c4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11A7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7C4u;
            // 0x11a7c8: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7c4) {
            ctx->pc = 0x11A7E0u;
            goto label_11a7e0;
        }
    }
    ctx->pc = 0x11A7CCu;
    // 0x11a7cc: 0x25eff7f8  addiu       $t7, $t7, -0x808
    ctx->pc = 0x11a7ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965240));
    // 0x11a7d0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a7d4: 0x0  nop
    ctx->pc = 0x11a7d4u;
    // NOP
    // 0x11a7d8: 0x0  nop
    ctx->pc = 0x11a7d8u;
    // NOP
    // 0x11a7dc: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x11a7dcu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_11a7e0:
    // 0x11a7e0: 0x641ffd2  bgez        $s2, . + 4 + (-0x2E << 2)
    ctx->pc = 0x11A7E0u;
    {
        const bool branch_taken_0x11a7e0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x11A7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7E0u;
            // 0x11a7e4: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7e0) {
            ctx->pc = 0x11A72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a72c;
        }
    }
    ctx->pc = 0x11A7E8u;
    // 0x11a7e8: 0x3c0fc080  lui         $t7, 0xC080
    ctx->pc = 0x11a7e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)49280 << 16));
    // 0x11a7ec: 0x26f7821  addu        $t7, $s3, $t7
    ctx->pc = 0x11a7ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x11a7f0: 0x1f47825  or          $t7, $t7, $s4
    ctx->pc = 0x11a7f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 20));
    // 0x11a7f4: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A7F4u;
    {
        const bool branch_taken_0x11a7f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7F4u;
            // 0x11a7f8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7f4) {
            ctx->pc = 0x11A814u;
            goto label_11a814;
        }
    }
    ctx->pc = 0x11A7FCu;
    // 0x11a7fc: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x11a7fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11a800: 0x0  nop
    ctx->pc = 0x11a800u;
    // NOP
    // 0x11a804: 0x0  nop
    ctx->pc = 0x11a804u;
    // NOP
    // 0x11a808: 0x46000303  div.s       $f12, $f0, $f0
    ctx->pc = 0x11a808u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[0];
label_11a80c:
    // 0x11a80c: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x11A80Cu;
    {
        const bool branch_taken_0x11a80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A80Cu;
            // 0x11a810: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a80c) {
            ctx->pc = 0x11A72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a72c;
        }
    }
    ctx->pc = 0x11A814u;
label_11a814:
    // 0x11a814: 0x528ffffd  beql        $s4, $t7, . + 4 + (-0x3 << 2)
    ctx->pc = 0x11A814u;
    {
        const bool branch_taken_0x11a814 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 15));
        if (branch_taken_0x11a814) {
            ctx->pc = 0x11A818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A814u;
            // 0x11a818: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A80Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a80c;
        }
    }
    ctx->pc = 0x11A81Cu;
    // 0x11a81c: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x11A81Cu;
    {
        const bool branch_taken_0x11a81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A81Cu;
            // 0x11a820: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a81c) {
            ctx->pc = 0x11A72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a72c;
        }
    }
    ctx->pc = 0x11A824u;
    // 0x11a824: 0x0  nop
    ctx->pc = 0x11a824u;
    // NOP
label_11a828:
    // 0x11a828: 0x250fffff  addiu       $t7, $t0, -0x1
    ctx->pc = 0x11a828u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x11a82c: 0x1f47825  or          $t7, $t7, $s4
    ctx->pc = 0x11a82cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 20));
    // 0x11a830: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A830u;
    {
        const bool branch_taken_0x11a830 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A830u;
            // 0x11a834: 0x3c0f4d00  lui         $t7, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a830) {
            ctx->pc = 0x11A850u;
            goto label_11a850;
        }
    }
    ctx->pc = 0x11A838u;
    // 0x11a838: 0x4614a001  sub.s       $f0, $f20, $f20
    ctx->pc = 0x11a838u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[20]);
    // 0x11a83c: 0x0  nop
    ctx->pc = 0x11a83cu;
    // NOP
    // 0x11a840: 0x0  nop
    ctx->pc = 0x11a840u;
    // NOP
    // 0x11a844: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x11a844u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x11a848: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x11A848u;
    {
        const bool branch_taken_0x11a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A848u;
            // 0x11a84c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a848) {
            ctx->pc = 0x11A730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a730;
        }
    }
    ctx->pc = 0x11A850u;
label_11a850:
    // 0x11a850: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11a850u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a854: 0x11e000e8  beqz        $t7, . + 4 + (0xE8 << 2)
    ctx->pc = 0x11A854u;
    {
        const bool branch_taken_0x11a854 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A854u;
            // 0x11a858: 0x3c0f3f7f  lui         $t7, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a854) {
            ctx->pc = 0x11ABF8u;
            goto label_11abf8;
        }
    }
    ctx->pc = 0x11A85Cu;
    // 0x11a85c: 0x35effff7  ori         $t7, $t7, 0xFFF7
    ctx->pc = 0x11a85cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65527);
    // 0x11a860: 0x1f3782a  slt         $t7, $t7, $s3
    ctx->pc = 0x11a860u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x11a864: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A864u;
    {
        const bool branch_taken_0x11a864 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a864) {
            ctx->pc = 0x11A868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A864u;
            // 0x11a868: 0x3c0f3f80  lui         $t7, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A884u;
            goto label_11a884;
        }
    }
    ctx->pc = 0x11A86Cu;
    // 0x11a86c: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A86Cu;
    {
        const bool branch_taken_0x11a86c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11A870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A86Cu;
            // 0x11a870: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a86c) {
            ctx->pc = 0x11A87Cu;
            goto label_11a87c;
        }
    }
    ctx->pc = 0x11A874u;
label_11a874:
    // 0x11a874: 0x1000ffad  b           . + 4 + (-0x53 << 2)
    ctx->pc = 0x11A874u;
    {
        const bool branch_taken_0x11a874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A874u;
            // 0x11a878: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a874) {
            ctx->pc = 0x11A72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a72c;
        }
    }
    ctx->pc = 0x11A87Cu;
label_11a87c:
    // 0x11a87c: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x11A87Cu;
    {
        const bool branch_taken_0x11a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A87Cu;
            // 0x11a880: 0xc5e0f7f4  lwc1        $f0, -0x80C($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294965236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a87c) {
            ctx->pc = 0x11A72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a72c;
        }
    }
    ctx->pc = 0x11A884u;
label_11a884:
    // 0x11a884: 0x35ef0007  ori         $t7, $t7, 0x7
    ctx->pc = 0x11a884u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)7);
    // 0x11a888: 0x1f3782a  slt         $t7, $t7, $s3
    ctx->pc = 0x11a888u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x11a88c: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A88Cu;
    {
        const bool branch_taken_0x11a88c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A88Cu;
            // 0x11a890: 0x3c0d0063  lui         $t5, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a88c) {
            ctx->pc = 0x11A8A8u;
            goto label_11a8a8;
        }
    }
    ctx->pc = 0x11A894u;
    // 0x11a894: 0x1a20fff7  blez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11A894u;
    {
        const bool branch_taken_0x11a894 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x11A898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A894u;
            // 0x11a898: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a894) {
            ctx->pc = 0x11A874u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a874;
        }
    }
    ctx->pc = 0x11A89Cu;
    // 0x11a89c: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x11A89Cu;
    {
        const bool branch_taken_0x11a89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A89Cu;
            // 0x11a8a0: 0xc5e0f7f4  lwc1        $f0, -0x80C($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294965236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a89c) {
            ctx->pc = 0x11A72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a72c;
        }
    }
    ctx->pc = 0x11A8A4u;
    // 0x11a8a4: 0x0  nop
    ctx->pc = 0x11a8a4u;
    // NOP
label_11a8a8:
    // 0x11a8a8: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11a8a8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11a8ac: 0x25adf7f8  addiu       $t5, $t5, -0x808
    ctx->pc = 0x11a8acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965240));
    // 0x11a8b0: 0x25cef7fc  addiu       $t6, $t6, -0x804
    ctx->pc = 0x11a8b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965244));
    // 0x11a8b4: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11a8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a8b8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a8b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a8bc: 0xc5c30000  lwc1        $f3, 0x0($t6)
    ctx->pc = 0x11a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a8c0: 0x25eff800  addiu       $t7, $t7, -0x800
    ctx->pc = 0x11a8c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965248));
    // 0x11a8c4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x11a8c4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11a8c8: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a8c8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11a8cc: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11a8ccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11a8d0: 0x25adf804  addiu       $t5, $t5, -0x7FC
    ctx->pc = 0x11a8d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965252));
    // 0x11a8d4: 0x25cef808  addiu       $t6, $t6, -0x7F8
    ctx->pc = 0x11a8d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965256));
    // 0x11a8d8: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x11a8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a8dc: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11a8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a8e0: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x11a8e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x11a8e4: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a8e4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11a8e8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a8ec: 0x25adf810  addiu       $t5, $t5, -0x7F0
    ctx->pc = 0x11a8ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965264));
    // 0x11a8f0: 0x4614a102  mul.s       $f4, $f20, $f20
    ctx->pc = 0x11a8f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x11a8f4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a8f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a8f8: 0x4600a01a  mula.s      $f20, $f0
    ctx->pc = 0x11a8f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11a8fc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11a8fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11a900: 0x25eff80c  addiu       $t7, $t7, -0x7F4
    ctx->pc = 0x11a900u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965260));
    // 0x11a904: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a908: 0x4602a2c2  mul.s       $f11, $f20, $f2
    ctx->pc = 0x11a908u;
    ctx->f[11] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x11a90c: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x11a90cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11a910: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11a910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11a914: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a918: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x11a918u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11a91c: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x11a91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a920: 0x46011a9d  msub.s      $f10, $f3, $f1
    ctx->pc = 0x11a920u;
    ctx->f[10] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x11a924: 0x460a5800  add.s       $f0, $f11, $f10
    ctx->pc = 0x11a924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x11a928: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x11a928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11a92c: 0x1cf5824  and         $t3, $t6, $t7
    ctx->pc = 0x11a92cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x11a930: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x11a930u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a934: 0x460b0801  sub.s       $f0, $f1, $f11
    ctx->pc = 0x11a934u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x11a938: 0x46005041  sub.s       $f1, $f10, $f0
    ctx->pc = 0x11a938u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_11a93c:
    // 0x11a93c: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a93cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11a940: 0x250fffff  addiu       $t7, $t0, -0x1
    ctx->pc = 0x11a940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x11a944: 0x25adf7f8  addiu       $t5, $t5, -0x808
    ctx->pc = 0x11a944u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965240));
    // 0x11a948: 0x268effff  addiu       $t6, $s4, -0x1
    ctx->pc = 0x11a948u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11a94c: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x11a94cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x11a950: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A950u;
    {
        const bool branch_taken_0x11a950 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A950u;
            // 0x11a954: 0xc5b40000  lwc1        $f20, 0x0($t5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a950) {
            ctx->pc = 0x11A964u;
            goto label_11a964;
        }
    }
    ctx->pc = 0x11A958u;
    // 0x11a958: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11a958u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11a95c: 0x25cef83c  addiu       $t6, $t6, -0x7C4
    ctx->pc = 0x11a95cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965308));
    // 0x11a960: 0xc5d40000  lwc1        $f20, 0x0($t6)
    ctx->pc = 0x11a960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11a964:
    // 0x11a964: 0x440ca800  mfc1        $t4, $f21
    ctx->pc = 0x11a964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x11a968: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x11a968u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11a96c: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x11a96cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11a970: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11a970u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11a974: 0x18f7024  and         $t6, $t4, $t7
    ctx->pc = 0x11a974u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x11a978: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11a978u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11a97c: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x11a97cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11a980: 0x4602a801  sub.s       $f0, $f21, $f2
    ctx->pc = 0x11a980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x11a984: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x11a984u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11a988: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x11a988u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11a98c: 0x4601a8dc  madd.s      $f3, $f21, $f1
    ctx->pc = 0x11a98cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[1]));
    // 0x11a990: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x11a990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x11a994: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x11a994u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11a998: 0x440b6000  mfc1        $t3, $f12
    ctx->pc = 0x11a998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x11a99c: 0x440e6000  mfc1        $t6, $f12
    ctx->pc = 0x11a99cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11a9a0: 0x19600083  blez        $t3, . + 4 + (0x83 << 2)
    ctx->pc = 0x11A9A0u;
    {
        const bool branch_taken_0x11a9a0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x11A9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9A0u;
            // 0x11a9a4: 0x16d6824  and         $t5, $t3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) & GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9a0) {
            ctx->pc = 0x11ABB0u;
            goto label_11abb0;
        }
    }
    ctx->pc = 0x11A9A8u;
    // 0x11a9a8: 0x3c0c4301  lui         $t4, 0x4301
    ctx->pc = 0x11a9a8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17153 << 16));
    // 0x11a9ac: 0x18d782a  slt         $t7, $t4, $t5
    ctx->pc = 0x11a9acu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11a9b0: 0x55e0000c  bnel        $t7, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11A9B0u;
    {
        const bool branch_taken_0x11a9b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a9b0) {
            ctx->pc = 0x11A9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9B0u;
            // 0x11a9b4: 0x3c0d0063  lui         $t5, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A9E4u;
            goto label_11a9e4;
        }
    }
    ctx->pc = 0x11A9B8u;
    // 0x11a9b8: 0x15ac000f  bne         $t5, $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x11A9B8u;
    {
        const bool branch_taken_0x11a9b8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 12));
        ctx->pc = 0x11A9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9B8u;
            // 0x11a9bc: 0x3c0f3f00  lui         $t7, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9b8) {
            ctx->pc = 0x11A9F8u;
            goto label_11a9f8;
        }
    }
    ctx->pc = 0x11A9C0u;
    // 0x11a9c0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a9c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a9c4: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x11a9c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x11a9c8: 0x25eff844  addiu       $t7, $t7, -0x7BC
    ctx->pc = 0x11a9c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965316));
    // 0x11a9cc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a9d0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x11a9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11a9d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11a9d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a9d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x11A9D8u;
    {
        const bool branch_taken_0x11a9d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9D8u;
            // 0x11a9dc: 0x3c0f3f00  lui         $t7, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9d8) {
            ctx->pc = 0x11A9F8u;
            goto label_11a9f8;
        }
    }
    ctx->pc = 0x11A9E0u;
    // 0x11a9e0: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11a9e0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
label_11a9e4:
    // 0x11a9e4: 0x25adf840  addiu       $t5, $t5, -0x7C0
    ctx->pc = 0x11a9e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965312));
label_11a9e8:
    // 0x11a9e8: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x11a9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a9ec:
    // 0x11a9ec: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x11a9ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11a9f0: 0x1000ff4e  b           . + 4 + (-0xB2 << 2)
    ctx->pc = 0x11A9F0u;
    {
        const bool branch_taken_0x11a9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9F0u;
            // 0x11a9f4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9f0) {
            ctx->pc = 0x11A72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a72c;
        }
    }
    ctx->pc = 0x11A9F8u;
label_11a9f8:
    // 0x11a9f8: 0xd65c3  sra         $t4, $t5, 23
    ctx->pc = 0x11a9f8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 13), 23));
label_11a9fc:
    // 0x11a9fc: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x11a9fcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11aa00: 0x11e0001b  beqz        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x11AA00u;
    {
        const bool branch_taken_0x11aa00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA00u;
            // 0x11aa04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa00) {
            ctx->pc = 0x11AA70u;
            goto label_11aa70;
        }
    }
    ctx->pc = 0x11AA08u;
    // 0x11aa08: 0x3c0d0080  lui         $t5, 0x80
    ctx->pc = 0x11aa08u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)128 << 16));
    // 0x11aa0c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x11aa0cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11aa10: 0x258fff82  addiu       $t7, $t4, -0x7E
    ctx->pc = 0x11aa10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967170));
    // 0x11aa14: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x11aa14u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x11aa18: 0x1ed7807  srav        $t7, $t5, $t7
    ctx->pc = 0x11aa18u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x11aa1c: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11aa1cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11aa20: 0x16f2021  addu        $a0, $t3, $t7
    ctx->pc = 0x11aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x11aa24: 0x47dc2  srl         $t7, $a0, 23
    ctx->pc = 0x11aa24u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x11aa28: 0x8e6024  and         $t4, $a0, $t6
    ctx->pc = 0x11aa28u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x11aa2c: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x11aa2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x11aa30: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x11aa30u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x11aa34: 0x25eaff81  addiu       $t2, $t7, -0x7F
    ctx->pc = 0x11aa34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967169));
    // 0x11aa38: 0x240d0017  addiu       $t5, $zero, 0x17
    ctx->pc = 0x11aa38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11aa3c: 0x14e7007  srav        $t6, $t6, $t2
    ctx->pc = 0x11aa3cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 10) & 0x1F));
    // 0x11aa40: 0x1aa6823  subu        $t5, $t5, $t2
    ctx->pc = 0x11aa40u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x11aa44: 0xe7027  nor         $t6, $zero, $t6
    ctx->pc = 0x11aa44u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 14)));
    // 0x11aa48: 0x296b0000  slti        $t3, $t3, 0x0
    ctx->pc = 0x11aa48u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11aa4c: 0x8e5024  and         $t2, $a0, $t6
    ctx->pc = 0x11aa4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x11aa50: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x11aa50u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11aa54: 0x1ac2007  srav        $a0, $t4, $t5
    ctx->pc = 0x11aa54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x11aa58: 0x47823  negu        $t7, $a0
    ctx->pc = 0x11aa58u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x11aa5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11aa5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11aa60: 0x1eb200b  movn        $a0, $t7, $t3
    ctx->pc = 0x11aa60u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
    // 0x11aa64: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x11aa64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x11aa68: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x11aa68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11aa6c: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x11aa6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
label_11aa70:
    // 0x11aa70: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x11aa70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11aa74: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x11aa74u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11aa78: 0x1cf5024  and         $t2, $t6, $t7
    ctx->pc = 0x11aa78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x11aa7c: 0x46dc0  sll         $t5, $a0, 23
    ctx->pc = 0x11aa7cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x11aa80: 0x448a2000  mtc1        $t2, $f4
    ctx->pc = 0x11aa80u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11aa84: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11aa84u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11aa88: 0x25cef84c  addiu       $t6, $t6, -0x7B4
    ctx->pc = 0x11aa88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965324));
    // 0x11aa8c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11aa8cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11aa90: 0x46002081  sub.s       $f2, $f4, $f0
    ctx->pc = 0x11aa90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x11aa94: 0x25eff850  addiu       $t7, $t7, -0x7B0
    ctx->pc = 0x11aa94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965328));
    // 0x11aa98: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aa9c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x11aa9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x11aaa0: 0x460022c2  mul.s       $f11, $f4, $f0
    ctx->pc = 0x11aaa0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11aaa4: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11aaa4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11aaa8: 0x25cef854  addiu       $t6, $t6, -0x7AC
    ctx->pc = 0x11aaa8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965332));
    // 0x11aaac: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11aab0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aab4: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11aab4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11aab8: 0x25cef858  addiu       $t6, $t6, -0x7A8
    ctx->pc = 0x11aab8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965336));
    // 0x11aabc: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x11aabcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11aac0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11aac0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11aac4: 0x4601229c  madd.s      $f10, $f4, $f1
    ctx->pc = 0x11aac4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x11aac8: 0x25eff7f8  addiu       $t7, $t7, -0x808
    ctx->pc = 0x11aac8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965240));
    // 0x11aacc: 0x460a5b00  add.s       $f12, $f11, $f10
    ctx->pc = 0x11aaccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x11aad0: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x11aad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x11aad4: 0x460b6081  sub.s       $f2, $f12, $f11
    ctx->pc = 0x11aad4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
    // 0x11aad8: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x11aad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x11aadc: 0x460250c1  sub.s       $f3, $f10, $f2
    ctx->pc = 0x11aadcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x11aae0: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11aae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aae4: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x11aae4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11aae8: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11aae8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11aaec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11aaecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11aaf0: 0x25cef85c  addiu       $t6, $t6, -0x7A4
    ctx->pc = 0x11aaf0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965340));
    // 0x11aaf4: 0x46036082  mul.s       $f2, $f12, $f3
    ctx->pc = 0x11aaf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x11aaf8: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11aafc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x11aafcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11ab00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ab00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ab04: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11ab04u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11ab08: 0x25cef860  addiu       $t6, $t6, -0x7A0
    ctx->pc = 0x11ab08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965344));
    // 0x11ab0c: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x11ab0cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ab10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11ab10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11ab14: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11ab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ab18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ab18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ab1c: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11ab1cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11ab20: 0x25cef864  addiu       $t6, $t6, -0x79C
    ctx->pc = 0x11ab20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965348));
    // 0x11ab24: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x11ab24u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ab28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11ab28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11ab2c: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ab30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ab30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ab34: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11ab34u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11ab38: 0x25cef868  addiu       $t6, $t6, -0x798
    ctx->pc = 0x11ab38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965352));
    // 0x11ab3c: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x11ab3cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ab40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11ab40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11ab44: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ab48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ab48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ab4c: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11ab4cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11ab50: 0x25cef86c  addiu       $t6, $t6, -0x794
    ctx->pc = 0x11ab50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965356));
    // 0x11ab54: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x11ab54u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ab58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11ab58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11ab5c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x11ab5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x11ab60: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11ab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ab64: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x11ab64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11ab68: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11ab68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11ab6c: 0x0  nop
    ctx->pc = 0x11ab6cu;
    // NOP
    // 0x11ab70: 0x0  nop
    ctx->pc = 0x11ab70u;
    // NOP
    // 0x11ab74: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11ab74u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x11ab78: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x11ab78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11ab7c: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x11ab7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x11ab80: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ab84: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x11ab84u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11ab88: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11ab88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ab8c: 0x1ed6021  addu        $t4, $t7, $t5
    ctx->pc = 0x11ab8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x11ab90: 0xc75c3  sra         $t6, $t4, 23
    ctx->pc = 0x11ab90u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 12), 23));
    // 0x11ab94: 0x5dc00004  bgtzl       $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AB94u;
    {
        const bool branch_taken_0x11ab94 = (GPR_S32(ctx, 14) > 0);
        if (branch_taken_0x11ab94) {
            ctx->pc = 0x11AB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB94u;
            // 0x11ab98: 0x448c6000  mtc1        $t4, $f12 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x11ABA8u;
            goto label_11aba8;
        }
    }
    ctx->pc = 0x11AB9Cu;
    // 0x11ab9c: 0xc04777c  jal         func_11DDF0
    ctx->pc = 0x11AB9Cu;
    SET_GPR_U32(ctx, 31, 0x11ABA4u);
    ctx->pc = 0x11DDF0u;
    if (runtime->hasFunction(0x11DDF0u)) {
        auto targetFn = runtime->lookupFunction(0x11DDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABA4u; }
        if (ctx->pc != 0x11ABA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DDF0_0x11ddf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABA4u; }
        if (ctx->pc != 0x11ABA4u) { return; }
    }
    ctx->pc = 0x11ABA4u;
label_11aba4:
    // 0x11aba4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11aba4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_11aba8:
    // 0x11aba8: 0x1000fee0  b           . + 4 + (-0x120 << 2)
    ctx->pc = 0x11ABA8u;
    {
        const bool branch_taken_0x11aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABA8u;
            // 0x11abac: 0x460ca002  mul.s       $f0, $f20, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aba8) {
            ctx->pc = 0x11A72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a72c;
        }
    }
    ctx->pc = 0x11ABB0u;
label_11abb0:
    // 0x11abb0: 0x3c0c42fc  lui         $t4, 0x42FC
    ctx->pc = 0x11abb0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17148 << 16));
    // 0x11abb4: 0x18d782a  slt         $t7, $t4, $t5
    ctx->pc = 0x11abb4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11abb8: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ABB8u;
    {
        const bool branch_taken_0x11abb8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x11abb8) {
            ctx->pc = 0x11ABD0u;
            goto label_11abd0;
        }
    }
    ctx->pc = 0x11ABC0u;
    // 0x11abc0: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11abc0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11abc4: 0x25cef848  addiu       $t6, $t6, -0x7B8
    ctx->pc = 0x11abc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965320));
    // 0x11abc8: 0x1000ff88  b           . + 4 + (-0x78 << 2)
    ctx->pc = 0x11ABC8u;
    {
        const bool branch_taken_0x11abc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABC8u;
            // 0x11abcc: 0xc5c10000  lwc1        $f1, 0x0($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abc8) {
            ctx->pc = 0x11A9ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a9ec;
        }
    }
    ctx->pc = 0x11ABD0u;
label_11abd0:
    // 0x11abd0: 0x15acff89  bne         $t5, $t4, . + 4 + (-0x77 << 2)
    ctx->pc = 0x11ABD0u;
    {
        const bool branch_taken_0x11abd0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 12));
        ctx->pc = 0x11ABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABD0u;
            // 0x11abd4: 0x3c0f3f00  lui         $t7, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abd0) {
            ctx->pc = 0x11A9F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a9f8;
        }
    }
    ctx->pc = 0x11ABD8u;
    // 0x11abd8: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x11abd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x11abdc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x11abdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11abe0: 0x4500ff86  bc1f        . + 4 + (-0x7A << 2)
    ctx->pc = 0x11ABE0u;
    {
        const bool branch_taken_0x11abe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11ABE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABE0u;
            // 0x11abe4: 0xd65c3  sra         $t4, $t5, 23 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 13), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abe0) {
            ctx->pc = 0x11A9FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a9fc;
        }
    }
    ctx->pc = 0x11ABE8u;
    // 0x11abe8: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11abe8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11abec: 0x1000ff7e  b           . + 4 + (-0x82 << 2)
    ctx->pc = 0x11ABECu;
    {
        const bool branch_taken_0x11abec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABECu;
            // 0x11abf0: 0x25adf848  addiu       $t5, $t5, -0x7B8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abec) {
            ctx->pc = 0x11A9E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a9e8;
        }
    }
    ctx->pc = 0x11ABF4u;
    // 0x11abf4: 0x0  nop
    ctx->pc = 0x11abf4u;
    // NOP
label_11abf8:
    // 0x11abf8: 0x26e6024  and         $t4, $s3, $t6
    ctx->pc = 0x11abf8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) & GPR_U64(ctx, 14));
    // 0x11abfc: 0x3c0f001c  lui         $t7, 0x1C
    ctx->pc = 0x11abfcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)28 << 16));
    // 0x11ac00: 0x1375c3  sra         $t6, $s3, 23
    ctx->pc = 0x11ac00u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 19), 23));
    // 0x11ac04: 0x35efc471  ori         $t7, $t7, 0xC471
    ctx->pc = 0x11ac04u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)50289);
    // 0x11ac08: 0x18d9825  or          $s3, $t4, $t5
    ctx->pc = 0x11ac08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x11ac0c: 0x1ec782a  slt         $t7, $t7, $t4
    ctx->pc = 0x11ac0cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11ac10: 0x25c4ff81  addiu       $a0, $t6, -0x7F
    ctx->pc = 0x11ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967169));
    // 0x11ac14: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11AC14u;
    {
        const bool branch_taken_0x11ac14 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC14u;
            // 0x11ac18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac14) {
            ctx->pc = 0x11AC40u;
            goto label_11ac40;
        }
    }
    ctx->pc = 0x11AC1Cu;
    // 0x11ac1c: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x11ac1cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x11ac20: 0x35efb3d6  ori         $t7, $t7, 0xB3D6
    ctx->pc = 0x11ac20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)46038);
    // 0x11ac24: 0x1ec782a  slt         $t7, $t7, $t4
    ctx->pc = 0x11ac24u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11ac28: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AC28u;
    {
        const bool branch_taken_0x11ac28 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC28u;
            // 0x11ac2c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac28) {
            ctx->pc = 0x11AC40u;
            goto label_11ac40;
        }
    }
    ctx->pc = 0x11AC30u;
    // 0x11ac30: 0x3c0fff80  lui         $t7, 0xFF80
    ctx->pc = 0x11ac30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65408 << 16));
    // 0x11ac34: 0x25c4ff82  addiu       $a0, $t6, -0x7E
    ctx->pc = 0x11ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967170));
    // 0x11ac38: 0x26f9821  addu        $s3, $s3, $t7
    ctx->pc = 0x11ac38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x11ac3c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11ac3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ac40:
    // 0x11ac40: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11ac40u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11ac44: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x11ac44u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11ac48: 0xa6080  sll         $t4, $t2, 2
    ctx->pc = 0x11ac48u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x11ac4c: 0x25eff770  addiu       $t7, $t7, -0x890
    ctx->pc = 0x11ac4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965104));
    // 0x11ac50: 0x18f7821  addu        $t7, $t4, $t7
    ctx->pc = 0x11ac50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11ac54: 0x137043  sra         $t6, $s3, 1
    ctx->pc = 0x11ac54u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 19), 1));
    // 0x11ac58: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ac58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ac5c: 0xa6d40  sll         $t5, $t2, 21
    ctx->pc = 0x11ac5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 10), 21));
    // 0x11ac60: 0x3c0f2000  lui         $t7, 0x2000
    ctx->pc = 0x11ac60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)8192 << 16));
    // 0x11ac64: 0x46016080  add.s       $f2, $f12, $f1
    ctx->pc = 0x11ac64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x11ac68: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x11ac68u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x11ac6c: 0x460162c1  sub.s       $f11, $f12, $f1
    ctx->pc = 0x11ac6cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x11ac70: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11ac70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11ac74: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x11ac74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x11ac78: 0x25eff7f8  addiu       $t7, $t7, -0x808
    ctx->pc = 0x11ac78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965240));
    // 0x11ac7c: 0x240df000  addiu       $t5, $zero, -0x1000
    ctx->pc = 0x11ac7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11ac80: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ac84: 0x0  nop
    ctx->pc = 0x11ac84u;
    // NOP
    // 0x11ac88: 0x0  nop
    ctx->pc = 0x11ac88u;
    // NOP
    // 0x11ac8c: 0x46020283  div.s       $f10, $f0, $f2
    ctx->pc = 0x11ac8cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[10] = ctx->f[0] / ctx->f[2];
    // 0x11ac90: 0x3c0f0004  lui         $t7, 0x4
    ctx->pc = 0x11ac90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4 << 16));
    // 0x11ac94: 0x1cf5821  addu        $t3, $t6, $t7
    ctx->pc = 0x11ac94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11ac98: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11ac98u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11ac9c: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x11ac9cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11aca0: 0x25eff780  addiu       $t7, $t7, -0x880
    ctx->pc = 0x11aca0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965120));
    // 0x11aca4: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11aca4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11aca8: 0x18f7821  addu        $t7, $t4, $t7
    ctx->pc = 0x11aca8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11acac: 0x25cef814  addiu       $t6, $t6, -0x7EC
    ctx->pc = 0x11acacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965268));
    // 0x11acb0: 0xc5e80000  lwc1        $f8, 0x0($t7)
    ctx->pc = 0x11acb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x11acb4: 0xc5c40000  lwc1        $f4, 0x0($t6)
    ctx->pc = 0x11acb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11acb8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11acb8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11acbc: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x11acbcu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11acc0: 0x25eff778  addiu       $t7, $t7, -0x888
    ctx->pc = 0x11acc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965112));
    // 0x11acc4: 0x460a5d02  mul.s       $f20, $f11, $f10
    ctx->pc = 0x11acc4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x11acc8: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11acc8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11accc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x11acccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11acd0: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x11acd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11acd4: 0x25cef818  addiu       $t6, $t6, -0x7E8
    ctx->pc = 0x11acd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965272));
    // 0x11acd8: 0xc5870000  lwc1        $f7, 0x0($t4)
    ctx->pc = 0x11acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11acdc: 0x440fa000  mfc1        $t7, $f20
    ctx->pc = 0x11acdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ace0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11ace0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ace4: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x11ace4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x11ace8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11ace8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11acec: 0x4614a242  mul.s       $f9, $f20, $f20
    ctx->pc = 0x11acecu;
    ctx->f[9] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x11acf0: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x11acf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x11acf4: 0x46094982  mul.s       $f6, $f9, $f9
    ctx->pc = 0x11acf4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x11acf8: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11acfc: 0x1ed7024  and         $t6, $t7, $t5
    ctx->pc = 0x11acfcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11ad00: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x11ad00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x11ad04: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x11ad04u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ad08: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11ad08u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11ad0c: 0x25eff81c  addiu       $t7, $t7, -0x7E4
    ctx->pc = 0x11ad0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965276));
    // 0x11ad10: 0x46030882  mul.s       $f2, $f1, $f3
    ctx->pc = 0x11ad10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11ad14: 0x46140940  add.s       $f5, $f1, $f20
    ctx->pc = 0x11ad14u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x11ad18: 0x46025819  suba.s      $f11, $f2
    ctx->pc = 0x11ad18u;
    ctx->f[31] = FPU_SUB_S(ctx->f[11], ctx->f[2]);
    // 0x11ad1c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ad20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ad20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ad24: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11ad24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11ad28: 0x25eff820  addiu       $t7, $t7, -0x7E0
    ctx->pc = 0x11ad28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965280));
    // 0x11ad2c: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x11ad2cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ad30: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x11ad30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x11ad34: 0x460c08dd  msub.s      $f3, $f1, $f12
    ctx->pc = 0x11ad34u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[12]));
    // 0x11ad38: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ad3c: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x11ad3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x11ad40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ad40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ad44: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11ad44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11ad48: 0x25eff824  addiu       $t7, $t7, -0x7DC
    ctx->pc = 0x11ad48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965284));
    // 0x11ad4c: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x11ad4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x11ad50: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ad54: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11ad54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11ad58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ad58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ad5c: 0x25eff828  addiu       $t7, $t7, -0x7D8
    ctx->pc = 0x11ad5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965288));
    // 0x11ad60: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x11ad60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x11ad64: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ad68: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11ad68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11ad6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ad6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ad70: 0x25eff82c  addiu       $t7, $t7, -0x7D4
    ctx->pc = 0x11ad70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965292));
    // 0x11ad74: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x11ad74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x11ad78: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ad7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ad7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ad80: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x11ad80u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ad84: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x11ad84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11ad88: 0x46010a42  mul.s       $f9, $f1, $f1
    ctx->pc = 0x11ad88u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x11ad8c: 0x4605185c  madd.s      $f1, $f3, $f5
    ctx->pc = 0x11ad8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x11ad90: 0x46044800  add.s       $f0, $f9, $f4
    ctx->pc = 0x11ad90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[4]);
    // 0x11ad94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ad94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ad98: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x11ad98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ad9c: 0x1ed5824  and         $t3, $t7, $t5
    ctx->pc = 0x11ad9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11ada0: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x11ada0u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ada4: 0x46041101  sub.s       $f4, $f2, $f4
    ctx->pc = 0x11ada4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x11ada8: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x11ada8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x11adac: 0x448e1800  mtc1        $t6, $f3
    ctx->pc = 0x11adacu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11adb0: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x11adb0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x11adb4: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11adb4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11adb8: 0x46021ac2  mul.s       $f11, $f3, $f2
    ctx->pc = 0x11adb8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x11adbc: 0x25cef830  addiu       $t6, $t6, -0x7D0
    ctx->pc = 0x11adbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965296));
    // 0x11adc0: 0x46040b01  sub.s       $f12, $f1, $f4
    ctx->pc = 0x11adc0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x11adc4: 0x4614629c  madd.s      $f10, $f12, $f20
    ctx->pc = 0x11adc4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[20]));
    // 0x11adc8: 0x460a5900  add.s       $f4, $f11, $f10
    ctx->pc = 0x11adc8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x11adcc: 0x440f2000  mfc1        $t7, $f4
    ctx->pc = 0x11adccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11add0: 0x1ed4824  and         $t1, $t7, $t5
    ctx->pc = 0x11add0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11add4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x11add4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11add8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11add8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11addc: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x11addcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ade0: 0x25eff838  addiu       $t7, $t7, -0x7C8
    ctx->pc = 0x11ade0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965304));
    // 0x11ade4: 0x460b00c1  sub.s       $f3, $f0, $f11
    ctx->pc = 0x11ade4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x11ade8: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11ade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11adec: 0x460350c1  sub.s       $f3, $f10, $f3
    ctx->pc = 0x11adecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x11adf0: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11adf0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11adf4: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x11adf4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11adf8: 0x25cef834  addiu       $t6, $t6, -0x7CC
    ctx->pc = 0x11adf8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965300));
    // 0x11adfc: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x11adfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ae00: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x11ae00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x11ae04: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ae08: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x11ae08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x11ae0c: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x11ae0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x11ae10: 0x448a1800  mtc1        $t2, $f3
    ctx->pc = 0x11ae10u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11ae14: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x11ae14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11ae18: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x11ae18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x11ae1c: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x11ae1cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x11ae20: 0x440f1800  mfc1        $t7, $f3
    ctx->pc = 0x11ae20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ae24: 0x1ed5824  and         $t3, $t7, $t5
    ctx->pc = 0x11ae24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11ae28: 0x448a1800  mtc1        $t2, $f3
    ctx->pc = 0x11ae28u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11ae2c: 0x448b2000  mtc1        $t3, $f4
    ctx->pc = 0x11ae2cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11ae30: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x11ae30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x11ae34: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x11ae34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x11ae38: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11ae38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11ae3c: 0x1000febf  b           . + 4 + (-0x141 << 2)
    ctx->pc = 0x11AE3Cu;
    {
        const bool branch_taken_0x11ae3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE3Cu;
            // 0x11ae40: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae3c) {
            ctx->pc = 0x11A93Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a93c;
        }
    }
    ctx->pc = 0x11AE44u;
label_11ae44:
    // 0x11ae44: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11ae44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11ae48: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11ae48u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11ae4c: 0x11e0fe2c  beqz        $t7, . + 4 + (-0x1D4 << 2)
    ctx->pc = 0x11AE4Cu;
    {
        const bool branch_taken_0x11ae4c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE4Cu;
            // 0x11ae50: 0x240f0096  addiu       $t7, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae4c) {
            ctx->pc = 0x11A700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a700;
        }
    }
    ctx->pc = 0x11AE54u;
    // 0x11ae54: 0x1075c3  sra         $t6, $s0, 23
    ctx->pc = 0x11ae54u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 16), 23));
    // 0x11ae58: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x11ae58u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x11ae5c: 0x1f06007  srav        $t4, $s0, $t7
    ctx->pc = 0x11ae5cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 15) & 0x1F));
    // 0x11ae60: 0x1ec7804  sllv        $t7, $t4, $t7
    ctx->pc = 0x11ae60u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 15) & 0x1F));
    // 0x11ae64: 0x15f0fe27  bne         $t7, $s0, . + 4 + (-0x1D9 << 2)
    ctx->pc = 0x11AE64u;
    {
        const bool branch_taken_0x11ae64 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x11AE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE64u;
            // 0x11ae68: 0x3c0f3f80  lui         $t7, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae64) {
            ctx->pc = 0x11A704u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a704;
        }
    }
    ctx->pc = 0x11AE6Cu;
    // 0x11ae6c: 0x318e0001  andi        $t6, $t4, 0x1
    ctx->pc = 0x11ae6cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x11ae70: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x11ae70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ae74: 0x1000fe22  b           . + 4 + (-0x1DE << 2)
    ctx->pc = 0x11AE74u;
    {
        const bool branch_taken_0x11ae74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE74u;
            // 0x11ae78: 0x1eea023  subu        $s4, $t7, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae74) {
            ctx->pc = 0x11A700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a700;
        }
    }
    ctx->pc = 0x11AE7Cu;
    // 0x11ae7c: 0x0  nop
    ctx->pc = 0x11ae7cu;
    // NOP
}
