#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FA00
// Address: 0x21fa00 - 0x21fb00
void sub_0021FA00_0x21fa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FA00_0x21fa00");
#endif

    switch (ctx->pc) {
        case 0x21fa00u: goto label_21fa00;
        case 0x21fa04u: goto label_21fa04;
        case 0x21fa08u: goto label_21fa08;
        case 0x21fa0cu: goto label_21fa0c;
        case 0x21fa10u: goto label_21fa10;
        case 0x21fa14u: goto label_21fa14;
        case 0x21fa18u: goto label_21fa18;
        case 0x21fa1cu: goto label_21fa1c;
        case 0x21fa20u: goto label_21fa20;
        case 0x21fa24u: goto label_21fa24;
        case 0x21fa28u: goto label_21fa28;
        case 0x21fa2cu: goto label_21fa2c;
        case 0x21fa30u: goto label_21fa30;
        case 0x21fa34u: goto label_21fa34;
        case 0x21fa38u: goto label_21fa38;
        case 0x21fa3cu: goto label_21fa3c;
        case 0x21fa40u: goto label_21fa40;
        case 0x21fa44u: goto label_21fa44;
        case 0x21fa48u: goto label_21fa48;
        case 0x21fa4cu: goto label_21fa4c;
        case 0x21fa50u: goto label_21fa50;
        case 0x21fa54u: goto label_21fa54;
        case 0x21fa58u: goto label_21fa58;
        case 0x21fa5cu: goto label_21fa5c;
        case 0x21fa60u: goto label_21fa60;
        case 0x21fa64u: goto label_21fa64;
        case 0x21fa68u: goto label_21fa68;
        case 0x21fa6cu: goto label_21fa6c;
        case 0x21fa70u: goto label_21fa70;
        case 0x21fa74u: goto label_21fa74;
        case 0x21fa78u: goto label_21fa78;
        case 0x21fa7cu: goto label_21fa7c;
        case 0x21fa80u: goto label_21fa80;
        case 0x21fa84u: goto label_21fa84;
        case 0x21fa88u: goto label_21fa88;
        case 0x21fa8cu: goto label_21fa8c;
        case 0x21fa90u: goto label_21fa90;
        case 0x21fa94u: goto label_21fa94;
        case 0x21fa98u: goto label_21fa98;
        case 0x21fa9cu: goto label_21fa9c;
        case 0x21faa0u: goto label_21faa0;
        case 0x21faa4u: goto label_21faa4;
        case 0x21faa8u: goto label_21faa8;
        case 0x21faacu: goto label_21faac;
        case 0x21fab0u: goto label_21fab0;
        case 0x21fab4u: goto label_21fab4;
        case 0x21fab8u: goto label_21fab8;
        case 0x21fabcu: goto label_21fabc;
        case 0x21fac0u: goto label_21fac0;
        case 0x21fac4u: goto label_21fac4;
        case 0x21fac8u: goto label_21fac8;
        case 0x21faccu: goto label_21facc;
        case 0x21fad0u: goto label_21fad0;
        case 0x21fad4u: goto label_21fad4;
        case 0x21fad8u: goto label_21fad8;
        case 0x21fadcu: goto label_21fadc;
        case 0x21fae0u: goto label_21fae0;
        case 0x21fae4u: goto label_21fae4;
        case 0x21fae8u: goto label_21fae8;
        case 0x21faecu: goto label_21faec;
        case 0x21faf0u: goto label_21faf0;
        case 0x21faf4u: goto label_21faf4;
        case 0x21faf8u: goto label_21faf8;
        case 0x21fafcu: goto label_21fafc;
        default: break;
    }

    ctx->pc = 0x21fa00u;

label_21fa00:
    // 0x21fa00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21fa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21fa04:
    // 0x21fa04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21fa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_21fa08:
    // 0x21fa08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21fa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21fa0c:
    // 0x21fa0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21fa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21fa10:
    // 0x21fa10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21fa10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21fa14:
    // 0x21fa14: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_21fa18:
    if (ctx->pc == 0x21FA18u) {
        ctx->pc = 0x21FA18u;
            // 0x21fa18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21FA1Cu;
        goto label_21fa1c;
    }
    ctx->pc = 0x21FA14u;
    {
        const bool branch_taken_0x21fa14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FA14u;
            // 0x21fa18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa14) {
            ctx->pc = 0x21FAE8u;
            goto label_21fae8;
        }
    }
    ctx->pc = 0x21FA1Cu;
