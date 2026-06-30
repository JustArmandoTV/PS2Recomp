#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EED90
// Address: 0x1eed90 - 0x1eee80
void sub_001EED90_0x1eed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EED90_0x1eed90");
#endif

    switch (ctx->pc) {
        case 0x1eed90u: goto label_1eed90;
        case 0x1eed94u: goto label_1eed94;
        case 0x1eed98u: goto label_1eed98;
        case 0x1eed9cu: goto label_1eed9c;
        case 0x1eeda0u: goto label_1eeda0;
        case 0x1eeda4u: goto label_1eeda4;
        case 0x1eeda8u: goto label_1eeda8;
        case 0x1eedacu: goto label_1eedac;
        case 0x1eedb0u: goto label_1eedb0;
        case 0x1eedb4u: goto label_1eedb4;
        case 0x1eedb8u: goto label_1eedb8;
        case 0x1eedbcu: goto label_1eedbc;
        case 0x1eedc0u: goto label_1eedc0;
        case 0x1eedc4u: goto label_1eedc4;
        case 0x1eedc8u: goto label_1eedc8;
        case 0x1eedccu: goto label_1eedcc;
        case 0x1eedd0u: goto label_1eedd0;
        case 0x1eedd4u: goto label_1eedd4;
        case 0x1eedd8u: goto label_1eedd8;
        case 0x1eeddcu: goto label_1eeddc;
        case 0x1eede0u: goto label_1eede0;
        case 0x1eede4u: goto label_1eede4;
        case 0x1eede8u: goto label_1eede8;
        case 0x1eedecu: goto label_1eedec;
        case 0x1eedf0u: goto label_1eedf0;
        case 0x1eedf4u: goto label_1eedf4;
        case 0x1eedf8u: goto label_1eedf8;
        case 0x1eedfcu: goto label_1eedfc;
        case 0x1eee00u: goto label_1eee00;
        case 0x1eee04u: goto label_1eee04;
        case 0x1eee08u: goto label_1eee08;
        case 0x1eee0cu: goto label_1eee0c;
        case 0x1eee10u: goto label_1eee10;
        case 0x1eee14u: goto label_1eee14;
        case 0x1eee18u: goto label_1eee18;
        case 0x1eee1cu: goto label_1eee1c;
        case 0x1eee20u: goto label_1eee20;
        case 0x1eee24u: goto label_1eee24;
        case 0x1eee28u: goto label_1eee28;
        case 0x1eee2cu: goto label_1eee2c;
        case 0x1eee30u: goto label_1eee30;
        case 0x1eee34u: goto label_1eee34;
        case 0x1eee38u: goto label_1eee38;
        case 0x1eee3cu: goto label_1eee3c;
        case 0x1eee40u: goto label_1eee40;
        case 0x1eee44u: goto label_1eee44;
        case 0x1eee48u: goto label_1eee48;
        case 0x1eee4cu: goto label_1eee4c;
        case 0x1eee50u: goto label_1eee50;
        case 0x1eee54u: goto label_1eee54;
        case 0x1eee58u: goto label_1eee58;
        case 0x1eee5cu: goto label_1eee5c;
        case 0x1eee60u: goto label_1eee60;
        case 0x1eee64u: goto label_1eee64;
        case 0x1eee68u: goto label_1eee68;
        case 0x1eee6cu: goto label_1eee6c;
        case 0x1eee70u: goto label_1eee70;
        case 0x1eee74u: goto label_1eee74;
        case 0x1eee78u: goto label_1eee78;
        case 0x1eee7cu: goto label_1eee7c;
        default: break;
    }

    ctx->pc = 0x1eed90u;

label_1eed90:
    // 0x1eed90: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1eed90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_1eed94:
    // 0x1eed94: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1eed94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1eed98:
    // 0x1eed98: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1eed98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_1eed9c:
    // 0x1eed9c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1eed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_1eeda0:
    // 0x1eeda0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1eeda0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_1eeda4:
    // 0x1eeda4: 0x3e00008  jr          $ra
