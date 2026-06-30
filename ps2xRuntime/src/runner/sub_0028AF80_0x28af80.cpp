#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028AF80
// Address: 0x28af80 - 0x28b0c0
void sub_0028AF80_0x28af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AF80_0x28af80");
#endif

    switch (ctx->pc) {
        case 0x28af80u: goto label_28af80;
        case 0x28af84u: goto label_28af84;
        case 0x28af88u: goto label_28af88;
        case 0x28af8cu: goto label_28af8c;
        case 0x28af90u: goto label_28af90;
        case 0x28af94u: goto label_28af94;
        case 0x28af98u: goto label_28af98;
        case 0x28af9cu: goto label_28af9c;
        case 0x28afa0u: goto label_28afa0;
        case 0x28afa4u: goto label_28afa4;
        case 0x28afa8u: goto label_28afa8;
        case 0x28afacu: goto label_28afac;
        case 0x28afb0u: goto label_28afb0;
        case 0x28afb4u: goto label_28afb4;
        case 0x28afb8u: goto label_28afb8;
        case 0x28afbcu: goto label_28afbc;
        case 0x28afc0u: goto label_28afc0;
        case 0x28afc4u: goto label_28afc4;
        case 0x28afc8u: goto label_28afc8;
        case 0x28afccu: goto label_28afcc;
        case 0x28afd0u: goto label_28afd0;
        case 0x28afd4u: goto label_28afd4;
        case 0x28afd8u: goto label_28afd8;
        case 0x28afdcu: goto label_28afdc;
        case 0x28afe0u: goto label_28afe0;
        case 0x28afe4u: goto label_28afe4;
        case 0x28afe8u: goto label_28afe8;
        case 0x28afecu: goto label_28afec;
        case 0x28aff0u: goto label_28aff0;
        case 0x28aff4u: goto label_28aff4;
        case 0x28aff8u: goto label_28aff8;
        case 0x28affcu: goto label_28affc;
        case 0x28b000u: goto label_28b000;
        case 0x28b004u: goto label_28b004;
        case 0x28b008u: goto label_28b008;
        case 0x28b00cu: goto label_28b00c;
        case 0x28b010u: goto label_28b010;
        case 0x28b014u: goto label_28b014;
        case 0x28b018u: goto label_28b018;
        case 0x28b01cu: goto label_28b01c;
        case 0x28b020u: goto label_28b020;
        case 0x28b024u: goto label_28b024;
        case 0x28b028u: goto label_28b028;
        case 0x28b02cu: goto label_28b02c;
        case 0x28b030u: goto label_28b030;
        case 0x28b034u: goto label_28b034;
        case 0x28b038u: goto label_28b038;
        case 0x28b03cu: goto label_28b03c;
        case 0x28b040u: goto label_28b040;
        case 0x28b044u: goto label_28b044;
        case 0x28b048u: goto label_28b048;
        case 0x28b04cu: goto label_28b04c;
        case 0x28b050u: goto label_28b050;
        case 0x28b054u: goto label_28b054;
        case 0x28b058u: goto label_28b058;
        case 0x28b05cu: goto label_28b05c;
        case 0x28b060u: goto label_28b060;
        case 0x28b064u: goto label_28b064;
        case 0x28b068u: goto label_28b068;
        case 0x28b06cu: goto label_28b06c;
        case 0x28b070u: goto label_28b070;
        case 0x28b074u: goto label_28b074;
        case 0x28b078u: goto label_28b078;
        case 0x28b07cu: goto label_28b07c;
        case 0x28b080u: goto label_28b080;
        case 0x28b084u: goto label_28b084;
        case 0x28b088u: goto label_28b088;
        case 0x28b08cu: goto label_28b08c;
        case 0x28b090u: goto label_28b090;
        case 0x28b094u: goto label_28b094;
        case 0x28b098u: goto label_28b098;
        case 0x28b09cu: goto label_28b09c;
        case 0x28b0a0u: goto label_28b0a0;
        case 0x28b0a4u: goto label_28b0a4;
        case 0x28b0a8u: goto label_28b0a8;
        case 0x28b0acu: goto label_28b0ac;
        case 0x28b0b0u: goto label_28b0b0;
        case 0x28b0b4u: goto label_28b0b4;
        case 0x28b0b8u: goto label_28b0b8;
        case 0x28b0bcu: goto label_28b0bc;
        default: break;
    }

    ctx->pc = 0x28af80u;

