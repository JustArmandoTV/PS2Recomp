#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDC68
// Address: 0x1bdc68 - 0x1bdea8
void sub_001BDC68_0x1bdc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDC68_0x1bdc68");
#endif

    switch (ctx->pc) {
        case 0x1bdca0u: goto label_1bdca0;
        case 0x1bdd7cu: goto label_1bdd7c;
        case 0x1bddb4u: goto label_1bddb4;
        case 0x1bdde8u: goto label_1bdde8;
        case 0x1bde1cu: goto label_1bde1c;
        case 0x1bde2cu: goto label_1bde2c;
        default: break;
    }

    ctx->pc = 0x1bdc68u;

    // 0x1bdc68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bdc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bdc6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bdc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bdc70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdc70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bdc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bdc78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bdc78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bdc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bdc80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bdc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bdc84: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1bdc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bdc88: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDC88u;
    {
        const bool branch_taken_0x1bdc88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC88u;
            // 0x1bdc8c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc88) {
            ctx->pc = 0x1BDCA8u;
            goto label_1bdca8;
        }
    }
    ctx->pc = 0x1BDC90u;
    // 0x1bdc90: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bdc90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bdc94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bdc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc98: 0xc06f8e2  jal         func_1BE388
    ctx->pc = 0x1BDC98u;
    SET_GPR_U32(ctx, 31, 0x1BDCA0u);
    ctx->pc = 0x1BDC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC98u;
            // 0x1bdc9c: 0x24a5b478  addiu       $a1, $a1, -0x4B88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE388u;
    if (runtime->hasFunction(0x1BE388u)) {
        auto targetFn = runtime->lookupFunction(0x1BE388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCA0u; }
        if (ctx->pc != 0x1BDCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE388_0x1be388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCA0u; }
        if (ctx->pc != 0x1BDCA0u) { return; }
    }
    ctx->pc = 0x1BDCA0u;
label_1bdca0:
    // 0x1bdca0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1bdca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1bdca4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bdca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bdca8:
    // 0x1bdca8: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x1bdca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1bdcac: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1BDCACu;
    {
        const bool branch_taken_0x1bdcac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCACu;
            // 0x1bdcb0: 0x28620062  slti        $v0, $v1, 0x62 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcac) {
            ctx->pc = 0x1BDE10u;
            goto label_1bde10;
        }
    }
    ctx->pc = 0x1BDCB4u;
    // 0x1bdcb4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BDCB4u;
    {
        const bool branch_taken_0x1bdcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCB4u;
            // 0x1bdcb8: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcb4) {
            ctx->pc = 0x1BDD08u;
            goto label_1bdd08;
        }
    }
    ctx->pc = 0x1BDCBCu;
    // 0x1bdcbc: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1bdcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1bdcc0: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1BDCC0u;
    {
        const bool branch_taken_0x1bdcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCC0u;
            // 0x1bdcc4: 0x28620032  slti        $v0, $v1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcc0) {
            ctx->pc = 0x1BDDD8u;
            goto label_1bddd8;
        }
    }
    ctx->pc = 0x1BDCC8u;
    // 0x1bdcc8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BDCC8u;
    {
        const bool branch_taken_0x1bdcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCC8u;
            // 0x1bdccc: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcc8) {
            ctx->pc = 0x1BDCF0u;
            goto label_1bdcf0;
        }
    }
    ctx->pc = 0x1BDCD0u;
    // 0x1bdcd0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1bdcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1bdcd4: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BDCD4u;
    {
        const bool branch_taken_0x1bdcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCD4u;
            // 0x1bdcd8: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcd4) {
            ctx->pc = 0x1BDD38u;
            goto label_1bdd38;
        }
    }
    ctx->pc = 0x1BDCDCu;
    // 0x1bdcdc: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1BDCDCu;
    {
        const bool branch_taken_0x1bdcdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCDCu;
            // 0x1bdce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcdc) {
            ctx->pc = 0x1BDDA8u;
            goto label_1bdda8;
        }
    }
    ctx->pc = 0x1BDCE4u;
    // 0x1bdce4: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1BDCE4u;
    {
        const bool branch_taken_0x1bdce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCE4u;
            // 0x1bdce8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdce4) {
            ctx->pc = 0x1BDE84u;
            goto label_1bde84;
        }
    }
    ctx->pc = 0x1BDCECu;
    // 0x1bdcec: 0x0  nop
    ctx->pc = 0x1bdcecu;
    // NOP
label_1bdcf0:
    // 0x1bdcf0: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1BDCF0u;
    {
        const bool branch_taken_0x1bdcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCF0u;
            // 0x1bdcf4: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcf0) {
            ctx->pc = 0x1BDE10u;
            goto label_1bde10;
        }
    }
    ctx->pc = 0x1BDCF8u;
    // 0x1bdcf8: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1BDCF8u;
    {
        const bool branch_taken_0x1bdcf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCF8u;
            // 0x1bdcfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcf8) {
            ctx->pc = 0x1BDE10u;
            goto label_1bde10;
        }
    }
    ctx->pc = 0x1BDD00u;
    // 0x1bdd00: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1BDD00u;
    {
        const bool branch_taken_0x1bdd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD00u;
            // 0x1bdd04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd00) {
            ctx->pc = 0x1BDE84u;
            goto label_1bde84;
        }
    }
    ctx->pc = 0x1BDD08u;