label_1eeda8:
    if (ctx->pc == 0x1EEDA8u) {
        ctx->pc = 0x1EEDA8u;
            // 0x1eeda8: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x1EEDACu;
        goto label_1eedac;
    }
    ctx->pc = 0x1EEDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDA4u;
            // 0x1eeda8: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEDACu;
label_1eedac:
    // 0x1eedac: 0x0  nop
    ctx->pc = 0x1eedacu;
    // NOP
label_1eedb0:
    // 0x1eedb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1eedb4:
    // 0x1eedb4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1eedb8:
    if (ctx->pc == 0x1EEDB8u) {
        ctx->pc = 0x1EEDB8u;
            // 0x1eedb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1EEDBCu;
        goto label_1eedbc;
    }
    ctx->pc = 0x1EEDB4u;
    {
        const bool branch_taken_0x1eedb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDB4u;
            // 0x1eedb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedb4) {
            ctx->pc = 0x1EEDCCu;
            goto label_1eedcc;
        }
    }
    ctx->pc = 0x1EEDBCu;
label_1eedbc:
    // 0x1eedbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1eedbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1eedc0:
    // 0x1eedc0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1eedc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1eedc4:
    // 0x1eedc4: 0x320f809  jalr        $t9
label_1eedc8:
    if (ctx->pc == 0x1EEDC8u) {
        ctx->pc = 0x1EEDC8u;
            // 0x1eedc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EEDCCu;
        goto label_1eedcc;
    }
    ctx->pc = 0x1EEDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EEDCCu);
        ctx->pc = 0x1EEDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDC4u;
            // 0x1eedc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EEDCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EEDCCu; }
            if (ctx->pc != 0x1EEDCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1EEDCCu;
label_1eedcc:
    // 0x1eedcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eedccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eedd0:
    // 0x1eedd0: 0x3e00008  jr          $ra
label_1eedd4:
    if (ctx->pc == 0x1EEDD4u) {
        ctx->pc = 0x1EEDD4u;
            // 0x1eedd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EEDD8u;
        goto label_1eedd8;
    }
    ctx->pc = 0x1EEDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDD0u;
            // 0x1eedd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEDD8u;
label_1eedd8:
    // 0x1eedd8: 0x0  nop
    ctx->pc = 0x1eedd8u;
    // NOP
label_1eeddc:
    // 0x1eeddc: 0x0  nop
    ctx->pc = 0x1eeddcu;
    // NOP
label_1eede0:
    // 0x1eede0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eede4:
    // 0x1eede4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1eede8:
    // 0x1eede8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eedec:
    // 0x1eedec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eedecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eedf0:
    // 0x1eedf0: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_1eedf4:
    if (ctx->pc == 0x1EEDF4u) {
        ctx->pc = 0x1EEDF4u;
            // 0x1eedf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EEDF8u;
        goto label_1eedf8;
    }
    ctx->pc = 0x1EEDF0u;
    {
        const bool branch_taken_0x1eedf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eedf0) {
            ctx->pc = 0x1EEDF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDF0u;
            // 0x1eedf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EEE70u;
            goto label_1eee70;
        }
    }
    ctx->pc = 0x1EEDF8u;
label_1eedf8:
    // 0x1eedf8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eedfc:
    // 0x1eedfc: 0x2442d920  addiu       $v0, $v0, -0x26E0
    ctx->pc = 0x1eedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957344));
label_1eee00:
    // 0x1eee00: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1eee04:
    if (ctx->pc == 0x1EEE04u) {
        ctx->pc = 0x1EEE04u;
            // 0x1eee04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EEE08u;
        goto label_1eee08;
    }
    ctx->pc = 0x1EEE00u;
    {
        const bool branch_taken_0x1eee00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE00u;
            // 0x1eee04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee00) {
            ctx->pc = 0x1EEE44u;
            goto label_1eee44;
        }
    }
    ctx->pc = 0x1EEE08u;
