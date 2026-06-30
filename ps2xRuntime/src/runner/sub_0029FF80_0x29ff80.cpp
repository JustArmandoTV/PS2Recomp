#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029FF80
// Address: 0x29ff80 - 0x2a00e0
void sub_0029FF80_0x29ff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FF80_0x29ff80");
#endif

    switch (ctx->pc) {
        case 0x29ff80u: goto label_29ff80;
        case 0x29ff84u: goto label_29ff84;
        case 0x29ff88u: goto label_29ff88;
        case 0x29ff8cu: goto label_29ff8c;
        case 0x29ff90u: goto label_29ff90;
        case 0x29ff94u: goto label_29ff94;
        case 0x29ff98u: goto label_29ff98;
        case 0x29ff9cu: goto label_29ff9c;
        case 0x29ffa0u: goto label_29ffa0;
        case 0x29ffa4u: goto label_29ffa4;
        case 0x29ffa8u: goto label_29ffa8;
        case 0x29ffacu: goto label_29ffac;
        case 0x29ffb0u: goto label_29ffb0;
        case 0x29ffb4u: goto label_29ffb4;
        case 0x29ffb8u: goto label_29ffb8;
        case 0x29ffbcu: goto label_29ffbc;
        case 0x29ffc0u: goto label_29ffc0;
        case 0x29ffc4u: goto label_29ffc4;
        case 0x29ffc8u: goto label_29ffc8;
        case 0x29ffccu: goto label_29ffcc;
        case 0x29ffd0u: goto label_29ffd0;
        case 0x29ffd4u: goto label_29ffd4;
        case 0x29ffd8u: goto label_29ffd8;
        case 0x29ffdcu: goto label_29ffdc;
        case 0x29ffe0u: goto label_29ffe0;
        case 0x29ffe4u: goto label_29ffe4;
        case 0x29ffe8u: goto label_29ffe8;
        case 0x29ffecu: goto label_29ffec;
        case 0x29fff0u: goto label_29fff0;
        case 0x29fff4u: goto label_29fff4;
        case 0x29fff8u: goto label_29fff8;
        case 0x29fffcu: goto label_29fffc;
        case 0x2a0000u: goto label_2a0000;
        case 0x2a0004u: goto label_2a0004;
        case 0x2a0008u: goto label_2a0008;
        case 0x2a000cu: goto label_2a000c;
        case 0x2a0010u: goto label_2a0010;
        case 0x2a0014u: goto label_2a0014;
        case 0x2a0018u: goto label_2a0018;
        case 0x2a001cu: goto label_2a001c;
        case 0x2a0020u: goto label_2a0020;
        case 0x2a0024u: goto label_2a0024;
        case 0x2a0028u: goto label_2a0028;
        case 0x2a002cu: goto label_2a002c;
        case 0x2a0030u: goto label_2a0030;
        case 0x2a0034u: goto label_2a0034;
        case 0x2a0038u: goto label_2a0038;
        case 0x2a003cu: goto label_2a003c;
        case 0x2a0040u: goto label_2a0040;
        case 0x2a0044u: goto label_2a0044;
        case 0x2a0048u: goto label_2a0048;
        case 0x2a004cu: goto label_2a004c;
        case 0x2a0050u: goto label_2a0050;
        case 0x2a0054u: goto label_2a0054;
        case 0x2a0058u: goto label_2a0058;
        case 0x2a005cu: goto label_2a005c;
        case 0x2a0060u: goto label_2a0060;
        case 0x2a0064u: goto label_2a0064;
        case 0x2a0068u: goto label_2a0068;
        case 0x2a006cu: goto label_2a006c;
        case 0x2a0070u: goto label_2a0070;
        case 0x2a0074u: goto label_2a0074;
        case 0x2a0078u: goto label_2a0078;
        case 0x2a007cu: goto label_2a007c;
        case 0x2a0080u: goto label_2a0080;
        case 0x2a0084u: goto label_2a0084;
        case 0x2a0088u: goto label_2a0088;
        case 0x2a008cu: goto label_2a008c;
        case 0x2a0090u: goto label_2a0090;
        case 0x2a0094u: goto label_2a0094;
        case 0x2a0098u: goto label_2a0098;
        case 0x2a009cu: goto label_2a009c;
        case 0x2a00a0u: goto label_2a00a0;
        case 0x2a00a4u: goto label_2a00a4;
        case 0x2a00a8u: goto label_2a00a8;
        case 0x2a00acu: goto label_2a00ac;
        case 0x2a00b0u: goto label_2a00b0;
        case 0x2a00b4u: goto label_2a00b4;
        case 0x2a00b8u: goto label_2a00b8;
        case 0x2a00bcu: goto label_2a00bc;
        case 0x2a00c0u: goto label_2a00c0;
        case 0x2a00c4u: goto label_2a00c4;
        case 0x2a00c8u: goto label_2a00c8;
        case 0x2a00ccu: goto label_2a00cc;
        case 0x2a00d0u: goto label_2a00d0;
        case 0x2a00d4u: goto label_2a00d4;
        case 0x2a00d8u: goto label_2a00d8;
        case 0x2a00dcu: goto label_2a00dc;
        default: break;
    }

    ctx->pc = 0x29ff80u;