label_28af80:
    // 0x28af80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_28af84:
    // 0x28af84: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x28af84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_28af88:
    // 0x28af88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_28af8c:
    // 0x28af8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28af8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28af90:
    // 0x28af90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28af90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28af94:
    // 0x28af94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28af94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28af98:
    // 0x28af98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28af98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28af9c:
    // 0x28af9c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x28af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28afa0:
    // 0x28afa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28afa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28afa4:
    // 0x28afa4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x28afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28afa8:
    // 0x28afa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28afa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28afac:
    // 0x28afac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28afacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28afb0:
    // 0x28afb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28afb4:
    // 0x28afb4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28afb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28afb8:
    // 0x28afb8: 0xc481fff8  lwc1        $f1, -0x8($a0)
    ctx->pc = 0x28afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28afbc:
    // 0x28afbc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28afbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28afc0:
    // 0x28afc0: 0xc480fffc  lwc1        $f0, -0x4($a0)
    ctx->pc = 0x28afc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28afc4:
    // 0x28afc4: 0x68043  sra         $s0, $a2, 1
    ctx->pc = 0x28afc4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 1));
label_28afc8:
    // 0x28afc8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x28afc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_28afcc:
    // 0x28afcc: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
label_28afd0:
    if (ctx->pc == 0x28AFD0u) {
        ctx->pc = 0x28AFD0u;
            // 0x28afd0: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->pc = 0x28AFD4u;
        goto label_28afd4;
    }
    ctx->pc = 0x28AFCCu;
    {
        const bool branch_taken_0x28afcc = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x28AFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AFCCu;
            // 0x28afd0: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afcc) {
            ctx->pc = 0x28AFDCu;
            goto label_28afdc;
        }
    }
    ctx->pc = 0x28AFD4u;
label_28afd4:
    // 0x28afd4: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x28afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28afd8:
    // 0x28afd8: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x28afd8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_28afdc:
    // 0x28afdc: 0x214082a  slt         $at, $s0, $s4
    ctx->pc = 0x28afdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_28afe0:
    // 0x28afe0: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
label_28afe4:
    if (ctx->pc == 0x28AFE4u) {
        ctx->pc = 0x28AFE8u;
        goto label_28afe8;
    }
    ctx->pc = 0x28AFE0u;
    {
        const bool branch_taken_0x28afe0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28afe0) {
            ctx->pc = 0x28B078u;
            goto label_28b078;
        }
    }
    ctx->pc = 0x28AFE8u;
label_28afe8:
    // 0x28afe8: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x28afe8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_28afec:
    // 0x28afec: 0x233082a  slt         $at, $s1, $s3
    ctx->pc = 0x28afecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_28aff0:
    // 0x28aff0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_28aff4:
    if (ctx->pc == 0x28AFF4u) {
        ctx->pc = 0x28AFF4u;
            // 0x28aff4: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x28AFF8u;
        goto label_28aff8;
    }
    ctx->pc = 0x28AFF0u;
    {
        const bool branch_taken_0x28aff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AFF0u;
            // 0x28aff4: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aff0) {
            ctx->pc = 0x28B028u;
            goto label_28b028;
        }
    }
    ctx->pc = 0x28AFF8u;
label_28aff8:
    // 0x28aff8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x28aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_28affc:
    // 0x28affc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28affcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_28b000:
    // 0x28b000: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x28b000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28b004:
    // 0x28b004: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x28b004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_28b008:
    // 0x28b008: 0x240f809  jalr        $s2
label_28b00c:
    if (ctx->pc == 0x28B00Cu) {
        ctx->pc = 0x28B00Cu;
            // 0x28b00c: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->pc = 0x28B010u;
        goto label_28b010;
    }
    ctx->pc = 0x28B008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x28B010u);
        ctx->pc = 0x28B00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B008u;
            // 0x28b00c: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B010u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B010u; }
            if (ctx->pc != 0x28B010u) { return; }
        }
        }
    }
    ctx->pc = 0x28B010u;
label_28b010:
    // 0x28b010: 0x27a2007c  addiu       $v0, $sp, 0x7C
    ctx->pc = 0x28b010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_28b014:
    // 0x28b014: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x28b014u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_28b018:
    // 0x28b018: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28b01c:
    if (ctx->pc == 0x28B01Cu) {
        ctx->pc = 0x28B020u;
        goto label_28b020;
    }
    ctx->pc = 0x28B018u;
    {
        const bool branch_taken_0x28b018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b018) {
            ctx->pc = 0x28B028u;
            goto label_28b028;
        }
    }
    ctx->pc = 0x28B020u;
