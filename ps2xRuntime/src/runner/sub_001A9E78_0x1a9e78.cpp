#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9E78
// Address: 0x1a9e78 - 0x1a9fc0
void sub_001A9E78_0x1a9e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9E78_0x1a9e78");
#endif

    switch (ctx->pc) {
        case 0x1a9ec8u: goto label_1a9ec8;
        case 0x1a9ef0u: goto label_1a9ef0;
        case 0x1a9f28u: goto label_1a9f28;
        case 0x1a9f38u: goto label_1a9f38;
        case 0x1a9f58u: goto label_1a9f58;
        case 0x1a9f90u: goto label_1a9f90;
        default: break;
    }

    ctx->pc = 0x1a9e78u;

    // 0x1a9e78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a9e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a9e7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a9e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a9e80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a9e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a9e84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a9e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e88: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1a9e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1a9e8c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a9e8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e90: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1a9e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1a9e94: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1a9e94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e98: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a9e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a9e9c: 0x26501fe4  addiu       $s0, $s2, 0x1FE4
    ctx->pc = 0x1a9e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8164));
    // 0x1a9ea0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a9ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a9ea4: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x1a9ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a9ea8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a9ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1a9eac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a9eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9eb0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1a9eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1a9eb4: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x1a9eb4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a9eb8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A9EB8u;
    {
        const bool branch_taken_0x1a9eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9EB8u;
            // 0x1a9ebc: 0x8e130010  lw          $s3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9eb8) {
            ctx->pc = 0x1A9F18u;
            goto label_1a9f18;
        }
    }
    ctx->pc = 0x1A9EC0u;
    // 0x1a9ec0: 0xc064928  jal         func_1924A0
    ctx->pc = 0x1A9EC0u;
    SET_GPR_U32(ctx, 31, 0x1A9EC8u);
    ctx->pc = 0x1924A0u;
    if (runtime->hasFunction(0x1924A0u)) {
        auto targetFn = runtime->lookupFunction(0x1924A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EC8u; }
        if (ctx->pc != 0x1A9EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001924A0_0x1924a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EC8u; }
        if (ctx->pc != 0x1A9EC8u) { return; }
    }
    ctx->pc = 0x1A9EC8u;
label_1a9ec8:
    // 0x1a9ec8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a9ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ecc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a9ed0: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A9ED0u;
    {
        const bool branch_taken_0x1a9ed0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9ed0) {
            ctx->pc = 0x1A9F08u;
            goto label_1a9f08;
        }
    }
    ctx->pc = 0x1A9ED8u;
    // 0x1a9ed8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a9edc: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9EDCu;
    {
        const bool branch_taken_0x1a9edc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a9edc) {
            ctx->pc = 0x1A9EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9EDCu;
            // 0x1a9ee0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9EFCu;
            goto label_1a9efc;
        }
    }
    ctx->pc = 0x1A9EE4u;
    // 0x1a9ee4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a9ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ee8: 0xc06975c  jal         func_1A5D70
    ctx->pc = 0x1A9EE8u;
    SET_GPR_U32(ctx, 31, 0x1A9EF0u);
    ctx->pc = 0x1A9EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9EE8u;
            // 0x1a9eec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D70u;
    if (runtime->hasFunction(0x1A5D70u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EF0u; }
        if (ctx->pc != 0x1A9EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D70_0x1a5d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EF0u; }
        if (ctx->pc != 0x1A9EF0u) { return; }
    }
    ctx->pc = 0x1A9EF0u;
label_1a9ef0:
    // 0x1a9ef0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a9ef4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1a9ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9efc:
    // 0x1a9efc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9EFCu;
    {
        const bool branch_taken_0x1a9efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9EFCu;
            // 0x1a9f00: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9efc) {
            ctx->pc = 0x1A9F1Cu;
            goto label_1a9f1c;
        }
    }
    ctx->pc = 0x1A9F04u;
    // 0x1a9f04: 0x0  nop
    ctx->pc = 0x1a9f04u;
    // NOP
label_1a9f08:
    // 0x1a9f08: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9F08u;
    {
        const bool branch_taken_0x1a9f08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9f08) {
            ctx->pc = 0x1A9F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F08u;
            // 0x1a9f0c: 0xae80003c  sw          $zero, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9F1Cu;
            goto label_1a9f1c;
        }
    }
    ctx->pc = 0x1A9F10u;
    // 0x1a9f10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9F10u;
    {
        const bool branch_taken_0x1a9f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F10u;
            // 0x1a9f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f10) {
            ctx->pc = 0x1A9F20u;
            goto label_1a9f20;
        }
    }
    ctx->pc = 0x1A9F18u;
label_1a9f18:
    // 0x1a9f18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f1c:
    // 0x1a9f1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f20:
    // 0x1a9f20: 0xc06a7f0  jal         func_1A9FC0
    ctx->pc = 0x1A9F20u;
    SET_GPR_U32(ctx, 31, 0x1A9F28u);
    ctx->pc = 0x1A9F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F20u;
            // 0x1a9f24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9FC0u;
    if (runtime->hasFunction(0x1A9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F28u; }
        if (ctx->pc != 0x1A9F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9FC0_0x1a9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F28u; }
        if (ctx->pc != 0x1A9F28u) { return; }
    }
    ctx->pc = 0x1A9F28u;
