#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F08A0
// Address: 0x2f08a0 - 0x2f0a10
void sub_002F08A0_0x2f08a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F08A0_0x2f08a0");
#endif

    switch (ctx->pc) {
        case 0x2f08a0u: goto label_2f08a0;
        case 0x2f08a4u: goto label_2f08a4;
        case 0x2f08a8u: goto label_2f08a8;
        case 0x2f08acu: goto label_2f08ac;
        case 0x2f08b0u: goto label_2f08b0;
        case 0x2f08b4u: goto label_2f08b4;
        case 0x2f08b8u: goto label_2f08b8;
        case 0x2f08bcu: goto label_2f08bc;
        case 0x2f08c0u: goto label_2f08c0;
        case 0x2f08c4u: goto label_2f08c4;
        case 0x2f08c8u: goto label_2f08c8;
        case 0x2f08ccu: goto label_2f08cc;
        case 0x2f08d0u: goto label_2f08d0;
        case 0x2f08d4u: goto label_2f08d4;
        case 0x2f08d8u: goto label_2f08d8;
        case 0x2f08dcu: goto label_2f08dc;
        case 0x2f08e0u: goto label_2f08e0;
        case 0x2f08e4u: goto label_2f08e4;
        case 0x2f08e8u: goto label_2f08e8;
        case 0x2f08ecu: goto label_2f08ec;
        case 0x2f08f0u: goto label_2f08f0;
        case 0x2f08f4u: goto label_2f08f4;
        case 0x2f08f8u: goto label_2f08f8;
        case 0x2f08fcu: goto label_2f08fc;
        case 0x2f0900u: goto label_2f0900;
        case 0x2f0904u: goto label_2f0904;
        case 0x2f0908u: goto label_2f0908;
        case 0x2f090cu: goto label_2f090c;
        case 0x2f0910u: goto label_2f0910;
        case 0x2f0914u: goto label_2f0914;
        case 0x2f0918u: goto label_2f0918;
        case 0x2f091cu: goto label_2f091c;
        case 0x2f0920u: goto label_2f0920;
        case 0x2f0924u: goto label_2f0924;
        case 0x2f0928u: goto label_2f0928;
        case 0x2f092cu: goto label_2f092c;
        case 0x2f0930u: goto label_2f0930;
        case 0x2f0934u: goto label_2f0934;
        case 0x2f0938u: goto label_2f0938;
        case 0x2f093cu: goto label_2f093c;
        case 0x2f0940u: goto label_2f0940;
        case 0x2f0944u: goto label_2f0944;
        case 0x2f0948u: goto label_2f0948;
        case 0x2f094cu: goto label_2f094c;
        case 0x2f0950u: goto label_2f0950;
        case 0x2f0954u: goto label_2f0954;
        case 0x2f0958u: goto label_2f0958;
        case 0x2f095cu: goto label_2f095c;
        case 0x2f0960u: goto label_2f0960;
        case 0x2f0964u: goto label_2f0964;
        case 0x2f0968u: goto label_2f0968;
        case 0x2f096cu: goto label_2f096c;
        case 0x2f0970u: goto label_2f0970;
        case 0x2f0974u: goto label_2f0974;
        case 0x2f0978u: goto label_2f0978;
        case 0x2f097cu: goto label_2f097c;
        case 0x2f0980u: goto label_2f0980;
        case 0x2f0984u: goto label_2f0984;
        case 0x2f0988u: goto label_2f0988;
        case 0x2f098cu: goto label_2f098c;
        case 0x2f0990u: goto label_2f0990;
        case 0x2f0994u: goto label_2f0994;
        case 0x2f0998u: goto label_2f0998;
        case 0x2f099cu: goto label_2f099c;
        case 0x2f09a0u: goto label_2f09a0;
        case 0x2f09a4u: goto label_2f09a4;
        case 0x2f09a8u: goto label_2f09a8;
        case 0x2f09acu: goto label_2f09ac;
        case 0x2f09b0u: goto label_2f09b0;
        case 0x2f09b4u: goto label_2f09b4;
        case 0x2f09b8u: goto label_2f09b8;
        case 0x2f09bcu: goto label_2f09bc;
        case 0x2f09c0u: goto label_2f09c0;
        case 0x2f09c4u: goto label_2f09c4;
        case 0x2f09c8u: goto label_2f09c8;
        case 0x2f09ccu: goto label_2f09cc;
        case 0x2f09d0u: goto label_2f09d0;
        case 0x2f09d4u: goto label_2f09d4;
        case 0x2f09d8u: goto label_2f09d8;
        case 0x2f09dcu: goto label_2f09dc;
        case 0x2f09e0u: goto label_2f09e0;
        case 0x2f09e4u: goto label_2f09e4;
        case 0x2f09e8u: goto label_2f09e8;
        case 0x2f09ecu: goto label_2f09ec;
        case 0x2f09f0u: goto label_2f09f0;
        case 0x2f09f4u: goto label_2f09f4;
        case 0x2f09f8u: goto label_2f09f8;
        case 0x2f09fcu: goto label_2f09fc;
        case 0x2f0a00u: goto label_2f0a00;
        case 0x2f0a04u: goto label_2f0a04;
        case 0x2f0a08u: goto label_2f0a08;
        case 0x2f0a0cu: goto label_2f0a0c;
        default: break;
    }

    ctx->pc = 0x2f08a0u;

