#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C2F0
// Address: 0x20c2f0 - 0x20c440
void sub_0020C2F0_0x20c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C2F0_0x20c2f0");
#endif

    switch (ctx->pc) {
        case 0x20c32cu: goto label_20c32c;
        default: break;
    }

    ctx->pc = 0x20c2f0u;

    // 0x20c2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c2f4: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x20c2f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20c2f8: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x20c2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20c2fc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20c2fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c300: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x20c300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20c304: 0xc4870008  lwc1        $f7, 0x8($a0)
    ctx->pc = 0x20c304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20c308: 0xc7a8001c  lwc1        $f8, 0x1C($sp)
    ctx->pc = 0x20c308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x20c30c: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x20c30cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20c310: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x20c310u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20c314: 0x1420003c  bnez        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x20C314u;
    {
        const bool branch_taken_0x20c314 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C314u;
            // 0x20c318: 0xe7a70018  swc1        $f7, 0x18($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c314) {
            ctx->pc = 0x20C408u;
            goto label_20c408;
        }
    }
    ctx->pc = 0x20C31Cu;
    // 0x20c31c: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x20c31cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20c320: 0x14200039  bnez        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x20C320u;
    {
        const bool branch_taken_0x20c320 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c320) {
            ctx->pc = 0x20C408u;
            goto label_20c408;
        }
    }
    ctx->pc = 0x20C328u;
    // 0x20c328: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x20c328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20c32c:
    // 0x20c32c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x20c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x20c330: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x20c330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20c334: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x20c334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20c338: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x20c338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c33c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x20c33cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20c340: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x20c340u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20c344: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x20c344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20c348: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x20c348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c34c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x20c34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c350: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20c350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c354: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20C354u;
    {
        const bool branch_taken_0x20c354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20C358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C354u;
            // 0x20c358: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c354) {
            ctx->pc = 0x20C364u;
            goto label_20c364;
        }
    }
    ctx->pc = 0x20C35Cu;
    // 0x20c35c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20C35Cu;
    {
        const bool branch_taken_0x20c35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C35Cu;
            // 0x20c360: 0xc7a30004  lwc1        $f3, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c35c) {
            ctx->pc = 0x20C36Cu;
            goto label_20c36c;
        }
    }
    ctx->pc = 0x20C364u;
label_20c364:
    // 0x20c364: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x20c364u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
    // 0x20c368: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x20c368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20c36c:
    // 0x20c36c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x20c36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c370: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x20c370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c374: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20C374u;
    {
        const bool branch_taken_0x20c374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20C378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C374u;
            // 0x20c378: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c374) {
            ctx->pc = 0x20C384u;
            goto label_20c384;
        }
    }
    ctx->pc = 0x20C37Cu;
    // 0x20c37c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20C37Cu;
    {
        const bool branch_taken_0x20c37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C37Cu;
            // 0x20c380: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c37c) {
            ctx->pc = 0x20C38Cu;
            goto label_20c38c;
        }
    }
    ctx->pc = 0x20C384u;
label_20c384:
    // 0x20c384: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x20c384u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x20c388: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x20c388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_20c38c:
    // 0x20c38c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x20c38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20c390: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x20c390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c394: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20c394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c398: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20C398u;
    {
        const bool branch_taken_0x20c398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c398) {
            ctx->pc = 0x20C39Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C398u;
            // 0x20c39c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C3A0u;
            goto label_20c3a0;
        }
    }
    ctx->pc = 0x20C3A0u;
label_20c3a0:
    // 0x20c3a0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x20c3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x20c3a4: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x20c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c3a8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x20c3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c3ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20c3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c3b0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20C3B0u;
    {
        const bool branch_taken_0x20c3b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c3b0) {
            ctx->pc = 0x20C3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3B0u;
            // 0x20c3b4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C3B8u;
            goto label_20c3b8;
        }
    }
    ctx->pc = 0x20C3B8u;
label_20c3b8:
    // 0x20c3b8: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x20c3b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c3bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x20C3BCu;
    {
        const bool branch_taken_0x20c3bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20C3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3BCu;
            // 0x20c3c0: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3bc) {
            ctx->pc = 0x20C3CCu;
            goto label_20c3cc;
        }
    }
    ctx->pc = 0x20C3C4u;
    // 0x20c3c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20C3C4u;
    {
        const bool branch_taken_0x20c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c3c4) {
            ctx->pc = 0x20C3D0u;
            goto label_20c3d0;
        }
    }
    ctx->pc = 0x20C3CCu;
label_20c3cc:
    // 0x20c3cc: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x20c3ccu;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
label_20c3d0:
    // 0x20c3d0: 0x46033036  c.le.s      $f6, $f3
    ctx->pc = 0x20c3d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c3d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20C3D4u;
    {
        const bool branch_taken_0x20c3d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c3d4) {
            ctx->pc = 0x20C3D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3D4u;
            // 0x20c3d8: 0x46001986  mov.s       $f6, $f3 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C3DCu;
            goto label_20c3dc;
        }
    }
    ctx->pc = 0x20C3DCu;
label_20c3dc:
    // 0x20c3dc: 0x46023836  c.le.s      $f7, $f2
    ctx->pc = 0x20c3dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c3e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20C3E0u;
    {
        const bool branch_taken_0x20c3e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c3e0) {
            ctx->pc = 0x20C3E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3E0u;
            // 0x20c3e4: 0x460011c6  mov.s       $f7, $f2 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C3E8u;
            goto label_20c3e8;
        }
    }
    ctx->pc = 0x20C3E8u;
label_20c3e8:
    // 0x20c3e8: 0x46014036  c.le.s      $f8, $f1
    ctx->pc = 0x20c3e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c3ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20C3ECu;
    {
        const bool branch_taken_0x20c3ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c3ec) {
            ctx->pc = 0x20C3F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3ECu;
            // 0x20c3f0: 0x46000a06  mov.s       $f8, $f1 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C3F4u;
            goto label_20c3f4;
        }
    }
    ctx->pc = 0x20C3F4u;
label_20c3f4:
    // 0x20c3f4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x20c3f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x20c3f8: 0x125182a  slt         $v1, $t1, $a1
    ctx->pc = 0x20c3f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x20c3fc: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x20C3FCu;
    {
        const bool branch_taken_0x20c3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3FCu;
            // 0x20c400: 0x1064021  addu        $t0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3fc) {
            ctx->pc = 0x20C32Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c32c;
        }
    }
    ctx->pc = 0x20C404u;
    // 0x20c404: 0x0  nop
    ctx->pc = 0x20c404u;
    // NOP
label_20c408:
    // 0x20c408: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x20c408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20c40c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x20c40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c410: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x20c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c414: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x20c414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x20c418: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x20c418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x20c41c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20c41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x20c420: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x20c420u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x20c424: 0xe4e50010  swc1        $f5, 0x10($a3)
    ctx->pc = 0x20c424u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x20c428: 0xe4e60014  swc1        $f6, 0x14($a3)
    ctx->pc = 0x20c428u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x20c42c: 0xe4e70018  swc1        $f7, 0x18($a3)
    ctx->pc = 0x20c42cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x20c430: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x20c430u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x20c434: 0x3e00008  jr          $ra
    ctx->pc = 0x20C434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C434u;
            // 0x20c438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C43Cu;
    // 0x20c43c: 0x0  nop
    ctx->pc = 0x20c43cu;
    // NOP
}
