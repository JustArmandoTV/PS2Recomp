#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011DD18
// Address: 0x11dd18 - 0x11ddf0
void sub_0011DD18_0x11dd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DD18_0x11dd18");
#endif

    switch (ctx->pc) {
        case 0x11dd74u: goto label_11dd74;
        case 0x11dd78u: goto label_11dd78;
        default: break;
    }

    ctx->pc = 0x11dd18u;

    // 0x11dd18: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11dd18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11dd1c: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11dd1cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11dd20: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11dd20u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11dd24: 0x1ee5824  and         $t3, $t7, $t6
    ctx->pc = 0x11dd24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x11dd28: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x11dd28u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd2c: 0xb7dc2  srl         $t7, $t3, 23
    ctx->pc = 0x11dd2cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 11), 23));
    // 0x11dd30: 0x25edff81  addiu       $t5, $t7, -0x7F
    ctx->pc = 0x11dd30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967169));
    // 0x11dd34: 0x29ae0017  slti        $t6, $t5, 0x17
    ctx->pc = 0x11dd34u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x11dd38: 0x11c0000f  beqz        $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x11DD38u;
    {
        const bool branch_taken_0x11dd38 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD38u;
            // 0x11dd3c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd38) {
            ctx->pc = 0x11DD78u;
            goto label_11dd78;
        }
    }
    ctx->pc = 0x11DD40u;
    // 0x11dd40: 0x5a10015  bgez        $t5, . + 4 + (0x15 << 2)
    ctx->pc = 0x11DD40u;
    {
        const bool branch_taken_0x11dd40 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x11DD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD40u;
            // 0x11dd44: 0x3c0f007f  lui         $t7, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd40) {
            ctx->pc = 0x11DD98u;
            goto label_11dd98;
        }
    }
    ctx->pc = 0x11DD48u;
    // 0x11dd48: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11dd48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11dd4c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11dd4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11dd50: 0x25ef010c  addiu       $t7, $t7, 0x10C
    ctx->pc = 0x11dd50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 268));
    // 0x11dd54: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11dd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dd58: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11dd58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11dd5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11dd5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11dd60: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x11DD60u;
    {
        const bool branch_taken_0x11dd60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11DD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD60u;
            // 0x11dd64: 0x448c0000  mtc1        $t4, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd60) {
            ctx->pc = 0x11DD78u;
            goto label_11dd78;
        }
    }
    ctx->pc = 0x11DD68u;
    // 0x11dd68: 0x5800005  bltz        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DD68u;
    {
        const bool branch_taken_0x11dd68 = (GPR_S32(ctx, 12) < 0);
        ctx->pc = 0x11DD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD68u;
            // 0x11dd6c: 0x3c0f007f  lui         $t7, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd68) {
            ctx->pc = 0x11DD80u;
            goto label_11dd80;
        }
    }
    ctx->pc = 0x11DD70u;
    // 0x11dd70: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x11dd70u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dd74:
    // 0x11dd74: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x11dd74u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11dd78:
    // 0x11dd78: 0x3e00008  jr          $ra
    ctx->pc = 0x11DD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DD80u;
label_11dd80:
    // 0x11dd80: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11dd80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11dd84: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x11dd84u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x11dd88: 0x55e0fffa  bnel        $t7, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11DD88u;
    {
        const bool branch_taken_0x11dd88 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11dd88) {
            ctx->pc = 0x11DD8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD88u;
            // 0x11dd8c: 0x3c0cbf80  lui         $t4, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11DD74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11dd74;
        }
    }
    ctx->pc = 0x11DD90u;
    // 0x11dd90: 0x3e00008  jr          $ra
    ctx->pc = 0x11DD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD90u;
            // 0x11dd94: 0x448c0000  mtc1        $t4, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DD98u;
label_11dd98:
    // 0x11dd98: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11dd98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11dd9c: 0x1af5807  srav        $t3, $t7, $t5
    ctx->pc = 0x11dd9cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 13) & 0x1F));
    // 0x11dda0: 0x18b7024  and         $t6, $t4, $t3
    ctx->pc = 0x11dda0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
    // 0x11dda4: 0x11c0fff4  beqz        $t6, . + 4 + (-0xC << 2)
    ctx->pc = 0x11DDA4u;
    {
        const bool branch_taken_0x11dda4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDA4u;
            // 0x11dda8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dda4) {
            ctx->pc = 0x11DD78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11dd78;
        }
    }
    ctx->pc = 0x11DDACu;
    // 0x11ddac: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11ddacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11ddb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11ddb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ddb4: 0x25ef010c  addiu       $t7, $t7, 0x10C
    ctx->pc = 0x11ddb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 268));
    // 0x11ddb8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ddbc: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11ddbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11ddc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11ddc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ddc4: 0x4500ffec  bc1f        . + 4 + (-0x14 << 2)
    ctx->pc = 0x11DDC4u;
    {
        const bool branch_taken_0x11ddc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11DDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDC4u;
            // 0x11ddc8: 0x448c0000  mtc1        $t4, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ddc4) {
            ctx->pc = 0x11DD78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11dd78;
        }
    }
    ctx->pc = 0x11DDCCu;
    // 0x11ddcc: 0x5810005  bgez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DDCCu;
    {
        const bool branch_taken_0x11ddcc = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x11DDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDCCu;
            // 0x11ddd0: 0xb7827  nor         $t7, $zero, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ddcc) {
            ctx->pc = 0x11DDE4u;
            goto label_11dde4;
        }
    }
    ctx->pc = 0x11DDD4u;
    // 0x11ddd4: 0x3c0f0080  lui         $t7, 0x80
    ctx->pc = 0x11ddd4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)128 << 16));
    // 0x11ddd8: 0x1af7807  srav        $t7, $t7, $t5
    ctx->pc = 0x11ddd8u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 13) & 0x1F));
    // 0x11dddc: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x11dddcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11dde0: 0xb7827  nor         $t7, $zero, $t3
    ctx->pc = 0x11dde0u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
label_11dde4:
    // 0x11dde4: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x11DDE4u;
    {
        const bool branch_taken_0x11dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDE4u;
            // 0x11dde8: 0x18f6024  and         $t4, $t4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dde4) {
            ctx->pc = 0x11DD74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11dd74;
        }
    }
    ctx->pc = 0x11DDECu;
    // 0x11ddec: 0x0  nop
    ctx->pc = 0x11ddecu;
    // NOP
}