label_29ff80:
    // 0x29ff80: 0x27bdd8b0  addiu       $sp, $sp, -0x2750
    ctx->pc = 0x29ff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294957232));
label_29ff84:
    // 0x29ff84: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x29ff84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ff88:
    // 0x29ff88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29ff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29ff8c:
    // 0x29ff8c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x29ff8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_29ff90:
    // 0x29ff90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ff90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29ff94:
    // 0x29ff94: 0x24052728  addiu       $a1, $zero, 0x2728
    ctx->pc = 0x29ff94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10024));
label_29ff98:
    // 0x29ff98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ff98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ff9c:
    // 0x29ff9c: 0x24c6db70  addiu       $a2, $a2, -0x2490
    ctx->pc = 0x29ff9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957936));
label_29ffa0:
    // 0x29ffa0: 0xc0a8410  jal         func_2A1040
label_29ffa4:
    if (ctx->pc == 0x29FFA4u) {
        ctx->pc = 0x29FFA4u;
            // 0x29ffa4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29FFA8u;
        goto label_29ffa8;
    }
    ctx->pc = 0x29FFA0u;
    SET_GPR_U32(ctx, 31, 0x29FFA8u);
    ctx->pc = 0x29FFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFA0u;
            // 0x29ffa4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1040u;
    if (runtime->hasFunction(0x2A1040u)) {
        auto targetFn = runtime->lookupFunction(0x2A1040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFA8u; }
        if (ctx->pc != 0x29FFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1040_0x2a1040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFA8u; }
        if (ctx->pc != 0x29FFA8u) { return; }
    }
    ctx->pc = 0x29FFA8u;
label_29ffa8:
    // 0x29ffa8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x29ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29ffac:
    // 0x29ffac: 0xc0a7f44  jal         func_29FD10
label_29ffb0:
    if (ctx->pc == 0x29FFB0u) {
        ctx->pc = 0x29FFB0u;
            // 0x29ffb0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29FFB4u;
        goto label_29ffb4;
    }
    ctx->pc = 0x29FFACu;
    SET_GPR_U32(ctx, 31, 0x29FFB4u);
    ctx->pc = 0x29FFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFACu;
            // 0x29ffb0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FD10u;
    if (runtime->hasFunction(0x29FD10u)) {
        auto targetFn = runtime->lookupFunction(0x29FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFB4u; }
        if (ctx->pc != 0x29FFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FD10_0x29fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFB4u; }
        if (ctx->pc != 0x29FFB4u) { return; }
    }
    ctx->pc = 0x29FFB4u;
label_29ffb4:
    // 0x29ffb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29ffb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ffb8:
    // 0x29ffb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ffb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ffbc:
    // 0x29ffbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ffbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29ffc0:
    // 0x29ffc0: 0x3e00008  jr          $ra
label_29ffc4:
    if (ctx->pc == 0x29FFC4u) {
        ctx->pc = 0x29FFC4u;
            // 0x29ffc4: 0x27bd2750  addiu       $sp, $sp, 0x2750 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10064));
        ctx->pc = 0x29FFC8u;
        goto label_29ffc8;
    }
    ctx->pc = 0x29FFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFC0u;
            // 0x29ffc4: 0x27bd2750  addiu       $sp, $sp, 0x2750 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10064));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FFC8u;
label_29ffc8:
    // 0x29ffc8: 0x0  nop
    ctx->pc = 0x29ffc8u;
    // NOP
label_29ffcc:
    // 0x29ffcc: 0x0  nop
    ctx->pc = 0x29ffccu;
    // NOP
label_29ffd0:
    // 0x29ffd0: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x29ffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_29ffd4:
    // 0x29ffd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29ffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29ffd8:
    // 0x29ffd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29ffd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29ffdc:
    // 0x29ffdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29ffe0:
    // 0x29ffe0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29ffe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ffe4:
    // 0x29ffe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ffe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29ffe8:
    // 0x29ffe8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29ffe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ffec:
    // 0x29ffec: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_29fff0:
    if (ctx->pc == 0x29FFF0u) {
        ctx->pc = 0x29FFF0u;
            // 0x29fff0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FFF4u;
        goto label_29fff4;
    }
    ctx->pc = 0x29FFECu;
    {
        const bool branch_taken_0x29ffec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFECu;
            // 0x29fff0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ffec) {
            ctx->pc = 0x2A0030u;
            goto label_2a0030;
        }
    }
    ctx->pc = 0x29FFF4u;