label_21fa1c:
    // 0x21fa1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21fa20:
    // 0x21fa20: 0x2442e990  addiu       $v0, $v0, -0x1670
    ctx->pc = 0x21fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961552));
label_21fa24:
    // 0x21fa24: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21fa28:
    // 0x21fa28: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x21fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_21fa2c:
    // 0x21fa2c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_21fa30:
    if (ctx->pc == 0x21FA30u) {
        ctx->pc = 0x21FA30u;
            // 0x21fa30: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x21FA34u;
        goto label_21fa34;
    }
    ctx->pc = 0x21FA2Cu;
    {
        const bool branch_taken_0x21fa2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fa2c) {
            ctx->pc = 0x21FA30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21FA2Cu;
            // 0x21fa30: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21FA40u;
            goto label_21fa40;
        }
    }
    ctx->pc = 0x21FA34u;
label_21fa34:
    // 0x21fa34: 0xc08d414  jal         func_235050
label_21fa38:
    if (ctx->pc == 0x21FA38u) {
        ctx->pc = 0x21FA3Cu;
        goto label_21fa3c;
    }
    ctx->pc = 0x21FA34u;
    SET_GPR_U32(ctx, 31, 0x21FA3Cu);
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FA3Cu; }
        if (ctx->pc != 0x21FA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FA3Cu; }
        if (ctx->pc != 0x21FA3Cu) { return; }
    }
    ctx->pc = 0x21FA3Cu;
label_21fa3c:
    // 0x21fa3c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x21fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21fa40:
    // 0x21fa40: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_21fa44:
    if (ctx->pc == 0x21FA44u) {
        ctx->pc = 0x21FA44u;
            // 0x21fa44: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x21FA48u;
        goto label_21fa48;
    }
    ctx->pc = 0x21FA40u;
    {
        const bool branch_taken_0x21fa40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fa40) {
            ctx->pc = 0x21FA44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21FA40u;
            // 0x21fa44: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21FA54u;
            goto label_21fa54;
        }
    }
    ctx->pc = 0x21FA48u;
label_21fa48:
    // 0x21fa48: 0xc08d414  jal         func_235050
label_21fa4c:
    if (ctx->pc == 0x21FA4Cu) {
        ctx->pc = 0x21FA50u;
        goto label_21fa50;
    }
    ctx->pc = 0x21FA48u;
    SET_GPR_U32(ctx, 31, 0x21FA50u);
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FA50u; }
        if (ctx->pc != 0x21FA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FA50u; }
        if (ctx->pc != 0x21FA50u) { return; }
    }
    ctx->pc = 0x21FA50u;
label_21fa50:
    // 0x21fa50: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x21fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_21fa54:
    // 0x21fa54: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_21fa58:
    if (ctx->pc == 0x21FA58u) {
        ctx->pc = 0x21FA5Cu;
        goto label_21fa5c;
    }
    ctx->pc = 0x21FA54u;
    {
        const bool branch_taken_0x21fa54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fa54) {
            ctx->pc = 0x21FA9Cu;
            goto label_21fa9c;
        }
    }
    ctx->pc = 0x21FA5Cu;
label_21fa5c:
    // 0x21fa5c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x21fa5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_21fa60:
    // 0x21fa60: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_21fa64:
    if (ctx->pc == 0x21FA64u) {
        ctx->pc = 0x21FA68u;
        goto label_21fa68;
    }
    ctx->pc = 0x21FA60u;
    {
        const bool branch_taken_0x21fa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fa60) {
            ctx->pc = 0x21FA9Cu;
            goto label_21fa9c;
        }
    }
    ctx->pc = 0x21FA68u;
label_21fa68:
    // 0x21fa68: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x21fa68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_21fa6c:
    // 0x21fa6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21fa70:
    // 0x21fa70: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x21fa70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_21fa74:
    // 0x21fa74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x21fa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_21fa78:
    // 0x21fa78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21fa78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_21fa7c:
    // 0x21fa7c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21fa80:
    if (ctx->pc == 0x21FA80u) {
        ctx->pc = 0x21FA84u;
        goto label_21fa84;
    }
    ctx->pc = 0x21FA7Cu;
    {
        const bool branch_taken_0x21fa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fa7c) {
            ctx->pc = 0x21FA9Cu;
            goto label_21fa9c;
        }
    }
    ctx->pc = 0x21FA84u;
