#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162730
// Address: 0x162730 - 0x162928
void sub_00162730_0x162730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162730_0x162730");
#endif

    switch (ctx->pc) {
        case 0x162730u: goto label_162730;
        case 0x162734u: goto label_162734;
        case 0x162738u: goto label_162738;
        case 0x16273cu: goto label_16273c;
        case 0x162740u: goto label_162740;
        case 0x162744u: goto label_162744;
        case 0x162748u: goto label_162748;
        case 0x16274cu: goto label_16274c;
        case 0x162750u: goto label_162750;
        case 0x162754u: goto label_162754;
        case 0x162758u: goto label_162758;
        case 0x16275cu: goto label_16275c;
        case 0x162760u: goto label_162760;
        case 0x162764u: goto label_162764;
        case 0x162768u: goto label_162768;
        case 0x16276cu: goto label_16276c;
        case 0x162770u: goto label_162770;
        case 0x162774u: goto label_162774;
        case 0x162778u: goto label_162778;
        case 0x16277cu: goto label_16277c;
        case 0x162780u: goto label_162780;
        case 0x162784u: goto label_162784;
        case 0x162788u: goto label_162788;
        case 0x16278cu: goto label_16278c;
        case 0x162790u: goto label_162790;
        case 0x162794u: goto label_162794;
        case 0x162798u: goto label_162798;
        case 0x16279cu: goto label_16279c;
        case 0x1627a0u: goto label_1627a0;
        case 0x1627a4u: goto label_1627a4;
        case 0x1627a8u: goto label_1627a8;
        case 0x1627acu: goto label_1627ac;
        case 0x1627b0u: goto label_1627b0;
        case 0x1627b4u: goto label_1627b4;
        case 0x1627b8u: goto label_1627b8;
        case 0x1627bcu: goto label_1627bc;
        case 0x1627c0u: goto label_1627c0;
        case 0x1627c4u: goto label_1627c4;
        case 0x1627c8u: goto label_1627c8;
        case 0x1627ccu: goto label_1627cc;
        case 0x1627d0u: goto label_1627d0;
        case 0x1627d4u: goto label_1627d4;
        case 0x1627d8u: goto label_1627d8;
        case 0x1627dcu: goto label_1627dc;
        case 0x1627e0u: goto label_1627e0;
        case 0x1627e4u: goto label_1627e4;
        case 0x1627e8u: goto label_1627e8;
        case 0x1627ecu: goto label_1627ec;
        case 0x1627f0u: goto label_1627f0;
        case 0x1627f4u: goto label_1627f4;
        case 0x1627f8u: goto label_1627f8;
        case 0x1627fcu: goto label_1627fc;
        case 0x162800u: goto label_162800;
        case 0x162804u: goto label_162804;
        case 0x162808u: goto label_162808;
        case 0x16280cu: goto label_16280c;
        case 0x162810u: goto label_162810;
        case 0x162814u: goto label_162814;
        case 0x162818u: goto label_162818;
        case 0x16281cu: goto label_16281c;
        case 0x162820u: goto label_162820;
        case 0x162824u: goto label_162824;
        case 0x162828u: goto label_162828;
        case 0x16282cu: goto label_16282c;
        case 0x162830u: goto label_162830;
        case 0x162834u: goto label_162834;
        case 0x162838u: goto label_162838;
        case 0x16283cu: goto label_16283c;
        case 0x162840u: goto label_162840;
        case 0x162844u: goto label_162844;
        case 0x162848u: goto label_162848;
        case 0x16284cu: goto label_16284c;
        case 0x162850u: goto label_162850;
        case 0x162854u: goto label_162854;
        case 0x162858u: goto label_162858;
        case 0x16285cu: goto label_16285c;
        case 0x162860u: goto label_162860;
        case 0x162864u: goto label_162864;
        case 0x162868u: goto label_162868;
        case 0x16286cu: goto label_16286c;
        case 0x162870u: goto label_162870;
        case 0x162874u: goto label_162874;
        case 0x162878u: goto label_162878;
        case 0x16287cu: goto label_16287c;
        case 0x162880u: goto label_162880;
        case 0x162884u: goto label_162884;
        case 0x162888u: goto label_162888;
        case 0x16288cu: goto label_16288c;
        case 0x162890u: goto label_162890;
        case 0x162894u: goto label_162894;
        case 0x162898u: goto label_162898;
        case 0x16289cu: goto label_16289c;
        case 0x1628a0u: goto label_1628a0;
        case 0x1628a4u: goto label_1628a4;
        case 0x1628a8u: goto label_1628a8;
        case 0x1628acu: goto label_1628ac;
        case 0x1628b0u: goto label_1628b0;
        case 0x1628b4u: goto label_1628b4;
        case 0x1628b8u: goto label_1628b8;
        case 0x1628bcu: goto label_1628bc;
        case 0x1628c0u: goto label_1628c0;
        case 0x1628c4u: goto label_1628c4;
        case 0x1628c8u: goto label_1628c8;
        case 0x1628ccu: goto label_1628cc;
        case 0x1628d0u: goto label_1628d0;
        case 0x1628d4u: goto label_1628d4;
        case 0x1628d8u: goto label_1628d8;
        case 0x1628dcu: goto label_1628dc;
        case 0x1628e0u: goto label_1628e0;
        case 0x1628e4u: goto label_1628e4;
        case 0x1628e8u: goto label_1628e8;
        case 0x1628ecu: goto label_1628ec;
        case 0x1628f0u: goto label_1628f0;
        case 0x1628f4u: goto label_1628f4;
        case 0x1628f8u: goto label_1628f8;
        case 0x1628fcu: goto label_1628fc;
        case 0x162900u: goto label_162900;
        case 0x162904u: goto label_162904;
        case 0x162908u: goto label_162908;
        case 0x16290cu: goto label_16290c;
        case 0x162910u: goto label_162910;
        case 0x162914u: goto label_162914;
        case 0x162918u: goto label_162918;
        case 0x16291cu: goto label_16291c;
        case 0x162920u: goto label_162920;
        case 0x162924u: goto label_162924;
        default: break;
    }

    ctx->pc = 0x162730u;

