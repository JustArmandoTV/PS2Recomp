#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029FDE0
// Address: 0x29fde0 - 0x29fec0
void sub_0029FDE0_0x29fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FDE0_0x29fde0");
#endif

    switch (ctx->pc) {
        case 0x29fde0u: goto label_29fde0;
        case 0x29fde4u: goto label_29fde4;
        case 0x29fde8u: goto label_29fde8;
        case 0x29fdecu: goto label_29fdec;
        case 0x29fdf0u: goto label_29fdf0;
        case 0x29fdf4u: goto label_29fdf4;
        case 0x29fdf8u: goto label_29fdf8;
        case 0x29fdfcu: goto label_29fdfc;
        case 0x29fe00u: goto label_29fe00;
        case 0x29fe04u: goto label_29fe04;
        case 0x29fe08u: goto label_29fe08;
        case 0x29fe0cu: goto label_29fe0c;
        case 0x29fe10u: goto label_29fe10;
        case 0x29fe14u: goto label_29fe14;
        case 0x29fe18u: goto label_29fe18;
        case 0x29fe1cu: goto label_29fe1c;
        case 0x29fe20u: goto label_29fe20;
        case 0x29fe24u: goto label_29fe24;
        case 0x29fe28u: goto label_29fe28;
        case 0x29fe2cu: goto label_29fe2c;
        case 0x29fe30u: goto label_29fe30;
        case 0x29fe34u: goto label_29fe34;
        case 0x29fe38u: goto label_29fe38;
        case 0x29fe3cu: goto label_29fe3c;
        case 0x29fe40u: goto label_29fe40;
        case 0x29fe44u: goto label_29fe44;
        case 0x29fe48u: goto label_29fe48;
        case 0x29fe4cu: goto label_29fe4c;
        case 0x29fe50u: goto label_29fe50;
        case 0x29fe54u: goto label_29fe54;
        case 0x29fe58u: goto label_29fe58;
        case 0x29fe5cu: goto label_29fe5c;
        case 0x29fe60u: goto label_29fe60;
        case 0x29fe64u: goto label_29fe64;
        case 0x29fe68u: goto label_29fe68;
        case 0x29fe6cu: goto label_29fe6c;
        case 0x29fe70u: goto label_29fe70;
        case 0x29fe74u: goto label_29fe74;
        case 0x29fe78u: goto label_29fe78;
        case 0x29fe7cu: goto label_29fe7c;
        case 0x29fe80u: goto label_29fe80;
        case 0x29fe84u: goto label_29fe84;
        case 0x29fe88u: goto label_29fe88;
        case 0x29fe8cu: goto label_29fe8c;
        case 0x29fe90u: goto label_29fe90;
        case 0x29fe94u: goto label_29fe94;
        case 0x29fe98u: goto label_29fe98;
        case 0x29fe9cu: goto label_29fe9c;
        case 0x29fea0u: goto label_29fea0;
        case 0x29fea4u: goto label_29fea4;
        case 0x29fea8u: goto label_29fea8;
        case 0x29feacu: goto label_29feac;
        case 0x29feb0u: goto label_29feb0;
        case 0x29feb4u: goto label_29feb4;
        case 0x29feb8u: goto label_29feb8;
        case 0x29febcu: goto label_29febc;
        default: break;
    }

    ctx->pc = 0x29fde0u;

label_29fde0:
    // 0x29fde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29fde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29fde4:
    // 0x29fde4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29fde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29fde8:
    // 0x29fde8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29fdec:
    // 0x29fdec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29fdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29fdf0:
    // 0x29fdf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29fdf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29fdf4:
    // 0x29fdf4: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_29fdf8:
    if (ctx->pc == 0x29FDF8u) {
        ctx->pc = 0x29FDF8u;
            // 0x29fdf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FDFCu;
        goto label_29fdfc;
    }
    ctx->pc = 0x29FDF4u;
    {
        const bool branch_taken_0x29fdf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDF4u;
            // 0x29fdf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdf4) {
            ctx->pc = 0x29FEA0u;
            goto label_29fea0;
        }
    }
    ctx->pc = 0x29FDFCu;
label_29fdfc:
    // 0x29fdfc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fe00:
    // 0x29fe00: 0x2442f850  addiu       $v0, $v0, -0x7B0
    ctx->pc = 0x29fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965328));
label_29fe04:
    // 0x29fe04: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29fe08:
    // 0x29fe08: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29fe0c:
    // 0x29fe0c: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_29fe10:
    if (ctx->pc == 0x29FE10u) {
        ctx->pc = 0x29FE14u;
        goto label_29fe14;
    }
    ctx->pc = 0x29FE0Cu;
    {
        const bool branch_taken_0x29fe0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fe0c) {
            ctx->pc = 0x29FE54u;
            goto label_29fe54;
        }
    }
    ctx->pc = 0x29FE14u;
label_29fe14:
    // 0x29fe14: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x29fe14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_29fe18:
    // 0x29fe18: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_29fe1c:
    if (ctx->pc == 0x29FE1Cu) {
        ctx->pc = 0x29FE20u;
        goto label_29fe20;
    }
    ctx->pc = 0x29FE18u;
    {
        const bool branch_taken_0x29fe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fe18) {
            ctx->pc = 0x29FE54u;
            goto label_29fe54;
        }
    }
    ctx->pc = 0x29FE20u;
