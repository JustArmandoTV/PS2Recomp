#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00398A80
// Address: 0x398a80 - 0x398bb0
void sub_00398A80_0x398a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398A80_0x398a80");
#endif

    switch (ctx->pc) {
        case 0x398a80u: goto label_398a80;
        case 0x398a84u: goto label_398a84;
        case 0x398a88u: goto label_398a88;
        case 0x398a8cu: goto label_398a8c;
        case 0x398a90u: goto label_398a90;
        case 0x398a94u: goto label_398a94;
        case 0x398a98u: goto label_398a98;
        case 0x398a9cu: goto label_398a9c;
        case 0x398aa0u: goto label_398aa0;
        case 0x398aa4u: goto label_398aa4;
        case 0x398aa8u: goto label_398aa8;
        case 0x398aacu: goto label_398aac;
        case 0x398ab0u: goto label_398ab0;
        case 0x398ab4u: goto label_398ab4;
        case 0x398ab8u: goto label_398ab8;
        case 0x398abcu: goto label_398abc;
        case 0x398ac0u: goto label_398ac0;
        case 0x398ac4u: goto label_398ac4;
        case 0x398ac8u: goto label_398ac8;
        case 0x398accu: goto label_398acc;
        case 0x398ad0u: goto label_398ad0;
        case 0x398ad4u: goto label_398ad4;
        case 0x398ad8u: goto label_398ad8;
        case 0x398adcu: goto label_398adc;
        case 0x398ae0u: goto label_398ae0;
        case 0x398ae4u: goto label_398ae4;
        case 0x398ae8u: goto label_398ae8;
        case 0x398aecu: goto label_398aec;
        case 0x398af0u: goto label_398af0;
        case 0x398af4u: goto label_398af4;
        case 0x398af8u: goto label_398af8;
        case 0x398afcu: goto label_398afc;
        case 0x398b00u: goto label_398b00;
        case 0x398b04u: goto label_398b04;
        case 0x398b08u: goto label_398b08;
        case 0x398b0cu: goto label_398b0c;
        case 0x398b10u: goto label_398b10;
        case 0x398b14u: goto label_398b14;
        case 0x398b18u: goto label_398b18;
        case 0x398b1cu: goto label_398b1c;
        case 0x398b20u: goto label_398b20;
        case 0x398b24u: goto label_398b24;
        case 0x398b28u: goto label_398b28;
        case 0x398b2cu: goto label_398b2c;
        case 0x398b30u: goto label_398b30;
        case 0x398b34u: goto label_398b34;
        case 0x398b38u: goto label_398b38;
        case 0x398b3cu: goto label_398b3c;
        case 0x398b40u: goto label_398b40;
        case 0x398b44u: goto label_398b44;
        case 0x398b48u: goto label_398b48;
        case 0x398b4cu: goto label_398b4c;
        case 0x398b50u: goto label_398b50;
        case 0x398b54u: goto label_398b54;
        case 0x398b58u: goto label_398b58;
        case 0x398b5cu: goto label_398b5c;
        case 0x398b60u: goto label_398b60;
        case 0x398b64u: goto label_398b64;
        case 0x398b68u: goto label_398b68;
        case 0x398b6cu: goto label_398b6c;
        case 0x398b70u: goto label_398b70;
        case 0x398b74u: goto label_398b74;
        case 0x398b78u: goto label_398b78;
        case 0x398b7cu: goto label_398b7c;
        case 0x398b80u: goto label_398b80;
        case 0x398b84u: goto label_398b84;
        case 0x398b88u: goto label_398b88;
        case 0x398b8cu: goto label_398b8c;
        case 0x398b90u: goto label_398b90;
        case 0x398b94u: goto label_398b94;
        case 0x398b98u: goto label_398b98;
        case 0x398b9cu: goto label_398b9c;
        case 0x398ba0u: goto label_398ba0;
        case 0x398ba4u: goto label_398ba4;
        case 0x398ba8u: goto label_398ba8;
        case 0x398bacu: goto label_398bac;
        default: break;
    }

    ctx->pc = 0x398a80u;