label_162730:
    // 0x162730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_162734:
    // 0x162734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162738:
    // 0x162738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16273c:
    // 0x16273c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_162740:
    if (ctx->pc == 0x162740u) {
        ctx->pc = 0x162740u;
            // 0x162740: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x162744u;
        goto label_162744;
    }
    ctx->pc = 0x16273Cu;
    {
        const bool branch_taken_0x16273c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x162740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16273Cu;
            // 0x162740: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16273c) {
            ctx->pc = 0x162770u;
            goto label_162770;
        }
    }
    ctx->pc = 0x162744u;
label_162744:
    // 0x162744: 0xc0599d2  jal         func_166748
label_162748:
    if (ctx->pc == 0x162748u) {
        ctx->pc = 0x16274Cu;
        goto label_16274c;
    }
    ctx->pc = 0x162744u;
    SET_GPR_U32(ctx, 31, 0x16274Cu);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16274Cu; }
        if (ctx->pc != 0x16274Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16274Cu; }
        if (ctx->pc != 0x16274Cu) { return; }
    }
    ctx->pc = 0x16274Cu;
label_16274c:
    // 0x16274c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16274cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162750:
    // 0x162750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162754:
    // 0x162754: 0xc04a576  jal         func_1295D8
label_162758:
    if (ctx->pc == 0x162758u) {
        ctx->pc = 0x162758u;
            // 0x162758: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x16275Cu;
        goto label_16275c;
    }
    ctx->pc = 0x162754u;
    SET_GPR_U32(ctx, 31, 0x16275Cu);
    ctx->pc = 0x162758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162754u;
            // 0x162758: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16275Cu; }
        if (ctx->pc != 0x16275Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16275Cu; }
        if (ctx->pc != 0x16275Cu) { return; }
    }
    ctx->pc = 0x16275Cu;
label_16275c:
    // 0x16275c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16275cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162760:
    // 0x162760: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x162760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162764:
    // 0x162764: 0x80599d8  j           func_166760
label_162768:
    if (ctx->pc == 0x162768u) {
        ctx->pc = 0x162768u;
            // 0x162768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16276Cu;
        goto label_16276c;
    }
    ctx->pc = 0x162764u;
    ctx->pc = 0x162768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162764u;
            // 0x162768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16276Cu;
label_16276c:
    // 0x16276c: 0x0  nop
    ctx->pc = 0x16276cu;
    // NOP