label_29fff4:
    // 0x29fff4: 0x2a010201  slti        $at, $s0, 0x201
    ctx->pc = 0x29fff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)513) ? 1 : 0);
label_29fff8:
    // 0x29fff8: 0x54200002  bnel        $at, $zero, . + 4 + (0x2 << 2)
label_29fffc:
    if (ctx->pc == 0x29FFFCu) {
        ctx->pc = 0x29FFFCu;
            // 0x29fffc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0000u;
        goto label_2a0000;
    }
    ctx->pc = 0x29FFF8u;
    {
        const bool branch_taken_0x29fff8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fff8) {
            ctx->pc = 0x29FFFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFF8u;
            // 0x29fffc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0004u;
            goto label_2a0004;
        }
    }
    ctx->pc = 0x2A0000u;
label_2a0000:
    // 0x2a0000: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2a0000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2a0004:
    // 0x2a0004: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2a0004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a0008:
    // 0x2a0008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a000c:
    // 0x2a000c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a000cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a0010:
    // 0x2a0010: 0x320f809  jalr        $t9
label_2a0014:
    if (ctx->pc == 0x2A0014u) {
        ctx->pc = 0x2A0014u;
            // 0x2a0014: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2A0018u;
        goto label_2a0018;
    }
    ctx->pc = 0x2A0010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0018u);
        ctx->pc = 0x2A0014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0010u;
            // 0x2a0014: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0018u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0018u; }
            if (ctx->pc != 0x2A0018u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0018u;
label_2a0018:
    // 0x2a0018: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a001c:
    if (ctx->pc == 0x2A001Cu) {
        ctx->pc = 0x2A0020u;
        goto label_2a0020;
    }
    ctx->pc = 0x2A0018u;
    {
        const bool branch_taken_0x2a0018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0018) {
            ctx->pc = 0x2A0030u;
            goto label_2a0030;
        }
    }
    ctx->pc = 0x2A0020u;
label_2a0020:
    // 0x2a0020: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2a0020u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a0024:
    // 0x2a0024: 0x5600fff4  bnel        $s0, $zero, . + 4 + (-0xC << 2)
label_2a0028:
    if (ctx->pc == 0x2A0028u) {
        ctx->pc = 0x2A0028u;
            // 0x2a0028: 0x2a010201  slti        $at, $s0, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->pc = 0x2A002Cu;
        goto label_2a002c;
    }
    ctx->pc = 0x2A0024u;
    {
        const bool branch_taken_0x2a0024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0024) {
            ctx->pc = 0x2A0028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0024u;
            // 0x2a0028: 0x2a010201  slti        $at, $s0, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FFF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29fff8;
        }
    }
    ctx->pc = 0x2A002Cu;
label_2a002c:
    // 0x2a002c: 0x0  nop
    ctx->pc = 0x2a002cu;
    // NOP
label_2a0030:
    // 0x2a0030: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x2a0030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2a0034:
    // 0x2a0034: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a0034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a0038:
    // 0x2a0038: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a003c:
    // 0x2a003c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a003cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0040:
    // 0x2a0040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0044:
    // 0x2a0044: 0x3e00008  jr          $ra
label_2a0048:
    if (ctx->pc == 0x2A0048u) {
        ctx->pc = 0x2A0048u;
            // 0x2a0048: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x2A004Cu;
        goto label_2a004c;
    }
    ctx->pc = 0x2A0044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0044u;
            // 0x2a0048: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A004Cu;
label_2a004c:
    // 0x2a004c: 0x0  nop
    ctx->pc = 0x2a004cu;
    // NOP
label_2a0050:
    // 0x2a0050: 0x3e00008  jr          $ra
label_2a0054:
    if (ctx->pc == 0x2A0054u) {
        ctx->pc = 0x2A0054u;
            // 0x2a0054: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2A0058u;
        goto label_2a0058;
    }
    ctx->pc = 0x2A0050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0050u;
            // 0x2a0054: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0058u;
label_2a0058:
    // 0x2a0058: 0x0  nop
    ctx->pc = 0x2a0058u;
    // NOP
label_2a005c:
    // 0x2a005c: 0x0  nop
    ctx->pc = 0x2a005cu;
    // NOP
label_2a0060:
    // 0x2a0060: 0x3e00008  jr          $ra
label_2a0064:
    if (ctx->pc == 0x2A0064u) {
        ctx->pc = 0x2A0064u;
            // 0x2a0064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A0068u;
        goto label_2a0068;
    }
    ctx->pc = 0x2A0060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0060u;
            // 0x2a0064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0068u;
