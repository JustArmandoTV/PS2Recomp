#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030FC70
// Address: 0x30fc70 - 0x30fd80
void sub_0030FC70_0x30fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FC70_0x30fc70");
#endif

    switch (ctx->pc) {
        case 0x30fc70u: goto label_30fc70;
        case 0x30fc74u: goto label_30fc74;
        case 0x30fc78u: goto label_30fc78;
        case 0x30fc7cu: goto label_30fc7c;
        case 0x30fc80u: goto label_30fc80;
        case 0x30fc84u: goto label_30fc84;
        case 0x30fc88u: goto label_30fc88;
        case 0x30fc8cu: goto label_30fc8c;
        case 0x30fc90u: goto label_30fc90;
        case 0x30fc94u: goto label_30fc94;
        case 0x30fc98u: goto label_30fc98;
        case 0x30fc9cu: goto label_30fc9c;
        case 0x30fca0u: goto label_30fca0;
        case 0x30fca4u: goto label_30fca4;
        case 0x30fca8u: goto label_30fca8;
        case 0x30fcacu: goto label_30fcac;
        case 0x30fcb0u: goto label_30fcb0;
        case 0x30fcb4u: goto label_30fcb4;
        case 0x30fcb8u: goto label_30fcb8;
        case 0x30fcbcu: goto label_30fcbc;
        case 0x30fcc0u: goto label_30fcc0;
        case 0x30fcc4u: goto label_30fcc4;
        case 0x30fcc8u: goto label_30fcc8;
        case 0x30fcccu: goto label_30fccc;
        case 0x30fcd0u: goto label_30fcd0;
        case 0x30fcd4u: goto label_30fcd4;
        case 0x30fcd8u: goto label_30fcd8;
        case 0x30fcdcu: goto label_30fcdc;
        case 0x30fce0u: goto label_30fce0;
        case 0x30fce4u: goto label_30fce4;
        case 0x30fce8u: goto label_30fce8;
        case 0x30fcecu: goto label_30fcec;
        case 0x30fcf0u: goto label_30fcf0;
        case 0x30fcf4u: goto label_30fcf4;
        case 0x30fcf8u: goto label_30fcf8;
        case 0x30fcfcu: goto label_30fcfc;
        case 0x30fd00u: goto label_30fd00;
        case 0x30fd04u: goto label_30fd04;
        case 0x30fd08u: goto label_30fd08;
        case 0x30fd0cu: goto label_30fd0c;
        case 0x30fd10u: goto label_30fd10;
        case 0x30fd14u: goto label_30fd14;
        case 0x30fd18u: goto label_30fd18;
        case 0x30fd1cu: goto label_30fd1c;
        case 0x30fd20u: goto label_30fd20;
        case 0x30fd24u: goto label_30fd24;
        case 0x30fd28u: goto label_30fd28;
        case 0x30fd2cu: goto label_30fd2c;
        case 0x30fd30u: goto label_30fd30;
        case 0x30fd34u: goto label_30fd34;
        case 0x30fd38u: goto label_30fd38;
        case 0x30fd3cu: goto label_30fd3c;
        case 0x30fd40u: goto label_30fd40;
        case 0x30fd44u: goto label_30fd44;
        case 0x30fd48u: goto label_30fd48;
        case 0x30fd4cu: goto label_30fd4c;
        case 0x30fd50u: goto label_30fd50;
        case 0x30fd54u: goto label_30fd54;
        case 0x30fd58u: goto label_30fd58;
        case 0x30fd5cu: goto label_30fd5c;
        case 0x30fd60u: goto label_30fd60;
        case 0x30fd64u: goto label_30fd64;
        case 0x30fd68u: goto label_30fd68;
        case 0x30fd6cu: goto label_30fd6c;
        case 0x30fd70u: goto label_30fd70;
        case 0x30fd74u: goto label_30fd74;
        case 0x30fd78u: goto label_30fd78;
        case 0x30fd7cu: goto label_30fd7c;
        default: break;
    }

    ctx->pc = 0x30fc70u;