label_162770:
    // 0x162770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162774:
    // 0x162774: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x162774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162778:
    // 0x162778: 0x3e00008  jr          $ra
label_16277c:
    if (ctx->pc == 0x16277Cu) {
        ctx->pc = 0x16277Cu;
            // 0x16277c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162780u;
        goto label_162780;
    }
    ctx->pc = 0x162778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16277Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162778u;
            // 0x16277c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162780u;
label_162780:
    // 0x162780: 0x3e00008  jr          $ra
label_162784:
    if (ctx->pc == 0x162784u) {
        ctx->pc = 0x162784u;
            // 0x162784: 0x80820001  lb          $v0, 0x1($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->pc = 0x162788u;
        goto label_162788;
    }
    ctx->pc = 0x162780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162780u;
            // 0x162784: 0x80820001  lb          $v0, 0x1($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162788u;
label_162788:
    // 0x162788: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16278c:
    // 0x16278c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16278cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_162790:
    // 0x162790: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162794:
    // 0x162794: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x162794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_162798:
    // 0x162798: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x162798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16279c:
    // 0x16279c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1627a0:
    // 0x1627a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1627a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1627a4:
    // 0x1627a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1627a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1627a8:
    // 0x1627a8: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x1627a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1627ac:
    // 0x1627ac: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1627b0:
    if (ctx->pc == 0x1627B0u) {
        ctx->pc = 0x1627B0u;
            // 0x1627b0: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x1627B4u;
        goto label_1627b4;
    }
    ctx->pc = 0x1627ACu;
    {
        const bool branch_taken_0x1627ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1627B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1627ACu;
            // 0x1627b0: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627ac) {
            ctx->pc = 0x1627D4u;
            goto label_1627d4;
        }
    }
    ctx->pc = 0x1627B4u;
label_1627b4:
    // 0x1627b4: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x1627b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_1627b8:
    // 0x1627b8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1627b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1627bc:
    // 0x1627bc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1627bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1627c0:
    // 0x1627c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1627c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1627c4:
    // 0x1627c4: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x1627c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1627c8:
    // 0x1627c8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1627c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1627cc:
    // 0x1627cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1627d0:
    if (ctx->pc == 0x1627D0u) {
        ctx->pc = 0x1627D0u;
            // 0x1627d0: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x1627D4u;
        goto label_1627d4;
    }
    ctx->pc = 0x1627CCu;
    {
        const bool branch_taken_0x1627cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1627D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1627CCu;
            // 0x1627d0: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627cc) {
            ctx->pc = 0x1627B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1627b8;
        }
    }
    ctx->pc = 0x1627D4u;
label_1627d4:
    // 0x1627d4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x1627d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1627d8:
    // 0x1627d8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1627d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_1627dc:
    // 0x1627dc: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
label_1627e0:
    if (ctx->pc == 0x1627E0u) {
        ctx->pc = 0x1627E0u;
            // 0x1627e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1627E4u;
        goto label_1627e4;
    }
    ctx->pc = 0x1627DCu;
    {
        const bool branch_taken_0x1627dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1627E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1627DCu;
            // 0x1627e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627dc) {
            ctx->pc = 0x162870u;
            goto label_162870;
        }
    }
    ctx->pc = 0x1627E4u;
label_1627e4:
    // 0x1627e4: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x1627e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1627e8:
    // 0x1627e8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1627e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1627ec:
    // 0x1627ec: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1627ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1627f0:
    // 0x1627f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1627f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1627f4:
    // 0x1627f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1627f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1627f8:
    // 0x1627f8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1627f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1627fc:
    // 0x1627fc: 0x40f809  jalr        $v0
label_162800:
    if (ctx->pc == 0x162800u) {
        ctx->pc = 0x162800u;
            // 0x162800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162804u;
        goto label_162804;
    }
    ctx->pc = 0x1627FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162804u);
        ctx->pc = 0x162800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1627FCu;
            // 0x162800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162804u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162804u; }
            if (ctx->pc != 0x162804u) { return; }
        }
        }
    }
    ctx->pc = 0x162804u;
label_162804:
    // 0x162804: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x162804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_162808:
    // 0x162808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16280c:
    // 0x16280c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x16280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_162810:
    // 0x162810: 0x40f809  jalr        $v0
