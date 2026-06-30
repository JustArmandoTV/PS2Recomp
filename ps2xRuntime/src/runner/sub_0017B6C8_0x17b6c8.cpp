#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B6C8
// Address: 0x17b6c8 - 0x17b780
void sub_0017B6C8_0x17b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B6C8_0x17b6c8");
#endif

    switch (ctx->pc) {
        case 0x17b6ecu: goto label_17b6ec;
        case 0x17b714u: goto label_17b714;
        case 0x17b730u: goto label_17b730;
        case 0x17b740u: goto label_17b740;
        case 0x17b75cu: goto label_17b75c;
        case 0x17b764u: goto label_17b764;
        default: break;
    }

    ctx->pc = 0x17b6c8u;

    // 0x17b6c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b6cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b6d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b6d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17b6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b6e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17b6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17b6e4: 0xc05ed74  jal         func_17B5D0
    ctx->pc = 0x17B6E4u;
    SET_GPR_U32(ctx, 31, 0x17B6ECu);
    ctx->pc = 0x17B6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B6E4u;
            // 0x17b6e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B5D0u;
    if (runtime->hasFunction(0x17B5D0u)) {
        auto targetFn = runtime->lookupFunction(0x17B5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6ECu; }
        if (ctx->pc != 0x17B6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B5D0_0x17b5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6ECu; }
        if (ctx->pc != 0x17B6ECu) { return; }
    }
    ctx->pc = 0x17B6ECu;
label_17b6ec:
    // 0x17b6ec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b6f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b6f4: 0x8c4743f8  lw          $a3, 0x43F8($v0)
    ctx->pc = 0x17b6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17400)));
    // 0x17b6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6fc: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x17b6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x17b700: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x17b700u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x17b704: 0x14e3000c  bne         $a3, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17B704u;
    {
        const bool branch_taken_0x17b704 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x17B708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B704u;
            // 0x17b708: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b704) {
            ctx->pc = 0x17B738u;
            goto label_17b738;
        }
    }
    ctx->pc = 0x17B70Cu;
    // 0x17b70c: 0xc044fb6  jal         func_113ED8
    ctx->pc = 0x17B70Cu;
    SET_GPR_U32(ctx, 31, 0x17B714u);
    ctx->pc = 0x17B710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B70Cu;
            // 0x17b710: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113ED8u;
    if (runtime->hasFunction(0x113ED8u)) {
        auto targetFn = runtime->lookupFunction(0x113ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B714u; }
        if (ctx->pc != 0x17B714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00113ED8_0x113ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B714u; }
        if (ctx->pc != 0x17B714u) { return; }
    }
    ctx->pc = 0x17B714u;
label_17b714:
    // 0x17b714: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b71c: 0x24845ad0  addiu       $a0, $a0, 0x5AD0
    ctx->pc = 0x17b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    // 0x17b720: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x17B720u;
    {
        const bool branch_taken_0x17b720 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17B724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B720u;
            // 0x17b724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b720) {
            ctx->pc = 0x17B75Cu;
            goto label_17b75c;
        }
    }
    ctx->pc = 0x17B728u;
    // 0x17b728: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B728u;
    SET_GPR_U32(ctx, 31, 0x17B730u);
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B730u; }
        if (ctx->pc != 0x17B730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B730u; }
        if (ctx->pc != 0x17B730u) { return; }
    }
    ctx->pc = 0x17B730u;
label_17b730:
    // 0x17b730: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17B730u;
    {
        const bool branch_taken_0x17b730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b730) {
            ctx->pc = 0x17B75Cu;
            goto label_17b75c;
        }
    }
    ctx->pc = 0x17B738u;
label_17b738:
    // 0x17b738: 0xc04471e  jal         func_111C78
    ctx->pc = 0x17B738u;
    SET_GPR_U32(ctx, 31, 0x17B740u);
    ctx->pc = 0x111C78u;
    if (runtime->hasFunction(0x111C78u)) {
        auto targetFn = runtime->lookupFunction(0x111C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B740u; }
        if (ctx->pc != 0x17B740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C78_0x111c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B740u; }
        if (ctx->pc != 0x17B740u) { return; }
    }
    ctx->pc = 0x17B740u;
label_17b740:
    // 0x17b740: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b748: 0x24845af0  addiu       $a0, $a0, 0x5AF0
    ctx->pc = 0x17b748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23280));
    // 0x17b74c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B74Cu;
    {
        const bool branch_taken_0x17b74c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17B750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B74Cu;
            // 0x17b750: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b74c) {
            ctx->pc = 0x17B75Cu;
            goto label_17b75c;
        }
    }
    ctx->pc = 0x17B754u;
    // 0x17b754: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B754u;
    SET_GPR_U32(ctx, 31, 0x17B75Cu);
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B75Cu; }
        if (ctx->pc != 0x17B75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B75Cu; }
        if (ctx->pc != 0x17B75Cu) { return; }
    }
    ctx->pc = 0x17B75Cu;
label_17b75c:
    // 0x17b75c: 0xc05ed82  jal         func_17B608
    ctx->pc = 0x17B75Cu;
    SET_GPR_U32(ctx, 31, 0x17B764u);
    ctx->pc = 0x17B608u;
    if (runtime->hasFunction(0x17B608u)) {
        auto targetFn = runtime->lookupFunction(0x17B608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B764u; }
        if (ctx->pc != 0x17B764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B608_0x17b608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B764u; }
        if (ctx->pc != 0x17B764u) { return; }
    }
    ctx->pc = 0x17B764u;
label_17b764:
    // 0x17b764: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b768: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b770: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b774: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17b774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b778: 0x3e00008  jr          $ra
    ctx->pc = 0x17B778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B778u;
            // 0x17b77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B780u;
}