label_1eee08:
    // 0x1eee08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eee08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eee0c:
    // 0x1eee0c: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1eee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1eee10:
    // 0x1eee10: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1eee14:
    if (ctx->pc == 0x1EEE14u) {
        ctx->pc = 0x1EEE14u;
            // 0x1eee14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EEE18u;
        goto label_1eee18;
    }
    ctx->pc = 0x1EEE10u;
    {
        const bool branch_taken_0x1eee10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE10u;
            // 0x1eee14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee10) {
            ctx->pc = 0x1EEE44u;
            goto label_1eee44;
        }
    }
    ctx->pc = 0x1EEE18u;
label_1eee18:
    // 0x1eee18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eee18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eee1c:
    // 0x1eee1c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1eee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1eee20:
    // 0x1eee20: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1eee24:
    if (ctx->pc == 0x1EEE24u) {
        ctx->pc = 0x1EEE24u;
            // 0x1eee24: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EEE28u;
        goto label_1eee28;
    }
    ctx->pc = 0x1EEE20u;
    {
        const bool branch_taken_0x1eee20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE20u;
            // 0x1eee24: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee20) {
            ctx->pc = 0x1EEE44u;
            goto label_1eee44;
        }
    }
    ctx->pc = 0x1EEE28u;
label_1eee28:
    // 0x1eee28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eee28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eee2c:
    // 0x1eee2c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1eee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1eee30:
    // 0x1eee30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1eee34:
    if (ctx->pc == 0x1EEE34u) {
        ctx->pc = 0x1EEE34u;
            // 0x1eee34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EEE38u;
        goto label_1eee38;
    }
    ctx->pc = 0x1EEE30u;
    {
        const bool branch_taken_0x1eee30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE30u;
            // 0x1eee34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee30) {
            ctx->pc = 0x1EEE44u;
            goto label_1eee44;
        }
    }
    ctx->pc = 0x1EEE38u;
label_1eee38:
    // 0x1eee38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eee3c:
    // 0x1eee3c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1eee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1eee40:
    // 0x1eee40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1eee40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1eee44:
    // 0x1eee44: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1eee44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1eee48:
    // 0x1eee48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1eee48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1eee4c:
    // 0x1eee4c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1eee50:
    if (ctx->pc == 0x1EEE50u) {
        ctx->pc = 0x1EEE54u;
        goto label_1eee54;
    }
    ctx->pc = 0x1EEE4Cu;
    {
        const bool branch_taken_0x1eee4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1eee4c) {
            ctx->pc = 0x1EEE6Cu;
            goto label_1eee6c;
        }
    }
    ctx->pc = 0x1EEE54u;
label_1eee54:
    // 0x1eee54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1eee54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1eee58:
    // 0x1eee58: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1eee58u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1eee5c:
    // 0x1eee5c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1eee5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1eee60:
    // 0x1eee60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eee60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eee64:
    // 0x1eee64: 0xc0a7ab4  jal         func_29EAD0
label_1eee68:
    if (ctx->pc == 0x1EEE68u) {
        ctx->pc = 0x1EEE68u;
            // 0x1eee68: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EEE6Cu;
        goto label_1eee6c;
    }
    ctx->pc = 0x1EEE64u;
    SET_GPR_U32(ctx, 31, 0x1EEE6Cu);
    ctx->pc = 0x1EEE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE64u;
            // 0x1eee68: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEE6Cu; }
        if (ctx->pc != 0x1EEE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEE6Cu; }
        if (ctx->pc != 0x1EEE6Cu) { return; }
    }
    ctx->pc = 0x1EEE6Cu;
label_1eee6c:
    // 0x1eee6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eee6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eee70:
    // 0x1eee70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eee70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eee74:
    // 0x1eee74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eee74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eee78:
    // 0x1eee78: 0x3e00008  jr          $ra
label_1eee7c:
    if (ctx->pc == 0x1EEE7Cu) {
        ctx->pc = 0x1EEE7Cu;
            // 0x1eee7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EEE80u;
        goto label_fallthrough_0x1eee78;
    }
    ctx->pc = 0x1EEE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE78u;
            // 0x1eee7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1eee78:
    ctx->pc = 0x1EEE80u;
}
