#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F248
// Address: 0x17f248 - 0x17f360
void sub_0017F248_0x17f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F248_0x17f248");
#endif

    switch (ctx->pc) {
        case 0x17f26cu: goto label_17f26c;
        case 0x17f280u: goto label_17f280;
        case 0x17f288u: goto label_17f288;
        case 0x17f2a8u: goto label_17f2a8;
        case 0x17f2b0u: goto label_17f2b0;
        case 0x17f2f4u: goto label_17f2f4;
        case 0x17f300u: goto label_17f300;
        case 0x17f308u: goto label_17f308;
        case 0x17f320u: goto label_17f320;
        default: break;
    }

    ctx->pc = 0x17f248u;

    // 0x17f248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f24c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f250: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17f250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f254: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f258: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17f258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f25c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f260: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17f260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17f264: 0xc05fc60  jal         func_17F180
    ctx->pc = 0x17F264u;
    SET_GPR_U32(ctx, 31, 0x17F26Cu);
    ctx->pc = 0x17F268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F264u;
            // 0x17f268: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F180u;
    if (runtime->hasFunction(0x17F180u)) {
        auto targetFn = runtime->lookupFunction(0x17F180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F26Cu; }
        if (ctx->pc != 0x17F26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F180_0x17f180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F26Cu; }
        if (ctx->pc != 0x17F26Cu) { return; }
    }
    ctx->pc = 0x17F26Cu;
label_17f26c:
    // 0x17f26c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F26Cu;
    {
        const bool branch_taken_0x17f26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F26Cu;
            // 0x17f270: 0x3c05005e  lui         $a1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f26c) {
            ctx->pc = 0x17F280u;
            goto label_17f280;
        }
    }
    ctx->pc = 0x17F274u;
    // 0x17f274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f278: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x17F278u;
    SET_GPR_U32(ctx, 31, 0x17F280u);
    ctx->pc = 0x17F27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F278u;
            // 0x17f27c: 0x24a56c20  addiu       $a1, $a1, 0x6C20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F280u; }
        if (ctx->pc != 0x17F280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F280u; }
        if (ctx->pc != 0x17F280u) { return; }
    }
    ctx->pc = 0x17F280u;
label_17f280:
    // 0x17f280: 0xc05fc7c  jal         func_17F1F0
    ctx->pc = 0x17F280u;
    SET_GPR_U32(ctx, 31, 0x17F288u);
    ctx->pc = 0x17F284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F280u;
            // 0x17f284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F1F0u;
    if (runtime->hasFunction(0x17F1F0u)) {
        auto targetFn = runtime->lookupFunction(0x17F1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F288u; }
        if (ctx->pc != 0x17F288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F1F0_0x17f1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F288u; }
        if (ctx->pc != 0x17F288u) { return; }
    }
    ctx->pc = 0x17F288u;
label_17f288:
    // 0x17f288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17f288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f28c: 0x5443001a  bnel        $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17F28Cu;
    {
        const bool branch_taken_0x17f28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17f28c) {
            ctx->pc = 0x17F290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F28Cu;
            // 0x17f290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F2F8u;
            goto label_17f2f8;
        }
    }
    ctx->pc = 0x17F294u;
    // 0x17f294: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x17f294u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x17f298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f29c: 0x26106b18  addiu       $s0, $s0, 0x6B18
    ctx->pc = 0x17f29cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27416));
    // 0x17f2a0: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x17F2A0u;
    SET_GPR_U32(ctx, 31, 0x17F2A8u);
    ctx->pc = 0x17F2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2A0u;
            // 0x17f2a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2A8u; }
        if (ctx->pc != 0x17F2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2A8u; }
        if (ctx->pc != 0x17F2A8u) { return; }
    }
    ctx->pc = 0x17F2A8u;
label_17f2a8:
    // 0x17f2a8: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x17F2A8u;
    SET_GPR_U32(ctx, 31, 0x17F2B0u);
    ctx->pc = 0x17F2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2A8u;
            // 0x17f2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2B0u; }
        if (ctx->pc != 0x17F2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2B0u; }
        if (ctx->pc != 0x17F2B0u) { return; }
    }
    ctx->pc = 0x17F2B0u;
