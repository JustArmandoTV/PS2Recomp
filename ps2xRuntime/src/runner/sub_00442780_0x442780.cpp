#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00442780
// Address: 0x442780 - 0x442830
void sub_00442780_0x442780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442780_0x442780");
#endif

    switch (ctx->pc) {
        case 0x442780u: goto label_442780;
        case 0x442784u: goto label_442784;
        case 0x442788u: goto label_442788;
        case 0x44278cu: goto label_44278c;
        case 0x442790u: goto label_442790;
        case 0x442794u: goto label_442794;
        case 0x442798u: goto label_442798;
        case 0x44279cu: goto label_44279c;
        case 0x4427a0u: goto label_4427a0;
        case 0x4427a4u: goto label_4427a4;
        case 0x4427a8u: goto label_4427a8;
        case 0x4427acu: goto label_4427ac;
        case 0x4427b0u: goto label_4427b0;
        case 0x4427b4u: goto label_4427b4;
        case 0x4427b8u: goto label_4427b8;
        case 0x4427bcu: goto label_4427bc;
        case 0x4427c0u: goto label_4427c0;
        case 0x4427c4u: goto label_4427c4;
        case 0x4427c8u: goto label_4427c8;
        case 0x4427ccu: goto label_4427cc;
        case 0x4427d0u: goto label_4427d0;
        case 0x4427d4u: goto label_4427d4;
        case 0x4427d8u: goto label_4427d8;
        case 0x4427dcu: goto label_4427dc;
        case 0x4427e0u: goto label_4427e0;
        case 0x4427e4u: goto label_4427e4;
        case 0x4427e8u: goto label_4427e8;
        case 0x4427ecu: goto label_4427ec;
        case 0x4427f0u: goto label_4427f0;
        case 0x4427f4u: goto label_4427f4;
        case 0x4427f8u: goto label_4427f8;
        case 0x4427fcu: goto label_4427fc;
        case 0x442800u: goto label_442800;
        case 0x442804u: goto label_442804;
        case 0x442808u: goto label_442808;
        case 0x44280cu: goto label_44280c;
        case 0x442810u: goto label_442810;
        case 0x442814u: goto label_442814;
        case 0x442818u: goto label_442818;
        case 0x44281cu: goto label_44281c;
        case 0x442820u: goto label_442820;
        case 0x442824u: goto label_442824;
        case 0x442828u: goto label_442828;
        case 0x44282cu: goto label_44282c;
        default: break;
    }

    ctx->pc = 0x442780u;

label_442780:
    // 0x442780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x442780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_442784:
    // 0x442784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x442784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_442788:
    // 0x442788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x442788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44278c:
    // 0x44278c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x44278cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_442790:
    // 0x442790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x442790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_442794:
    // 0x442794: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x442794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_442798:
    // 0x442798: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x442798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_44279c:
    // 0x44279c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44279cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4427a0:
    // 0x4427a0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x4427a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_4427a4:
    // 0x4427a4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4427a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4427a8:
    // 0x4427a8: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x4427a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
label_4427ac:
    // 0x4427ac: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x4427acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_4427b0:
    // 0x4427b0: 0xe48c0018  swc1        $f12, 0x18($a0)
    ctx->pc = 0x4427b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_4427b4:
    // 0x4427b4: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x4427b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
label_4427b8:
    // 0x4427b8: 0xac880038  sw          $t0, 0x38($a0)
    ctx->pc = 0x4427b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 8));
label_4427bc:
    // 0x4427bc: 0xac8a003c  sw          $t2, 0x3C($a0)
    ctx->pc = 0x4427bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 10));
label_4427c0:
    // 0x4427c0: 0xc04a576  jal         func_1295D8