label_1bdd08:
    // 0x1bdd08: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1BDD08u;
    {
        const bool branch_taken_0x1bdd08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD08u;
            // 0x1bdd0c: 0x28620102  slti        $v0, $v1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)258) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd08) {
            ctx->pc = 0x1BDE58u;
            goto label_1bde58;
        }
    }
    ctx->pc = 0x1BDD10u;
    // 0x1bdd10: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1BDD10u;
    {
        const bool branch_taken_0x1bdd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD10u;
            // 0x1bdd14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd10) {
            ctx->pc = 0x1BDE80u;
            goto label_1bde80;
        }
    }
    ctx->pc = 0x1BDD18u;
    // 0x1bdd18: 0x24020111  addiu       $v0, $zero, 0x111
    ctx->pc = 0x1bdd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x1bdd1c: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1BDD1Cu;
    {
        const bool branch_taken_0x1bdd1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD1Cu;
            // 0x1bdd20: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd1c) {
            ctx->pc = 0x1BDE80u;
            goto label_1bde80;
        }
    }
    ctx->pc = 0x1BDD24u;
    // 0x1bdd24: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BDD24u;
    {
        const bool branch_taken_0x1bdd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD24u;
            // 0x1bdd28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd24) {
            ctx->pc = 0x1BDD74u;
            goto label_1bdd74;
        }
    }
    ctx->pc = 0x1BDD2Cu;
    // 0x1bdd2c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1BDD2Cu;
    {
        const bool branch_taken_0x1bdd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD2Cu;
            // 0x1bdd30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd2c) {
            ctx->pc = 0x1BDE88u;
            goto label_1bde88;
        }
    }
    ctx->pc = 0x1BDD34u;
    // 0x1bdd34: 0x0  nop
    ctx->pc = 0x1bdd34u;
    // NOP
