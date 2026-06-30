#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CCE40
// Address: 0x2cce40 - 0x2ccfa0
void sub_002CCE40_0x2cce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCE40_0x2cce40");
#endif

    switch (ctx->pc) {
        case 0x2cce40u: goto label_2cce40;
        case 0x2cce44u: goto label_2cce44;
        case 0x2cce48u: goto label_2cce48;
        case 0x2cce4cu: goto label_2cce4c;
        case 0x2cce50u: goto label_2cce50;
        case 0x2cce54u: goto label_2cce54;
        case 0x2cce58u: goto label_2cce58;
        case 0x2cce5cu: goto label_2cce5c;
        case 0x2cce60u: goto label_2cce60;
        case 0x2cce64u: goto label_2cce64;
        case 0x2cce68u: goto label_2cce68;
        case 0x2cce6cu: goto label_2cce6c;
        case 0x2cce70u: goto label_2cce70;
        case 0x2cce74u: goto label_2cce74;
        case 0x2cce78u: goto label_2cce78;
        case 0x2cce7cu: goto label_2cce7c;
        case 0x2cce80u: goto label_2cce80;
        case 0x2cce84u: goto label_2cce84;
        case 0x2cce88u: goto label_2cce88;
        case 0x2cce8cu: goto label_2cce8c;
        case 0x2cce90u: goto label_2cce90;
        case 0x2cce94u: goto label_2cce94;
        case 0x2cce98u: goto label_2cce98;
        case 0x2cce9cu: goto label_2cce9c;
        case 0x2ccea0u: goto label_2ccea0;
        case 0x2ccea4u: goto label_2ccea4;
        case 0x2ccea8u: goto label_2ccea8;
        case 0x2cceacu: goto label_2cceac;
        case 0x2cceb0u: goto label_2cceb0;
        case 0x2cceb4u: goto label_2cceb4;
        case 0x2cceb8u: goto label_2cceb8;
        case 0x2ccebcu: goto label_2ccebc;
        case 0x2ccec0u: goto label_2ccec0;
        case 0x2ccec4u: goto label_2ccec4;
        case 0x2ccec8u: goto label_2ccec8;
        case 0x2cceccu: goto label_2ccecc;
        case 0x2cced0u: goto label_2cced0;
        case 0x2cced4u: goto label_2cced4;
        case 0x2cced8u: goto label_2cced8;
        case 0x2ccedcu: goto label_2ccedc;
        case 0x2ccee0u: goto label_2ccee0;
        case 0x2ccee4u: goto label_2ccee4;
        case 0x2ccee8u: goto label_2ccee8;
        case 0x2cceecu: goto label_2cceec;
        case 0x2ccef0u: goto label_2ccef0;
        case 0x2ccef4u: goto label_2ccef4;
        case 0x2ccef8u: goto label_2ccef8;
        case 0x2ccefcu: goto label_2ccefc;
        case 0x2ccf00u: goto label_2ccf00;
        case 0x2ccf04u: goto label_2ccf04;
        case 0x2ccf08u: goto label_2ccf08;
        case 0x2ccf0cu: goto label_2ccf0c;
        case 0x2ccf10u: goto label_2ccf10;
        case 0x2ccf14u: goto label_2ccf14;
        case 0x2ccf18u: goto label_2ccf18;
        case 0x2ccf1cu: goto label_2ccf1c;
        case 0x2ccf20u: goto label_2ccf20;
        case 0x2ccf24u: goto label_2ccf24;
        case 0x2ccf28u: goto label_2ccf28;
        case 0x2ccf2cu: goto label_2ccf2c;
        case 0x2ccf30u: goto label_2ccf30;
        case 0x2ccf34u: goto label_2ccf34;
        case 0x2ccf38u: goto label_2ccf38;
        case 0x2ccf3cu: goto label_2ccf3c;
        case 0x2ccf40u: goto label_2ccf40;
        case 0x2ccf44u: goto label_2ccf44;
        case 0x2ccf48u: goto label_2ccf48;
        case 0x2ccf4cu: goto label_2ccf4c;
        case 0x2ccf50u: goto label_2ccf50;
        case 0x2ccf54u: goto label_2ccf54;
        case 0x2ccf58u: goto label_2ccf58;
        case 0x2ccf5cu: goto label_2ccf5c;
        case 0x2ccf60u: goto label_2ccf60;
        case 0x2ccf64u: goto label_2ccf64;
        case 0x2ccf68u: goto label_2ccf68;
        case 0x2ccf6cu: goto label_2ccf6c;
        case 0x2ccf70u: goto label_2ccf70;
        case 0x2ccf74u: goto label_2ccf74;
        case 0x2ccf78u: goto label_2ccf78;
        case 0x2ccf7cu: goto label_2ccf7c;
        case 0x2ccf80u: goto label_2ccf80;
        case 0x2ccf84u: goto label_2ccf84;
        case 0x2ccf88u: goto label_2ccf88;
        case 0x2ccf8cu: goto label_2ccf8c;
        case 0x2ccf90u: goto label_2ccf90;
        case 0x2ccf94u: goto label_2ccf94;
        case 0x2ccf98u: goto label_2ccf98;
        case 0x2ccf9cu: goto label_2ccf9c;
        default: break;
    }

    ctx->pc = 0x2cce40u;