label_28b020:
    // 0x28b020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28b020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28b024:
    // 0x28b024: 0x0  nop
    ctx->pc = 0x28b024u;
    // NOP
label_28b028:
    // 0x28b028: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x28b028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_28b02c:
    // 0x28b02c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28b030:
    // 0x28b030: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x28b030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_28b034:
    // 0x28b034: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x28b034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28b038:
    // 0x28b038: 0x240f809  jalr        $s2
label_28b03c:
    if (ctx->pc == 0x28B03Cu) {
        ctx->pc = 0x28B03Cu;
            // 0x28b03c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x28B040u;
        goto label_28b040;
    }
    ctx->pc = 0x28B038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x28B040u);
        ctx->pc = 0x28B03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B038u;
            // 0x28b03c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B040u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B040u; }
            if (ctx->pc != 0x28B040u) { return; }
        }
        }
    }
    ctx->pc = 0x28B040u;
label_28b040:
    // 0x28b040: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x28b040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_28b044:
    // 0x28b044: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x28b044u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_28b048:
    // 0x28b048: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_28b04c:
    if (ctx->pc == 0x28B04Cu) {
        ctx->pc = 0x28B04Cu;
            // 0x28b04c: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->pc = 0x28B050u;
        goto label_28b050;
    }
    ctx->pc = 0x28B048u;
    {
        const bool branch_taken_0x28b048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B048u;
            // 0x28b04c: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b048) {
            ctx->pc = 0x28B078u;
            goto label_28b078;
        }
    }
    ctx->pc = 0x28B050u;
label_28b050:
    // 0x28b050: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x28b050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_28b054:
    // 0x28b054: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x28b054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_28b058:
    // 0x28b058: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x28b058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28b05c:
    // 0x28b05c: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x28b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_28b060:
    // 0x28b060: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x28b060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28b064:
    // 0x28b064: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x28b064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_28b068:
    // 0x28b068: 0xac83fff8  sw          $v1, -0x8($a0)
    ctx->pc = 0x28b068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 3));
label_28b06c:
    // 0x28b06c: 0xc4a0fffc  lwc1        $f0, -0x4($a1)
    ctx->pc = 0x28b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b070:
    // 0x28b070: 0x1020ffdd  beqz        $at, . + 4 + (-0x23 << 2)
label_28b074:
    if (ctx->pc == 0x28B074u) {
        ctx->pc = 0x28B074u;
            // 0x28b074: 0xe480fffc  swc1        $f0, -0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), bits); }
        ctx->pc = 0x28B078u;
        goto label_28b078;
    }
    ctx->pc = 0x28B070u;
    {
        const bool branch_taken_0x28b070 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B070u;
            // 0x28b074: 0xe480fffc  swc1        $f0, -0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b070) {
            ctx->pc = 0x28AFE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28afe8;
        }
    }
    ctx->pc = 0x28B078u;
label_28b078:
    // 0x28b078: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x28b078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_28b07c:
    // 0x28b07c: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x28b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_28b080:
    // 0x28b080: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x28b080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_28b084:
    // 0x28b084: 0xac64fff8  sw          $a0, -0x8($v1)
    ctx->pc = 0x28b084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), GPR_U32(ctx, 4));
label_28b088:
    // 0x28b088: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x28b088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b08c:
    // 0x28b08c: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x28b08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
label_28b090:
    // 0x28b090: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28b090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28b094:
    // 0x28b094: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28b094u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28b098:
    // 0x28b098: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28b098u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28b09c:
    // 0x28b09c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28b09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28b0a0:
    // 0x28b0a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28b0a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28b0a4:
    // 0x28b0a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28b0a8:
    // 0x28b0a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28b0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28b0ac:
    // 0x28b0ac: 0x3e00008  jr          $ra
label_28b0b0:
    if (ctx->pc == 0x28B0B0u) {
        ctx->pc = 0x28B0B0u;
            // 0x28b0b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x28B0B4u;
        goto label_28b0b4;
    }
    ctx->pc = 0x28B0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B0ACu;
            // 0x28b0b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B0B4u;
label_28b0b4:
    // 0x28b0b4: 0x0  nop
    ctx->pc = 0x28b0b4u;
    // NOP
label_28b0b8:
    // 0x28b0b8: 0x0  nop
    ctx->pc = 0x28b0b8u;
    // NOP
label_28b0bc:
    // 0x28b0bc: 0x0  nop
    ctx->pc = 0x28b0bcu;
    // NOP
}
