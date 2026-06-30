#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E4D8
// Address: 0x17e4d8 - 0x17e5a0
void sub_0017E4D8_0x17e4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E4D8_0x17e4d8");
#endif

    switch (ctx->pc) {
        case 0x17e4fcu: goto label_17e4fc;
        case 0x17e504u: goto label_17e504;
        case 0x17e578u: goto label_17e578;
        default: break;
    }

    ctx->pc = 0x17e4d8u;

    // 0x17e4d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e4dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e4e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17e4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17e4e8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x17e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17e4ec: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x17E4ECu;
    {
        const bool branch_taken_0x17e4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e4ec) {
            ctx->pc = 0x17E4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4ECu;
            // 0x17e4f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E590u;
            goto label_17e590;
        }
    }
    ctx->pc = 0x17E4F4u;
    // 0x17e4f4: 0xc061f80  jal         func_187E00
    ctx->pc = 0x17E4F4u;
    SET_GPR_U32(ctx, 31, 0x17E4FCu);
    ctx->pc = 0x187E00u;
    if (runtime->hasFunction(0x187E00u)) {
        auto targetFn = runtime->lookupFunction(0x187E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4FCu; }
        if (ctx->pc != 0x17E4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E00_0x187e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4FCu; }
        if (ctx->pc != 0x17E4FCu) { return; }
    }
    ctx->pc = 0x17E4FCu;
label_17e4fc:
    // 0x17e4fc: 0xc05e9ec  jal         func_17A7B0
    ctx->pc = 0x17E4FCu;
    SET_GPR_U32(ctx, 31, 0x17E504u);
    ctx->pc = 0x17E500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4FCu;
            // 0x17e500: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A7B0u;
    if (runtime->hasFunction(0x17A7B0u)) {
        auto targetFn = runtime->lookupFunction(0x17A7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E504u; }
        if (ctx->pc != 0x17E504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A7B0_0x17a7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E504u; }
        if (ctx->pc != 0x17E504u) { return; }
    }
    ctx->pc = 0x17E504u;
label_17e504:
    // 0x17e504: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17e504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e508: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x17e508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x17e50c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x17E50Cu;
    {
        const bool branch_taken_0x17e50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e50c) {
            ctx->pc = 0x17E510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17E50Cu;
            // 0x17e510: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E580u;
            goto label_17e580;
        }
    }
    ctx->pc = 0x17E514u;
    // 0x17e514: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17e514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17e518: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x17e518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x17e51c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e520: 0x8c636220  lw          $v1, 0x6220($v1)
    ctx->pc = 0x17e520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25120)));
    // 0x17e524: 0x600008  jr          $v1
    ctx->pc = 0x17E524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E530u: goto label_17e530;
            case 0x17E540u: goto label_17e540;
            case 0x17E568u: goto label_17e568;
            case 0x17E57Cu: goto label_17e57c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E52Cu;
    // 0x17e52c: 0x0  nop
    ctx->pc = 0x17e52cu;
    // NOP
label_17e530:
    // 0x17e530: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17e530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17e534: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x17e534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17e538: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17E538u;
    {
        const bool branch_taken_0x17e538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E538u;
            // 0x17e53c: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e538) {
            ctx->pc = 0x17E570u;
            goto label_17e570;
        }
    }
    ctx->pc = 0x17E540u;
label_17e540:
    // 0x17e540: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x17e540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17e544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e548: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x17e548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17e54c: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x17e54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x17e550: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17e550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17e554: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x17e554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17e558: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x17e558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x17e55c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17E55Cu;
    {
        const bool branch_taken_0x17e55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E55Cu;
            // 0x17e560: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e55c) {
            ctx->pc = 0x17E570u;
            goto label_17e570;
        }
    }
    ctx->pc = 0x17E564u;
    // 0x17e564: 0x0  nop
    ctx->pc = 0x17e564u;
    // NOP
label_17e568:
    // 0x17e568: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x17e568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e56c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x17e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17e570:
    // 0x17e570: 0xc05e95c  jal         func_17A570
    ctx->pc = 0x17E570u;
    SET_GPR_U32(ctx, 31, 0x17E578u);
    ctx->pc = 0x17A570u;
    if (runtime->hasFunction(0x17A570u)) {
        auto targetFn = runtime->lookupFunction(0x17A570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E578u; }
        if (ctx->pc != 0x17E578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A570_0x17a570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E578u; }
        if (ctx->pc != 0x17E578u) { return; }
    }
    ctx->pc = 0x17E578u;
label_17e578:
    // 0x17e578: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x17e578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_17e57c:
    // 0x17e57c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e580:
    // 0x17e580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17e580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e584: 0x8061f9e  j           func_187E78
    ctx->pc = 0x17E584u;
    ctx->pc = 0x17E588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E584u;
            // 0x17e588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E78u;
    if (runtime->hasFunction(0x187E78u)) {
        auto targetFn = runtime->lookupFunction(0x187E78u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187E78_0x187e78(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17E58Cu;
    // 0x17e58c: 0x0  nop
    ctx->pc = 0x17e58cu;
    // NOP
label_17e590:
    // 0x17e590: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17e590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e594: 0x3e00008  jr          $ra
    ctx->pc = 0x17E594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E594u;
            // 0x17e598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E59Cu;
    // 0x17e59c: 0x0  nop
    ctx->pc = 0x17e59cu;
    // NOP
}
