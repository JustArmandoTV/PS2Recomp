#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00158ED0
// Address: 0x158ed0 - 0x159080
void sub_00158ED0_0x158ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158ED0_0x158ed0");
#endif

    switch (ctx->pc) {
        case 0x159038u: goto label_159038;
        default: break;
    }

    ctx->pc = 0x158ed0u;

    // 0x158ed0: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x158ed0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x158ed4: 0x24036100  addiu       $v1, $zero, 0x6100
    ctx->pc = 0x158ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24832));
    // 0x158ed8: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x158ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x158edc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x158edcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ee0: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x158EE0u;
    {
        const bool branch_taken_0x158ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x158EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158EE0u;
            // 0x158ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ee0) {
            ctx->pc = 0x158F58u;
            goto label_158f58;
        }
    }
    ctx->pc = 0x158EE8u;
    // 0x158ee8: 0x24036500  addiu       $v1, $zero, 0x6500
    ctx->pc = 0x158ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25856));
    // 0x158eec: 0x50830028  beql        $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x158EECu;
    {
        const bool branch_taken_0x158eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158eec) {
            ctx->pc = 0x158EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158EECu;
            // 0x158ef0: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158F90u;
            goto label_158f90;
        }
    }
    ctx->pc = 0x158EF4u;
    // 0x158ef4: 0x24036300  addiu       $v1, $zero, 0x6300
    ctx->pc = 0x158ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25344));
    // 0x158ef8: 0x50830025  beql        $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x158EF8u;
    {
        const bool branch_taken_0x158ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158ef8) {
            ctx->pc = 0x158EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158EF8u;
            // 0x158efc: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158F90u;
            goto label_158f90;
        }
    }
    ctx->pc = 0x158F00u;
    // 0x158f00: 0x24036d00  addiu       $v1, $zero, 0x6D00
    ctx->pc = 0x158f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27904));
    // 0x158f04: 0x50830012  beql        $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x158F04u;
    {
        const bool branch_taken_0x158f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158f04) {
            ctx->pc = 0x158F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158F04u;
            // 0x158f08: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158F50u;
            goto label_158f50;
        }
    }
    ctx->pc = 0x158F0Cu;
    // 0x158f0c: 0x24036b00  addiu       $v1, $zero, 0x6B00
    ctx->pc = 0x158f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27392));
    // 0x158f10: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x158F10u;
    {
        const bool branch_taken_0x158f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158f10) {
            ctx->pc = 0x158F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158F10u;
            // 0x158f14: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158F48u;
            goto label_158f48;
        }
    }
    ctx->pc = 0x158F18u;
    // 0x158f18: 0x24036900  addiu       $v1, $zero, 0x6900
    ctx->pc = 0x158f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26880));
    // 0x158f1c: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x158F1Cu;
    {
        const bool branch_taken_0x158f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158f1c) {
            ctx->pc = 0x158F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158F1Cu;
            // 0x158f20: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158F40u;
            goto label_158f40;
        }
    }
    ctx->pc = 0x158F24u;
    // 0x158f24: 0x24036700  addiu       $v1, $zero, 0x6700
    ctx->pc = 0x158f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26368));
    // 0x158f28: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158F28u;
    {
        const bool branch_taken_0x158f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158f28) {
            ctx->pc = 0x158F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158F28u;
            // 0x158f2c: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158F38u;
            goto label_158f38;
        }
    }
    ctx->pc = 0x158F30u;
    // 0x158f30: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x158F30u;
    {
        const bool branch_taken_0x158f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f30) {
            ctx->pc = 0x158F88u;
            goto label_158f88;
        }
    }
    ctx->pc = 0x158F38u;
label_158f38:
    // 0x158f38: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x158F38u;
    {
        const bool branch_taken_0x158f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F38u;
            // 0x158f3c: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f38) {
            ctx->pc = 0x158F90u;
            goto label_158f90;
        }
    }
    ctx->pc = 0x158F40u;
label_158f40:
    // 0x158f40: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x158F40u;
    {
        const bool branch_taken_0x158f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F40u;
            // 0x158f44: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f40) {
            ctx->pc = 0x158F90u;
            goto label_158f90;
        }
    }
    ctx->pc = 0x158F48u;
label_158f48:
    // 0x158f48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x158F48u;
    {
        const bool branch_taken_0x158f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F48u;
            // 0x158f4c: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f48) {
            ctx->pc = 0x158F90u;
            goto label_158f90;
        }
    }
    ctx->pc = 0x158F50u;
label_158f50:
    // 0x158f50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x158F50u;
    {
        const bool branch_taken_0x158f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F50u;
            // 0x158f54: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f50) {
            ctx->pc = 0x158F90u;
            goto label_158f90;
        }
    }
    ctx->pc = 0x158F58u;