label_29fe20:
    // 0x29fe20: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x29fe20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_29fe24:
    // 0x29fe24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29fe28:
    // 0x29fe28: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x29fe28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_29fe2c:
    // 0x29fe2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29fe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_29fe30:
    // 0x29fe30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29fe30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29fe34:
    // 0x29fe34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_29fe38:
    if (ctx->pc == 0x29FE38u) {
        ctx->pc = 0x29FE3Cu;
        goto label_29fe3c;
    }
    ctx->pc = 0x29FE34u;
    {
        const bool branch_taken_0x29fe34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fe34) {
            ctx->pc = 0x29FE54u;
            goto label_29fe54;
        }
    }
    ctx->pc = 0x29FE3Cu;
label_29fe3c:
    // 0x29fe3c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_29fe40:
    if (ctx->pc == 0x29FE40u) {
        ctx->pc = 0x29FE44u;
        goto label_29fe44;
    }
    ctx->pc = 0x29FE3Cu;
    {
        const bool branch_taken_0x29fe3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fe3c) {
            ctx->pc = 0x29FE54u;
            goto label_29fe54;
        }
    }
    ctx->pc = 0x29FE44u;
label_29fe44:
    // 0x29fe44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29fe44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29fe48:
    // 0x29fe48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29fe48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29fe4c:
    // 0x29fe4c: 0x320f809  jalr        $t9
label_29fe50:
    if (ctx->pc == 0x29FE50u) {
        ctx->pc = 0x29FE50u;
            // 0x29fe50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29FE54u;
        goto label_29fe54;
    }
    ctx->pc = 0x29FE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29FE54u);
        ctx->pc = 0x29FE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE4Cu;
            // 0x29fe50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29FE54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29FE54u; }
            if (ctx->pc != 0x29FE54u) { return; }
        }
        }
    }
    ctx->pc = 0x29FE54u;
label_29fe54:
    // 0x29fe54: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_29fe58:
    if (ctx->pc == 0x29FE58u) {
        ctx->pc = 0x29FE58u;
            // 0x29fe58: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x29FE5Cu;
        goto label_29fe5c;
    }
    ctx->pc = 0x29FE54u;
    {
        const bool branch_taken_0x29fe54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fe54) {
            ctx->pc = 0x29FE58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE54u;
            // 0x29fe58: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FE7Cu;
            goto label_29fe7c;
        }
    }
    ctx->pc = 0x29FE5Cu;
label_29fe5c:
    // 0x29fe5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fe60:
    // 0x29fe60: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29fe64:
    // 0x29fe64: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_29fe68:
    if (ctx->pc == 0x29FE68u) {
        ctx->pc = 0x29FE68u;
            // 0x29fe68: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29FE6Cu;
        goto label_29fe6c;
    }
    ctx->pc = 0x29FE64u;
    {
        const bool branch_taken_0x29fe64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE64u;
            // 0x29fe68: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe64) {
            ctx->pc = 0x29FE78u;
            goto label_29fe78;
        }
    }
    ctx->pc = 0x29FE6Cu;
label_29fe6c:
    // 0x29fe6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fe70:
    // 0x29fe70: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29fe74:
    // 0x29fe74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29fe78:
    // 0x29fe78: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x29fe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_29fe7c:
    // 0x29fe7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29fe7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29fe80:
    // 0x29fe80: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_29fe84:
    if (ctx->pc == 0x29FE84u) {
        ctx->pc = 0x29FE84u;
            // 0x29fe84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FE88u;
        goto label_29fe88;
    }
    ctx->pc = 0x29FE80u;
    {
        const bool branch_taken_0x29fe80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29fe80) {
            ctx->pc = 0x29FE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE80u;
            // 0x29fe84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FEA4u;
            goto label_29fea4;
        }
    }
    ctx->pc = 0x29FE88u;
label_29fe88:
    // 0x29fe88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29fe8c:
    // 0x29fe8c: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x29fe8cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_29fe90:
    // 0x29fe90: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29fe94:
    // 0x29fe94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29fe94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29fe98:
    // 0x29fe98: 0xc0a7ab4  jal         func_29EAD0
label_29fe9c:
    if (ctx->pc == 0x29FE9Cu) {
        ctx->pc = 0x29FE9Cu;
            // 0x29fe9c: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x29FEA0u;
        goto label_29fea0;
    }
    ctx->pc = 0x29FE98u;
    SET_GPR_U32(ctx, 31, 0x29FEA0u);
    ctx->pc = 0x29FE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE98u;
            // 0x29fe9c: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEA0u; }
        if (ctx->pc != 0x29FEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEA0u; }
        if (ctx->pc != 0x29FEA0u) { return; }
    }
    ctx->pc = 0x29FEA0u;
label_29fea0:
    // 0x29fea0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29fea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29fea4:
    // 0x29fea4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29fea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29fea8:
    // 0x29fea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29fea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29feac:
    // 0x29feac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29feacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29feb0:
    // 0x29feb0: 0x3e00008  jr          $ra
label_29feb4:
    if (ctx->pc == 0x29FEB4u) {
        ctx->pc = 0x29FEB4u;
            // 0x29feb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29FEB8u;
        goto label_29feb8;
    }
    ctx->pc = 0x29FEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEB0u;
            // 0x29feb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FEB8u;
label_29feb8:
    // 0x29feb8: 0x0  nop
    ctx->pc = 0x29feb8u;
    // NOP
label_29febc:
    // 0x29febc: 0x0  nop
    ctx->pc = 0x29febcu;
    // NOP
}