label_30fc70:
    // 0x30fc70: 0x84860066  lh          $a2, 0x66($a0)
    ctx->pc = 0x30fc70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
label_30fc74:
    // 0x30fc74: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x30fc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_30fc78:
    // 0x30fc78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30fc78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_30fc7c:
    // 0x30fc7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30fc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_30fc80:
    // 0x30fc80: 0xa4860066  sh          $a2, 0x66($a0)
    ctx->pc = 0x30fc80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 6));
label_30fc84:
    // 0x30fc84: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x30fc84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
label_30fc88:
    // 0x30fc88: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x30fc88u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_30fc8c:
    // 0x30fc8c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x30fc8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30fc90:
    // 0x30fc90: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_30fc94:
    if (ctx->pc == 0x30FC94u) {
        ctx->pc = 0x30FC98u;
        goto label_30fc98;
    }
    ctx->pc = 0x30FC90u;
    {
        const bool branch_taken_0x30fc90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fc90) {
            ctx->pc = 0x30FC9Cu;
            goto label_30fc9c;
        }
    }
    ctx->pc = 0x30FC98u;
label_30fc98:
    // 0x30fc98: 0xa4850066  sh          $a1, 0x66($a0)
    ctx->pc = 0x30fc98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 5));
label_30fc9c:
    // 0x30fc9c: 0x3e00008  jr          $ra
label_30fca0:
    if (ctx->pc == 0x30FCA0u) {
        ctx->pc = 0x30FCA4u;
        goto label_30fca4;
    }
    ctx->pc = 0x30FC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30FCA4u;
label_30fca4:
    // 0x30fca4: 0x0  nop
    ctx->pc = 0x30fca4u;
    // NOP
label_30fca8:
    // 0x30fca8: 0x0  nop
    ctx->pc = 0x30fca8u;
    // NOP
label_30fcac:
    // 0x30fcac: 0x0  nop
    ctx->pc = 0x30fcacu;
    // NOP
label_30fcb0:
    // 0x30fcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30fcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30fcb4:
    // 0x30fcb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30fcb8:
    // 0x30fcb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30fcbc:
    // 0x30fcbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30fcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30fcc0:
    // 0x30fcc0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x30fcc0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_30fcc4:
    // 0x30fcc4: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
label_30fcc8:
    if (ctx->pc == 0x30FCC8u) {
        ctx->pc = 0x30FCC8u;
            // 0x30fcc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30FCCCu;
        goto label_30fccc;
    }
    ctx->pc = 0x30FCC4u;
    {
        const bool branch_taken_0x30fcc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x30FCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCC4u;
            // 0x30fcc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fcc4) {
            ctx->pc = 0x30FD6Cu;
            goto label_30fd6c;
        }
    }
    ctx->pc = 0x30FCCCu;
label_30fccc:
    // 0x30fccc: 0x50a00028  beql        $a1, $zero, . + 4 + (0x28 << 2)
label_30fcd0:
    if (ctx->pc == 0x30FCD0u) {
        ctx->pc = 0x30FCD0u;
            // 0x30fcd0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x30FCD4u;
        goto label_30fcd4;
    }
    ctx->pc = 0x30FCCCu;
    {
        const bool branch_taken_0x30fccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fccc) {
            ctx->pc = 0x30FCD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCCCu;
            // 0x30fcd0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FD70u;
            goto label_30fd70;
        }
    }
    ctx->pc = 0x30FCD4u;
label_30fcd4:
    // 0x30fcd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30fcd8:
    // 0x30fcd8: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
label_30fcdc:
    if (ctx->pc == 0x30FCDCu) {
        ctx->pc = 0x30FCDCu;
            // 0x30fcdc: 0x92030060  lbu         $v1, 0x60($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x30FCE0u;
        goto label_30fce0;
    }
    ctx->pc = 0x30FCD8u;
    {
        const bool branch_taken_0x30fcd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x30fcd8) {
            ctx->pc = 0x30FCDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCD8u;
            // 0x30fcdc: 0x92030060  lbu         $v1, 0x60($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FD04u;
            goto label_30fd04;
        }
    }
    ctx->pc = 0x30FCE0u;
