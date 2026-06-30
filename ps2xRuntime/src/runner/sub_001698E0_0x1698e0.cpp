#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001698E0
// Address: 0x1698e0 - 0x1699a0
void sub_001698E0_0x1698e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001698E0_0x1698e0");
#endif

    switch (ctx->pc) {
        case 0x16991cu: goto label_16991c;
        case 0x169930u: goto label_169930;
        case 0x169938u: goto label_169938;
        case 0x169954u: goto label_169954;
        case 0x169968u: goto label_169968;
        case 0x169980u: goto label_169980;
        default: break;
    }

    ctx->pc = 0x1698e0u;

    // 0x1698e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1698e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1698e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1698e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1698e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1698e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1698ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1698ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1698f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1698f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1698f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1698f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1698f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1698f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1698fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1698fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x169900: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x169900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169904: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x169904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169908: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x169908u;
    {
        const bool branch_taken_0x169908 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x16990Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169908u;
            // 0x16990c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169908) {
            ctx->pc = 0x169928u;
            goto label_169928;
        }
    }
    ctx->pc = 0x169910u;
    // 0x169910: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x169910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x169914: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x169914u;
    SET_GPR_U32(ctx, 31, 0x16991Cu);
    ctx->pc = 0x169918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169914u;
            // 0x169918: 0x248436c0  addiu       $a0, $a0, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16991Cu; }
        if (ctx->pc != 0x16991Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16991Cu; }
        if (ctx->pc != 0x16991Cu) { return; }
    }
    ctx->pc = 0x16991Cu;
label_16991c:
    // 0x16991c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16991Cu;
    {
        const bool branch_taken_0x16991c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16991Cu;
            // 0x169920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16991c) {
            ctx->pc = 0x169984u;
            goto label_169984;
        }
    }
    ctx->pc = 0x169924u;
    // 0x169924: 0x0  nop
    ctx->pc = 0x169924u;
    // NOP
label_169928:
    // 0x169928: 0xc05a148  jal         func_168520
    ctx->pc = 0x169928u;
    SET_GPR_U32(ctx, 31, 0x169930u);
    ctx->pc = 0x16992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169928u;
            // 0x16992c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169930u; }
        if (ctx->pc != 0x169930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169930u; }
        if (ctx->pc != 0x169930u) { return; }
    }
    ctx->pc = 0x169930u;
label_169930:
    // 0x169930: 0xc05a5ba  jal         func_1696E8
    ctx->pc = 0x169930u;
    SET_GPR_U32(ctx, 31, 0x169938u);
    ctx->pc = 0x1696E8u;
    if (runtime->hasFunction(0x1696E8u)) {
        auto targetFn = runtime->lookupFunction(0x1696E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169938u; }
        if (ctx->pc != 0x169938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001696E8_0x1696e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169938u; }
        if (ctx->pc != 0x169938u) { return; }
    }
    ctx->pc = 0x169938u;
label_169938:
    // 0x169938: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x169938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16993c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16993cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169944: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x169944u;
    {
        const bool branch_taken_0x169944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x169948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169944u;
            // 0x169948: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169944) {
            ctx->pc = 0x169968u;
            goto label_169968;
        }
    }
    ctx->pc = 0x16994Cu;
    // 0x16994c: 0xc05a5e0  jal         func_169780
    ctx->pc = 0x16994Cu;
    SET_GPR_U32(ctx, 31, 0x169954u);
    ctx->pc = 0x169780u;
    if (runtime->hasFunction(0x169780u)) {
        auto targetFn = runtime->lookupFunction(0x169780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169954u; }
        if (ctx->pc != 0x169954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169780_0x169780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169954u; }
        if (ctx->pc != 0x169954u) { return; }
    }
    ctx->pc = 0x169954u;
label_169954:
    // 0x169954: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169954u;
    {
        const bool branch_taken_0x169954 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x169958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169954u;
            // 0x169958: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169954) {
            ctx->pc = 0x16996Cu;
            goto label_16996c;
        }
    }
    ctx->pc = 0x16995Cu;
    // 0x16995c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169960: 0xc05a810  jal         func_16A040
    ctx->pc = 0x169960u;
    SET_GPR_U32(ctx, 31, 0x169968u);
    ctx->pc = 0x169964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169960u;
            // 0x169964: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A040u;
    if (runtime->hasFunction(0x16A040u)) {
        auto targetFn = runtime->lookupFunction(0x16A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169968u; }
        if (ctx->pc != 0x169968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A040_0x16a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169968u; }
        if (ctx->pc != 0x169968u) { return; }
    }
    ctx->pc = 0x169968u;
label_169968:
    // 0x169968: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x169968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16996c:
    // 0x16996c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x16996cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169970: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169974: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169978: 0xc05a148  jal         func_168520
    ctx->pc = 0x169978u;
    SET_GPR_U32(ctx, 31, 0x169980u);
    ctx->pc = 0x16997Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169978u;
            // 0x16997c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169980u; }
        if (ctx->pc != 0x169980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169980u; }
        if (ctx->pc != 0x169980u) { return; }
    }
    ctx->pc = 0x169980u;
label_169980:
    // 0x169980: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169984:
    // 0x169984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169988: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16998c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16998cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169990: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x169990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169994: 0x3e00008  jr          $ra
    ctx->pc = 0x169994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169994u;
            // 0x169998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16999Cu;
    // 0x16999c: 0x0  nop
    ctx->pc = 0x16999cu;
    // NOP
}