label_2cce40:
    // 0x2cce40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cce44:
    // 0x2cce44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cce48:
    // 0x2cce48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cce4c:
    // 0x2cce4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cce50:
    // 0x2cce50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cce50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cce54:
    // 0x2cce54: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2cce58:
    if (ctx->pc == 0x2CCE58u) {
        ctx->pc = 0x2CCE58u;
            // 0x2cce58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE5Cu;
        goto label_2cce5c;
    }
    ctx->pc = 0x2CCE54u;
    {
        const bool branch_taken_0x2cce54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE54u;
            // 0x2cce58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce54) {
            ctx->pc = 0x2CCE98u;
            goto label_2cce98;
        }
    }
    ctx->pc = 0x2CCE5Cu;
label_2cce5c:
    // 0x2cce5c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2cce60:
    if (ctx->pc == 0x2CCE60u) {
        ctx->pc = 0x2CCE60u;
            // 0x2cce60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CCE64u;
        goto label_2cce64;
    }
    ctx->pc = 0x2CCE5Cu;
    {
        const bool branch_taken_0x2cce5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cce5c) {
            ctx->pc = 0x2CCE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE5Cu;
            // 0x2cce60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CCE84u;
            goto label_2cce84;
        }
    }
    ctx->pc = 0x2CCE64u;
label_2cce64:
    // 0x2cce64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2cce68:
    if (ctx->pc == 0x2CCE68u) {
        ctx->pc = 0x2CCE6Cu;
        goto label_2cce6c;
    }
    ctx->pc = 0x2CCE64u;
    {
        const bool branch_taken_0x2cce64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cce64) {
            ctx->pc = 0x2CCE80u;
            goto label_2cce80;
        }
    }
    ctx->pc = 0x2CCE6Cu;
label_2cce6c:
    // 0x2cce6c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2cce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2cce70:
    // 0x2cce70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cce74:
    if (ctx->pc == 0x2CCE74u) {
        ctx->pc = 0x2CCE78u;
        goto label_2cce78;
    }
    ctx->pc = 0x2CCE70u;
    {
        const bool branch_taken_0x2cce70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cce70) {
            ctx->pc = 0x2CCE80u;
            goto label_2cce80;
        }
    }
    ctx->pc = 0x2CCE78u;
label_2cce78:
    // 0x2cce78: 0xc0400a8  jal         func_1002A0
label_2cce7c:
    if (ctx->pc == 0x2CCE7Cu) {
        ctx->pc = 0x2CCE80u;
        goto label_2cce80;
    }
    ctx->pc = 0x2CCE78u;
    SET_GPR_U32(ctx, 31, 0x2CCE80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE80u; }
        if (ctx->pc != 0x2CCE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE80u; }
        if (ctx->pc != 0x2CCE80u) { return; }
    }
    ctx->pc = 0x2CCE80u;
label_2cce80:
    // 0x2cce80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cce80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cce84:
    // 0x2cce84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cce84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cce88:
    // 0x2cce88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cce8c:
    if (ctx->pc == 0x2CCE8Cu) {
        ctx->pc = 0x2CCE8Cu;
            // 0x2cce8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE90u;
        goto label_2cce90;
    }
    ctx->pc = 0x2CCE88u;
    {
        const bool branch_taken_0x2cce88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cce88) {
            ctx->pc = 0x2CCE8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE88u;
            // 0x2cce8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CCE9Cu;
            goto label_2cce9c;
        }
    }
    ctx->pc = 0x2CCE90u;
label_2cce90:
    // 0x2cce90: 0xc0400a8  jal         func_1002A0
label_2cce94:
    if (ctx->pc == 0x2CCE94u) {
        ctx->pc = 0x2CCE94u;
            // 0x2cce94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE98u;
        goto label_2cce98;
    }
    ctx->pc = 0x2CCE90u;
    SET_GPR_U32(ctx, 31, 0x2CCE98u);
    ctx->pc = 0x2CCE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE90u;
            // 0x2cce94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE98u; }
        if (ctx->pc != 0x2CCE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE98u; }
        if (ctx->pc != 0x2CCE98u) { return; }
    }
    ctx->pc = 0x2CCE98u;