label_398a80:
    // 0x398a80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x398a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_398a84:
    // 0x398a84: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x398a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_398a88:
    // 0x398a88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x398a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_398a8c:
    // 0x398a8c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x398a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_398a90:
    // 0x398a90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x398a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_398a94:
    // 0x398a94: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x398a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_398a98:
    // 0x398a98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x398a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_398a9c:
    // 0x398a9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x398a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398aa0:
    // 0x398aa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x398aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_398aa4:
    // 0x398aa4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x398aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_398aa8:
    // 0x398aa8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x398aa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_398aac:
    // 0x398aac: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x398aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_398ab0:
    // 0x398ab0: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x398ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_398ab4:
    // 0x398ab4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x398ab4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_398ab8:
    // 0x398ab8: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x398ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_398abc:
    // 0x398abc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x398abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_398ac0:
    // 0x398ac0: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x398ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_398ac4:
    // 0x398ac4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x398ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_398ac8:
    // 0x398ac8: 0xc0a7a88  jal         func_29EA20
label_398acc:
    if (ctx->pc == 0x398ACCu) {
        ctx->pc = 0x398ACCu;
            // 0x398acc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x398AD0u;
        goto label_398ad0;
    }
    ctx->pc = 0x398AC8u;
    SET_GPR_U32(ctx, 31, 0x398AD0u);
    ctx->pc = 0x398ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398AC8u;
            // 0x398acc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398AD0u; }
        if (ctx->pc != 0x398AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398AD0u; }
        if (ctx->pc != 0x398AD0u) { return; }
    }
    ctx->pc = 0x398AD0u;
label_398ad0:
    // 0x398ad0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x398ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_398ad4:
    // 0x398ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x398ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398ad8:
    // 0x398ad8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_398adc:
    if (ctx->pc == 0x398ADCu) {
        ctx->pc = 0x398ADCu;
            // 0x398adc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x398AE0u;
        goto label_398ae0;
    }
    ctx->pc = 0x398AD8u;
    {
        const bool branch_taken_0x398ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x398ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398AD8u;
            // 0x398adc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398ad8) {
            ctx->pc = 0x398AF8u;
            goto label_398af8;
        }
    }
    ctx->pc = 0x398AE0u;
label_398ae0:
    // 0x398ae0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x398ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_398ae4:
    // 0x398ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_398ae8:
    // 0x398ae8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x398ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_398aec:
    // 0x398aec: 0xc0804bc  jal         func_2012F0
label_398af0:
    if (ctx->pc == 0x398AF0u) {
        ctx->pc = 0x398AF0u;
            // 0x398af0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x398AF4u;
        goto label_398af4;
    }
    ctx->pc = 0x398AECu;
    SET_GPR_U32(ctx, 31, 0x398AF4u);
    ctx->pc = 0x398AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398AECu;
            // 0x398af0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398AF4u; }
        if (ctx->pc != 0x398AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398AF4u; }
        if (ctx->pc != 0x398AF4u) { return; }
    }
    ctx->pc = 0x398AF4u;
label_398af4:
    // 0x398af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x398af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398af8:
    // 0x398af8: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x398af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_398afc:
    // 0x398afc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x398afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_398b00:
    // 0x398b00: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x398b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_398b04:
    // 0x398b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398b08:
    // 0x398b08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x398b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_398b0c:
    // 0x398b0c: 0x0  nop
    ctx->pc = 0x398b0cu;
    // NOP
label_398b10:
    // 0x398b10: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x398b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_398b14:
    // 0x398b14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x398b14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_398b18:
    // 0x398b18: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x398b18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_398b1c:
    // 0x398b1c: 0xc04ca18  jal         func_132860
label_398b20:
    if (ctx->pc == 0x398B20u) {
        ctx->pc = 0x398B20u;
            // 0x398b20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398B24u;
        goto label_398b24;
    }
    ctx->pc = 0x398B1Cu;
    SET_GPR_U32(ctx, 31, 0x398B24u);
    ctx->pc = 0x398B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398B1Cu;
            // 0x398b20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398B24u; }
        if (ctx->pc != 0x398B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398B24u; }
        if (ctx->pc != 0x398B24u) { return; }
    }
    ctx->pc = 0x398B24u;
label_398b24:
    // 0x398b24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x398b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_398b28:
    // 0x398b28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x398b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398b2c:
    // 0x398b2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x398b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_398b30:
    // 0x398b30: 0xc0d37ec  jal         func_34DFB0
