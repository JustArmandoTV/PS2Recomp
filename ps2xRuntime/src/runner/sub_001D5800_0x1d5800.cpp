#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5800
// Address: 0x1d5800 - 0x1d5aa0
void sub_001D5800_0x1d5800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5800_0x1d5800");
#endif

    ctx->pc = 0x1d5800u;

    // 0x1d5800: 0x3c033f94  lui         $v1, 0x3F94
    ctx->pc = 0x1d5800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16276 << 16));
    // 0x1d5804: 0x346325ed  ori         $v1, $v1, 0x25ED
    ctx->pc = 0x1d5804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9709);
    // 0x1d5808: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1d5808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d580c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d580cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5810: 0x0  nop
    ctx->pc = 0x1d5810u;
    // NOP
    // 0x1d5814: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d5814u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5818: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5818u;
    {
        const bool branch_taken_0x1d5818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5818) {
            ctx->pc = 0x1D581Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5818u;
            // 0x1d581c: 0x3c033f0e  lui         $v1, 0x3F0E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5828u;
            goto label_1d5828;
        }
    }
    ctx->pc = 0x1D5820u;
    // 0x1d5820: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5820u;
    {
        const bool branch_taken_0x1d5820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5820u;
            // 0x1d5824: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5820) {
            ctx->pc = 0x1D5844u;
            goto label_1d5844;
        }
    }
    ctx->pc = 0x1D5828u;
label_1d5828:
    // 0x1d5828: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x1d5828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
    // 0x1d582c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d582cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5830: 0x0  nop
    ctx->pc = 0x1d5830u;
    // NOP
    // 0x1d5834: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d5834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5838: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5838u;
    {
        const bool branch_taken_0x1d5838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5838) {
            ctx->pc = 0x1D583Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5838u;
            // 0x1d583c: 0x3c033f94  lui         $v1, 0x3F94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16276 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5848u;
            goto label_1d5848;
        }
    }
    ctx->pc = 0x1D5840u;
    // 0x1d5840: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d5840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1d5844:
    // 0x1d5844: 0x3c033f94  lui         $v1, 0x3F94
    ctx->pc = 0x1d5844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16276 << 16));
label_1d5848:
    // 0x1d5848: 0x346325ed  ori         $v1, $v1, 0x25ED
    ctx->pc = 0x1d5848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9709);
    // 0x1d584c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1d584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5850: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d5850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5854: 0x0  nop
    ctx->pc = 0x1d5854u;
    // NOP
    // 0x1d5858: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d5858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d585c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D585Cu;
    {
        const bool branch_taken_0x1d585c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d585c) {
            ctx->pc = 0x1D5860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D585Cu;
            // 0x1d5860: 0x3c033f0e  lui         $v1, 0x3F0E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D586Cu;
            goto label_1d586c;
        }
    }
    ctx->pc = 0x1D5864u;
    // 0x1d5864: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5864u;
    {
        const bool branch_taken_0x1d5864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5864u;
            // 0x1d5868: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5864) {
            ctx->pc = 0x1D5888u;
            goto label_1d5888;
        }
    }
    ctx->pc = 0x1D586Cu;
label_1d586c:
    // 0x1d586c: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x1d586cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
    // 0x1d5870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d5870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5874: 0x0  nop
    ctx->pc = 0x1d5874u;
    // NOP
    // 0x1d5878: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d5878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d587c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D587Cu;
    {
        const bool branch_taken_0x1d587c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d587c) {
            ctx->pc = 0x1D5880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D587Cu;
            // 0x1d5880: 0x3c033f94  lui         $v1, 0x3F94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16276 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D588Cu;
            goto label_1d588c;
        }
    }
    ctx->pc = 0x1D5884u;
    // 0x1d5884: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d5884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1d5888:
    // 0x1d5888: 0x3c033f94  lui         $v1, 0x3F94
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16276 << 16));
label_1d588c:
    // 0x1d588c: 0x346325ed  ori         $v1, $v1, 0x25ED
    ctx->pc = 0x1d588cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9709);
    // 0x1d5890: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1d5890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d5894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5898: 0x0  nop
    ctx->pc = 0x1d5898u;
    // NOP
    // 0x1d589c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d589cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d58a0: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D58A0u;
    {
        const bool branch_taken_0x1d58a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d58a0) {
            ctx->pc = 0x1D58A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58A0u;
            // 0x1d58a4: 0x3c033f0e  lui         $v1, 0x3F0E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D58B0u;
            goto label_1d58b0;
        }
    }
    ctx->pc = 0x1D58A8u;
    // 0x1d58a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D58A8u;
    {
        const bool branch_taken_0x1d58a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58A8u;
            // 0x1d58ac: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58a8) {
            ctx->pc = 0x1D58CCu;
            goto label_1d58cc;
        }
    }
    ctx->pc = 0x1D58B0u;
