#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001340F0
// Address: 0x1340f0 - 0x1342e0
void sub_001340F0_0x1340f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001340F0_0x1340f0");
#endif

    ctx->pc = 0x1340f0u;

    // 0x1340f0: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x1340f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x1340f4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1340F4u;
    {
        const bool branch_taken_0x1340f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1340f4) {
            ctx->pc = 0x1340F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1340F4u;
            // 0x1340f8: 0x3c03001f  lui         $v1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134130u;
            goto label_134130;
        }
    }
    ctx->pc = 0x1340FCu;
    // 0x1340fc: 0x460e6036  c.le.s      $f12, $f14
    ctx->pc = 0x1340fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134100: 0x45020073  bc1fl       . + 4 + (0x73 << 2)
    ctx->pc = 0x134100u;
    {
        const bool branch_taken_0x134100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134100) {
            ctx->pc = 0x134104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134100u;
            // 0x134104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1342D0u;
            goto label_1342d0;
        }
    }
    ctx->pc = 0x134108u;
    // 0x134108: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x134108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13410c: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x13410cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x134110: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x134110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134114: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x134114u;
    {
        const bool branch_taken_0x134114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134114) {
            ctx->pc = 0x134124u;
            goto label_134124;
        }
    }
    ctx->pc = 0x13411Cu;
    // 0x13411c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x13411Cu;
    {
        const bool branch_taken_0x13411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13411Cu;
            // 0x134120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13411c) {
            ctx->pc = 0x1342D0u;
            goto label_1342d0;
        }
    }
    ctx->pc = 0x134124u;
label_134124:
    // 0x134124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x134124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134128: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x134128u;
    {
        const bool branch_taken_0x134128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134128) {
            ctx->pc = 0x1342D0u;
            goto label_1342d0;
        }
    }
    ctx->pc = 0x134130u;
label_134130:
    // 0x134130: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x134130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x134134: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x134134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x134138: 0x50620064  beql        $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x134138u;
    {
        const bool branch_taken_0x134138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x134138) {
            ctx->pc = 0x13413Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134138u;
            // 0x13413c: 0xe48e0000  swc1        $f14, 0x0($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1342CCu;
            goto label_1342cc;
        }
    }
    ctx->pc = 0x134140u;
    // 0x134140: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x134140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x134144: 0x50620040  beql        $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x134144u;
    {
        const bool branch_taken_0x134144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x134144) {
            ctx->pc = 0x134148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134144u;
            // 0x134148: 0x460c68c1  sub.s       $f3, $f13, $f12 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x134248u;
            goto label_134248;
        }
    }
    ctx->pc = 0x13414Cu;
    // 0x13414c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x13414cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x134150: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x134150u;
    {
        const bool branch_taken_0x134150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x134150) {
            ctx->pc = 0x13421Cu;
            goto label_13421c;
        }
    }
    ctx->pc = 0x134158u;
    // 0x134158: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x134158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x13415c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13415Cu;
    {
        const bool branch_taken_0x13415c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13415c) {
            ctx->pc = 0x1341A8u;
            goto label_1341a8;
        }
    }
    ctx->pc = 0x134164u;
    // 0x134164: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x134164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x134168: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134168u;
    {
        const bool branch_taken_0x134168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x134168) {
            ctx->pc = 0x134178u;
            goto label_134178;
        }
    }
    ctx->pc = 0x134170u;
    // 0x134170: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x134170u;
    {
        const bool branch_taken_0x134170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134170) {
            ctx->pc = 0x1342C8u;
            goto label_1342c8;
        }
    }
    ctx->pc = 0x134178u;
