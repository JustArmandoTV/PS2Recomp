#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00379A70
// Address: 0x379a70 - 0x379c00
void sub_00379A70_0x379a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379A70_0x379a70");
#endif

    switch (ctx->pc) {
        case 0x379ae4u: goto label_379ae4;
        case 0x379bb0u: goto label_379bb0;
        case 0x379bd8u: goto label_379bd8;
        case 0x379be8u: goto label_379be8;
        default: break;
    }

    ctx->pc = 0x379a70u;

    // 0x379a70: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x379a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x379a74: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x379a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x379a78: 0x8c6652f0  lw          $a2, 0x52F0($v1)
    ctx->pc = 0x379a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21232)));
    // 0x379a7c: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x379a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x379a80: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x379a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x379a84: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x379a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x379a88: 0xc46052f4  lwc1        $f0, 0x52F4($v1)
    ctx->pc = 0x379a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379a8c: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x379a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x379a90: 0x3c033eac  lui         $v1, 0x3EAC
    ctx->pc = 0x379a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16044 << 16));
    // 0x379a94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x379a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379a98: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x379A98u;
    {
        const bool branch_taken_0x379a98 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x379A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379A98u;
            // 0x379a9c: 0xe4800098  swc1        $f0, 0x98($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a98) {
            ctx->pc = 0x379AACu;
            goto label_379aac;
        }
    }
    ctx->pc = 0x379AA0u;
    // 0x379aa0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x379aa0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379aa4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x379AA4u;
    {
        const bool branch_taken_0x379aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379AA4u;
            // 0x379aa8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x379aa4) {
            ctx->pc = 0x379AC8u;
            goto label_379ac8;
        }
    }
    ctx->pc = 0x379AACu;
label_379aac:
    // 0x379aac: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x379aacu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x379ab0: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x379ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x379ab4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x379ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x379ab8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x379ab8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379abc: 0x0  nop
    ctx->pc = 0x379abcu;
    // NOP
    // 0x379ac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x379ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x379ac4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x379ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_379ac8:
    // 0x379ac8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x379ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x379acc: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x379accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x379ad0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x379ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x379ad4: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x379ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x379ad8: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x379AD8u;
    {
        const bool branch_taken_0x379ad8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x379ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379AD8u;
            // 0x379adc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ad8) {
            ctx->pc = 0x379B08u;
            goto label_379b08;
        }
    }
    ctx->pc = 0x379AE0u;
    // 0x379ae0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x379ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_379ae4:
    // 0x379ae4: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x379ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x379ae8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x379ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x379aec: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x379aecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x379af0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x379af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x379af4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x379af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x379af8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x379af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x379afc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x379AFCu;
    {
        const bool branch_taken_0x379afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x379B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379AFCu;
            // 0x379b00: 0xaca00054  sw          $zero, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379afc) {
            ctx->pc = 0x379AE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_379ae4;
        }
    }
    ctx->pc = 0x379B04u;
    // 0x379b04: 0x0  nop
    ctx->pc = 0x379b04u;
    // NOP
label_379b08:
    // 0x379b08: 0x3e00008  jr          $ra
    ctx->pc = 0x379B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x379B10u;
    // 0x379b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x379b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x379b14: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x379b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x379b18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x379b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x379b1c: 0xc44052f4  lwc1        $f0, 0x52F4($v0)
    ctx->pc = 0x379b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379b20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379b24: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x379b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x379b28: 0x8c87009c  lw          $a3, 0x9C($a0)
    ctx->pc = 0x379b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x379b2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x379b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379b30: 0x3c023eac  lui         $v0, 0x3EAC
    ctx->pc = 0x379b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16044 << 16));
    // 0x379b34: 0x8c6552f0  lw          $a1, 0x52F0($v1)
    ctx->pc = 0x379b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21232)));
    // 0x379b38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x379b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379b3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x379b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b40: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x379b40u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x379b44: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x379b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x379b48: 0xac860090  sw          $a2, 0x90($a0)
    ctx->pc = 0x379b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 6));
    // 0x379b4c: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x379b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x379b50: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x379b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x379b54: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x379b54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x379b58: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x379B58u;
    {
        const bool branch_taken_0x379b58 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x379B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379B58u;
            // 0x379b5c: 0xe4800098  swc1        $f0, 0x98($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x379b58) {
            ctx->pc = 0x379B6Cu;
            goto label_379b6c;
        }
    }
    ctx->pc = 0x379B60u;
    // 0x379b60: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x379b60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379b64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x379B64u;
    {
        const bool branch_taken_0x379b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379B64u;
            // 0x379b68: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x379b64) {
            ctx->pc = 0x379B88u;
            goto label_379b88;
        }
    }
    ctx->pc = 0x379B6Cu;