label_1d58b0:
    // 0x1d58b0: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x1d58b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
    // 0x1d58b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d58b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d58b8: 0x0  nop
    ctx->pc = 0x1d58b8u;
    // NOP
    // 0x1d58bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d58bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d58c0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D58C0u;
    {
        const bool branch_taken_0x1d58c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d58c0) {
            ctx->pc = 0x1D58C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58C0u;
            // 0x1d58c4: 0x3c033c3d  lui         $v1, 0x3C3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15421 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D58D0u;
            goto label_1d58d0;
        }
    }
    ctx->pc = 0x1D58C8u;
    // 0x1d58c8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1d58c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1d58cc:
    // 0x1d58cc: 0x3c033c3d  lui         $v1, 0x3C3D
    ctx->pc = 0x1d58ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15421 << 16));
label_1d58d0:
    // 0x1d58d0: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x1d58d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
    // 0x1d58d4: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1d58d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d58d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d58d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d58dc: 0x0  nop
    ctx->pc = 0x1d58dcu;
    // NOP
    // 0x1d58e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d58e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d58e4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D58E4u;
    {
        const bool branch_taken_0x1d58e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d58e4) {
            ctx->pc = 0x1D58E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58E4u;
            // 0x1d58e8: 0x3c033aca  lui         $v1, 0x3ACA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15050 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D58F4u;
            goto label_1d58f4;
        }
    }
    ctx->pc = 0x1D58ECu;
    // 0x1d58ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D58ECu;
    {
        const bool branch_taken_0x1d58ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58ECu;
            // 0x1d58f0: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58ec) {
            ctx->pc = 0x1D5910u;
            goto label_1d5910;
        }
    }
    ctx->pc = 0x1D58F4u;
label_1d58f4:
    // 0x1d58f4: 0x34634587  ori         $v1, $v1, 0x4587
    ctx->pc = 0x1d58f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17799);
    // 0x1d58f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d58f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d58fc: 0x0  nop
    ctx->pc = 0x1d58fcu;
    // NOP
    // 0x1d5900: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d5900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5904: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5904u;
    {
        const bool branch_taken_0x1d5904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5904) {
            ctx->pc = 0x1D5908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5904u;
            // 0x1d5908: 0x3c033bfc  lui         $v1, 0x3BFC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15356 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5914u;
            goto label_1d5914;
        }
    }
    ctx->pc = 0x1D590Cu;
    // 0x1d590c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1d590cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1d5910:
    // 0x1d5910: 0x3c033bfc  lui         $v1, 0x3BFC
    ctx->pc = 0x1d5910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15356 << 16));
label_1d5914:
    // 0x1d5914: 0x3463d6ea  ori         $v1, $v1, 0xD6EA
    ctx->pc = 0x1d5914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55018);
    // 0x1d5918: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1d5918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d591c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d591cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5920: 0x0  nop
    ctx->pc = 0x1d5920u;
    // NOP
    // 0x1d5924: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d5924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5928: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5928u;
    {
        const bool branch_taken_0x1d5928 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5928) {
            ctx->pc = 0x1D592Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5928u;
            // 0x1d592c: 0x3c033972  lui         $v1, 0x3972 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14706 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5938u;
            goto label_1d5938;
        }
    }
    ctx->pc = 0x1D5930u;
    // 0x1d5930: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5930u;
    {
        const bool branch_taken_0x1d5930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5930u;
            // 0x1d5934: 0xe4a00010  swc1        $f0, 0x10($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5930) {
            ctx->pc = 0x1D5954u;
            goto label_1d5954;
        }
    }
    ctx->pc = 0x1D5938u;
