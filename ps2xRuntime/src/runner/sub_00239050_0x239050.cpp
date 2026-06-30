#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239050
// Address: 0x239050 - 0x239160
void sub_00239050_0x239050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239050_0x239050");
#endif

    switch (ctx->pc) {
        case 0x239050u: goto label_239050;
        case 0x239054u: goto label_239054;
        case 0x239058u: goto label_239058;
        case 0x23905cu: goto label_23905c;
        case 0x239060u: goto label_239060;
        case 0x239064u: goto label_239064;
        case 0x239068u: goto label_239068;
        case 0x23906cu: goto label_23906c;
        case 0x239070u: goto label_239070;
        case 0x239074u: goto label_239074;
        case 0x239078u: goto label_239078;
        case 0x23907cu: goto label_23907c;
        case 0x239080u: goto label_239080;
        case 0x239084u: goto label_239084;
        case 0x239088u: goto label_239088;
        case 0x23908cu: goto label_23908c;
        case 0x239090u: goto label_239090;
        case 0x239094u: goto label_239094;
        case 0x239098u: goto label_239098;
        case 0x23909cu: goto label_23909c;
        case 0x2390a0u: goto label_2390a0;
        case 0x2390a4u: goto label_2390a4;
        case 0x2390a8u: goto label_2390a8;
        case 0x2390acu: goto label_2390ac;
        case 0x2390b0u: goto label_2390b0;
        case 0x2390b4u: goto label_2390b4;
        case 0x2390b8u: goto label_2390b8;
        case 0x2390bcu: goto label_2390bc;
        case 0x2390c0u: goto label_2390c0;
        case 0x2390c4u: goto label_2390c4;
        case 0x2390c8u: goto label_2390c8;
        case 0x2390ccu: goto label_2390cc;
        case 0x2390d0u: goto label_2390d0;
        case 0x2390d4u: goto label_2390d4;
        case 0x2390d8u: goto label_2390d8;
        case 0x2390dcu: goto label_2390dc;
        case 0x2390e0u: goto label_2390e0;
        case 0x2390e4u: goto label_2390e4;
        case 0x2390e8u: goto label_2390e8;
        case 0x2390ecu: goto label_2390ec;
        case 0x2390f0u: goto label_2390f0;
        case 0x2390f4u: goto label_2390f4;
        case 0x2390f8u: goto label_2390f8;
        case 0x2390fcu: goto label_2390fc;
        case 0x239100u: goto label_239100;
        case 0x239104u: goto label_239104;
        case 0x239108u: goto label_239108;
        case 0x23910cu: goto label_23910c;
        case 0x239110u: goto label_239110;
        case 0x239114u: goto label_239114;
        case 0x239118u: goto label_239118;
        case 0x23911cu: goto label_23911c;
        case 0x239120u: goto label_239120;
        case 0x239124u: goto label_239124;
        case 0x239128u: goto label_239128;
        case 0x23912cu: goto label_23912c;
        case 0x239130u: goto label_239130;
        case 0x239134u: goto label_239134;
        case 0x239138u: goto label_239138;
        case 0x23913cu: goto label_23913c;
        case 0x239140u: goto label_239140;
        case 0x239144u: goto label_239144;
        case 0x239148u: goto label_239148;
        case 0x23914cu: goto label_23914c;
        case 0x239150u: goto label_239150;
        case 0x239154u: goto label_239154;
        case 0x239158u: goto label_239158;
        case 0x23915cu: goto label_23915c;
        default: break;
    }

    ctx->pc = 0x239050u;

label_239050:
    // 0x239050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_239054:
    // 0x239054: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x239054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_239058:
    // 0x239058: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x239058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23905c:
    // 0x23905c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23905cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_239060:
    // 0x239060: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x239060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239064:
    // 0x239064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_239068:
    // 0x239068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23906c:
    // 0x23906c: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x23906cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_239070:
    // 0x239070: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x239070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239074:
    // 0x239074: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_239078:
    if (ctx->pc == 0x239078u) {
        ctx->pc = 0x239078u;
            // 0x239078: 0x24900104  addiu       $s0, $a0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
        ctx->pc = 0x23907Cu;
        goto label_23907c;
    }
    ctx->pc = 0x239074u;
    {
        const bool branch_taken_0x239074 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x239078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239074u;
            // 0x239078: 0x24900104  addiu       $s0, $a0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239074) {
            ctx->pc = 0x2390B8u;
            goto label_2390b8;
        }
    }
    ctx->pc = 0x23907Cu;
label_23907c:
    // 0x23907c: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x23907cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_239080:
    // 0x239080: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239084:
    // 0x239084: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x239084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_239088:
    // 0x239088: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23908c:
    // 0x23908c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_239090:
    if (ctx->pc == 0x239090u) {
        ctx->pc = 0x239094u;
        goto label_239094;
    }
    ctx->pc = 0x23908Cu;
    {
        const bool branch_taken_0x23908c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23908c) {
            ctx->pc = 0x2390A8u;
            goto label_2390a8;
        }
    }
    ctx->pc = 0x239094u;
label_239094:
    // 0x239094: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x239094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239098:
    // 0x239098: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x239098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23909c:
    // 0x23909c: 0x320f809  jalr        $t9
