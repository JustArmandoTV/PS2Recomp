#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055A870
// Address: 0x55a870 - 0x55a950
void sub_0055A870_0x55a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055A870_0x55a870");
#endif

    ctx->pc = 0x55a870u;

    // 0x55a870: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x55a870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x55a874: 0x8c870088  lw          $a3, 0x88($a0)
    ctx->pc = 0x55a874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x55a878: 0x8c660eac  lw          $a2, 0xEAC($v1)
    ctx->pc = 0x55a878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
    // 0x55a87c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x55a87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x55a880: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55a880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x55a884: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x55a884u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x55a888: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x55a888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x55a88c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x55a88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x55a890: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x55a890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x55a894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x55a898: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x55a898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x55a89c: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x55a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x55a8a0: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x55a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x55a8a4: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x55a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x55a8a8: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x55a8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x55a8ac: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x55a8acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x55a8b0: 0x8ce60094  lw          $a2, 0x94($a3)
    ctx->pc = 0x55a8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x55a8b4: 0x8ce5009c  lw          $a1, 0x9C($a3)
    ctx->pc = 0x55a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 156)));
    // 0x55a8b8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x55a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x55a8bc: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x55a8bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x55a8c0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x55a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x55a8c4: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x55a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x55a8c8: 0x8ce60098  lw          $a2, 0x98($a3)
    ctx->pc = 0x55a8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x55a8cc: 0x8ce500a0  lw          $a1, 0xA0($a3)
    ctx->pc = 0x55a8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x55a8d0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x55a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x55a8d4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x55a8d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x55a8d8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x55a8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x55a8dc: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x55a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
    // 0x55a8e0: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x55a8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x55a8e4: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x55A8E4u;
    {
        const bool branch_taken_0x55a8e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55a8e4) {
            ctx->pc = 0x55A908u;
            goto label_55a908;
        }
    }
    ctx->pc = 0x55A8ECu;
    // 0x55a8ec: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x55A8ECu;
    {
        const bool branch_taken_0x55a8ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a8ec) {
            ctx->pc = 0x55A8F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A8ECu;
            // 0x55a8f0: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A8FCu;
            goto label_55a8fc;
        }
    }
    ctx->pc = 0x55A8F4u;
    // 0x55a8f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x55A8F4u;
    {
        const bool branch_taken_0x55a8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a8f4) {
            ctx->pc = 0x55A93Cu;
            goto label_55a93c;
        }
    }
    ctx->pc = 0x55A8FCu;
label_55a8fc:
    // 0x55a8fc: 0x3c034108  lui         $v1, 0x4108
    ctx->pc = 0x55a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16648 << 16));
    // 0x55a900: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x55A900u;
    {
        const bool branch_taken_0x55a900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55A904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A900u;
            // 0x55a904: 0xac830070  sw          $v1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a900) {
            ctx->pc = 0x55A93Cu;
            goto label_55a93c;
        }
    }
    ctx->pc = 0x55A908u;
label_55a908:
    // 0x55a908: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x55a908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x55a90c: 0xc461f3c0  lwc1        $f1, -0xC40($v1)
    ctx->pc = 0x55a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x55a910: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x55a910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x55a914: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x55a914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x55a918: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x55a918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x55a91c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x55a91cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x55a920: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x55a920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x55a924: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55a924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x55a928: 0x46021843  div.s       $f1, $f3, $f2
    ctx->pc = 0x55a928u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[2];
    // 0x55a92c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x55a92cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x55a930: 0xe4810070  swc1        $f1, 0x70($a0)
    ctx->pc = 0x55a930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x55a934: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x55a934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x55a938: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x55a938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
label_55a93c:
    // 0x55a93c: 0x3e00008  jr          $ra
    ctx->pc = 0x55A93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55A944u;
    // 0x55a944: 0x0  nop
    ctx->pc = 0x55a944u;
    // NOP
    // 0x55a948: 0x0  nop
    ctx->pc = 0x55a948u;
    // NOP
    // 0x55a94c: 0x0  nop
    ctx->pc = 0x55a94cu;
    // NOP
}