label_1d5938:
    // 0x1d5938: 0x3463b9d6  ori         $v1, $v1, 0xB9D6
    ctx->pc = 0x1d5938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47574);
    // 0x1d593c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d593cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5940: 0x0  nop
    ctx->pc = 0x1d5940u;
    // NOP
    // 0x1d5944: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d5944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5948: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5948u;
    {
        const bool branch_taken_0x1d5948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5948) {
            ctx->pc = 0x1D594Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5948u;
            // 0x1d594c: 0x3c033bfc  lui         $v1, 0x3BFC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15356 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5958u;
            goto label_1d5958;
        }
    }
    ctx->pc = 0x1D5950u;
    // 0x1d5950: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x1d5950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_1d5954:
    // 0x1d5954: 0x3c033bfc  lui         $v1, 0x3BFC
    ctx->pc = 0x1d5954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15356 << 16));
label_1d5958:
    // 0x1d5958: 0x3463d6ea  ori         $v1, $v1, 0xD6EA
    ctx->pc = 0x1d5958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55018);
    // 0x1d595c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x1d595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d5960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5964: 0x0  nop
    ctx->pc = 0x1d5964u;
    // NOP
    // 0x1d5968: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d5968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d596c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D596Cu;
    {
        const bool branch_taken_0x1d596c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d596c) {
            ctx->pc = 0x1D5970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D596Cu;
            // 0x1d5970: 0x3c0338e2  lui         $v1, 0x38E2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14562 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D597Cu;
            goto label_1d597c;
        }
    }
    ctx->pc = 0x1D5974u;
    // 0x1d5974: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5974u;
    {
        const bool branch_taken_0x1d5974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5974u;
            // 0x1d5978: 0xe4a00014  swc1        $f0, 0x14($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5974) {
            ctx->pc = 0x1D5998u;
            goto label_1d5998;
        }
    }
    ctx->pc = 0x1D597Cu;
label_1d597c:
    // 0x1d597c: 0x34638b50  ori         $v1, $v1, 0x8B50
    ctx->pc = 0x1d597cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35664);
    // 0x1d5980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d5980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5984: 0x0  nop
    ctx->pc = 0x1d5984u;
    // NOP
    // 0x1d5988: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d5988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d598c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D598Cu;
    {
        const bool branch_taken_0x1d598c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d598c) {
            ctx->pc = 0x1D5990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D598Cu;
            // 0x1d5990: 0xc4a1002c  lwc1        $f1, 0x2C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D599Cu;
            goto label_1d599c;
        }
    }
    ctx->pc = 0x1D5994u;
    // 0x1d5994: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x1d5994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_1d5998:
    // 0x1d5998: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x1d5998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d599c:
    // 0x1d599c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1d599cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1d59a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d59a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d59a4: 0x0  nop
    ctx->pc = 0x1d59a4u;
    // NOP
    // 0x1d59a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d59a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d59ac: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D59ACu;
    {
        const bool branch_taken_0x1d59ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d59ac) {
            ctx->pc = 0x1D59B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D59ACu;
            // 0x1d59b0: 0x3c034120  lui         $v1, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D59BCu;
            goto label_1d59bc;
        }
    }
    ctx->pc = 0x1D59B4u;
    // 0x1d59b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D59B4u;
    {
        const bool branch_taken_0x1d59b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D59B4u;
            // 0x1d59b8: 0xe4a0002c  swc1        $f0, 0x2C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59b4) {
            ctx->pc = 0x1D59D4u;
            goto label_1d59d4;
        }
    }
    ctx->pc = 0x1D59BCu;
label_1d59bc:
    // 0x1d59bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d59bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d59c0: 0x0  nop
    ctx->pc = 0x1d59c0u;
    // NOP
    // 0x1d59c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d59c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d59c8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D59C8u;
    {
        const bool branch_taken_0x1d59c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d59c8) {
            ctx->pc = 0x1D59CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D59C8u;
            // 0x1d59cc: 0xc4a10020  lwc1        $f1, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D59D8u;
            goto label_1d59d8;
        }
    }
    ctx->pc = 0x1D59D0u;
    // 0x1d59d0: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x1d59d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_1d59d4:
    // 0x1d59d4: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x1d59d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d59d8:
    // 0x1d59d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d59d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d59dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d59dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d59e0: 0x0  nop
    ctx->pc = 0x1d59e0u;
    // NOP
    // 0x1d59e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d59e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d59e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D59E8u;
    {
        const bool branch_taken_0x1d59e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d59e8) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D59F0u;
    // 0x1d59f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D59F0u;
    {
        const bool branch_taken_0x1d59f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D59F0u;
            // 0x1d59f4: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59f0) {
            ctx->pc = 0x1D5A10u;
            goto label_1d5a10;
        }
    }
    ctx->pc = 0x1D59F8u;