label_134178:
    // 0x134178: 0x460e6036  c.le.s      $f12, $f14
    ctx->pc = 0x134178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13417c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x13417Cu;
    {
        const bool branch_taken_0x13417c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13417c) {
            ctx->pc = 0x134180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13417Cu;
            // 0x134180: 0xe48e0000  swc1        $f14, 0x0($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1341A0u;
            goto label_1341a0;
        }
    }
    ctx->pc = 0x134184u;
    // 0x134184: 0x460d7034  c.lt.s      $f14, $f13
    ctx->pc = 0x134184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134188: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x134188u;
    {
        const bool branch_taken_0x134188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134188) {
            ctx->pc = 0x13419Cu;
            goto label_13419c;
        }
    }
    ctx->pc = 0x134190u;
    // 0x134190: 0xe48e0000  swc1        $f14, 0x0($a0)
    ctx->pc = 0x134190u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x134194: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x134194u;
    {
        const bool branch_taken_0x134194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134194u;
            // 0x134198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134194) {
            ctx->pc = 0x1342D0u;
            goto label_1342d0;
        }
    }
    ctx->pc = 0x13419Cu;
label_13419c:
    // 0x13419c: 0xe48e0000  swc1        $f14, 0x0($a0)
    ctx->pc = 0x13419cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1341a0:
    // 0x1341a0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1341A0u;
    {
        const bool branch_taken_0x1341a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1341A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1341A0u;
            // 0x1341a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341a0) {
            ctx->pc = 0x1342D0u;
            goto label_1342d0;
        }
    }
    ctx->pc = 0x1341A8u;
label_1341a8:
    // 0x1341a8: 0x460e6036  c.le.s      $f12, $f14
    ctx->pc = 0x1341a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1341ac: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1341ACu;
    {
        const bool branch_taken_0x1341ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1341ac) {
            ctx->pc = 0x1341B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1341ACu;
            // 0x1341b0: 0x460c6881  sub.s       $f2, $f13, $f12 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1341CCu;
            goto label_1341cc;
        }
    }
    ctx->pc = 0x1341B4u;
    // 0x1341b4: 0x460d7034  c.lt.s      $f14, $f13
    ctx->pc = 0x1341b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1341b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1341B8u;
    {
        const bool branch_taken_0x1341b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1341b8) {
            ctx->pc = 0x1341C8u;
            goto label_1341c8;
        }
    }
    ctx->pc = 0x1341C0u;
    // 0x1341c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1341C0u;
    {
        const bool branch_taken_0x1341c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1341C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1341C0u;
            // 0x1341c4: 0xe48e0000  swc1        $f14, 0x0($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341c0) {
            ctx->pc = 0x134214u;
            goto label_134214;
        }
    }
    ctx->pc = 0x1341C8u;
label_1341c8:
    // 0x1341c8: 0x460c6881  sub.s       $f2, $f13, $f12
    ctx->pc = 0x1341c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
label_1341cc:
    // 0x1341cc: 0x460c7001  sub.s       $f0, $f14, $f12
    ctx->pc = 0x1341ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x1341d0: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x1341d0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x1341d4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1341d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1341d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1341d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1341dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1341dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1341e0: 0x0  nop
    ctx->pc = 0x1341e0u;
    // NOP
    // 0x1341e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1341e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1341e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1341E8u;
    {
        const bool branch_taken_0x1341e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1341e8) {
            ctx->pc = 0x1341F4u;
            goto label_1341f4;
        }
    }
    ctx->pc = 0x1341F0u;
    // 0x1341f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1341f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1341f4:
    // 0x1341f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1341f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1341f8: 0x0  nop
    ctx->pc = 0x1341f8u;
    // NOP
    // 0x1341fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1341fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x134200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134204: 0x0  nop
    ctx->pc = 0x134204u;
    // NOP
    // 0x134208: 0x460e0018  adda.s      $f0, $f14
    ctx->pc = 0x134208u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
    // 0x13420c: 0x4601101d  msub.s      $f0, $f2, $f1
    ctx->pc = 0x13420cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x134210: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x134210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_134214:
    // 0x134214: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x134214u;
    {
        const bool branch_taken_0x134214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134214u;
            // 0x134218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134214) {
            ctx->pc = 0x1342D0u;
            goto label_1342d0;
        }
    }
    ctx->pc = 0x13421Cu;
