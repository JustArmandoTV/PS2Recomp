#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028ADC0
// Address: 0x28adc0 - 0x28af80
void sub_0028ADC0_0x28adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ADC0_0x28adc0");
#endif

    switch (ctx->pc) {
        case 0x28adc0u: goto label_28adc0;
        case 0x28adc4u: goto label_28adc4;
        case 0x28adc8u: goto label_28adc8;
        case 0x28adccu: goto label_28adcc;
        case 0x28add0u: goto label_28add0;
        case 0x28add4u: goto label_28add4;
        case 0x28add8u: goto label_28add8;
        case 0x28addcu: goto label_28addc;
        case 0x28ade0u: goto label_28ade0;
        case 0x28ade4u: goto label_28ade4;
        case 0x28ade8u: goto label_28ade8;
        case 0x28adecu: goto label_28adec;
        case 0x28adf0u: goto label_28adf0;
        case 0x28adf4u: goto label_28adf4;
        case 0x28adf8u: goto label_28adf8;
        case 0x28adfcu: goto label_28adfc;
        case 0x28ae00u: goto label_28ae00;
        case 0x28ae04u: goto label_28ae04;
        case 0x28ae08u: goto label_28ae08;
        case 0x28ae0cu: goto label_28ae0c;
        case 0x28ae10u: goto label_28ae10;
        case 0x28ae14u: goto label_28ae14;
        case 0x28ae18u: goto label_28ae18;
        case 0x28ae1cu: goto label_28ae1c;
        case 0x28ae20u: goto label_28ae20;
        case 0x28ae24u: goto label_28ae24;
        case 0x28ae28u: goto label_28ae28;
        case 0x28ae2cu: goto label_28ae2c;
        case 0x28ae30u: goto label_28ae30;
        case 0x28ae34u: goto label_28ae34;
        case 0x28ae38u: goto label_28ae38;
        case 0x28ae3cu: goto label_28ae3c;
        case 0x28ae40u: goto label_28ae40;
        case 0x28ae44u: goto label_28ae44;
        case 0x28ae48u: goto label_28ae48;
        case 0x28ae4cu: goto label_28ae4c;
        case 0x28ae50u: goto label_28ae50;
        case 0x28ae54u: goto label_28ae54;
        case 0x28ae58u: goto label_28ae58;
        case 0x28ae5cu: goto label_28ae5c;
        case 0x28ae60u: goto label_28ae60;
        case 0x28ae64u: goto label_28ae64;
        case 0x28ae68u: goto label_28ae68;
        case 0x28ae6cu: goto label_28ae6c;
        case 0x28ae70u: goto label_28ae70;
        case 0x28ae74u: goto label_28ae74;
        case 0x28ae78u: goto label_28ae78;
        case 0x28ae7cu: goto label_28ae7c;
        case 0x28ae80u: goto label_28ae80;
        case 0x28ae84u: goto label_28ae84;
        case 0x28ae88u: goto label_28ae88;
        case 0x28ae8cu: goto label_28ae8c;
        case 0x28ae90u: goto label_28ae90;
        case 0x28ae94u: goto label_28ae94;
        case 0x28ae98u: goto label_28ae98;
        case 0x28ae9cu: goto label_28ae9c;
        case 0x28aea0u: goto label_28aea0;
        case 0x28aea4u: goto label_28aea4;
        case 0x28aea8u: goto label_28aea8;
        case 0x28aeacu: goto label_28aeac;
        case 0x28aeb0u: goto label_28aeb0;
        case 0x28aeb4u: goto label_28aeb4;
        case 0x28aeb8u: goto label_28aeb8;
        case 0x28aebcu: goto label_28aebc;
        case 0x28aec0u: goto label_28aec0;
        case 0x28aec4u: goto label_28aec4;
        case 0x28aec8u: goto label_28aec8;
        case 0x28aeccu: goto label_28aecc;
        case 0x28aed0u: goto label_28aed0;
        case 0x28aed4u: goto label_28aed4;
        case 0x28aed8u: goto label_28aed8;
        case 0x28aedcu: goto label_28aedc;
        case 0x28aee0u: goto label_28aee0;
        case 0x28aee4u: goto label_28aee4;
        case 0x28aee8u: goto label_28aee8;
        case 0x28aeecu: goto label_28aeec;
        case 0x28aef0u: goto label_28aef0;
        case 0x28aef4u: goto label_28aef4;
        case 0x28aef8u: goto label_28aef8;
        case 0x28aefcu: goto label_28aefc;
        case 0x28af00u: goto label_28af00;
        case 0x28af04u: goto label_28af04;
        case 0x28af08u: goto label_28af08;
        case 0x28af0cu: goto label_28af0c;
        case 0x28af10u: goto label_28af10;
        case 0x28af14u: goto label_28af14;
        case 0x28af18u: goto label_28af18;
        case 0x28af1cu: goto label_28af1c;
        case 0x28af20u: goto label_28af20;
        case 0x28af24u: goto label_28af24;
        case 0x28af28u: goto label_28af28;
        case 0x28af2cu: goto label_28af2c;
        case 0x28af30u: goto label_28af30;
        case 0x28af34u: goto label_28af34;
        case 0x28af38u: goto label_28af38;
        case 0x28af3cu: goto label_28af3c;
        case 0x28af40u: goto label_28af40;
        case 0x28af44u: goto label_28af44;
        case 0x28af48u: goto label_28af48;
        case 0x28af4cu: goto label_28af4c;
        case 0x28af50u: goto label_28af50;
        case 0x28af54u: goto label_28af54;
        case 0x28af58u: goto label_28af58;
        case 0x28af5cu: goto label_28af5c;
        case 0x28af60u: goto label_28af60;
        case 0x28af64u: goto label_28af64;
        case 0x28af68u: goto label_28af68;
        case 0x28af6cu: goto label_28af6c;
        case 0x28af70u: goto label_28af70;
        case 0x28af74u: goto label_28af74;
        case 0x28af78u: goto label_28af78;
        case 0x28af7cu: goto label_28af7c;
        default: break;
    }

    ctx->pc = 0x28adc0u;