label_1a9f28:
    // 0x1a9f28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9F28u;
    {
        const bool branch_taken_0x1a9f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F28u;
            // 0x1a9f2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f28) {
            ctx->pc = 0x1A9F40u;
            goto label_1a9f40;
        }
    }
    ctx->pc = 0x1A9F30u;
    // 0x1a9f30: 0xc06a752  jal         func_1A9D48
    ctx->pc = 0x1A9F30u;
    SET_GPR_U32(ctx, 31, 0x1A9F38u);
    ctx->pc = 0x1A9F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F30u;
            // 0x1a9f34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9D48u;
    if (runtime->hasFunction(0x1A9D48u)) {
        auto targetFn = runtime->lookupFunction(0x1A9D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F38u; }
        if (ctx->pc != 0x1A9F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9D48_0x1a9d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F38u; }
        if (ctx->pc != 0x1A9F38u) { return; }
    }
    ctx->pc = 0x1A9F38u;
label_1a9f38:
    // 0x1a9f38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A9F38u;
    {
        const bool branch_taken_0x1a9f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F38u;
            // 0x1a9f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f38) {
            ctx->pc = 0x1A9F94u;
            goto label_1a9f94;
        }
    }
    ctx->pc = 0x1A9F40u;
label_1a9f40:
    // 0x1a9f40: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x1a9f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a9f44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9F44u;
    {
        const bool branch_taken_0x1a9f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F44u;
            // 0x1a9f48: 0x2aa30040  slti        $v1, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f44) {
            ctx->pc = 0x1A9F68u;
            goto label_1a9f68;
        }
    }
    ctx->pc = 0x1A9F4Cu;
    // 0x1a9f4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f50: 0xc06a804  jal         func_1AA010
    ctx->pc = 0x1A9F50u;
    SET_GPR_U32(ctx, 31, 0x1A9F58u);
    ctx->pc = 0x1A9F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F50u;
            // 0x1a9f54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA010u;
    if (runtime->hasFunction(0x1AA010u)) {
        auto targetFn = runtime->lookupFunction(0x1AA010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F58u; }
        if (ctx->pc != 0x1A9F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA010_0x1aa010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F58u; }
        if (ctx->pc != 0x1A9F58u) { return; }
    }
    ctx->pc = 0x1A9F58u;
label_1a9f58:
    // 0x1a9f58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a9f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9f5c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A9F5Cu;
    {
        const bool branch_taken_0x1a9f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F5Cu;
            // 0x1a9f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f5c) {
            ctx->pc = 0x1A9F94u;
            goto label_1a9f94;
        }
    }
    ctx->pc = 0x1A9F64u;
    // 0x1a9f64: 0x2aa30040  slti        $v1, $s5, 0x40
    ctx->pc = 0x1a9f64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)64) ? 1 : 0);
label_1a9f68:
    // 0x1a9f68: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A9F68u;
    {
        const bool branch_taken_0x1a9f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F68u;
            // 0x1a9f6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f68) {
            ctx->pc = 0x1A9F94u;
            goto label_1a9f94;
        }
    }
    ctx->pc = 0x1A9F70u;
    // 0x1a9f70: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a9f74: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9F74u;
    {
        const bool branch_taken_0x1a9f74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F74u;
            // 0x1a9f78: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f74) {
            ctx->pc = 0x1A9F84u;
            goto label_1a9f84;
        }
    }
    ctx->pc = 0x1A9F7Cu;
    // 0x1a9f7c: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9F7Cu;
    {
        const bool branch_taken_0x1a9f7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A9F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F7Cu;
            // 0x1a9f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f7c) {
            ctx->pc = 0x1A9F94u;
            goto label_1a9f94;
        }
    }
    ctx->pc = 0x1A9F84u;
label_1a9f84:
    // 0x1a9f84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f88: 0xc06a804  jal         func_1AA010
    ctx->pc = 0x1A9F88u;
    SET_GPR_U32(ctx, 31, 0x1A9F90u);
    ctx->pc = 0x1A9F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F88u;
            // 0x1a9f8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA010u;
    if (runtime->hasFunction(0x1AA010u)) {
        auto targetFn = runtime->lookupFunction(0x1AA010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F90u; }
        if (ctx->pc != 0x1A9F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA010_0x1aa010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F90u; }
        if (ctx->pc != 0x1A9F90u) { return; }
    }
    ctx->pc = 0x1A9F90u;
label_1a9f90:
    // 0x1a9f90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a9f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f94:
    // 0x1a9f94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a9f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9f98: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a9f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9f9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a9f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9fa0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a9fa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a9fa4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a9fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9fa8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1a9fa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9fac: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1a9facu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9fb0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1a9fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FB4u;
            // 0x1a9fb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9FBCu;
    // 0x1a9fbc: 0x0  nop
    ctx->pc = 0x1a9fbcu;
    // NOP
}