label_162814:
    if (ctx->pc == 0x162814u) {
        ctx->pc = 0x162814u;
            // 0x162814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162818u;
        goto label_162818;
    }
    ctx->pc = 0x162810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162818u);
        ctx->pc = 0x162814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162810u;
            // 0x162814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162818u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162818u; }
            if (ctx->pc != 0x162818u) { return; }
        }
        }
    }
    ctx->pc = 0x162818u;
label_162818:
    // 0x162818: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x162818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16281c:
    // 0x16281c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16281cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162820:
    // 0x162820: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x162820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_162824:
    // 0x162824: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x162824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_162828:
    // 0x162828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16282c:
    // 0x16282c: 0x40f809  jalr        $v0
label_162830:
    if (ctx->pc == 0x162830u) {
        ctx->pc = 0x162830u;
            // 0x162830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162834u;
        goto label_162834;
    }
    ctx->pc = 0x16282Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162834u);
        ctx->pc = 0x162830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16282Cu;
            // 0x162830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162834u; }
            if (ctx->pc != 0x162834u) { return; }
        }
        }
    }
    ctx->pc = 0x162834u;
label_162834:
    // 0x162834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162838:
    // 0x162838: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x162838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16283c:
    // 0x16283c: 0xc04a576  jal         func_1295D8
label_162840:
    if (ctx->pc == 0x162840u) {
        ctx->pc = 0x162840u;
            // 0x162840: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x162844u;
        goto label_162844;
    }
    ctx->pc = 0x16283Cu;
    SET_GPR_U32(ctx, 31, 0x162844u);
    ctx->pc = 0x162840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16283Cu;
            // 0x162840: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162844u; }
        if (ctx->pc != 0x162844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162844u; }
        if (ctx->pc != 0x162844u) { return; }
    }
    ctx->pc = 0x162844u;
label_162844:
    // 0x162844: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x162844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_162848:
    // 0x162848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16284c:
    // 0x16284c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16284cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162850:
    // 0x162850: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x162850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_162854:
    // 0x162854: 0x40f809  jalr        $v0
label_162858:
    if (ctx->pc == 0x162858u) {
        ctx->pc = 0x162858u;
            // 0x162858: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16285Cu;
        goto label_16285c;
    }
    ctx->pc = 0x162854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16285Cu);
        ctx->pc = 0x162858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162854u;
            // 0x162858: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16285Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16285Cu; }
            if (ctx->pc != 0x16285Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16285Cu;
label_16285c:
    // 0x16285c: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x16285cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_162860:
    // 0x162860: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x162860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_162864:
    // 0x162864: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_162868:
    if (ctx->pc == 0x162868u) {
        ctx->pc = 0x162868u;
            // 0x162868: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x16286Cu;
        goto label_16286c;
    }
    ctx->pc = 0x162864u;
    {
        const bool branch_taken_0x162864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162864u;
            // 0x162868: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162864) {
            ctx->pc = 0x1627E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1627e8;
        }
    }
    ctx->pc = 0x16286Cu;
label_16286c:
    // 0x16286c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x16286cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_162870:
    // 0x162870: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_162874:
    if (ctx->pc == 0x162874u) {
        ctx->pc = 0x162874u;
            // 0x162874: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162878u;
        goto label_162878;
    }
    ctx->pc = 0x162870u;
    {
        const bool branch_taken_0x162870 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x162874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162870u;
            // 0x162874: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162870) {
            ctx->pc = 0x162900u;
            goto label_162900;
        }
    }
    ctx->pc = 0x162878u;
label_162878:
    // 0x162878: 0x2633000c  addiu       $s3, $s1, 0xC
    ctx->pc = 0x162878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_16287c:
    // 0x16287c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x16287cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_162880:
    // 0x162880: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x162880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_162884:
    // 0x162884: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x162884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_162888:
    // 0x162888: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x162888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16288c:
    // 0x16288c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x16288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_162890:
    // 0x162890: 0x40f809  jalr        $v0
label_162894:
    if (ctx->pc == 0x162894u) {
        ctx->pc = 0x162894u;
            // 0x162894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162898u;
        goto label_162898;
    }
    ctx->pc = 0x162890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162898u);
        ctx->pc = 0x162894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162890u;
            // 0x162894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162898u; }
            if (ctx->pc != 0x162898u) { return; }
        }
        }
    }
    ctx->pc = 0x162898u;