label_2f08a0:
    // 0x2f08a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f08a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f08a4:
    // 0x2f08a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2f08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2f08a8:
    // 0x2f08a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f08a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f08ac:
    // 0x2f08ac: 0x460c70c1  sub.s       $f3, $f14, $f12
    ctx->pc = 0x2f08acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
label_2f08b0:
    // 0x2f08b0: 0x8c6489e0  lw          $a0, -0x7620($v1)
    ctx->pc = 0x2f08b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_2f08b4:
    // 0x2f08b4: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2f08b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f08b8:
    // 0x2f08b8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2f08b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f08bc:
    // 0x2f08bc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f08bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f08c0:
    // 0x2f08c0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f08c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f08c4:
    // 0x2f08c4: 0x46126034  c.lt.s      $f12, $f18
    ctx->pc = 0x2f08c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f08c8:
    // 0x2f08c8: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2f08c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f08cc:
    // 0x2f08cc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2f08ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f08d0:
    // 0x2f08d0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2f08d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f08d4:
    // 0x2f08d4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2f08d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2f08d8:
    // 0x2f08d8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2f08d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f08dc:
    // 0x2f08dc: 0x460d7841  sub.s       $f1, $f15, $f13
    ctx->pc = 0x2f08dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[13]);
label_2f08e0:
    // 0x2f08e0: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x2f08e0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[4] = ctx->f[3] / ctx->f[2];
label_2f08e4:
    // 0x2f08e4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2f08e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f08e8:
    // 0x2f08e8: 0x46006206  mov.s       $f8, $f12
    ctx->pc = 0x2f08e8u;
    ctx->f[8] = FPU_MOV_S(ctx->f[12]);
label_2f08ec:
    // 0x2f08ec: 0x460069c6  mov.s       $f7, $f13
    ctx->pc = 0x2f08ecu;
    ctx->f[7] = FPU_MOV_S(ctx->f[13]);
label_2f08f0:
    // 0x2f08f0: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x2f08f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2f08f4:
    // 0x2f08f4: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x2f08f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2f08f8:
    // 0x2f08f8: 0x0  nop
    ctx->pc = 0x2f08f8u;
    // NOP
label_2f08fc:
    // 0x2f08fc: 0x0  nop
    ctx->pc = 0x2f08fcu;
    // NOP
label_2f0900:
    // 0x2f0900: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x2f0900u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
label_2f0904:
    // 0x2f0904: 0x0  nop
    ctx->pc = 0x2f0904u;
    // NOP
label_2f0908:
    // 0x2f0908: 0x0  nop
    ctx->pc = 0x2f0908u;
    // NOP
label_2f090c:
    // 0x2f090c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f0910:
    if (ctx->pc == 0x2F0910u) {
        ctx->pc = 0x2F0914u;
        goto label_2f0914;
    }
    ctx->pc = 0x2F090Cu;
    {
        const bool branch_taken_0x2f090c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f090c) {
            ctx->pc = 0x2F091Cu;
            goto label_2f091c;
        }
    }
    ctx->pc = 0x2F0914u;
label_2f0914:
    // 0x2f0914: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f0918:
    if (ctx->pc == 0x2F0918u) {
        ctx->pc = 0x2F0918u;
            // 0x2f0918: 0x46009306  mov.s       $f12, $f18 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[18]);
        ctx->pc = 0x2F091Cu;
        goto label_2f091c;
    }
    ctx->pc = 0x2F0914u;
    {
        const bool branch_taken_0x2f0914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0914u;
            // 0x2f0918: 0x46009306  mov.s       $f12, $f18 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0914) {
            ctx->pc = 0x2F092Cu;
            goto label_2f092c;
        }
    }
    ctx->pc = 0x2F091Cu;