label_379b6c:
    // 0x379b6c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x379b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x379b70: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x379b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x379b74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x379b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x379b78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379b7c: 0x0  nop
    ctx->pc = 0x379b7cu;
    // NOP
    // 0x379b80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x379b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x379b84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x379b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_379b88:
    // 0x379b88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x379b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x379b8c: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x379b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x379b90: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x379b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x379b94: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x379b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x379b98: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x379b98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x379b9c: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x379b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x379ba0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x379ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x379ba4: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x379ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x379ba8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x379BA8u;
    {
        const bool branch_taken_0x379ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x379BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379BA8u;
            // 0x379bac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ba8) {
            ctx->pc = 0x379BD0u;
            goto label_379bd0;
        }
    }
    ctx->pc = 0x379BB0u;
label_379bb0:
    // 0x379bb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x379bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x379bb4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x379bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x379bb8: 0x0  nop
    ctx->pc = 0x379bb8u;
    // NOP
    // 0x379bbc: 0x0  nop
    ctx->pc = 0x379bbcu;
    // NOP
    // 0x379bc0: 0x0  nop
    ctx->pc = 0x379bc0u;
    // NOP
    // 0x379bc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x379BC4u;
    {
        const bool branch_taken_0x379bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379bc4) {
            ctx->pc = 0x379BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_379bb0;
        }
    }
    ctx->pc = 0x379BCCu;
    // 0x379bcc: 0x0  nop
    ctx->pc = 0x379bccu;
    // NOP
label_379bd0:
    // 0x379bd0: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x379BD0u;
    SET_GPR_U32(ctx, 31, 0x379BD8u);
    ctx->pc = 0x379BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379BD0u;
            // 0x379bd4: 0x920400ac  lbu         $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379BD8u; }
        if (ctx->pc != 0x379BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379BD8u; }
        if (ctx->pc != 0x379BD8u) { return; }
    }
    ctx->pc = 0x379BD8u;
label_379bd8:
    // 0x379bd8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x379BD8u;
    {
        const bool branch_taken_0x379bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379bd8) {
            ctx->pc = 0x379BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379BD8u;
            // 0x379bdc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379BECu;
            goto label_379bec;
        }
    }
    ctx->pc = 0x379BE0u;
    // 0x379be0: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x379BE0u;
    SET_GPR_U32(ctx, 31, 0x379BE8u);
    ctx->pc = 0x379BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379BE0u;
            // 0x379be4: 0x920400ac  lbu         $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379BE8u; }
        if (ctx->pc != 0x379BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379BE8u; }
        if (ctx->pc != 0x379BE8u) { return; }
    }
    ctx->pc = 0x379BE8u;
label_379be8:
    // 0x379be8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x379be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_379bec:
    // 0x379bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x379BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379BF0u;
            // 0x379bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x379BF8u;
    // 0x379bf8: 0x0  nop
    ctx->pc = 0x379bf8u;
    // NOP
    // 0x379bfc: 0x0  nop
    ctx->pc = 0x379bfcu;
    // NOP
}
