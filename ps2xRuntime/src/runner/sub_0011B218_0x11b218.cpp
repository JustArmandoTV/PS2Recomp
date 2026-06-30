#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011B218
// Address: 0x11b218 - 0x11b2f8
void sub_0011B218_0x11b218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B218_0x11b218");
#endif

    switch (ctx->pc) {
        case 0x11b258u: goto label_11b258;
        case 0x11b28cu: goto label_11b28c;
        default: break;
    }

    ctx->pc = 0x11b218u;

    // 0x11b218: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11b218u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11b21c: 0x440e6000  mfc1        $t6, $f12
    ctx->pc = 0x11b21cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11b220: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11b220u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11b224: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x11b224u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x11b228: 0x1cf7824  and         $t7, $t6, $t7
    ctx->pc = 0x11b228u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x11b22c: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x11b22cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x11b230: 0x18f782b  sltu        $t7, $t4, $t7
    ctx->pc = 0x11b230u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x11b234: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B234u;
    {
        const bool branch_taken_0x11b234 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B234u;
            // 0x11b238: 0x440d6000  mfc1        $t5, $f12 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b234) {
            ctx->pc = 0x11B258u;
            goto label_11b258;
        }
    }
    ctx->pc = 0x11B23Cu;
    // 0x11b23c: 0x5c30008  bgezl       $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B23Cu;
    {
        const bool branch_taken_0x11b23c = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x11b23c) {
            ctx->pc = 0x11B240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B23Cu;
            // 0x11b240: 0xe4dc3  sra         $t1, $t6, 23 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B260u;
            goto label_11b260;
        }
    }
    ctx->pc = 0x11B244u;
    // 0x11b244: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x11b244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11b248: 0x0  nop
    ctx->pc = 0x11b248u;
    // NOP
    // 0x11b24c: 0x0  nop
    ctx->pc = 0x11b24cu;
    // NOP
    // 0x11b250: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x11b250u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x11b254: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x11b254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
label_11b258:
    // 0x11b258: 0x3e00008  jr          $ra
    ctx->pc = 0x11B258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B258u;
            // 0x11b25c: 0x448d0000  mtc1        $t5, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B260u;
label_11b260:
    // 0x11b260: 0x2529ff81  addiu       $t1, $t1, -0x7F
    ctx->pc = 0x11b260u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967169));
    // 0x11b264: 0x1cc7824  and         $t7, $t6, $t4
    ctx->pc = 0x11b264u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x11b268: 0x312d0001  andi        $t5, $t1, 0x1
    ctx->pc = 0x11b268u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x11b26c: 0x3c0e0080  lui         $t6, 0x80
    ctx->pc = 0x11b26cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)128 << 16));
    // 0x11b270: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x11b270u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
    // 0x11b274: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x11b274u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x11b278: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11b278u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b27c: 0x1ae7004  sllv        $t6, $t6, $t5
    ctx->pc = 0x11b27cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x11b280: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b280u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b284: 0xe7040  sll         $t6, $t6, 1
    ctx->pc = 0x11b284u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x11b288: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x11b288u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
label_11b28c:
    // 0x11b28c: 0x16c6821  addu        $t5, $t3, $t4
    ctx->pc = 0x11b28cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x11b290: 0x1cd782a  slt         $t7, $t6, $t5
    ctx->pc = 0x11b290u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11b294: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B294u;
    {
        const bool branch_taken_0x11b294 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b294) {
            ctx->pc = 0x11B298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B294u;
            // 0x11b298: 0xc6042  srl         $t4, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B2ACu;
            goto label_11b2ac;
        }
    }
    ctx->pc = 0x11B29Cu;
    // 0x11b29c: 0x1cd7023  subu        $t6, $t6, $t5
    ctx->pc = 0x11b29cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x11b2a0: 0x1ac5821  addu        $t3, $t5, $t4
    ctx->pc = 0x11b2a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x11b2a4: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x11b2a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x11b2a8: 0xc6042  srl         $t4, $t4, 1
    ctx->pc = 0x11b2a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
label_11b2ac:
    // 0x11b2ac: 0x1580fff7  bnez        $t4, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B2ACu;
    {
        const bool branch_taken_0x11b2ac = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B2ACu;
            // 0x11b2b0: 0xe7040  sll         $t6, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2ac) {
            ctx->pc = 0x11B28Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b28c;
        }
    }
    ctx->pc = 0x11B2B4u;
    // 0x11b2b4: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x11B2B4u;
    {
        const bool branch_taken_0x11b2b4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B2B4u;
            // 0x11b2b8: 0xa7843  sra         $t7, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2b4) {
            ctx->pc = 0x11B2E0u;
            goto label_11b2e0;
        }
    }
    ctx->pc = 0x11B2BCu;
    // 0x11b2bc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11b2bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11b2c0: 0x25effc60  addiu       $t7, $t7, -0x3A0
    ctx->pc = 0x11b2c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966368));
    // 0x11b2c4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b2c8: 0x46000036  c.le.s      $f0, $f0
    ctx->pc = 0x11b2c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11b2cc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x11B2CCu;
    {
        const bool branch_taken_0x11b2cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11b2cc) {
            ctx->pc = 0x11B2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B2CCu;
            // 0x11b2d0: 0xa7843  sra         $t7, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B2E0u;
            goto label_11b2e0;
        }
    }
    ctx->pc = 0x11B2D4u;
    // 0x11b2d4: 0x314f0001  andi        $t7, $t2, 0x1
    ctx->pc = 0x11b2d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x11b2d8: 0x14f5021  addu        $t2, $t2, $t7
    ctx->pc = 0x11b2d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
    // 0x11b2dc: 0xa7843  sra         $t7, $t2, 1
    ctx->pc = 0x11b2dcu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 10), 1));
label_11b2e0:
    // 0x11b2e0: 0x3c0e3f00  lui         $t6, 0x3F00
    ctx->pc = 0x11b2e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16128 << 16));
    // 0x11b2e4: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x11b2e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x11b2e8: 0x96dc0  sll         $t5, $t1, 23
    ctx->pc = 0x11b2e8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), 23));
    // 0x11b2ec: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x11B2ECu;
    {
        const bool branch_taken_0x11b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B2ECu;
            // 0x11b2f0: 0x1cd6821  addu        $t5, $t6, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2ec) {
            ctx->pc = 0x11B258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b258;
        }
    }
    ctx->pc = 0x11B2F4u;
    // 0x11b2f4: 0x0  nop
    ctx->pc = 0x11b2f4u;
    // NOP
}