label_28adc0:
    // 0x28adc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_28adc4:
    // 0x28adc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28adc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_28adc8:
    // 0x28adc8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x28adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28adcc:
    // 0x28adcc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28adccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28add0:
    // 0x28add0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28add4:
    // 0x28add4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28add4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28add8:
    // 0x28add8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28addc:
    // 0x28addc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28addcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28ade0:
    // 0x28ade0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28ade0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28ade4:
    // 0x28ade4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28ade4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28ade8:
    // 0x28ade8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28adec:
    // 0x28adec: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28adecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28adf0:
    // 0x28adf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28adf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28adf4:
    // 0x28adf4: 0x68043  sra         $s0, $a2, 1
    ctx->pc = 0x28adf4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 1));
label_28adf8:
    // 0x28adf8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x28adf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28adfc:
    // 0x28adfc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x28adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_28ae00:
    // 0x28ae00: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x28ae00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28ae04:
    // 0x28ae04: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x28ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_28ae08:
    // 0x28ae08: 0xc483ffec  lwc1        $f3, -0x14($a0)
    ctx->pc = 0x28ae08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28ae0c:
    // 0x28ae0c: 0xc482fff0  lwc1        $f2, -0x10($a0)
    ctx->pc = 0x28ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28ae10:
    // 0x28ae10: 0xc481fff4  lwc1        $f1, -0xC($a0)
    ctx->pc = 0x28ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ae14:
    // 0x28ae14: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x28ae14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ae18:
    // 0x28ae18: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x28ae18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_28ae1c:
    // 0x28ae1c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x28ae1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_28ae20:
    // 0x28ae20: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x28ae20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_28ae24:
    // 0x28ae24: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x28ae24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_28ae28:
    // 0x28ae28: 0xc480fffc  lwc1        $f0, -0x4($a0)
    ctx->pc = 0x28ae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ae2c:
    // 0x28ae2c: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
label_28ae30:
    if (ctx->pc == 0x28AE30u) {
        ctx->pc = 0x28AE30u;
            // 0x28ae30: 0xe4600010  swc1        $f0, 0x10($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->pc = 0x28AE34u;
        goto label_28ae34;
    }
    ctx->pc = 0x28AE2Cu;
    {
        const bool branch_taken_0x28ae2c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x28AE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE2Cu;
            // 0x28ae30: 0xe4600010  swc1        $f0, 0x10($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae2c) {
            ctx->pc = 0x28AE3Cu;
            goto label_28ae3c;
        }
    }
    ctx->pc = 0x28AE34u;
label_28ae34:
    // 0x28ae34: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x28ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28ae38:
    // 0x28ae38: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x28ae38u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_28ae3c:
    // 0x28ae3c: 0x214082a  slt         $at, $s0, $s4
    ctx->pc = 0x28ae3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_28ae40:
    // 0x28ae40: 0x14200035  bnez        $at, . + 4 + (0x35 << 2)