label_2f091c:
    // 0x2f091c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2f091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0920:
    // 0x2f0920: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2f0920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0924:
    // 0x2f0924: 0x45020035  bc1fl       . + 4 + (0x35 << 2)
label_2f0928:
    if (ctx->pc == 0x2F0928u) {
        ctx->pc = 0x2F0928u;
            // 0x2f0928: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2F092Cu;
        goto label_2f092c;
    }
    ctx->pc = 0x2F0924u;
    {
        const bool branch_taken_0x2f0924 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0924) {
            ctx->pc = 0x2F0928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0924u;
            // 0x2f0928: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F09FCu;
            goto label_2f09fc;
        }
    }
    ctx->pc = 0x2F092Cu;
label_2f092c:
    // 0x2f092c: 0x46127034  c.lt.s      $f14, $f18
    ctx->pc = 0x2f092cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0930:
    // 0x2f0930: 0x45010031  bc1t        . + 4 + (0x31 << 2)
label_2f0934:
    if (ctx->pc == 0x2F0934u) {
        ctx->pc = 0x2F0938u;
        goto label_2f0938;
    }
    ctx->pc = 0x2F0930u;
    {
        const bool branch_taken_0x2f0930 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0930) {
            ctx->pc = 0x2F09F8u;
            goto label_2f09f8;
        }
    }
    ctx->pc = 0x2F0938u;
label_2f0938:
    // 0x2f0938: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2f0938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f093c:
    // 0x2f093c: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x2f093cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0940:
    // 0x2f0940: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2f0944:
    if (ctx->pc == 0x2F0944u) {
        ctx->pc = 0x2F0948u;
        goto label_2f0948;
    }
    ctx->pc = 0x2F0940u;
    {
        const bool branch_taken_0x2f0940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0940) {
            ctx->pc = 0x2F094Cu;
            goto label_2f094c;
        }
    }
    ctx->pc = 0x2F0948u;
label_2f0948:
    // 0x2f0948: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x2f0948u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_2f094c:
    // 0x2f094c: 0x46136834  c.lt.s      $f13, $f19
    ctx->pc = 0x2f094cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0950:
    // 0x2f0950: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2f0954:
    if (ctx->pc == 0x2F0954u) {
        ctx->pc = 0x2F0954u;
            // 0x2f0954: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2F0958u;
        goto label_2f0958;
    }
    ctx->pc = 0x2F0950u;
    {
        const bool branch_taken_0x2f0950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0950) {
            ctx->pc = 0x2F0954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0950u;
            // 0x2f0954: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0960u;
            goto label_2f0960;
        }
    }
    ctx->pc = 0x2F0958u;
label_2f0958:
    // 0x2f0958: 0x10000004  b           . + 4 + (0x4 << 2)
label_2f095c:
    if (ctx->pc == 0x2F095Cu) {
        ctx->pc = 0x2F095Cu;
            // 0x2f095c: 0x46009b46  mov.s       $f13, $f19 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[19]);
        ctx->pc = 0x2F0960u;
        goto label_2f0960;
    }
    ctx->pc = 0x2F0958u;
    {
        const bool branch_taken_0x2f0958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0958u;
            // 0x2f095c: 0x46009b46  mov.s       $f13, $f19 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[19]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0958) {
            ctx->pc = 0x2F096Cu;
            goto label_2f096c;
        }
    }
    ctx->pc = 0x2F0960u;
label_2f0960:
    // 0x2f0960: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x2f0960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0964:
    // 0x2f0964: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_2f0968:
    if (ctx->pc == 0x2F0968u) {
        ctx->pc = 0x2F096Cu;
        goto label_2f096c;
    }
    ctx->pc = 0x2F0964u;
    {
        const bool branch_taken_0x2f0964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0964) {
            ctx->pc = 0x2F09F8u;
            goto label_2f09f8;
        }
    }
    ctx->pc = 0x2F096Cu;
label_2f096c:
    // 0x2f096c: 0x46137834  c.lt.s      $f15, $f19
    ctx->pc = 0x2f096cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0970:
    // 0x2f0970: 0x45010021  bc1t        . + 4 + (0x21 << 2)
label_2f0974:
    if (ctx->pc == 0x2F0974u) {
        ctx->pc = 0x2F0978u;
        goto label_2f0978;
    }
    ctx->pc = 0x2F0970u;
    {
        const bool branch_taken_0x2f0970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0970) {
            ctx->pc = 0x2F09F8u;
            goto label_2f09f8;
        }
    }
    ctx->pc = 0x2F0978u;
