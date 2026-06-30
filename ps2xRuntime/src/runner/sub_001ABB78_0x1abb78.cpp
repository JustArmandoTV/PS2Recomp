#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ABB78
// Address: 0x1abb78 - 0x1abd38
void sub_001ABB78_0x1abb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABB78_0x1abb78");
#endif

    switch (ctx->pc) {
        case 0x1abc1cu: goto label_1abc1c;
        case 0x1abc30u: goto label_1abc30;
        case 0x1abc80u: goto label_1abc80;
        case 0x1abcfcu: goto label_1abcfc;
        default: break;
    }

    ctx->pc = 0x1abb78u;

    // 0x1abb78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1abb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1abb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1abb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abb80: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1abb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1abb84: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1abb84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb88: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1abb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1abb8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1abb8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb90: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1abb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1abb94: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1abb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1abb98: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1ABB98u;
    {
        const bool branch_taken_0x1abb98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB98u;
            // 0x1abb9c: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb98) {
            ctx->pc = 0x1ABD1Cu;
            goto label_1abd1c;
        }
    }
    ctx->pc = 0x1ABBA0u;
    // 0x1abba0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1abba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1abba4: 0x5224005e  beql        $s1, $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1ABBA4u;
    {
        const bool branch_taken_0x1abba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x1abba4) {
            ctx->pc = 0x1ABBA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBA4u;
            // 0x1abba8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABD20u;
            goto label_1abd20;
        }
    }
    ctx->pc = 0x1ABBACu;
    // 0x1abbac: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x1abbacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1abbb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABBB0u;
    {
        const bool branch_taken_0x1abbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBB0u;
            // 0x1abbb4: 0x224102b  sltu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abbb0) {
            ctx->pc = 0x1ABBCCu;
            goto label_1abbcc;
        }
    }
    ctx->pc = 0x1ABBB8u;
    // 0x1abbb8: 0x2241823  subu        $v1, $s1, $a0
    ctx->pc = 0x1abbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1abbbc: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x1abbbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1abbc0: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1ABBC0u;
    {
        const bool branch_taken_0x1abbc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBC0u;
            // 0x1abbc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abbc0) {
            ctx->pc = 0x1ABD1Cu;
            goto label_1abd1c;
        }
    }
    ctx->pc = 0x1ABBC8u;
    // 0x1abbc8: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x1abbc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1abbcc:
    // 0x1abbcc: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1ABBCCu;
    {
        const bool branch_taken_0x1abbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abbcc) {
            ctx->pc = 0x1ABBD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBCCu;
            // 0x1abbd0: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABC38u;
            goto label_1abc38;
        }
    }
    ctx->pc = 0x1ABBD4u;
    // 0x1abbd4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1abbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1abbd8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1abbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1abbdc: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x1abbdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1abbe0: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1ABBE0u;
    {
        const bool branch_taken_0x1abbe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abbe0) {
            ctx->pc = 0x1ABBE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBE0u;
            // 0x1abbe4: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABC38u;
            goto label_1abc38;
        }
    }
    ctx->pc = 0x1ABBE8u;
    // 0x1abbe8: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x1abbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1abbec: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1abbecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1abbf0: 0x1a00001d  blez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1ABBF0u;
    {
        const bool branch_taken_0x1abbf0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1abbf0) {
            ctx->pc = 0x1ABC68u;
            goto label_1abc68;
        }
    }
    ctx->pc = 0x1ABBF8u;
    // 0x1abbf8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1abbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1abbfc: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1abbfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1abc00: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1ABC00u;
    {
        const bool branch_taken_0x1abc00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC00u;
            // 0x1abc04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc00) {
            ctx->pc = 0x1ABD1Cu;
            goto label_1abd1c;
        }
    }
    ctx->pc = 0x1ABC08u;
    // 0x1abc08: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1abc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1abc0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1abc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc10: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x1abc10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1abc14: 0xc04a508  jal         func_129420
    ctx->pc = 0x1ABC14u;
    SET_GPR_U32(ctx, 31, 0x1ABC1Cu);
    ctx->pc = 0x1ABC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC14u;
            // 0x1abc18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC1Cu; }
        if (ctx->pc != 0x1ABC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC1Cu; }
        if (ctx->pc != 0x1ABC1Cu) { return; }
    }
    ctx->pc = 0x1ABC1Cu;