label_28ae44:
    if (ctx->pc == 0x28AE44u) {
        ctx->pc = 0x28AE48u;
        goto label_28ae48;
    }
    ctx->pc = 0x28AE40u;
    {
        const bool branch_taken_0x28ae40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ae40) {
            ctx->pc = 0x28AF18u;
            goto label_28af18;
        }
    }
    ctx->pc = 0x28AE48u;
label_28ae48:
    // 0x28ae48: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x28ae48u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_28ae4c:
    // 0x28ae4c: 0x233082a  slt         $at, $s1, $s3
    ctx->pc = 0x28ae4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_28ae50:
    // 0x28ae50: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_28ae54:
    if (ctx->pc == 0x28AE54u) {
        ctx->pc = 0x28AE54u;
            // 0x28ae54: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x28AE58u;
        goto label_28ae58;
    }
    ctx->pc = 0x28AE50u;
    {
        const bool branch_taken_0x28ae50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE50u;
            // 0x28ae54: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae50) {
            ctx->pc = 0x28AE98u;
            goto label_28ae98;
        }
    }
    ctx->pc = 0x28AE58u;
label_28ae58:
    // 0x28ae58: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x28ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28ae5c:
    // 0x28ae5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28ae60:
    // 0x28ae60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x28ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_28ae64:
    // 0x28ae64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28ae68:
    // 0x28ae68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28ae6c:
    // 0x28ae6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28ae70:
    // 0x28ae70: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x28ae70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28ae74:
    // 0x28ae74: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x28ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_28ae78:
    // 0x28ae78: 0x240f809  jalr        $s2
label_28ae7c:
    if (ctx->pc == 0x28AE7Cu) {
        ctx->pc = 0x28AE7Cu;
            // 0x28ae7c: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->pc = 0x28AE80u;
        goto label_28ae80;
    }
    ctx->pc = 0x28AE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x28AE80u);
        ctx->pc = 0x28AE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE78u;
            // 0x28ae7c: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28AE80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28AE80u; }
            if (ctx->pc != 0x28AE80u) { return; }
        }
        }
    }
    ctx->pc = 0x28AE80u;
label_28ae80:
    // 0x28ae80: 0x27a2008c  addiu       $v0, $sp, 0x8C
    ctx->pc = 0x28ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_28ae84:
    // 0x28ae84: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x28ae84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_28ae88:
    // 0x28ae88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28ae8c:
    if (ctx->pc == 0x28AE8Cu) {
        ctx->pc = 0x28AE90u;
        goto label_28ae90;
    }
    ctx->pc = 0x28AE88u;
    {
        const bool branch_taken_0x28ae88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ae88) {
            ctx->pc = 0x28AE98u;
            goto label_28ae98;
        }
    }
    ctx->pc = 0x28AE90u;
label_28ae90:
    // 0x28ae90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28ae90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28ae94:
    // 0x28ae94: 0x0  nop
    ctx->pc = 0x28ae94u;
    // NOP
label_28ae98:
    // 0x28ae98: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x28ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_28ae9c:
    // 0x28ae9c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x28ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28aea0:
    // 0x28aea0: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x28aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_28aea4:
    // 0x28aea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28aea8:
    // 0x28aea8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x28aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28aeac:
    // 0x28aeac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28aeb0:
    // 0x28aeb0: 0x240f809  jalr        $s2
label_28aeb4:
    if (ctx->pc == 0x28AEB4u) {
        ctx->pc = 0x28AEB4u;
            // 0x28aeb4: 0x2a23021  addu        $a2, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x28AEB8u;
        goto label_28aeb8;
    }
    ctx->pc = 0x28AEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x28AEB8u);
        ctx->pc = 0x28AEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AEB0u;
            // 0x28aeb4: 0x2a23021  addu        $a2, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28AEB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28AEB8u; }
            if (ctx->pc != 0x28AEB8u) { return; }
        }
        }
    }
    ctx->pc = 0x28AEB8u;
label_28aeb8:
    // 0x28aeb8: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x28aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_28aebc:
    // 0x28aebc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x28aebcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_28aec0:
    // 0x28aec0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_28aec4:
    if (ctx->pc == 0x28AEC4u) {
        ctx->pc = 0x28AEC4u;
            // 0x28aec4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x28AEC8u;
        goto label_28aec8;
    }
    ctx->pc = 0x28AEC0u;
    {
        const bool branch_taken_0x28aec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AEC0u;
            // 0x28aec4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aec0) {
            ctx->pc = 0x28AF18u;
            goto label_28af18;
        }
    }
    ctx->pc = 0x28AEC8u;