label_162898:
    // 0x162898: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x162898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16289c:
    // 0x16289c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1628a0:
    // 0x1628a0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1628a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1628a4:
    // 0x1628a4: 0x40f809  jalr        $v0
label_1628a8:
    if (ctx->pc == 0x1628A8u) {
        ctx->pc = 0x1628A8u;
            // 0x1628a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1628ACu;
        goto label_1628ac;
    }
    ctx->pc = 0x1628A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1628ACu);
        ctx->pc = 0x1628A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1628A4u;
            // 0x1628a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1628ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1628ACu; }
            if (ctx->pc != 0x1628ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1628ACu;
label_1628ac:
    // 0x1628ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1628acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1628b0:
    // 0x1628b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1628b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1628b4:
    // 0x1628b4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1628b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1628b8:
    // 0x1628b8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1628b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1628bc:
    // 0x1628bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1628bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1628c0:
    // 0x1628c0: 0x40f809  jalr        $v0
label_1628c4:
    if (ctx->pc == 0x1628C4u) {
        ctx->pc = 0x1628C4u;
            // 0x1628c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1628C8u;
        goto label_1628c8;
    }
    ctx->pc = 0x1628C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1628C8u);
        ctx->pc = 0x1628C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1628C0u;
            // 0x1628c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1628C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1628C8u; }
            if (ctx->pc != 0x1628C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1628C8u;
label_1628c8:
    // 0x1628c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1628c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1628cc:
    // 0x1628cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1628ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1628d0:
    // 0x1628d0: 0xc04a576  jal         func_1295D8
label_1628d4:
    if (ctx->pc == 0x1628D4u) {
        ctx->pc = 0x1628D4u;
            // 0x1628d4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1628D8u;
        goto label_1628d8;
    }
    ctx->pc = 0x1628D0u;
    SET_GPR_U32(ctx, 31, 0x1628D8u);
    ctx->pc = 0x1628D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1628D0u;
            // 0x1628d4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628D8u; }
        if (ctx->pc != 0x1628D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628D8u; }
        if (ctx->pc != 0x1628D8u) { return; }
    }
    ctx->pc = 0x1628D8u;
label_1628d8:
    // 0x1628d8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1628d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1628dc:
    // 0x1628dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1628dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1628e0:
    // 0x1628e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1628e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1628e4:
    // 0x1628e4: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x1628e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_1628e8:
    // 0x1628e8: 0x60f809  jalr        $v1
label_1628ec:
    if (ctx->pc == 0x1628ECu) {
        ctx->pc = 0x1628ECu;
            // 0x1628ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1628F0u;
        goto label_1628f0;
    }
    ctx->pc = 0x1628E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1628F0u);
        ctx->pc = 0x1628ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1628E8u;
            // 0x1628ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1628F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1628F0u; }
            if (ctx->pc != 0x1628F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1628F0u;
label_1628f0:
    // 0x1628f0: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x1628f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1628f4:
    // 0x1628f4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1628f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1628f8:
    // 0x1628f8: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
label_1628fc:
    if (ctx->pc == 0x1628FCu) {
        ctx->pc = 0x1628FCu;
            // 0x1628fc: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x162900u;
        goto label_162900;
    }
    ctx->pc = 0x1628F8u;
    {
        const bool branch_taken_0x1628f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1628f8) {
            ctx->pc = 0x1628FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1628F8u;
            // 0x1628fc: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_162880;
        }
    }
    ctx->pc = 0x162900u;
label_162900:
    // 0x162900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_162904:
    // 0x162904: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x162904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162908:
    // 0x162908: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x162908u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_16290c:
    // 0x16290c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16290cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_162910:
    // 0x162910: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x162910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_162914:
    // 0x162914: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x162914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_162918:
    // 0x162918: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x162918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16291c:
    // 0x16291c: 0x3e00008  jr          $ra
label_162920:
    if (ctx->pc == 0x162920u) {
        ctx->pc = 0x162920u;
            // 0x162920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x162924u;
        goto label_162924;
    }
    ctx->pc = 0x16291Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16291Cu;
            // 0x162920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162924u;
label_162924:
    // 0x162924: 0x0  nop
    ctx->pc = 0x162924u;
    // NOP
}