label_2cce98:
    // 0x2cce98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cce98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cce9c:
    // 0x2cce9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cce9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ccea0:
    // 0x2ccea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ccea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ccea4:
    // 0x2ccea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ccea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ccea8:
    // 0x2ccea8: 0x3e00008  jr          $ra
label_2cceac:
    if (ctx->pc == 0x2CCEACu) {
        ctx->pc = 0x2CCEACu;
            // 0x2cceac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CCEB0u;
        goto label_2cceb0;
    }
    ctx->pc = 0x2CCEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCEA8u;
            // 0x2cceac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CCEB0u;
label_2cceb0:
    // 0x2cceb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cceb4:
    // 0x2cceb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cceb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cceb8:
    // 0x2cceb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ccebc:
    // 0x2ccebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ccebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ccec0:
    // 0x2ccec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ccec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ccec4:
    // 0x2ccec4: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
label_2ccec8:
    if (ctx->pc == 0x2CCEC8u) {
        ctx->pc = 0x2CCEC8u;
            // 0x2ccec8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCECCu;
        goto label_2ccecc;
    }
    ctx->pc = 0x2CCEC4u;
    {
        const bool branch_taken_0x2ccec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCEC4u;
            // 0x2ccec8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccec4) {
            ctx->pc = 0x2CCF80u;
            goto label_2ccf80;
        }
    }
    ctx->pc = 0x2CCECCu;
label_2ccecc:
    // 0x2ccecc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cceccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cced0:
    // 0x2cced0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cced0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cced4:
    // 0x2cced4: 0x246363d0  addiu       $v1, $v1, 0x63D0
    ctx->pc = 0x2cced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25552));
label_2cced8:
    // 0x2cced8: 0x24426424  addiu       $v0, $v0, 0x6424
    ctx->pc = 0x2cced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25636));
label_2ccedc:
    // 0x2ccedc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2ccedcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2ccee0:
    // 0x2ccee0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2ccee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2ccee4:
    // 0x2ccee4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ccee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ccee8:
    // 0x2ccee8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2ccee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2cceec:
    // 0x2cceec: 0x320f809  jalr        $t9
label_2ccef0:
    if (ctx->pc == 0x2CCEF0u) {
        ctx->pc = 0x2CCEF4u;
        goto label_2ccef4;
    }
    ctx->pc = 0x2CCEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CCEF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CCEF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CCEF4u; }
            if (ctx->pc != 0x2CCEF4u) { return; }
        }
        }
    }
    ctx->pc = 0x2CCEF4u;
label_2ccef4:
    // 0x2ccef4: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x2ccef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2ccef8:
    // 0x2ccef8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2ccefc:
    if (ctx->pc == 0x2CCEFCu) {
        ctx->pc = 0x2CCF00u;
        goto label_2ccf00;
    }
    ctx->pc = 0x2CCEF8u;
    {
        const bool branch_taken_0x2ccef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccef8) {
            ctx->pc = 0x2CCF34u;
            goto label_2ccf34;
        }
    }
    ctx->pc = 0x2CCF00u;
label_2ccf00:
    // 0x2ccf00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ccf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ccf04:
    // 0x2ccf04: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2ccf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2ccf08:
    // 0x2ccf08: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2ccf08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2ccf0c:
    // 0x2ccf0c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2ccf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2ccf10:
    // 0x2ccf10: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2ccf14:
    if (ctx->pc == 0x2CCF14u) {
        ctx->pc = 0x2CCF18u;
        goto label_2ccf18;
    }
    ctx->pc = 0x2CCF10u;
    {
        const bool branch_taken_0x2ccf10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccf10) {
            ctx->pc = 0x2CCF34u;
            goto label_2ccf34;
        }
    }
    ctx->pc = 0x2CCF18u;
label_2ccf18:
    // 0x2ccf18: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ccf1c:
    if (ctx->pc == 0x2CCF1Cu) {
        ctx->pc = 0x2CCF1Cu;
            // 0x2ccf1c: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x2CCF20u;
        goto label_2ccf20;
    }
    ctx->pc = 0x2CCF18u;
    {
        const bool branch_taken_0x2ccf18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccf18) {
            ctx->pc = 0x2CCF1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF18u;
            // 0x2ccf1c: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CCF34u;
            goto label_2ccf34;
        }
    }
    ctx->pc = 0x2CCF20u;
label_2ccf20:
    // 0x2ccf20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ccf20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ccf24:
    // 0x2ccf24: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2ccf24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2ccf28:
    // 0x2ccf28: 0x320f809  jalr        $t9
label_2ccf2c:
    if (ctx->pc == 0x2CCF2Cu) {
        ctx->pc = 0x2CCF2Cu;
            // 0x2ccf2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CCF30u;
        goto label_2ccf30;
    }
    ctx->pc = 0x2CCF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CCF30u);
        ctx->pc = 0x2CCF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF28u;
            // 0x2ccf2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CCF30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF30u; }
            if (ctx->pc != 0x2CCF30u) { return; }
        }
        }
    }
    ctx->pc = 0x2CCF30u;