label_2a0068:
    // 0x2a0068: 0x0  nop
    ctx->pc = 0x2a0068u;
    // NOP
label_2a006c:
    // 0x2a006c: 0x0  nop
    ctx->pc = 0x2a006cu;
    // NOP
label_2a0070:
    // 0x2a0070: 0x3e00008  jr          $ra
label_2a0074:
    if (ctx->pc == 0x2A0074u) {
        ctx->pc = 0x2A0074u;
            // 0x2a0074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A0078u;
        goto label_2a0078;
    }
    ctx->pc = 0x2A0070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0070u;
            // 0x2a0074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0078u;
label_2a0078:
    // 0x2a0078: 0x0  nop
    ctx->pc = 0x2a0078u;
    // NOP
label_2a007c:
    // 0x2a007c: 0x0  nop
    ctx->pc = 0x2a007cu;
    // NOP
label_2a0080:
    // 0x2a0080: 0x3e00008  jr          $ra
label_2a0084:
    if (ctx->pc == 0x2A0084u) {
        ctx->pc = 0x2A0084u;
            // 0x2a0084: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2A0088u;
        goto label_2a0088;
    }
    ctx->pc = 0x2A0080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0080u;
            // 0x2a0084: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0088u;
label_2a0088:
    // 0x2a0088: 0x0  nop
    ctx->pc = 0x2a0088u;
    // NOP
label_2a008c:
    // 0x2a008c: 0x0  nop
    ctx->pc = 0x2a008cu;
    // NOP
label_2a0090:
    // 0x2a0090: 0x3e00008  jr          $ra
label_2a0094:
    if (ctx->pc == 0x2A0094u) {
        ctx->pc = 0x2A0094u;
            // 0x2a0094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A0098u;
        goto label_2a0098;
    }
    ctx->pc = 0x2A0090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0090u;
            // 0x2a0094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0098u;
label_2a0098:
    // 0x2a0098: 0x0  nop
    ctx->pc = 0x2a0098u;
    // NOP
label_2a009c:
    // 0x2a009c: 0x0  nop
    ctx->pc = 0x2a009cu;
    // NOP
label_2a00a0:
    // 0x2a00a0: 0x3e00008  jr          $ra
label_2a00a4:
    if (ctx->pc == 0x2A00A4u) {
        ctx->pc = 0x2A00A4u;
            // 0x2a00a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A00A8u;
        goto label_2a00a8;
    }
    ctx->pc = 0x2A00A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A00A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00A0u;
            // 0x2a00a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A00A8u;
label_2a00a8:
    // 0x2a00a8: 0x0  nop
    ctx->pc = 0x2a00a8u;
    // NOP
label_2a00ac:
    // 0x2a00ac: 0x0  nop
    ctx->pc = 0x2a00acu;
    // NOP
label_2a00b0:
    // 0x2a00b0: 0x3e00008  jr          $ra
label_2a00b4:
    if (ctx->pc == 0x2A00B4u) {
        ctx->pc = 0x2A00B4u;
            // 0x2a00b4: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2A00B8u;
        goto label_2a00b8;
    }
    ctx->pc = 0x2A00B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A00B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00B0u;
            // 0x2a00b4: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A00B8u;
label_2a00b8:
    // 0x2a00b8: 0x0  nop
    ctx->pc = 0x2a00b8u;
    // NOP
label_2a00bc:
    // 0x2a00bc: 0x0  nop
    ctx->pc = 0x2a00bcu;
    // NOP
label_2a00c0:
    // 0x2a00c0: 0x3e00008  jr          $ra
label_2a00c4:
    if (ctx->pc == 0x2A00C4u) {
        ctx->pc = 0x2A00C4u;
            // 0x2a00c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A00C8u;
        goto label_2a00c8;
    }
    ctx->pc = 0x2A00C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A00C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00C0u;
            // 0x2a00c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A00C8u;
label_2a00c8:
    // 0x2a00c8: 0x0  nop
    ctx->pc = 0x2a00c8u;
    // NOP
label_2a00cc:
    // 0x2a00cc: 0x0  nop
    ctx->pc = 0x2a00ccu;
    // NOP
label_2a00d0:
    // 0x2a00d0: 0x3e00008  jr          $ra
label_2a00d4:
    if (ctx->pc == 0x2A00D4u) {
        ctx->pc = 0x2A00D4u;
            // 0x2a00d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A00D8u;
        goto label_2a00d8;
    }
    ctx->pc = 0x2A00D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A00D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00D0u;
            // 0x2a00d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A00D8u;
label_2a00d8:
    // 0x2a00d8: 0x0  nop
    ctx->pc = 0x2a00d8u;
    // NOP
label_2a00dc:
    // 0x2a00dc: 0x0  nop
    ctx->pc = 0x2a00dcu;
    // NOP
}