label_1abc1c:
    // 0x1abc1c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1abc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1abc20: 0x3b02023  subu        $a0, $sp, $s0
    ctx->pc = 0x1abc20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1abc24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1abc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc28: 0xc04a508  jal         func_129420
    ctx->pc = 0x1ABC28u;
    SET_GPR_U32(ctx, 31, 0x1ABC30u);
    ctx->pc = 0x1ABC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC28u;
            // 0x1abc2c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC30u; }
        if (ctx->pc != 0x1ABC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC30u; }
        if (ctx->pc != 0x1ABC30u) { return; }
    }
    ctx->pc = 0x1ABC30u;
label_1abc30:
    // 0x1abc30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1ABC30u;
    {
        const bool branch_taken_0x1abc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abc30) {
            ctx->pc = 0x1ABC78u;
            goto label_1abc78;
        }
    }
    ctx->pc = 0x1ABC38u;
label_1abc38:
    // 0x1abc38: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x1abc38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1abc3c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1ABC3Cu;
    {
        const bool branch_taken_0x1abc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC3Cu;
            // 0x1abc40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc3c) {
            ctx->pc = 0x1ABD1Cu;
            goto label_1abd1c;
        }
    }
    ctx->pc = 0x1ABC44u;
    // 0x1abc44: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1abc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1abc48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1abc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1abc4c: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x1abc4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1abc50: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1ABC50u;
    {
        const bool branch_taken_0x1abc50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abc50) {
            ctx->pc = 0x1ABC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC50u;
            // 0x1abc54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABD1Cu;
            goto label_1abd1c;
        }
    }
    ctx->pc = 0x1ABC58u;
    // 0x1abc58: 0x2221823  subu        $v1, $s1, $v0
    ctx->pc = 0x1abc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1abc5c: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x1abc5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1abc60: 0x1e00002e  bgtz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1ABC60u;
    {
        const bool branch_taken_0x1abc60 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1ABC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC60u;
            // 0x1abc64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc60) {
            ctx->pc = 0x1ABD1Cu;
            goto label_1abd1c;
        }
    }
    ctx->pc = 0x1ABC68u;
label_1abc68:
    // 0x1abc68: 0x8a220003  lwl         $v0, 0x3($s1)
    ctx->pc = 0x1abc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1abc6c: 0x9a220000  lwr         $v0, 0x0($s1)
    ctx->pc = 0x1abc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1abc70: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x1abc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1abc74: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x1abc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1abc78:
    // 0x1abc78: 0xc064b62  jal         func_192D88
    ctx->pc = 0x1ABC78u;
    SET_GPR_U32(ctx, 31, 0x1ABC80u);
    ctx->pc = 0x1ABC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC78u;
            // 0x1abc7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC80u; }
        if (ctx->pc != 0x1ABC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC80u; }
        if (ctx->pc != 0x1ABC80u) { return; }
    }
    ctx->pc = 0x1ABC80u;
label_1abc80:
    // 0x1abc80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1abc80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc84: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1abc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1abc88: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ABC88u;
    {
        const bool branch_taken_0x1abc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC88u;
            // 0x1abc8c: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc88) {
            ctx->pc = 0x1ABCC8u;
            goto label_1abcc8;
        }
    }
    ctx->pc = 0x1ABC90u;
    // 0x1abc90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ABC90u;
    {
        const bool branch_taken_0x1abc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC90u;
            // 0x1abc94: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc90) {
            ctx->pc = 0x1ABCB0u;
            goto label_1abcb0;
        }
    }
    ctx->pc = 0x1ABC98u;
    // 0x1abc98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1abc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1abc9c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ABC9Cu;
    {
        const bool branch_taken_0x1abc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC9Cu;
            // 0x1abca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc9c) {
            ctx->pc = 0x1ABCE0u;
            goto label_1abce0;
        }
    }
    ctx->pc = 0x1ABCA4u;
    // 0x1abca4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1ABCA4u;
    {
        const bool branch_taken_0x1abca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCA4u;
            // 0x1abca8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abca4) {
            ctx->pc = 0x1ABD20u;
            goto label_1abd20;
        }
    }
    ctx->pc = 0x1ABCACu;
    // 0x1abcac: 0x0  nop
    ctx->pc = 0x1abcacu;
    // NOP