label_2ccf30:
    // 0x2ccf30: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x2ccf30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_2ccf34:
    // 0x2ccf34: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_2ccf38:
    if (ctx->pc == 0x2CCF38u) {
        ctx->pc = 0x2CCF38u;
            // 0x2ccf38: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CCF3Cu;
        goto label_2ccf3c;
    }
    ctx->pc = 0x2CCF34u;
    {
        const bool branch_taken_0x2ccf34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccf34) {
            ctx->pc = 0x2CCF38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF34u;
            // 0x2ccf38: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CCF6Cu;
            goto label_2ccf6c;
        }
    }
    ctx->pc = 0x2CCF3Cu;
label_2ccf3c:
    // 0x2ccf3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ccf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ccf40:
    // 0x2ccf40: 0x24426440  addiu       $v0, $v0, 0x6440
    ctx->pc = 0x2ccf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25664));
label_2ccf44:
    // 0x2ccf44: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2ccf48:
    if (ctx->pc == 0x2CCF48u) {
        ctx->pc = 0x2CCF48u;
            // 0x2ccf48: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CCF4Cu;
        goto label_2ccf4c;
    }
    ctx->pc = 0x2CCF44u;
    {
        const bool branch_taken_0x2ccf44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF44u;
            // 0x2ccf48: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf44) {
            ctx->pc = 0x2CCF68u;
            goto label_2ccf68;
        }
    }
    ctx->pc = 0x2CCF4Cu;
label_2ccf4c:
    // 0x2ccf4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ccf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ccf50:
    // 0x2ccf50: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2ccf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2ccf54:
    // 0x2ccf54: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2ccf58:
    if (ctx->pc == 0x2CCF58u) {
        ctx->pc = 0x2CCF58u;
            // 0x2ccf58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CCF5Cu;
        goto label_2ccf5c;
    }
    ctx->pc = 0x2CCF54u;
    {
        const bool branch_taken_0x2ccf54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF54u;
            // 0x2ccf58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf54) {
            ctx->pc = 0x2CCF68u;
            goto label_2ccf68;
        }
    }
    ctx->pc = 0x2CCF5Cu;
label_2ccf5c:
    // 0x2ccf5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ccf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ccf60:
    // 0x2ccf60: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2ccf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2ccf64:
    // 0x2ccf64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ccf64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ccf68:
    // 0x2ccf68: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ccf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ccf6c:
    // 0x2ccf6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ccf6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2ccf70:
    // 0x2ccf70: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2ccf74:
    if (ctx->pc == 0x2CCF74u) {
        ctx->pc = 0x2CCF74u;
            // 0x2ccf74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF78u;
        goto label_2ccf78;
    }
    ctx->pc = 0x2CCF70u;
    {
        const bool branch_taken_0x2ccf70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ccf70) {
            ctx->pc = 0x2CCF74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF70u;
            // 0x2ccf74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CCF84u;
            goto label_2ccf84;
        }
    }
    ctx->pc = 0x2CCF78u;
label_2ccf78:
    // 0x2ccf78: 0xc0400a8  jal         func_1002A0
label_2ccf7c:
    if (ctx->pc == 0x2CCF7Cu) {
        ctx->pc = 0x2CCF7Cu;
            // 0x2ccf7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF80u;
        goto label_2ccf80;
    }
    ctx->pc = 0x2CCF78u;
    SET_GPR_U32(ctx, 31, 0x2CCF80u);
    ctx->pc = 0x2CCF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF78u;
            // 0x2ccf7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF80u; }
        if (ctx->pc != 0x2CCF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF80u; }
        if (ctx->pc != 0x2CCF80u) { return; }
    }
    ctx->pc = 0x2CCF80u;
label_2ccf80:
    // 0x2ccf80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ccf80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ccf84:
    // 0x2ccf84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ccf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ccf88:
    // 0x2ccf88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ccf88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ccf8c:
    // 0x2ccf8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ccf8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ccf90:
    // 0x2ccf90: 0x3e00008  jr          $ra
label_2ccf94:
    if (ctx->pc == 0x2CCF94u) {
        ctx->pc = 0x2CCF94u;
            // 0x2ccf94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CCF98u;
        goto label_2ccf98;
    }
    ctx->pc = 0x2CCF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF90u;
            // 0x2ccf94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CCF98u;
label_2ccf98:
    // 0x2ccf98: 0x0  nop
    ctx->pc = 0x2ccf98u;
    // NOP
label_2ccf9c:
    // 0x2ccf9c: 0x0  nop
    ctx->pc = 0x2ccf9cu;
    // NOP
}