label_28aec8:
    // 0x28aec8: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x28aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_28aecc:
    // 0x28aecc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x28aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_28aed0:
    // 0x28aed0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x28aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_28aed4:
    // 0x28aed4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x28aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28aed8:
    // 0x28aed8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28aedc:
    // 0x28aedc: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x28aedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_28aee0:
    // 0x28aee0: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x28aee0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28aee4:
    // 0x28aee4: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x28aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_28aee8:
    // 0x28aee8: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x28aee8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28aeec:
    // 0x28aeec: 0x8ca3ffec  lw          $v1, -0x14($a1)
    ctx->pc = 0x28aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967276)));
label_28aef0:
    // 0x28aef0: 0xac83ffec  sw          $v1, -0x14($a0)
    ctx->pc = 0x28aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967276), GPR_U32(ctx, 3));
label_28aef4:
    // 0x28aef4: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x28aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_28aef8:
    // 0x28aef8: 0xac83fff0  sw          $v1, -0x10($a0)
    ctx->pc = 0x28aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_U32(ctx, 3));
label_28aefc:
    // 0x28aefc: 0x8ca3fff4  lw          $v1, -0xC($a1)
    ctx->pc = 0x28aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967284)));
label_28af00:
    // 0x28af00: 0xac83fff4  sw          $v1, -0xC($a0)
    ctx->pc = 0x28af00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967284), GPR_U32(ctx, 3));
label_28af04:
    // 0x28af04: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x28af04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_28af08:
    // 0x28af08: 0xac83fff8  sw          $v1, -0x8($a0)
    ctx->pc = 0x28af08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 3));
label_28af0c:
    // 0x28af0c: 0xc4a0fffc  lwc1        $f0, -0x4($a1)
    ctx->pc = 0x28af0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28af10:
    // 0x28af10: 0x1020ffcd  beqz        $at, . + 4 + (-0x33 << 2)
label_28af14:
    if (ctx->pc == 0x28AF14u) {
        ctx->pc = 0x28AF14u;
            // 0x28af14: 0xe480fffc  swc1        $f0, -0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), bits); }
        ctx->pc = 0x28AF18u;
        goto label_28af18;
    }
    ctx->pc = 0x28AF10u;
    {
        const bool branch_taken_0x28af10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF10u;
            // 0x28af14: 0xe480fffc  swc1        $f0, -0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af10) {
            ctx->pc = 0x28AE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28ae48;
        }
    }
    ctx->pc = 0x28AF18u;
label_28af18:
    // 0x28af18: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x28af18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_28af1c:
    // 0x28af1c: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x28af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_28af20:
    // 0x28af20: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x28af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_28af24:
    // 0x28af24: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x28af24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28af28:
    // 0x28af28: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x28af28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_28af2c:
    // 0x28af2c: 0xac83ffec  sw          $v1, -0x14($a0)
    ctx->pc = 0x28af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967276), GPR_U32(ctx, 3));
label_28af30:
    // 0x28af30: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x28af30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_28af34:
    // 0x28af34: 0xac83fff0  sw          $v1, -0x10($a0)
    ctx->pc = 0x28af34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_U32(ctx, 3));
label_28af38:
    // 0x28af38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x28af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_28af3c:
    // 0x28af3c: 0xac83fff4  sw          $v1, -0xC($a0)
    ctx->pc = 0x28af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967284), GPR_U32(ctx, 3));
label_28af40:
    // 0x28af40: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x28af40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_28af44:
    // 0x28af44: 0xac83fff8  sw          $v1, -0x8($a0)
    ctx->pc = 0x28af44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 3));
label_28af48:
    // 0x28af48: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x28af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28af4c:
    // 0x28af4c: 0xe480fffc  swc1        $f0, -0x4($a0)
    ctx->pc = 0x28af4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), bits); }
label_28af50:
    // 0x28af50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28af50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28af54:
    // 0x28af54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28af54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28af58:
    // 0x28af58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28af58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28af5c:
    // 0x28af5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28af5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28af60:
    // 0x28af60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28af60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28af64:
    // 0x28af64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28af64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28af68:
    // 0x28af68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28af68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28af6c:
    // 0x28af6c: 0x3e00008  jr          $ra
label_28af70:
    if (ctx->pc == 0x28AF70u) {
        ctx->pc = 0x28AF70u;
            // 0x28af70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x28AF74u;
        goto label_28af74;
    }
    ctx->pc = 0x28AF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF6Cu;
            // 0x28af70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28AF74u;
label_28af74:
    // 0x28af74: 0x0  nop
    ctx->pc = 0x28af74u;
    // NOP
label_28af78:
    // 0x28af78: 0x0  nop
    ctx->pc = 0x28af78u;
    // NOP
label_28af7c:
    // 0x28af7c: 0x0  nop
    ctx->pc = 0x28af7cu;
    // NOP
}