label_4427c4:
    if (ctx->pc == 0x4427C4u) {
        ctx->pc = 0x4427C4u;
            // 0x4427c4: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->pc = 0x4427C8u;
        goto label_4427c8;
    }
    ctx->pc = 0x4427C0u;
    SET_GPR_U32(ctx, 31, 0x4427C8u);
    ctx->pc = 0x4427C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4427C0u;
            // 0x4427c4: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4427C8u; }
        if (ctx->pc != 0x4427C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4427C8u; }
        if (ctx->pc != 0x4427C8u) { return; }
    }
    ctx->pc = 0x4427C8u;
label_4427c8:
    // 0x4427c8: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x4427c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_4427cc:
    // 0x4427cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4427ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4427d0:
    // 0x4427d0: 0xc04a576  jal         func_1295D8
label_4427d4:
    if (ctx->pc == 0x4427D4u) {
        ctx->pc = 0x4427D4u;
            // 0x4427d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x4427D8u;
        goto label_4427d8;
    }
    ctx->pc = 0x4427D0u;
    SET_GPR_U32(ctx, 31, 0x4427D8u);
    ctx->pc = 0x4427D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4427D0u;
            // 0x4427d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4427D8u; }
        if (ctx->pc != 0x4427D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4427D8u; }
        if (ctx->pc != 0x4427D8u) { return; }
    }
    ctx->pc = 0x4427D8u;
label_4427d8:
    // 0x4427d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4427d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4427dc:
    // 0x4427dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4427dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4427e0:
    // 0x4427e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4427e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4427e4:
    // 0x4427e4: 0x3e00008  jr          $ra
label_4427e8:
    if (ctx->pc == 0x4427E8u) {
        ctx->pc = 0x4427E8u;
            // 0x4427e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4427ECu;
        goto label_4427ec;
    }
    ctx->pc = 0x4427E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4427E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4427E4u;
            // 0x4427e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4427ECu;
label_4427ec:
    // 0x4427ec: 0x0  nop
    ctx->pc = 0x4427ecu;
    // NOP
label_4427f0:
    // 0x4427f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4427f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4427f4:
    // 0x4427f4: 0xa0820064  sb          $v0, 0x64($a0)
    ctx->pc = 0x4427f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 2));
label_4427f8:
    // 0x4427f8: 0xa0800065  sb          $zero, 0x65($a0)
    ctx->pc = 0x4427f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 0));
label_4427fc:
    // 0x4427fc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4427fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_442800:
    // 0x442800: 0xa0800068  sb          $zero, 0x68($a0)
    ctx->pc = 0x442800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 0));
label_442804:
    // 0x442804: 0xa0820069  sb          $v0, 0x69($a0)
    ctx->pc = 0x442804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 105), (uint8_t)GPR_U32(ctx, 2));
label_442808:
    // 0x442808: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x442808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44280c:
    // 0x44280c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x44280cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_442810:
    // 0x442810: 0x3200008  jr          $t9
label_442814:
    if (ctx->pc == 0x442814u) {
        ctx->pc = 0x442818u;
        goto label_442818;
    }
    ctx->pc = 0x442810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x442818u;
label_442818:
    // 0x442818: 0x0  nop
    ctx->pc = 0x442818u;
    // NOP
label_44281c:
    // 0x44281c: 0x0  nop
    ctx->pc = 0x44281cu;
    // NOP
label_442820:
    // 0x442820: 0x3e00008  jr          $ra
label_442824:
    if (ctx->pc == 0x442824u) {
        ctx->pc = 0x442824u;
            // 0x442824: 0x24022b2a  addiu       $v0, $zero, 0x2B2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11050));
        ctx->pc = 0x442828u;
        goto label_442828;
    }
    ctx->pc = 0x442820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442820u;
            // 0x442824: 0x24022b2a  addiu       $v0, $zero, 0x2B2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x442828u;
label_442828:
    // 0x442828: 0x0  nop
    ctx->pc = 0x442828u;
    // NOP
label_44282c:
    // 0x44282c: 0x0  nop
    ctx->pc = 0x44282cu;
    // NOP
}