label_398b34:
    if (ctx->pc == 0x398B34u) {
        ctx->pc = 0x398B34u;
            // 0x398b34: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398B38u;
        goto label_398b38;
    }
    ctx->pc = 0x398B30u;
    SET_GPR_U32(ctx, 31, 0x398B38u);
    ctx->pc = 0x398B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398B30u;
            // 0x398b34: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398B38u; }
        if (ctx->pc != 0x398B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398B38u; }
        if (ctx->pc != 0x398B38u) { return; }
    }
    ctx->pc = 0x398B38u;
label_398b38:
    // 0x398b38: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x398b38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_398b3c:
    // 0x398b3c: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_398b40:
    if (ctx->pc == 0x398B40u) {
        ctx->pc = 0x398B40u;
            // 0x398b40: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x398B44u;
        goto label_398b44;
    }
    ctx->pc = 0x398B3Cu;
    {
        const bool branch_taken_0x398b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x398b3c) {
            ctx->pc = 0x398B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x398B3Cu;
            // 0x398b40: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x398B80u;
            goto label_398b80;
        }
    }
    ctx->pc = 0x398B44u;
label_398b44:
    // 0x398b44: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x398b44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_398b48:
    // 0x398b48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x398b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_398b4c:
    // 0x398b4c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x398b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_398b50:
    // 0x398b50: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x398b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_398b54:
    // 0x398b54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x398b54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_398b58:
    // 0x398b58: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_398b5c:
    if (ctx->pc == 0x398B5Cu) {
        ctx->pc = 0x398B60u;
        goto label_398b60;
    }
    ctx->pc = 0x398B58u;
    {
        const bool branch_taken_0x398b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x398b58) {
            ctx->pc = 0x398B7Cu;
            goto label_398b7c;
        }
    }
    ctx->pc = 0x398B60u;
label_398b60:
    // 0x398b60: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_398b64:
    if (ctx->pc == 0x398B64u) {
        ctx->pc = 0x398B68u;
        goto label_398b68;
    }
    ctx->pc = 0x398B60u;
    {
        const bool branch_taken_0x398b60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x398b60) {
            ctx->pc = 0x398B7Cu;
            goto label_398b7c;
        }
    }
    ctx->pc = 0x398B68u;
label_398b68:
    // 0x398b68: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x398b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398b6c:
    // 0x398b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_398b70:
    // 0x398b70: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x398b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_398b74:
    // 0x398b74: 0x320f809  jalr        $t9
label_398b78:
    if (ctx->pc == 0x398B78u) {
        ctx->pc = 0x398B78u;
            // 0x398b78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x398B7Cu;
        goto label_398b7c;
    }
    ctx->pc = 0x398B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x398B7Cu);
        ctx->pc = 0x398B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398B74u;
            // 0x398b78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x398B7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x398B7Cu; }
            if (ctx->pc != 0x398B7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x398B7Cu;
label_398b7c:
    // 0x398b7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x398b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_398b80:
    // 0x398b80: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x398b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_398b84:
    // 0x398b84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x398b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_398b88:
    // 0x398b88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x398b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_398b8c:
    // 0x398b8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x398b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_398b90:
    // 0x398b90: 0x3e00008  jr          $ra
label_398b94:
    if (ctx->pc == 0x398B94u) {
        ctx->pc = 0x398B94u;
            // 0x398b94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x398B98u;
        goto label_398b98;
    }
    ctx->pc = 0x398B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398B90u;
            // 0x398b94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x398B98u;
label_398b98:
    // 0x398b98: 0x0  nop
    ctx->pc = 0x398b98u;
    // NOP
label_398b9c:
    // 0x398b9c: 0x0  nop
    ctx->pc = 0x398b9cu;
    // NOP
label_398ba0:
    // 0x398ba0: 0x3e00008  jr          $ra
label_398ba4:
    if (ctx->pc == 0x398BA4u) {
        ctx->pc = 0x398BA4u;
            // 0x398ba4: 0x2402330e  addiu       $v0, $zero, 0x330E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13070));
        ctx->pc = 0x398BA8u;
        goto label_398ba8;
    }
    ctx->pc = 0x398BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398BA0u;
            // 0x398ba4: 0x2402330e  addiu       $v0, $zero, 0x330E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13070));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x398BA8u;
label_398ba8:
    // 0x398ba8: 0x0  nop
    ctx->pc = 0x398ba8u;
    // NOP
label_398bac:
    // 0x398bac: 0x0  nop
    ctx->pc = 0x398bacu;
    // NOP
}