label_1d59f8:
    // 0x1d59f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d59f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d59fc: 0x0  nop
    ctx->pc = 0x1d59fcu;
    // NOP
    // 0x1d5a00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d5a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5a04: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5A04u;
    {
        const bool branch_taken_0x1d5a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5a04) {
            ctx->pc = 0x1D5A08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A04u;
            // 0x1d5a08: 0x3c033e32  lui         $v1, 0x3E32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5A14u;
            goto label_1d5a14;
        }
    }
    ctx->pc = 0x1D5A0Cu;
    // 0x1d5a0c: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x1d5a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_1d5a10:
    // 0x1d5a10: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x1d5a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
label_1d5a14:
    // 0x1d5a14: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x1d5a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x1d5a18: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1d5a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d5a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5a20: 0x0  nop
    ctx->pc = 0x1d5a20u;
    // NOP
    // 0x1d5a24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d5a24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5a28: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5A28u;
    {
        const bool branch_taken_0x1d5a28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5a28) {
            ctx->pc = 0x1D5A38u;
            goto label_1d5a38;
        }
    }
    ctx->pc = 0x1D5A30u;
    // 0x1d5a30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5A30u;
    {
        const bool branch_taken_0x1d5a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A30u;
            // 0x1d5a34: 0xe4a00018  swc1        $f0, 0x18($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a30) {
            ctx->pc = 0x1D5A50u;
            goto label_1d5a50;
        }
    }
    ctx->pc = 0x1D5A38u;
label_1d5a38:
    // 0x1d5a38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5a38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5a3c: 0x0  nop
    ctx->pc = 0x1d5a3cu;
    // NOP
    // 0x1d5a40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d5a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5a44: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5A44u;
    {
        const bool branch_taken_0x1d5a44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5a44) {
            ctx->pc = 0x1D5A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A44u;
            // 0x1d5a48: 0x3c033e32  lui         $v1, 0x3E32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5A54u;
            goto label_1d5a54;
        }
    }
    ctx->pc = 0x1D5A4Cu;
    // 0x1d5a4c: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1d5a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_1d5a50:
    // 0x1d5a50: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x1d5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
label_1d5a54:
    // 0x1d5a54: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x1d5a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x1d5a58: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x1d5a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5a5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d5a5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5a60: 0x0  nop
    ctx->pc = 0x1d5a60u;
    // NOP
    // 0x1d5a64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d5a64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5a68: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5A68u;
    {
        const bool branch_taken_0x1d5a68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5a68) {
            ctx->pc = 0x1D5A78u;
            goto label_1d5a78;
        }
    }
    ctx->pc = 0x1D5A70u;
    // 0x1d5a70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5A70u;
    {
        const bool branch_taken_0x1d5a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A70u;
            // 0x1d5a74: 0xe4a0001c  swc1        $f0, 0x1C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a70) {
            ctx->pc = 0x1D5A90u;
            goto label_1d5a90;
        }
    }
    ctx->pc = 0x1D5A78u;
label_1d5a78:
    // 0x1d5a78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5a7c: 0x0  nop
    ctx->pc = 0x1d5a7cu;
    // NOP
    // 0x1d5a80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d5a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5a84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5A84u;
    {
        const bool branch_taken_0x1d5a84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5a84) {
            ctx->pc = 0x1D5A90u;
            goto label_1d5a90;
        }
    }
    ctx->pc = 0x1D5A8Cu;
    // 0x1d5a8c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x1d5a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_1d5a90:
    // 0x1d5a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5A98u;
    // 0x1d5a98: 0x0  nop
    ctx->pc = 0x1d5a98u;
    // NOP
    // 0x1d5a9c: 0x0  nop
    ctx->pc = 0x1d5a9cu;
    // NOP
}