label_30fce0:
    // 0x30fce0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30fce4:
    // 0x30fce4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_30fce8:
    if (ctx->pc == 0x30FCE8u) {
        ctx->pc = 0x30FCE8u;
            // 0x30fce8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x30FCECu;
        goto label_30fcec;
    }
    ctx->pc = 0x30FCE4u;
    {
        const bool branch_taken_0x30fce4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x30fce4) {
            ctx->pc = 0x30FCE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCE4u;
            // 0x30fce8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FCF4u;
            goto label_30fcf4;
        }
    }
    ctx->pc = 0x30FCECu;
label_30fcec:
    // 0x30fcec: 0x1000001f  b           . + 4 + (0x1F << 2)
label_30fcf0:
    if (ctx->pc == 0x30FCF0u) {
        ctx->pc = 0x30FCF4u;
        goto label_30fcf4;
    }
    ctx->pc = 0x30FCECu;
    {
        const bool branch_taken_0x30fcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fcec) {
            ctx->pc = 0x30FD6Cu;
            goto label_30fd6c;
        }
    }
    ctx->pc = 0x30FCF4u;
label_30fcf4:
    // 0x30fcf4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x30fcf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_30fcf8:
    // 0x30fcf8: 0x320f809  jalr        $t9
label_30fcfc:
    if (ctx->pc == 0x30FCFCu) {
        ctx->pc = 0x30FD00u;
        goto label_30fd00;
    }
    ctx->pc = 0x30FCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30FD00u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x30FD00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30FD00u; }
            if (ctx->pc != 0x30FD00u) { return; }
        }
        }
    }
    ctx->pc = 0x30FD00u;
label_30fd00:
    // 0x30fd00: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x30fd00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_30fd04:
    // 0x30fd04: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x30fd04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_30fd08:
    // 0x30fd08: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_30fd0c:
    if (ctx->pc == 0x30FD0Cu) {
        ctx->pc = 0x30FD10u;
        goto label_30fd10;
    }
    ctx->pc = 0x30FD08u;
    {
        const bool branch_taken_0x30fd08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fd08) {
            ctx->pc = 0x30FD6Cu;
            goto label_30fd6c;
        }
    }
    ctx->pc = 0x30FD10u;
label_30fd10:
    // 0x30fd10: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x30fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_30fd14:
    // 0x30fd14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30fd18:
    // 0x30fd18: 0x2484bb50  addiu       $a0, $a0, -0x44B0
    ctx->pc = 0x30fd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949712));
label_30fd1c:
    // 0x30fd1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30fd20:
    // 0x30fd20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30fd24:
    // 0x30fd24: 0x600008  jr          $v1
label_30fd28:
    if (ctx->pc == 0x30FD28u) {
        ctx->pc = 0x30FD2Cu;
        goto label_30fd2c;
    }
    ctx->pc = 0x30FD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30FD2Cu: goto label_30fd2c;
            case 0x30FD54u: goto label_30fd54;
            case 0x30FD64u: goto label_30fd64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30FD2Cu;
label_30fd2c:
    // 0x30fd2c: 0x96030064  lhu         $v1, 0x64($s0)
    ctx->pc = 0x30fd2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_30fd30:
    // 0x30fd30: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x30fd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_30fd34:
    // 0x30fd34: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_30fd38:
    if (ctx->pc == 0x30FD38u) {
        ctx->pc = 0x30FD3Cu;
        goto label_30fd3c;
    }
    ctx->pc = 0x30FD34u;
    {
        const bool branch_taken_0x30fd34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fd34) {
            ctx->pc = 0x30FD6Cu;
            goto label_30fd6c;
        }
    }
    ctx->pc = 0x30FD3Cu;
label_30fd3c:
    // 0x30fd3c: 0xc0c3df4  jal         func_30F7D0