label_17f2b0:
    // 0x17f2b0: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x17f2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x17f2b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17f2b8: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x17f2b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x17f2bc: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x17F2BCu;
    {
        const bool branch_taken_0x17f2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x17F2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2BCu;
            // 0x17f2c0: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2bc) {
            ctx->pc = 0x17F2F4u;
            goto label_17f2f4;
        }
    }
    ctx->pc = 0x17F2C4u;
    // 0x17f2c4: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17F2C4u;
    {
        const bool branch_taken_0x17f2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x17F2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2C4u;
            // 0x17f2c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2c4) {
            ctx->pc = 0x17F2F8u;
            goto label_17f2f8;
        }
    }
    ctx->pc = 0x17F2CCu;
    // 0x17f2cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17F2CCu;
    {
        const bool branch_taken_0x17f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f2cc) {
            ctx->pc = 0x17F2F8u;
            goto label_17f2f8;
        }
    }
    ctx->pc = 0x17F2D4u;
    // 0x17f2d4: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x17f2d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17f2d8: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F2D8u;
    {
        const bool branch_taken_0x17f2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x17f2d8) {
            ctx->pc = 0x17F2F8u;
            goto label_17f2f8;
        }
    }
    ctx->pc = 0x17F2E0u;
    // 0x17f2e0: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F2E0u;
    {
        const bool branch_taken_0x17f2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x17F2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2E0u;
            // 0x17f2e4: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2e0) {
            ctx->pc = 0x17F2F4u;
            goto label_17f2f4;
        }
    }
    ctx->pc = 0x17F2E8u;
    // 0x17f2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2ec: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x17F2ECu;
    SET_GPR_U32(ctx, 31, 0x17F2F4u);
    ctx->pc = 0x17F2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2ECu;
            // 0x17f2f0: 0x24a56540  addiu       $a1, $a1, 0x6540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2F4u; }
        if (ctx->pc != 0x17F2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2F4u; }
        if (ctx->pc != 0x17F2F4u) { return; }
    }
    ctx->pc = 0x17F2F4u;
label_17f2f4:
    // 0x17f2f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17f2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17f2f8:
    // 0x17f2f8: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x17F2F8u;
    SET_GPR_U32(ctx, 31, 0x17F300u);
    ctx->pc = 0x17F2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2F8u;
            // 0x17f2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F300u; }
        if (ctx->pc != 0x17F300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F300u; }
        if (ctx->pc != 0x17F300u) { return; }
    }
    ctx->pc = 0x17F300u;
label_17f300:
    // 0x17f300: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x17F300u;
    SET_GPR_U32(ctx, 31, 0x17F308u);
    ctx->pc = 0x17F304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F300u;
            // 0x17f304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F308u; }
        if (ctx->pc != 0x17F308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F308u; }
        if (ctx->pc != 0x17F308u) { return; }
    }
    ctx->pc = 0x17F308u;
label_17f308:
    // 0x17f308: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17f308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f30c: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x17F30Cu;
    {
        const bool branch_taken_0x17f30c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x17F310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F30Cu;
            // 0x17f310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f30c) {
            ctx->pc = 0x17F344u;
            goto label_17f344;
        }
    }
    ctx->pc = 0x17F314u;
    // 0x17f314: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x17f314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x17f318: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x17f318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x17f31c: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x17f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_17f320:
    // 0x17f320: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17f320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17f324: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17f324u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f328: 0x14480002  bne         $v0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F328u;
    {
        const bool branch_taken_0x17f328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x17F32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F328u;
            // 0x17f32c: 0xa6182a  slt         $v1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f328) {
            ctx->pc = 0x17F334u;
            goto label_17f334;
        }
    }
    ctx->pc = 0x17F330u;
    // 0x17f330: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x17f330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
label_17f334:
    // 0x17f334: 0x0  nop
    ctx->pc = 0x17f334u;
    // NOP
    // 0x17f338: 0x0  nop
    ctx->pc = 0x17f338u;
    // NOP
    // 0x17f33c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17F33Cu;
    {
        const bool branch_taken_0x17f33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F33Cu;
            // 0x17f340: 0x2252021  addu        $a0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f33c) {
            ctx->pc = 0x17F320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f320;
        }
    }
    ctx->pc = 0x17F344u;
label_17f344:
    // 0x17f344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f34c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17f34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f350: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17f350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f354: 0x3e00008  jr          $ra
    ctx->pc = 0x17F354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F354u;
            // 0x17f358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F35Cu;
    // 0x17f35c: 0x0  nop
    ctx->pc = 0x17f35cu;
    // NOP
}