label_13421c:
    // 0x13421c: 0x460e6036  c.le.s      $f12, $f14
    ctx->pc = 0x13421cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134220: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x134220u;
    {
        const bool branch_taken_0x134220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134220) {
            ctx->pc = 0x134230u;
            goto label_134230;
        }
    }
    ctx->pc = 0x134228u;
    // 0x134228: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134228u;
    {
        const bool branch_taken_0x134228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13422Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134228u;
            // 0x13422c: 0xe48c0000  swc1        $f12, 0x0($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134228) {
            ctx->pc = 0x134240u;
            goto label_134240;
        }
    }
    ctx->pc = 0x134230u;
label_134230:
    // 0x134230: 0x460e6836  c.le.s      $f13, $f14
    ctx->pc = 0x134230u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134234: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x134234u;
    {
        const bool branch_taken_0x134234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134234) {
            ctx->pc = 0x134238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134234u;
            // 0x134238: 0xe48e0000  swc1        $f14, 0x0($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x134240u;
            goto label_134240;
        }
    }
    ctx->pc = 0x13423Cu;
    // 0x13423c: 0xe48d0000  swc1        $f13, 0x0($a0)
    ctx->pc = 0x13423cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_134240:
    // 0x134240: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x134240u;
    {
        const bool branch_taken_0x134240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134240u;
            // 0x134244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134240) {
            ctx->pc = 0x1342D0u;
            goto label_1342d0;
        }
    }
    ctx->pc = 0x134248u;
label_134248:
    // 0x134248: 0x460c7101  sub.s       $f4, $f14, $f12
    ctx->pc = 0x134248u;
    ctx->f[4] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x13424c: 0x46032043  div.s       $f1, $f4, $f3
    ctx->pc = 0x13424cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[3];
    // 0x134250: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x134254: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x134254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x134258: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13425c: 0x0  nop
    ctx->pc = 0x13425cu;
    // NOP
    // 0x134260: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134264: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x134264u;
    {
        const bool branch_taken_0x134264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134264) {
            ctx->pc = 0x134270u;
            goto label_134270;
        }
    }
    ctx->pc = 0x13426Cu;
    // 0x13426c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_134270:
    // 0x134270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x134274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x134278: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x134278u;
    {
        const bool branch_taken_0x134278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13427Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134278u;
            // 0x13427c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134278) {
            ctx->pc = 0x1342ACu;
            goto label_1342ac;
        }
    }
    ctx->pc = 0x134280u;
    // 0x134280: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x134280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x134284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134288: 0x0  nop
    ctx->pc = 0x134288u;
    // NOP
    // 0x13428c: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x13428cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x134290: 0x46046041  sub.s       $f1, $f12, $f4
    ctx->pc = 0x134290u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[4]);
    // 0x134294: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134298: 0x0  nop
    ctx->pc = 0x134298u;
    // NOP
    // 0x13429c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x13429cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1342a0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1342a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1342a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1342A4u;
    {
        const bool branch_taken_0x1342a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1342A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1342A4u;
            // 0x1342a8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342a4) {
            ctx->pc = 0x1342C0u;
            goto label_1342c0;
        }
    }
    ctx->pc = 0x1342ACu;
label_1342ac:
    // 0x1342ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1342acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1342b0: 0x0  nop
    ctx->pc = 0x1342b0u;
    // NOP
    // 0x1342b4: 0x460e0018  adda.s      $f0, $f14
    ctx->pc = 0x1342b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
    // 0x1342b8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1342b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1342bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1342bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1342c0:
    // 0x1342c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1342C0u;
    {
        const bool branch_taken_0x1342c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1342C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1342C0u;
            // 0x1342c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342c0) {
            ctx->pc = 0x1342D0u;
            goto label_1342d0;
        }
    }
    ctx->pc = 0x1342C8u;
label_1342c8:
    // 0x1342c8: 0xe48e0000  swc1        $f14, 0x0($a0)
    ctx->pc = 0x1342c8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1342cc:
    // 0x1342cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1342ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1342d0:
    // 0x1342d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1342D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1342D8u;
    // 0x1342d8: 0x0  nop
    ctx->pc = 0x1342d8u;
    // NOP
    // 0x1342dc: 0x0  nop
    ctx->pc = 0x1342dcu;
    // NOP
}