label_1abcb0:
    // 0x1abcb0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1ABCB0u;
    {
        const bool branch_taken_0x1abcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCB0u;
            // 0x1abcb4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcb0) {
            ctx->pc = 0x1ABD18u;
            goto label_1abd18;
        }
    }
    ctx->pc = 0x1ABCB8u;
    // 0x1abcb8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1ABCB8u;
    {
        const bool branch_taken_0x1abcb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCB8u;
            // 0x1abcbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcb8) {
            ctx->pc = 0x1ABD18u;
            goto label_1abd18;
        }
    }
    ctx->pc = 0x1ABCC0u;
    // 0x1abcc0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1ABCC0u;
    {
        const bool branch_taken_0x1abcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCC0u;
            // 0x1abcc4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcc0) {
            ctx->pc = 0x1ABD20u;
            goto label_1abd20;
        }
    }
    ctx->pc = 0x1ABCC8u;
label_1abcc8:
    // 0x1abcc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1abcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abccc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1abcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1abcd0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ABCD0u;
    {
        const bool branch_taken_0x1abcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCD0u;
            // 0x1abcd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcd0) {
            ctx->pc = 0x1ABD18u;
            goto label_1abd18;
        }
    }
    ctx->pc = 0x1ABCD8u;
    // 0x1abcd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABCD8u;
    {
        const bool branch_taken_0x1abcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCD8u;
            // 0x1abcdc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcd8) {
            ctx->pc = 0x1ABCF4u;
            goto label_1abcf4;
        }
    }
    ctx->pc = 0x1ABCE0u;
label_1abce0:
    // 0x1abce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1abce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abce4: 0x30420048  andi        $v0, $v0, 0x48
    ctx->pc = 0x1abce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)72);
    // 0x1abce8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ABCE8u;
    {
        const bool branch_taken_0x1abce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCE8u;
            // 0x1abcec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abce8) {
            ctx->pc = 0x1ABD18u;
            goto label_1abd18;
        }
    }
    ctx->pc = 0x1ABCF0u;
    // 0x1abcf0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1abcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1abcf4:
    // 0x1abcf4: 0xc06af8a  jal         func_1ABE28
    ctx->pc = 0x1ABCF4u;
    SET_GPR_U32(ctx, 31, 0x1ABCFCu);
    ctx->pc = 0x1ABCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCF4u;
            // 0x1abcf8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABE28u;
    if (runtime->hasFunction(0x1ABE28u)) {
        auto targetFn = runtime->lookupFunction(0x1ABE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCFCu; }
        if (ctx->pc != 0x1ABCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABE28_0x1abe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCFCu; }
        if (ctx->pc != 0x1ABCFCu) { return; }
    }
    ctx->pc = 0x1ABCFCu;
label_1abcfc:
    // 0x1abcfc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ABCFCu;
    {
        const bool branch_taken_0x1abcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abcfc) {
            ctx->pc = 0x1ABD00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCFCu;
            // 0x1abd00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABD1Cu;
            goto label_1abd1c;
        }
    }
    ctx->pc = 0x1ABD04u;
    // 0x1abd04: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ABD04u;
    {
        const bool branch_taken_0x1abd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1abd04) {
            ctx->pc = 0x1ABD08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD04u;
            // 0x1abd08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABD1Cu;
            goto label_1abd1c;
        }
    }
    ctx->pc = 0x1ABD0Cu;
    // 0x1abd0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABD0Cu;
    {
        const bool branch_taken_0x1abd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD0Cu;
            // 0x1abd10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd0c) {
            ctx->pc = 0x1ABD1Cu;
            goto label_1abd1c;
        }
    }
    ctx->pc = 0x1ABD14u;
    // 0x1abd14: 0x0  nop
    ctx->pc = 0x1abd14u;
    // NOP
label_1abd18:
    // 0x1abd18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abd18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abd1c:
    // 0x1abd1c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1abd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1abd20:
    // 0x1abd20: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1abd20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abd24: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1abd24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abd28: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1abd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1abd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD2Cu;
            // 0x1abd30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABD34u;
    // 0x1abd34: 0x0  nop
    ctx->pc = 0x1abd34u;
    // NOP
}
