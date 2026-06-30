#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185738
// Address: 0x185738 - 0x185858
void sub_00185738_0x185738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185738_0x185738");
#endif

    switch (ctx->pc) {
        case 0x185788u: goto label_185788;
        case 0x185798u: goto label_185798;
        case 0x1857e4u: goto label_1857e4;
        case 0x185824u: goto label_185824;
        case 0x185838u: goto label_185838;
        default: break;
    }

    ctx->pc = 0x185738u;

    // 0x185738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18573c: 0x28a2004c  slti        $v0, $a1, 0x4C
    ctx->pc = 0x18573cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)76) ? 1 : 0);
    // 0x185740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x185740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x185744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185748: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185748u;
    {
        const bool branch_taken_0x185748 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18574Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185748u;
            // 0x18574c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185748) {
            ctx->pc = 0x185768u;
            goto label_185768;
        }
    }
    ctx->pc = 0x185750u;
    // 0x185750: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x185754: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x185758: 0x24847ad8  addiu       $a0, $a0, 0x7AD8
    ctx->pc = 0x185758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31448));
    // 0x18575c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18575Cu;
    {
        const bool branch_taken_0x18575c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18575Cu;
            // 0x185760: 0x24a57ae8  addiu       $a1, $a1, 0x7AE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18575c) {
            ctx->pc = 0x185780u;
            goto label_185780;
        }
    }
    ctx->pc = 0x185764u;
    // 0x185764: 0x0  nop
    ctx->pc = 0x185764u;
    // NOP
label_185768:
    // 0x185768: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x185768u;
    {
        const bool branch_taken_0x185768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18576Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185768u;
            // 0x18576c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185768) {
            ctx->pc = 0x185790u;
            goto label_185790;
        }
    }
    ctx->pc = 0x185770u;
    // 0x185770: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x185774: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x185778: 0x24847b08  addiu       $a0, $a0, 0x7B08
    ctx->pc = 0x185778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31496));
    // 0x18577c: 0x24a57b18  addiu       $a1, $a1, 0x7B18
    ctx->pc = 0x18577cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31512));
label_185780:
    // 0x185780: 0xc06151c  jal         func_185470
    ctx->pc = 0x185780u;
    SET_GPR_U32(ctx, 31, 0x185788u);
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185788u; }
        if (ctx->pc != 0x185788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185470_0x185470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185788u; }
        if (ctx->pc != 0x185788u) { return; }
    }
    ctx->pc = 0x185788u;
label_185788:
    // 0x185788: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x185788u;
    {
        const bool branch_taken_0x185788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185788u;
            // 0x18578c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185788) {
            ctx->pc = 0x1857E8u;
            goto label_1857e8;
        }
    }
    ctx->pc = 0x185790u;
label_185790:
    // 0x185790: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x185790u;
    SET_GPR_U32(ctx, 31, 0x185798u);
    ctx->pc = 0x185794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185790u;
            // 0x185794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185798u; }
        if (ctx->pc != 0x185798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185798u; }
        if (ctx->pc != 0x185798u) { return; }
    }
    ctx->pc = 0x185798u;
label_185798:
    // 0x185798: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x185798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x18579c: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x18579cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1857a0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1857a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1857a4: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1857a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1857a8: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x1857a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x1857ac: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1857acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1857b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1857b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1857b4: 0x24420748  addiu       $v0, $v0, 0x748
    ctx->pc = 0x1857b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1864));
    // 0x1857b8: 0x24a57ab8  addiu       $a1, $a1, 0x7AB8
    ctx->pc = 0x1857b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31416));
    // 0x1857bc: 0x24c65450  addiu       $a2, $a2, 0x5450
    ctx->pc = 0x1857bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21584));
    // 0x1857c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1857c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1857c4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1857c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1857c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1857c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857cc: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1857ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x1857d0: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x1857d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x1857d4: 0xae10003c  sw          $s0, 0x3C($s0)
    ctx->pc = 0x1857d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 16));
    // 0x1857d8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1857d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1857dc: 0xc06167a  jal         func_1859E8
    ctx->pc = 0x1857DCu;
    SET_GPR_U32(ctx, 31, 0x1857E4u);
    ctx->pc = 0x1857E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1857DCu;
            // 0x1857e0: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1859E8u;
    if (runtime->hasFunction(0x1859E8u)) {
        auto targetFn = runtime->lookupFunction(0x1859E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857E4u; }
        if (ctx->pc != 0x1857E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001859E8_0x1859e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857E4u; }
        if (ctx->pc != 0x1857E4u) { return; }
    }
    ctx->pc = 0x1857E4u;
label_1857e4:
    // 0x1857e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1857e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1857e8:
    // 0x1857e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1857e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1857ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1857ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1857f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1857F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1857F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1857F0u;
            // 0x1857f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1857F8u;
    // 0x1857f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1857f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1857fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1857fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x185800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185804: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x185808: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18580c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18580cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x185810: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x185810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185814: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x185814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x185818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x185818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18581c: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x18581Cu;
    SET_GPR_U32(ctx, 31, 0x185824u);
    ctx->pc = 0x185820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18581Cu;
            // 0x185820: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185824u; }
        if (ctx->pc != 0x185824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185824u; }
        if (ctx->pc != 0x185824u) { return; }
    }
    ctx->pc = 0x185824u;
label_185824:
    // 0x185824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x185828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18582c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18582cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185830: 0xc061616  jal         func_185858
    ctx->pc = 0x185830u;
    SET_GPR_U32(ctx, 31, 0x185838u);
    ctx->pc = 0x185834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185830u;
            // 0x185834: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185858u;
    if (runtime->hasFunction(0x185858u)) {
        auto targetFn = runtime->lookupFunction(0x185858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185838u; }
        if (ctx->pc != 0x185838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185858_0x185858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185838u; }
        if (ctx->pc != 0x185838u) { return; }
    }
    ctx->pc = 0x185838u;
label_185838:
    // 0x185838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18583c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18583cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x185840: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x185840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185844: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x185844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x185848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x185848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18584c: 0x8061282  j           func_184A08
    ctx->pc = 0x18584Cu;
    ctx->pc = 0x185850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18584Cu;
            // 0x185850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185854u;
    // 0x185854: 0x0  nop
    ctx->pc = 0x185854u;
    // NOP
}