label_158f58:
    // 0x158f58: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x158f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x158f5c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x158f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158f60: 0x5083000b  beql        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x158F60u;
    {
        const bool branch_taken_0x158f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158f60) {
            ctx->pc = 0x158F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158F60u;
            // 0x158f64: 0x24090018  addiu       $t1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158F90u;
            goto label_158f90;
        }
    }
    ctx->pc = 0x158F68u;
    // 0x158f68: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x158f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x158f6c: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x158F6Cu;
    {
        const bool branch_taken_0x158f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158f6c) {
            ctx->pc = 0x158F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158F6Cu;
            // 0x158f70: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158F90u;
            goto label_158f90;
        }
    }
    ctx->pc = 0x158F74u;
    // 0x158f74: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x158f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x158f78: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x158F78u;
    {
        const bool branch_taken_0x158f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158f78) {
            ctx->pc = 0x158F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158F78u;
            // 0x158f7c: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158F90u;
            goto label_158f90;
        }
    }
    ctx->pc = 0x158F80u;
    // 0x158f80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x158F80u;
    {
        const bool branch_taken_0x158f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F80u;
            // 0x158f84: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f80) {
            ctx->pc = 0x158F94u;
            goto label_158f94;
        }
    }
    ctx->pc = 0x158F88u;
label_158f88:
    // 0x158f88: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x158F88u;
    {
        const bool branch_taken_0x158f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f88) {
            ctx->pc = 0x15906Cu;
            goto label_15906c;
        }
    }
    ctx->pc = 0x158F90u;
label_158f90:
    // 0x158f90: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x158f90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_158f94:
    // 0x158f94: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x158F94u;
    {
        const bool branch_taken_0x158f94 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x158F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F94u;
            // 0x158f98: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f94) {
            ctx->pc = 0x158FA8u;
            goto label_158fa8;
        }
    }
    ctx->pc = 0x158F9Cu;
    // 0x158f9c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x158f9cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158fa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x158FA0u;
    {
        const bool branch_taken_0x158fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158FA0u;
            // 0x158fa4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fa0) {
            ctx->pc = 0x158FC4u;
            goto label_158fc4;
        }
    }
    ctx->pc = 0x158FA8u;
label_158fa8:
    // 0x158fa8: 0x92042  srl         $a0, $t1, 1
    ctx->pc = 0x158fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x158fac: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x158facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x158fb0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x158fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x158fb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x158fb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158fb8: 0x0  nop
    ctx->pc = 0x158fb8u;
    // NOP
    // 0x158fbc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x158fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x158fc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x158fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_158fc4:
    // 0x158fc4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x158fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x158fc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158fcc: 0x0  nop
    ctx->pc = 0x158fccu;
    // NOP
    // 0x158fd0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x158fd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x158fd4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x158fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x158fd8: 0xa52018  mult        $a0, $a1, $a1
    ctx->pc = 0x158fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x158fdc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x158fdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158fe0: 0x0  nop
    ctx->pc = 0x158fe0u;
    // NOP
    // 0x158fe4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x158fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x158fe8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x158fe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158fec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158ff0: 0x0  nop
    ctx->pc = 0x158ff0u;
    // NOP
    // 0x158ff4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x158ff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158ff8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x158FF8u;
    {
        const bool branch_taken_0x158ff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158ff8) {
            ctx->pc = 0x158FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158FF8u;
            // 0x158ffc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x159010u;
            goto label_159010;
        }
    }
    ctx->pc = 0x159000u;
    // 0x159000: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x159000u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x159004: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x159004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x159008: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x159008u;
    {
        const bool branch_taken_0x159008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15900Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159008u;
            // 0x15900c: 0x24a3001f  addiu       $v1, $a1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159008) {
            ctx->pc = 0x159028u;
            goto label_159028;
        }
    }
    ctx->pc = 0x159010u;
label_159010:
    // 0x159010: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x159010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x159014: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x159014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x159018: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x159018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15901c: 0x0  nop
    ctx->pc = 0x15901cu;
    // NOP
    // 0x159020: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x159020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x159024: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x159024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
label_159028:
    // 0x159028: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x159028u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15902c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15902Cu;
    {
        const bool branch_taken_0x15902c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15902Cu;
            // 0x159030: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15902c) {
            ctx->pc = 0x159058u;
            goto label_159058;
        }
    }
    ctx->pc = 0x159034u;
    // 0x159034: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x159034u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_159038:
    // 0x159038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15903c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15903Cu;
    {
        const bool branch_taken_0x15903c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x159040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15903Cu;
            // 0x159040: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15903c) {
            ctx->pc = 0x159058u;
            goto label_159058;
        }
    }
    ctx->pc = 0x159044u;
    // 0x159044: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x159044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x159048: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x159048u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15904c: 0x5420fffa  bnel        $at, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15904Cu;
    {
        const bool branch_taken_0x15904c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15904c) {
            ctx->pc = 0x159050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15904Cu;
            // 0x159050: 0x42082  srl         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159038u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_159038;
        }
    }
    ctx->pc = 0x159054u;
    // 0x159054: 0x0  nop
    ctx->pc = 0x159054u;
    // NOP
label_159058:
    // 0x159058: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x159058u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x15905c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15905Cu;
    {
        const bool branch_taken_0x15905c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15905c) {
            ctx->pc = 0x159068u;
            goto label_159068;
        }
    }
    ctx->pc = 0x159064u;
    // 0x159064: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x159064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_159068:
    // 0x159068: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x159068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15906c:
    // 0x15906c: 0x3e00008  jr          $ra
    ctx->pc = 0x15906Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159074u;
    // 0x159074: 0x0  nop
    ctx->pc = 0x159074u;
    // NOP
    // 0x159078: 0x0  nop
    ctx->pc = 0x159078u;
    // NOP
    // 0x15907c: 0x0  nop
    ctx->pc = 0x15907cu;
    // NOP
}