label_30fd40:
    if (ctx->pc == 0x30FD40u) {
        ctx->pc = 0x30FD40u;
            // 0x30fd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30FD44u;
        goto label_30fd44;
    }
    ctx->pc = 0x30FD3Cu;
    SET_GPR_U32(ctx, 31, 0x30FD44u);
    ctx->pc = 0x30FD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD3Cu;
            // 0x30fd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F7D0u;
    if (runtime->hasFunction(0x30F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x30F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD44u; }
        if (ctx->pc != 0x30FD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030F7D0_0x30f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD44u; }
        if (ctx->pc != 0x30FD44u) { return; }
    }
    ctx->pc = 0x30FD44u;
label_30fd44:
    // 0x30fd44: 0x96030064  lhu         $v1, 0x64($s0)
    ctx->pc = 0x30fd44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_30fd48:
    // 0x30fd48: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x30fd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_30fd4c:
    // 0x30fd4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_30fd50:
    if (ctx->pc == 0x30FD50u) {
        ctx->pc = 0x30FD50u;
            // 0x30fd50: 0xa6030064  sh          $v1, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x30FD54u;
        goto label_30fd54;
    }
    ctx->pc = 0x30FD4Cu;
    {
        const bool branch_taken_0x30fd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD4Cu;
            // 0x30fd50: 0xa6030064  sh          $v1, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd4c) {
            ctx->pc = 0x30FD6Cu;
            goto label_30fd6c;
        }
    }
    ctx->pc = 0x30FD54u;
label_30fd54:
    // 0x30fd54: 0xc0c3df4  jal         func_30F7D0
label_30fd58:
    if (ctx->pc == 0x30FD58u) {
        ctx->pc = 0x30FD58u;
            // 0x30fd58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30FD5Cu;
        goto label_30fd5c;
    }
    ctx->pc = 0x30FD54u;
    SET_GPR_U32(ctx, 31, 0x30FD5Cu);
    ctx->pc = 0x30FD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD54u;
            // 0x30fd58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F7D0u;
    if (runtime->hasFunction(0x30F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x30F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD5Cu; }
        if (ctx->pc != 0x30FD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030F7D0_0x30f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD5Cu; }
        if (ctx->pc != 0x30FD5Cu) { return; }
    }
    ctx->pc = 0x30FD5Cu;
label_30fd5c:
    // 0x30fd5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_30fd60:
    if (ctx->pc == 0x30FD60u) {
        ctx->pc = 0x30FD64u;
        goto label_30fd64;
    }
    ctx->pc = 0x30FD5Cu;
    {
        const bool branch_taken_0x30fd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fd5c) {
            ctx->pc = 0x30FD6Cu;
            goto label_30fd6c;
        }
    }
    ctx->pc = 0x30FD64u;
label_30fd64:
    // 0x30fd64: 0xc0c3df4  jal         func_30F7D0
label_30fd68:
    if (ctx->pc == 0x30FD68u) {
        ctx->pc = 0x30FD68u;
            // 0x30fd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30FD6Cu;
        goto label_30fd6c;
    }
    ctx->pc = 0x30FD64u;
    SET_GPR_U32(ctx, 31, 0x30FD6Cu);
    ctx->pc = 0x30FD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD64u;
            // 0x30fd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F7D0u;
    if (runtime->hasFunction(0x30F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x30F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD6Cu; }
        if (ctx->pc != 0x30FD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030F7D0_0x30f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD6Cu; }
        if (ctx->pc != 0x30FD6Cu) { return; }
    }
    ctx->pc = 0x30FD6Cu;
label_30fd6c:
    // 0x30fd6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30fd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30fd70:
    // 0x30fd70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30fd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30fd74:
    // 0x30fd74: 0x3e00008  jr          $ra
label_30fd78:
    if (ctx->pc == 0x30FD78u) {
        ctx->pc = 0x30FD78u;
            // 0x30fd78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x30FD7Cu;
        goto label_30fd7c;
    }
    ctx->pc = 0x30FD74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD74u;
            // 0x30fd78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30FD7Cu;
label_30fd7c:
    // 0x30fd7c: 0x0  nop
    ctx->pc = 0x30fd7cu;
    // NOP
}