label_2390a0:
    if (ctx->pc == 0x2390A0u) {
        ctx->pc = 0x2390A0u;
            // 0x2390a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2390A4u;
        goto label_2390a4;
    }
    ctx->pc = 0x23909Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2390A4u);
        ctx->pc = 0x2390A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23909Cu;
            // 0x2390a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2390A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2390A4u; }
            if (ctx->pc != 0x2390A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2390A4u;
label_2390a4:
    // 0x2390a4: 0x0  nop
    ctx->pc = 0x2390a4u;
    // NOP
label_2390a8:
    // 0x2390a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2390a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2390ac:
    // 0x2390ac: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_2390b0:
    if (ctx->pc == 0x2390B0u) {
        ctx->pc = 0x2390B0u;
            // 0x2390b0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x2390B4u;
        goto label_2390b4;
    }
    ctx->pc = 0x2390ACu;
    {
        const bool branch_taken_0x2390ac = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2390B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2390ACu;
            // 0x2390b0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390ac) {
            ctx->pc = 0x239080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239080;
        }
    }
    ctx->pc = 0x2390B4u;
label_2390b4:
    // 0x2390b4: 0x0  nop
    ctx->pc = 0x2390b4u;
    // NOP
label_2390b8:
    // 0x2390b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2390b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2390bc:
    // 0x2390bc: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x2390bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2390c0:
    // 0x2390c0: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_2390c4:
    if (ctx->pc == 0x2390C4u) {
        ctx->pc = 0x2390C8u;
        goto label_2390c8;
    }
    ctx->pc = 0x2390C0u;
    {
        const bool branch_taken_0x2390c0 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2390c0) {
            ctx->pc = 0x239138u;
            goto label_239138;
        }
    }
    ctx->pc = 0x2390C8u;
label_2390c8:
    // 0x2390c8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2390c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2390cc:
    // 0x2390cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2390ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2390d0:
    // 0x2390d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2390d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2390d4:
    // 0x2390d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2390d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2390d8:
    // 0x2390d8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_2390dc:
    if (ctx->pc == 0x2390DCu) {
        ctx->pc = 0x2390E0u;
        goto label_2390e0;
    }
    ctx->pc = 0x2390D8u;
    {
        const bool branch_taken_0x2390d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2390d8) {
            ctx->pc = 0x239128u;
            goto label_239128;
        }
    }
    ctx->pc = 0x2390E0u;
label_2390e0:
    // 0x2390e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2390e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2390e4:
    // 0x2390e4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2390e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2390e8:
    // 0x2390e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2390e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2390ec:
    // 0x2390ec: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x2390ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2390f0:
    // 0x2390f0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_2390f4:
    if (ctx->pc == 0x2390F4u) {
        ctx->pc = 0x2390F4u;
            // 0x2390f4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2390F8u;
        goto label_2390f8;
    }
    ctx->pc = 0x2390F0u;
    {
        const bool branch_taken_0x2390f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2390F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2390F0u;
            // 0x2390f4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390f0) {
            ctx->pc = 0x239128u;
            goto label_239128;
        }
    }
    ctx->pc = 0x2390F8u;
label_2390f8:
    // 0x2390f8: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x2390f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2390fc:
    // 0x2390fc: 0x0  nop
    ctx->pc = 0x2390fcu;
    // NOP
label_239100:
    // 0x239100: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239104:
    // 0x239104: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239108:
    // 0x239108: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23910c:
    // 0x23910c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239110:
    // 0x239110: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239114:
    // 0x239114: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239118:
    // 0x239118: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239118u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23911c:
    // 0x23911c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239120:
    if (ctx->pc == 0x239120u) {
        ctx->pc = 0x239120u;
            // 0x239120: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239124u;
        goto label_239124;
    }
    ctx->pc = 0x23911Cu;
    {
        const bool branch_taken_0x23911c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23911Cu;
            // 0x239120: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23911c) {
            ctx->pc = 0x239100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239100;
        }
    }
    ctx->pc = 0x239124u;
label_239124:
    // 0x239124: 0x0  nop
    ctx->pc = 0x239124u;
    // NOP
label_239128:
    // 0x239128: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23912c:
    // 0x23912c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239130:
    if (ctx->pc == 0x239130u) {
        ctx->pc = 0x239130u;
            // 0x239130: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239134u;
        goto label_239134;
    }
    ctx->pc = 0x23912Cu;
    {
        const bool branch_taken_0x23912c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23912Cu;
            // 0x239130: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23912c) {
            ctx->pc = 0x2390CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2390cc;
        }
    }
    ctx->pc = 0x239134u;
label_239134:
    // 0x239134: 0x0  nop
    ctx->pc = 0x239134u;
    // NOP
label_239138:
    // 0x239138: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23913c:
    // 0x23913c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23913cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239140:
    // 0x239140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239144:
    // 0x239144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239148:
    // 0x239148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23914c:
    // 0x23914c: 0x3e00008  jr          $ra
label_239150:
    if (ctx->pc == 0x239150u) {
        ctx->pc = 0x239150u;
            // 0x239150: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x239154u;
        goto label_239154;
    }
    ctx->pc = 0x23914Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23914Cu;
            // 0x239150: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239154u;
label_239154:
    // 0x239154: 0x0  nop
    ctx->pc = 0x239154u;
    // NOP
label_239158:
    // 0x239158: 0x0  nop
    ctx->pc = 0x239158u;
    // NOP
label_23915c:
    // 0x23915c: 0x0  nop
    ctx->pc = 0x23915cu;
    // NOP
}