label_2f0978:
    // 0x2f0978: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2f0978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f097c:
    // 0x2f097c: 0x46007836  c.le.s      $f15, $f0
    ctx->pc = 0x2f097cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0980:
    // 0x2f0980: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_2f0984:
    if (ctx->pc == 0x2F0984u) {
        ctx->pc = 0x2F0984u;
            // 0x2f0984: 0x46086001  sub.s       $f0, $f12, $f8 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
        ctx->pc = 0x2F0988u;
        goto label_2f0988;
    }
    ctx->pc = 0x2F0980u;
    {
        const bool branch_taken_0x2f0980 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0980) {
            ctx->pc = 0x2F0984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0980u;
            // 0x2f0984: 0x46086001  sub.s       $f0, $f12, $f8 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0990u;
            goto label_2f0990;
        }
    }
    ctx->pc = 0x2F0988u;
label_2f0988:
    // 0x2f0988: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x2f0988u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
label_2f098c:
    // 0x2f098c: 0x46086001  sub.s       $f0, $f12, $f8
    ctx->pc = 0x2f098cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
label_2f0990:
    // 0x2f0990: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f0990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f0994:
    // 0x2f0994: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f0994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f0998:
    // 0x2f0998: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2f0998u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
label_2f099c:
    // 0x2f099c: 0x46003040  add.s       $f1, $f6, $f0
    ctx->pc = 0x2f099cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_2f09a0:
    // 0x2f09a0: 0x46076801  sub.s       $f0, $f13, $f7
    ctx->pc = 0x2f09a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
label_2f09a4:
    // 0x2f09a4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2f09a4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_2f09a8:
    // 0x2f09a8: 0x46002880  add.s       $f2, $f5, $f0
    ctx->pc = 0x2f09a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_2f09ac:
    // 0x2f09ac: 0x460c7001  sub.s       $f0, $f14, $f12
    ctx->pc = 0x2f09acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
label_2f09b0:
    // 0x2f09b0: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2f09b0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
label_2f09b4:
    // 0x2f09b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f09b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f09b8:
    // 0x2f09b8: 0x46100003  div.s       $f0, $f0, $f16
    ctx->pc = 0x2f09b8u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[16];
label_2f09bc:
    // 0x2f09bc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f09bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f09c0:
    // 0x2f09c0: 0x46100803  div.s       $f0, $f1, $f16
    ctx->pc = 0x2f09c0u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[16];
label_2f09c4:
    // 0x2f09c4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f09c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f09c8:
    // 0x2f09c8: 0x460d7801  sub.s       $f0, $f15, $f13
    ctx->pc = 0x2f09c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[13]);
label_2f09cc:
    // 0x2f09cc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2f09ccu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_2f09d0:
    // 0x2f09d0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f09d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2f09d4:
    // 0x2f09d4: 0x46110043  div.s       $f1, $f0, $f17
    ctx->pc = 0x2f09d4u;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[17];
label_2f09d8:
    // 0x2f09d8: 0x46111003  div.s       $f0, $f2, $f17
    ctx->pc = 0x2f09d8u;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[17];
label_2f09dc:
    // 0x2f09dc: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2f09dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2f09e0:
    // 0x2f09e0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f09e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f09e4:
    // 0x2f09e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f09e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f09e8:
    // 0x2f09e8: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x2f09e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_2f09ec:
    // 0x2f09ec: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2f09ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2f09f0:
    // 0x2f09f0: 0x320f809  jalr        $t9
label_2f09f4:
    if (ctx->pc == 0x2F09F4u) {
        ctx->pc = 0x2F09F4u;
            // 0x2f09f4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2F09F8u;
        goto label_2f09f8;
    }
    ctx->pc = 0x2F09F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F09F8u);
        ctx->pc = 0x2F09F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F09F0u;
            // 0x2f09f4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F09F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F09F8u; }
            if (ctx->pc != 0x2F09F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F09F8u;
label_2f09f8:
    // 0x2f09f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f09f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f09fc:
    // 0x2f09fc: 0x3e00008  jr          $ra
label_2f0a00:
    if (ctx->pc == 0x2F0A00u) {
        ctx->pc = 0x2F0A00u;
            // 0x2f0a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2F0A04u;
        goto label_2f0a04;
    }
    ctx->pc = 0x2F09FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F09FCu;
            // 0x2f0a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0A04u;
label_2f0a04:
    // 0x2f0a04: 0x0  nop
    ctx->pc = 0x2f0a04u;
    // NOP
label_2f0a08:
    // 0x2f0a08: 0x0  nop
    ctx->pc = 0x2f0a08u;
    // NOP
label_2f0a0c:
    // 0x2f0a0c: 0x0  nop
    ctx->pc = 0x2f0a0cu;
    // NOP
}