label_1bdd38:
    // 0x1bdd38: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1bdd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1bdd3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdd40: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDD40u;
    {
        const bool branch_taken_0x1bdd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD40u;
            // 0x1bdd44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd40) {
            ctx->pc = 0x1BDD70u;
            goto label_1bdd70;
        }
    }
    ctx->pc = 0x1BDD48u;
    // 0x1bdd48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bdd48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdd4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bdd50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bdd54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bdd54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bdd58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdd5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bdd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bdd60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bdd60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd64: 0x806f7aa  j           func_1BDEA8
    ctx->pc = 0x1BDD64u;
    ctx->pc = 0x1BDD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD64u;
            // 0x1bdd68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDEA8u;
    if (runtime->hasFunction(0x1BDEA8u)) {
        auto targetFn = runtime->lookupFunction(0x1BDEA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BDEA8_0x1bdea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BDD6Cu;
    // 0x1bdd6c: 0x0  nop
    ctx->pc = 0x1bdd6cu;
    // NOP
label_1bdd70:
    // 0x1bdd70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bdd74:
    // 0x1bdd74: 0xc06f5ea  jal         func_1BD7A8
    ctx->pc = 0x1BDD74u;
    SET_GPR_U32(ctx, 31, 0x1BDD7Cu);
    ctx->pc = 0x1BDD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD74u;
            // 0x1bdd78: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD7A8u;
    if (runtime->hasFunction(0x1BD7A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BD7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD7Cu; }
        if (ctx->pc != 0x1BDD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD7A8_0x1bd7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD7Cu; }
        if (ctx->pc != 0x1BDD7Cu) { return; }
    }
    ctx->pc = 0x1BDD7Cu;
label_1bdd7c:
    // 0x1bdd7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bdd84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bdd88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bdd88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bdd8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdd90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bdd90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdd94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bdd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdd98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bdd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bdd9c: 0x806f7aa  j           func_1BDEA8
    ctx->pc = 0x1BDD9Cu;
    ctx->pc = 0x1BDDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD9Cu;
            // 0x1bdda0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDEA8u;
    if (runtime->hasFunction(0x1BDEA8u)) {
        auto targetFn = runtime->lookupFunction(0x1BDEA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BDEA8_0x1bdea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BDDA4u;
    // 0x1bdda4: 0x0  nop
    ctx->pc = 0x1bdda4u;
    // NOP
label_1bdda8:
    // 0x1bdda8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddac: 0xc06f5ea  jal         func_1BD7A8
    ctx->pc = 0x1BDDACu;
    SET_GPR_U32(ctx, 31, 0x1BDDB4u);
    ctx->pc = 0x1BDDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDDACu;
            // 0x1bddb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD7A8u;
    if (runtime->hasFunction(0x1BD7A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BD7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDB4u; }
        if (ctx->pc != 0x1BDDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD7A8_0x1bd7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDB4u; }
        if (ctx->pc != 0x1BDDB4u) { return; }
    }
    ctx->pc = 0x1BDDB4u;
label_1bddb4:
    // 0x1bddb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bddb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bddb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bddbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bddc0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bddc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bddc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bddc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bddc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bddcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bddccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bddd0: 0x806f828  j           func_1BE0A0
    ctx->pc = 0x1BDDD0u;
    ctx->pc = 0x1BDDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDDD0u;
            // 0x1bddd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BDDD8u;
label_1bddd8:
    // 0x1bddd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bddd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdddc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdde0: 0xc06f5ea  jal         func_1BD7A8
    ctx->pc = 0x1BDDE0u;
    SET_GPR_U32(ctx, 31, 0x1BDDE8u);
    ctx->pc = 0x1BDDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDDE0u;
            // 0x1bdde4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD7A8u;
    if (runtime->hasFunction(0x1BD7A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BD7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDE8u; }
        if (ctx->pc != 0x1BDDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD7A8_0x1bd7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDE8u; }
        if (ctx->pc != 0x1BDDE8u) { return; }
    }
    ctx->pc = 0x1BDDE8u;
label_1bdde8:
    // 0x1bdde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bddecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bddf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bddf4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bddf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bddf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bddfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bddfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bde00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bde00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bde04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bde04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bde08: 0x806f7aa  j           func_1BDEA8
    ctx->pc = 0x1BDE08u;
    ctx->pc = 0x1BDE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE08u;
            // 0x1bde0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDEA8u;
    if (runtime->hasFunction(0x1BDEA8u)) {
        auto targetFn = runtime->lookupFunction(0x1BDEA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BDEA8_0x1bdea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BDE10u;
label_1bde10:
    // 0x1bde10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bde10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde14: 0xc06f5dc  jal         func_1BD770
    ctx->pc = 0x1BDE14u;
    SET_GPR_U32(ctx, 31, 0x1BDE1Cu);
    ctx->pc = 0x1BDE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE14u;
            // 0x1bde18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD770u;
    if (runtime->hasFunction(0x1BD770u)) {
        auto targetFn = runtime->lookupFunction(0x1BD770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE1Cu; }
        if (ctx->pc != 0x1BDE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD770_0x1bd770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE1Cu; }
        if (ctx->pc != 0x1BDE1Cu) { return; }
    }
    ctx->pc = 0x1BDE1Cu;
label_1bde1c:
    // 0x1bde1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bde1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bde20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde24: 0xc06f5ea  jal         func_1BD7A8
    ctx->pc = 0x1BDE24u;
    SET_GPR_U32(ctx, 31, 0x1BDE2Cu);
    ctx->pc = 0x1BDE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE24u;
            // 0x1bde28: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD7A8u;
    if (runtime->hasFunction(0x1BD7A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BD7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE2Cu; }
        if (ctx->pc != 0x1BDE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD7A8_0x1bd7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE2Cu; }
        if (ctx->pc != 0x1BDE2Cu) { return; }
    }
    ctx->pc = 0x1BDE2Cu;
label_1bde2c:
    // 0x1bde2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bde2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bde30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bde34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bde38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bde38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bde3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bde40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bde40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bde44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bde44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bde48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bde48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bde4c: 0x806f7aa  j           func_1BDEA8
    ctx->pc = 0x1BDE4Cu;
    ctx->pc = 0x1BDE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE4Cu;
            // 0x1bde50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDEA8u;
    if (runtime->hasFunction(0x1BDEA8u)) {
        auto targetFn = runtime->lookupFunction(0x1BDEA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BDEA8_0x1bdea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BDE54u;
    // 0x1bde54: 0x0  nop
    ctx->pc = 0x1bde54u;
    // NOP
label_1bde58:
    // 0x1bde58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bde58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bde5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bde60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bde60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bde64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bde68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bde68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bde6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bde70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bde70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bde74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bde74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde78: 0x806f7aa  j           func_1BDEA8
    ctx->pc = 0x1BDE78u;
    ctx->pc = 0x1BDE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE78u;
            // 0x1bde7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDEA8u;
    if (runtime->hasFunction(0x1BDEA8u)) {
        auto targetFn = runtime->lookupFunction(0x1BDEA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BDEA8_0x1bdea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BDE80u;
label_1bde80:
    // 0x1bde80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bde80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bde84:
    // 0x1bde84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bde84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bde88:
    // 0x1bde88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bde88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bde8c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1bde8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1bde90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bde90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bde94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bde94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bde98: 0x24c6b480  addiu       $a2, $a2, -0x4B80
    ctx->pc = 0x1bde98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947968));
    // 0x1bde9c: 0x806f9cc  j           func_1BE730
    ctx->pc = 0x1BDE9Cu;
    ctx->pc = 0x1BDEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE9Cu;
            // 0x1bdea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE730_0x1be730(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BDEA4u;
    // 0x1bdea4: 0x0  nop
    ctx->pc = 0x1bdea4u;
    // NOP
}