label_21fa84:
    // 0x21fa84: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_21fa88:
    if (ctx->pc == 0x21FA88u) {
        ctx->pc = 0x21FA8Cu;
        goto label_21fa8c;
    }
    ctx->pc = 0x21FA84u;
    {
        const bool branch_taken_0x21fa84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fa84) {
            ctx->pc = 0x21FA9Cu;
            goto label_21fa9c;
        }
    }
    ctx->pc = 0x21FA8Cu;
label_21fa8c:
    // 0x21fa8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x21fa8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21fa90:
    // 0x21fa90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x21fa90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_21fa94:
    // 0x21fa94: 0x320f809  jalr        $t9
label_21fa98:
    if (ctx->pc == 0x21FA98u) {
        ctx->pc = 0x21FA98u;
            // 0x21fa98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21FA9Cu;
        goto label_21fa9c;
    }
    ctx->pc = 0x21FA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21FA9Cu);
        ctx->pc = 0x21FA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FA94u;
            // 0x21fa98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21FA9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21FA9Cu; }
            if (ctx->pc != 0x21FA9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21FA9Cu;
label_21fa9c:
    // 0x21fa9c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_21faa0:
    if (ctx->pc == 0x21FAA0u) {
        ctx->pc = 0x21FAA0u;
            // 0x21faa0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x21FAA4u;
        goto label_21faa4;
    }
    ctx->pc = 0x21FA9Cu;
    {
        const bool branch_taken_0x21fa9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fa9c) {
            ctx->pc = 0x21FAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21FA9Cu;
            // 0x21faa0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21FAC4u;
            goto label_21fac4;
        }
    }
    ctx->pc = 0x21FAA4u;
label_21faa4:
    // 0x21faa4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21faa8:
    // 0x21faa8: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_21faac:
    // 0x21faac: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_21fab0:
    if (ctx->pc == 0x21FAB0u) {
        ctx->pc = 0x21FAB0u;
            // 0x21fab0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21FAB4u;
        goto label_21fab4;
    }
    ctx->pc = 0x21FAACu;
    {
        const bool branch_taken_0x21faac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FAACu;
            // 0x21fab0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21faac) {
            ctx->pc = 0x21FAC0u;
            goto label_21fac0;
        }
    }
    ctx->pc = 0x21FAB4u;
label_21fab4:
    // 0x21fab4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21fab8:
    // 0x21fab8: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_21fabc:
    // 0x21fabc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21fac0:
    // 0x21fac0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x21fac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_21fac4:
    // 0x21fac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21fac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_21fac8:
    // 0x21fac8: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_21facc:
    if (ctx->pc == 0x21FACCu) {
        ctx->pc = 0x21FACCu;
            // 0x21facc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21FAD0u;
        goto label_21fad0;
    }
    ctx->pc = 0x21FAC8u;
    {
        const bool branch_taken_0x21fac8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21fac8) {
            ctx->pc = 0x21FACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21FAC8u;
            // 0x21facc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21FAECu;
            goto label_21faec;
        }
    }
    ctx->pc = 0x21FAD0u;
label_21fad0:
    // 0x21fad0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21fad4:
    // 0x21fad4: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x21fad4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_21fad8:
    // 0x21fad8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21fadc:
    // 0x21fadc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21fadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21fae0:
    // 0x21fae0: 0xc0a7ab4  jal         func_29EAD0
label_21fae4:
    if (ctx->pc == 0x21FAE4u) {
        ctx->pc = 0x21FAE4u;
            // 0x21fae4: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x21FAE8u;
        goto label_21fae8;
    }
    ctx->pc = 0x21FAE0u;
    SET_GPR_U32(ctx, 31, 0x21FAE8u);
    ctx->pc = 0x21FAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FAE0u;
            // 0x21fae4: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FAE8u; }
        if (ctx->pc != 0x21FAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FAE8u; }
        if (ctx->pc != 0x21FAE8u) { return; }
    }
    ctx->pc = 0x21FAE8u;
label_21fae8:
    // 0x21fae8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21fae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21faec:
    // 0x21faec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21faecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21faf0:
    // 0x21faf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21faf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21faf4:
    // 0x21faf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21faf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21faf8:
    // 0x21faf8: 0x3e00008  jr          $ra
label_21fafc:
    if (ctx->pc == 0x21FAFCu) {
        ctx->pc = 0x21FAFCu;
            // 0x21fafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x21FB00u;
        goto label_fallthrough_0x21faf8;
    }
    ctx->pc = 0x21FAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FAF8u;
            // 0x21fafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x21faf8:
    ctx->pc = 0x21FB00u;
}
